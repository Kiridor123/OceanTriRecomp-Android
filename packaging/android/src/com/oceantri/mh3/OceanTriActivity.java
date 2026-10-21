package com.oceantri.mh3;

import android.Manifest;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.OpenableColumns;
import android.provider.Settings;
import android.util.Log;
import android.view.Display;
import android.view.WindowManager;

import org.libsdl.app.SDLActivity;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;

public class OceanTriActivity extends SDLActivity {
    private static final String TAG = "MH3";
    private static final int REQUEST_STORAGE_PERMS = 1001;
    private static final int REQUEST_PICK_ROM = 1002;

    private static final LinkedList<String> sLogBuffer = new LinkedList<>();
    private static String sRomPath = null;
    private volatile boolean mRomReady = false;
    private boolean mRomCheckStarted = false;

    public static synchronized void log(String msg) {
        String timestamp = new SimpleDateFormat("HH:mm:ss.SSS", Locale.US).format(new Date());
        String line = "[" + timestamp + "] " + msg;
        Log.i(TAG, line);

        sLogBuffer.add(line);
        if (sLogBuffer.size() > 500) {
            sLogBuffer.removeFirst();
        }

        // Try writing to sdcard download log file
        try {
            File logFile = new File("/sdcard/Download/oceantri_log.txt");
            if (!logFile.getParentFile().exists()) {
                logFile.getParentFile().mkdirs();
            }
            FileWriter fw = new FileWriter(logFile, true);
            fw.write(line + "\n");
            fw.close();
        } catch (Exception ignored) {}
    }

    public static synchronized String getLogs() {
        StringBuilder sb = new StringBuilder();
        for (String s : sLogBuffer) {
            sb.append(s).append("\n");
        }
        return sb.toString();
    }

    @Override
    protected String[] getLibraries() {
        return new String[] {
            "png16",
            "SDL3",
            "main"
        };
    }

    @Override
    protected String getMainFunction() {
        return "SDL_main";
    }

    @Override
    protected String[] getArguments() {
        if (sRomPath != null && !sRomPath.isEmpty()) {
            log("Passing --rom argument to native main(): " + sRomPath);
            return new String[] { "--rom", sRomPath };
        }
        return new String[0];
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        log("OceanTriActivity.onCreate() called");

        // Request 120Hz high refresh rate display mode
        setHighRefreshRate();

        // Crash handler to log Java crashes
        Thread.setDefaultUncaughtExceptionHandler(new Thread.UncaughtExceptionHandler() {
            @Override
            public void uncaughtException(Thread t, Throwable e) {
                StringWriter sw = new StringWriter();
                e.printStackTrace(new PrintWriter(sw));
                String stackTrace = sw.toString();
                log("FATAL JAVA UNCAUGHT EXCEPTION: " + stackTrace);
                try {
                    File crashFile = new File("/sdcard/Download/oceantri_crash.txt");
                    FileWriter fw = new FileWriter(crashFile, true);
                    fw.write("UNCAUGHT EXCEPTION in thread " + t.getName() + ":\n" + stackTrace + "\n");
                    fw.close();
                } catch (Exception ignored) {}
                System.exit(1);
            }
        });

        if (hasStoragePermission()) {
            log("Storage permission granted at startup. Verifying ROM...");
            checkRomAndPrepare();
        } else {
            log("Storage permissions not yet granted. Requesting...");
            requestStoragePermission();
        }

        // Call super.onCreate synchronously (required by Android)
        super.onCreate(savedInstanceState);
    }

    @Override
    protected void onResume() {
        super.onResume();
        setHighRefreshRate();
        if (hasStoragePermission() && !mRomReady && !mRomCheckStarted) {
            checkRomAndPrepare();
        }
    }

    @Override
    protected void main() {
        log("OceanTriActivity.main() thread waiting for ROM ready...");
        while (!mRomReady && !isFinishing()) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException ignored) {}
        }
        if (isFinishing()) {
            log("OceanTriActivity.main() aborting because activity is finishing");
            return;
        }
        log("OceanTriActivity.main() ROM ready! Launching native main() with: " + sRomPath);
        super.main();
    }

    private void setHighRefreshRate() {
        try {
            Display display = null;
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                try {
                    display = getDisplay();
                } catch (Throwable ignored) {}
            }
            if (display == null) {
                display = getWindowManager().getDefaultDisplay();
            }

            if (display != null && Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
                Display.Mode[] modes = display.getSupportedModes();
                Display.Mode bestMode = null;
                float maxRate = 60.0f;
                for (Display.Mode mode : modes) {
                    float rate = mode.getRefreshRate();
                    if (rate > maxRate) {
                        maxRate = rate;
                        bestMode = mode;
                    }
                }
                if (bestMode != null && maxRate > 60.0f) {
                    WindowManager.LayoutParams params = getWindow().getAttributes();
                    params.preferredDisplayModeId = bestMode.getModeId();
                    if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                        params.preferredRefreshRate = maxRate;
                    }
                    getWindow().setAttributes(params);
                    log("Requested high refresh rate mode: " + maxRate + " Hz (modeId=" + bestMode.getModeId() + ")");
                } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                    WindowManager.LayoutParams params = getWindow().getAttributes();
                    params.preferredRefreshRate = 120.0f;
                    getWindow().setAttributes(params);
                    log("Requested 120Hz display refresh rate (preferredRefreshRate = 120.0f)");
                }
            }
        } catch (Exception e) {
            log("Unable to set high refresh rate: " + e.getMessage());
        }
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            setHighRefreshRate();
        }
    }

    private synchronized void checkRomAndPrepare() {
        if (mRomReady) {
            return;
        }

        // 1. Check if ROM already exists in the official game directory (/storage/emulated/0/MH3/)
        File mh3Dir = new File("/storage/emulated/0/MH3");
        if (!mh3Dir.exists()) {
            mh3Dir.mkdirs();
        }

        File existingMh3Rom = findRomInDir(mh3Dir);
        if (existingMh3Rom != null) {
            sRomPath = existingMh3Rom.getAbsolutePath();
            mRomReady = true;
            log("ROM already present in target directory /storage/emulated/0/MH3: " + sRomPath);
            return;
        }

        mRomCheckStarted = true;

        // 2. Search for ROM in other common directories (e.g. Download)
        final String foundOtherRom = findGameRom();
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (foundOtherRom != null) {
                    showRomFoundPrompt(foundOtherRom);
                } else {
                    showRomSelectPrompt();
                }
            }
        });
    }

    private void showRomFoundPrompt(final String detectedPath) {
        final File file = new File(detectedPath);
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("Monster Hunter Tri");
        builder.setMessage("Se detectó tu ROM en:\n" + detectedPath + "\n\n" +
            "¿Deseas copiarla automáticamente a /storage/emulated/0/MH3/ para iniciar?");
        builder.setPositiveButton("Copiar a MH3 e Iniciar", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                File target = new File("/storage/emulated/0/MH3", file.getName());
                copyFileWithProgress(file, target);
            }
        });
        builder.setNeutralButton("Seleccionar otra", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                launchRomPicker();
            }
        });
        builder.setNegativeButton("Usar sin copiar", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                sRomPath = detectedPath;
                mRomReady = true;
                log("Using ROM directly without copying: " + sRomPath);
            }
        });
        builder.setCancelable(false);
        builder.show();
    }

    private void showRomSelectPrompt() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("Monster Hunter Tri");
        builder.setMessage("Por favor selecciona el archivo de la ROM (.iso, .rvz o .wia) de Monster Hunter Tri (Europeo).\n\n" +
            "La aplicación se encargará de copiarla automáticamente a /storage/emulated/0/MH3/ para jugar.");
        builder.setPositiveButton("Seleccionar ROM", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                launchRomPicker();
            }
        });
        builder.setNegativeButton("Salir", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                finish();
            }
        });
        builder.setCancelable(false);
        builder.show();
    }

    private void launchRomPicker() {
        try {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.setType("*/*");
            intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[] {
                "application/x-iso9660-image",
                "application/octet-stream",
                "application/*",
                "*/*"
            });
            startActivityForResult(intent, REQUEST_PICK_ROM);
        } catch (Exception e) {
            log("Error launching ACTION_OPEN_DOCUMENT: " + e.getMessage());
            try {
                Intent intent = new Intent(Intent.ACTION_GET_CONTENT);
                intent.setType("*/*");
                startActivityForResult(intent, REQUEST_PICK_ROM);
            } catch (Exception ex) {
                log("Error launching ACTION_GET_CONTENT: " + ex.getMessage());
            }
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_PICK_ROM) {
            if (resultCode == RESULT_OK && data != null && data.getData() != null) {
                Uri uri = data.getData();
                copyUriWithProgress(uri);
            } else {
                // User cancelled file picker, ask again
                showRomSelectPrompt();
            }
        }
    }

    private void copyUriWithProgress(final Uri uri) {
        String displayName = "Monster Hunter Tri (Europe).rvz";
        long fileSize = -1;
        try (Cursor cursor = getContentResolver().query(uri, null, null, null, null)) {
            if (cursor != null && cursor.moveToFirst()) {
                int nameIdx = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME);
                int sizeIdx = cursor.getColumnIndex(OpenableColumns.SIZE);
                if (nameIdx != -1) {
                    String name = cursor.getString(nameIdx);
                    if (name != null && !name.isEmpty()) displayName = name;
                }
                if (sizeIdx != -1) {
                    fileSize = cursor.getLong(sizeIdx);
                }
            }
        } catch (Exception e) {
            log("Querying URI info: " + e.getMessage());
        }

        final File targetDir = new File("/storage/emulated/0/MH3");
        if (!targetDir.exists()) targetDir.mkdirs();
        final File targetFile = new File(targetDir, displayName);

        if (targetFile.exists() && fileSize > 0 && targetFile.length() == fileSize) {
            log("Target file already exists with same size: " + targetFile.getAbsolutePath());
            sRomPath = targetFile.getAbsolutePath();
            mRomReady = true;
            return;
        }

        final ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setTitle("Copiando ROM");
        progressDialog.setMessage("Copiando " + displayName + " a /storage/emulated/0/MH3/...\nPor favor espera, no cierres la app.");
        progressDialog.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
        progressDialog.setCancelable(false);
        progressDialog.setCanceledOnTouchOutside(false);
        if (fileSize > 0) {
            progressDialog.setMax(100);
        }
        progressDialog.show();

        final long totalBytesExpected = fileSize;
        new Thread(new Runnable() {
            @Override
            public void run() {
                InputStream in = null;
                FileOutputStream out = null;
                try {
                    in = getContentResolver().openInputStream(uri);
                    out = new FileOutputStream(targetFile);
                    byte[] buffer = new byte[4 * 1024 * 1024]; // 4MB buffer for fast copy
                    int read;
                    long copied = 0;
                    long lastUpdate = 0;

                    while ((read = in.read(buffer)) != -1) {
                        out.write(buffer, 0, read);
                        copied += read;
                        long now = System.currentTimeMillis();
                        if (now - lastUpdate > 250) {
                            lastUpdate = now;
                            if (totalBytesExpected > 0) {
                                final int percent = (int) (copied * 100 / totalBytesExpected);
                                runOnUiThread(new Runnable() {
                                    @Override
                                    public void run() {
                                        progressDialog.setProgress(percent);
                                    }
                                });
                            }
                        }
                    }
                    out.flush();

                    log("ROM copy finished successfully: " + targetFile.getAbsolutePath() + " (" + copied + " bytes)");
                    runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            progressDialog.dismiss();
                            sRomPath = targetFile.getAbsolutePath();
                            mRomReady = true;
                        }
                    });
                } catch (final Exception e) {
                    log("Error copying ROM from URI: " + e.getMessage());
                    runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            progressDialog.dismiss();
                            if (targetFile.exists()) targetFile.delete();
                            AlertDialog.Builder b = new AlertDialog.Builder(OceanTriActivity.this);
                            b.setTitle("Error al copiar ROM");
                            b.setMessage("Ocurrió un error al copiar el archivo:\n" + e.getMessage());
                            b.setPositiveButton("Reintentar", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                    showRomSelectPrompt();
                                }
                            });
                            b.setNegativeButton("Salir", new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                    finish();
                                }
                            });
                            b.show();
                        }
                    });
                } finally {
                    try { if (in != null) in.close(); } catch (Exception ignored) {}
                    try { if (out != null) out.close(); } catch (Exception ignored) {}
                }
            }
        }, "RomCopyThread").start();
    }

    private void copyFileWithProgress(final File sourceFile, final File targetFile) {
        if (sourceFile.getAbsolutePath().equals(targetFile.getAbsolutePath())) {
            sRomPath = targetFile.getAbsolutePath();
            mRomReady = true;
            return;
        }

        final long totalBytesExpected = sourceFile.length();
        final ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setTitle("Copiando ROM");
        progressDialog.setMessage("Copiando " + sourceFile.getName() + " a /storage/emulated/0/MH3/...\nPor favor espera, no cierres la app.");
        progressDialog.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
        progressDialog.setCancelable(false);
        progressDialog.setCanceledOnTouchOutside(false);
        progressDialog.setMax(100);
        progressDialog.show();

        new Thread(new Runnable() {
            @Override
            public void run() {
                FileInputStream in = null;
                FileOutputStream out = null;
                try {
                    in = new FileInputStream(sourceFile);
                    out = new FileOutputStream(targetFile);
                    byte[] buffer = new byte[4 * 1024 * 1024];
                    int read;
                    long copied = 0;
                    long lastUpdate = 0;

                    while ((read = in.read(buffer)) != -1) {
                        out.write(buffer, 0, read);
                        copied += read;
                        long now = System.currentTimeMillis();
                        if (now - lastUpdate > 250) {
                            lastUpdate = now;
                            final int percent = (int) (copied * 100 / totalBytesExpected);
                            runOnUiThread(new Runnable() {
                                @Override
                                public void run() {
                                    progressDialog.setProgress(percent);
                                }
                            });
                        }
                    }
                    out.flush();

                    log("ROM copy finished: " + targetFile.getAbsolutePath());
                    runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            progressDialog.dismiss();
                            sRomPath = targetFile.getAbsolutePath();
                            mRomReady = true;
                        }
                    });
                } catch (final Exception e) {
                    log("Error copying ROM from file: " + e.getMessage());
                    runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            progressDialog.dismiss();
                            if (targetFile.exists()) targetFile.delete();
                            showRomSelectPrompt();
                        }
                    });
                } finally {
                    try { if (in != null) in.close(); } catch (Exception ignored) {}
                    try { if (out != null) out.close(); } catch (Exception ignored) {}
                }
            }
        }, "RomFileCopyThread").start();
    }

    private File findRomInDir(File dir) {
        if (dir == null || !dir.exists() || !dir.isDirectory()) return null;
        try {
            File[] files = dir.listFiles();
            if (files != null) {
                for (File f : files) {
                    if (f.isFile() && isRomFile(f.getName())) {
                        return f;
                    }
                }
            }
        } catch (Exception ignored) {}
        return null;
    }

    private boolean hasStoragePermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            return Environment.isExternalStorageManager();
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            return checkSelfPermission(Manifest.permission.READ_EXTERNAL_STORAGE) == PackageManager.PERMISSION_GRANTED;
        }
        return true;
    }

    private void requestStoragePermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            try {
                Intent intent = new Intent(Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION);
                intent.addCategory("android.intent.category.DEFAULT");
                intent.setData(Uri.parse(String.format("package:%s", getPackageName())));
                startActivity(intent);
            } catch (Exception e) {
                try {
                    Intent intent = new Intent(Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION);
                    startActivity(intent);
                } catch (Exception ex) {
                    log("Error opening MANAGE_ALL_FILES settings: " + ex.getMessage());
                }
            }
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            requestPermissions(new String[]{
                Manifest.permission.READ_EXTERNAL_STORAGE,
                Manifest.permission.WRITE_EXTERNAL_STORAGE
            }, REQUEST_STORAGE_PERMS);
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == REQUEST_STORAGE_PERMS) {
            if (hasStoragePermission()) {
                checkRomAndPrepare();
            } else {
                log("Storage permission denied by user.");
            }
        }
    }

    @Override
    protected void onDestroy() {
        log("OceanTriActivity.onDestroy() called - terminating process cleanly");
        super.onDestroy();
        android.os.Process.killProcess(android.os.Process.myPid());
        System.exit(0);
    }

    private String findGameRom() {
        List<File> searchDirs = new ArrayList<>();
        searchDirs.add(new File("/storage/emulated/0/Download"));
        searchDirs.add(new File("/storage/emulated/0/MH3"));
        searchDirs.add(new File("/storage/emulated/0/OceanTri"));
        searchDirs.add(new File("/storage/emulated/0/Wii"));
        searchDirs.add(new File("/storage/emulated/0/ROMs"));
        searchDirs.add(new File("/storage/emulated/0/Games"));
        searchDirs.add(new File("/storage/emulated/0"));
        searchDirs.add(new File("/sdcard/Download"));
        searchDirs.add(new File("/sdcard/MH3"));
        searchDirs.add(new File("/sdcard/OceanTri"));
        searchDirs.add(new File("/sdcard/Wii"));
        searchDirs.add(new File("/sdcard"));
        File extFiles = getExternalFilesDir(null);
        if (extFiles != null) searchDirs.add(extFiles);

        for (File dir : searchDirs) {
            if (!dir.exists() || !dir.isDirectory()) continue;
            try {
                File[] files = dir.listFiles();
                if (files == null) continue;
                for (File f : files) {
                    if (f.isFile() && isRomFile(f.getName())) {
                        return f.getAbsolutePath();
                    } else if (f.isDirectory()) {
                        File[] subFiles = f.listFiles();
                        if (subFiles != null) {
                            for (File sf : subFiles) {
                                if (sf.isFile() && isRomFile(sf.getName())) {
                                    return sf.getAbsolutePath();
                                }
                            }
                        }
                    }
                }
            } catch (Exception e) {
                log("Error reading directory " + dir.getAbsolutePath() + ": " + e.getMessage());
            }
        }
        return null;
    }

    private boolean isRomFile(String name) {
        String lower = name.toLowerCase(Locale.ROOT);
        return lower.endsWith(".rvz") || lower.endsWith(".iso") || lower.endsWith(".wia");
    }
}
