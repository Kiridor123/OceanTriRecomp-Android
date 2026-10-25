package com.oceantri.mh3;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Process;

public final class ProcessPhoenix extends Activity {
    private static final String KEY_RESTART_INTENT = "phoenix_restart_intent";
    private static final String KEY_MAIN_PROCESS_PID = "phoenix_main_process_pid";

    public static void triggerRebirth(Context context) {
        String packageName = context.getPackageName();
        Intent defaultIntent = context.getPackageManager().getLaunchIntentForPackage(packageName);
        if (defaultIntent == null) {
            defaultIntent = new Intent(context, OceanTriActivity.class);
        }
        defaultIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);

        Intent intent = new Intent(context, ProcessPhoenix.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        intent.putExtra(KEY_RESTART_INTENT, defaultIntent);
        intent.putExtra(KEY_MAIN_PROCESS_PID, Process.myPid());
        context.startActivity(intent);

        if (context instanceof Activity) {
            ((Activity) context).finishAffinity();
        }
        Runtime.getRuntime().exit(0);
    }

    @Override
    @SuppressWarnings("deprecation")
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        int mainPid = getIntent().getIntExtra(KEY_MAIN_PROCESS_PID, -1);
        if (mainPid > 0) {
            Process.killProcess(mainPid);
        }

        Intent intent = getIntent().getParcelableExtra(KEY_RESTART_INTENT);
        if (intent != null) {
            startActivity(intent);
        }
        finish();
        Runtime.getRuntime().exit(0);
    }
}
