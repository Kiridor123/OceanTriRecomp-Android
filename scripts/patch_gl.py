import sys

with open(r'c:\mh3src\aurora-main\lib\gl\gl.cpp', 'r', encoding='utf-8') as f:
    text = f.read()

target = '''static PostProcessSettings g_postProcess{};
static GLuint g_postProcessProgram = 0;
static GLint u_postTextureLoc = -1;
static GLint u_postGammaLoc = -1;
static GLint u_postContrastLoc = -1;
static GLint u_postBrightnessLoc = -1;
static GLint u_postSaturationLoc = -1;
static GLint u_postFakeHdrLoc = -1;
static GLuint g_postProcessVao = 0;
static GLuint g_postProcessVbo = 0;

void set_post_process_settings(const PostProcessSettings& settings) noexcept {
  g_postProcess = settings;
}
PostProcessSettings get_post_process_settings() noexcept {
  return g_postProcess;
}

static void init_post_process_shader() {
  if (g_postProcessProgram != 0) return;
  const char* vsSrc =
    "#version 300 es\\n"
    "layout(location = 0) in vec2 a_pos;\\n"
    "layout(location = 1) in vec2 a_uv;\\n"
    "out vec2 v_uv;\\n"
    "void main() {\\n"
    "  v_uv = a_uv;\\n"
    "  gl_Position = vec4(a_pos, 0.0, 1.0);\\n"
    "}\\n";
  const char* fsSrc =
    "#version 300 es\\n"
    "precision mediump float;\\n"
    "in vec2 v_uv;\\n"
    "out vec4 fragColor;\\n"
    "uniform sampler2D u_texture;\\n"
    "uniform float u_gamma;\\n"
    "uniform float u_contrast;\\n"
    "uniform float u_brightness;\\n"
    "uniform float u_saturation;\\n"
    "uniform float u_fake_hdr;\\n"
    "vec3 ACESFilm(vec3 x) {\\n"
    "  float a = 2.51;\\n"
    "  float b = 0.03;\\n"
    "  float c = 2.43;\\n"
    "  float d = 0.59;\\n"
    "  float e = 0.14;\\n"
    "  return clamp((x * (a * x + b)) / (x * (c * x + d) + e), 0.0, 1.0);\\n"
    "}\\n"
    "void main() {\\n"
    "  vec4 c = texture(u_texture, v_uv);\\n"
    "  vec3 col = c.rgb;\\n"
    "  vec3 linearCol = pow(max(col, vec3(0.0)), vec3(2.2));\\n"
    "  linearCol *= exp2(u_brightness * 1.8);\\n"
    "  if (u_contrast != 1.0) {\\n"
    "    linearCol = max(vec3(0.0), (linearCol - 0.18) * u_contrast + 0.18);\\n"
    "  }\\n"
    "  if (u_fake_hdr > 0.5) {\\n"
    "    vec3 highlights = max(linearCol - vec3(0.55), vec3(0.0));\\n"
    "    vec3 expanded = linearCol + highlights * 0.7;\\n"
    "    linearCol = ACESFilm(expanded * 1.06);\\n"
    "  } else {\\n"
    "    linearCol = clamp(linearCol, 0.0, 1.0);\\n"
    "  }\\n"
    "  float luma = dot(linearCol, vec3(0.2126, 0.7152, 0.0722));\\n"
    "  linearCol = max(vec3(0.0), mix(vec3(luma), linearCol, u_saturation));\\n"
    "  vec3 outColor = pow(clamp(linearCol, 0.0, 1.0), vec3(1.0 / max(u_gamma, 0.1)));\\n"
    "  fragColor = vec4(outColor, c.a);\\n"
    "}\\n";

  GLuint vs = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vs, 1, &vsSrc, nullptr);
  glCompileShader(vs);

  GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fs, 1, &fsSrc, nullptr);
  glCompileShader(fs);

  g_postProcessProgram = glCreateProgram();
  glAttachShader(g_postProcessProgram, vs);
  glAttachShader(g_postProcessProgram, fs);
  glLinkProgram(g_postProcessProgram);
  glDeleteShader(vs);
  glDeleteShader(fs);

  u_postTextureLoc = glGetUniformLocation(g_postProcessProgram, "u_texture");
  u_postGammaLoc = glGetUniformLocation(g_postProcessProgram, "u_gamma");
  u_postContrastLoc = glGetUniformLocation(g_postProcessProgram, "u_contrast");
  u_postBrightnessLoc = glGetUniformLocation(g_postProcessProgram, "u_brightness");
  u_postSaturationLoc = glGetUniformLocation(g_postProcessProgram, "u_saturation");
  u_postFakeHdrLoc = glGetUniformLocation(g_postProcessProgram, "u_fake_hdr");

  glGenVertexArrays(1, &g_postProcessVao);
  glGenBuffers(1, &g_postProcessVbo);
  glBindVertexArray(g_postProcessVao);
  glBindBuffer(GL_ARRAY_BUFFER, g_postProcessVbo);
  static const float quadData[] = {
    -1.0f, -1.0f,  0.0f, 1.0f,
     1.0f, -1.0f,  1.0f, 1.0f,
    -1.0f,  1.0f,  0.0f, 0.0f,
     1.0f,  1.0f,  1.0f, 0.0f,
  };
  glBufferData(GL_ARRAY_BUFFER, sizeof(quadData), quadData, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), reinterpret_cast<void*>(0));
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), reinterpret_cast<void*>(2 * sizeof(float)));
  glEnableVertexAttribArray(1);
  glBindBuffer(GL_ARRAY_BUFFER, 0);
  glBindVertexArray(0);
}'''

repl = '''static PostProcessSettings g_postProcess{};
static GLuint g_postProcessProgram = 0;
static GLint u_postTextureLoc = -1;
static GLint u_postMh3uModeLoc = -1;
static GLuint g_postProcessVao = 0;
static GLuint g_postProcessVbo = 0;

void set_post_process_settings(const PostProcessSettings& settings) noexcept {
  g_postProcess = settings;
}
PostProcessSettings get_post_process_settings() noexcept {
  return g_postProcess;
}

static void init_post_process_shader() {
  if (g_postProcessProgram != 0) return;
  const char* vsSrc =
    "#version 300 es\\n"
    "layout(location = 0) in vec2 a_pos;\\n"
    "layout(location = 1) in vec2 a_uv;\\n"
    "out vec2 v_uv;\\n"
    "void main() {\\n"
    "  v_uv = a_uv;\\n"
    "  gl_Position = vec4(a_pos, 0.0, 1.0);\\n"
    "}\\n";
  const char* fsSrc =
    "#version 300 es\\n"
    "precision mediump float;\\n"
    "in vec2 v_uv;\\n"
    "out vec4 fragColor;\\n"
    "uniform sampler2D u_texture;\\n"
    "uniform float u_mh3u_mode;\\n"
    "vec3 ACESFilm(vec3 x) {\\n"
    "  float a = 2.51;\\n"
    "  float b = 0.03;\\n"
    "  float c = 2.43;\\n"
    "  float d = 0.59;\\n"
    "  float e = 0.14;\\n"
    "  return clamp((x * (a * x + b)) / (x * (c * x + d) + e), 0.0, 1.0);\\n"
    "}\\n"
    "void main() {\\n"
    "  vec4 c = texture(u_texture, v_uv);\\n"
    "  if (u_mh3u_mode > 0.5) {\\n"
    "    vec3 col = c.rgb;\\n"
    "    vec3 linearCol = pow(max(col, vec3(0.0)), vec3(2.2));\\n"
    "    vec3 highlights = max(linearCol - vec3(0.55), vec3(0.0));\\n"
    "    vec3 expanded = linearCol + highlights * 0.7;\\n"
    "    vec3 tonemapped = ACESFilm(expanded * 1.06);\\n"
    "    float luma = dot(tonemapped, vec3(0.2126, 0.7152, 0.0722));\\n"
    "    vec3 saturated = mix(vec3(luma), tonemapped, 1.25);\\n"
    "    saturated.b = mix(saturated.b, saturated.b * 1.04, 0.6);\\n"
    "    vec3 outColor = pow(clamp(saturated, 0.0, 1.0), vec3(1.0 / 2.2));\\n"
    "    fragColor = vec4(outColor, c.a);\\n"
    "  } else {\\n"
    "    fragColor = c;\\n"
    "  }\\n"
    "}\\n";

  GLuint vs = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vs, 1, &vsSrc, nullptr);
  glCompileShader(vs);

  GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fs, 1, &fsSrc, nullptr);
  glCompileShader(fs);

  g_postProcessProgram = glCreateProgram();
  glAttachShader(g_postProcessProgram, vs);
  glAttachShader(g_postProcessProgram, fs);
  glLinkProgram(g_postProcessProgram);
  glDeleteShader(vs);
  glDeleteShader(fs);

  u_postTextureLoc = glGetUniformLocation(g_postProcessProgram, "u_texture");
  u_postMh3uModeLoc = glGetUniformLocation(g_postProcessProgram, "u_mh3u_mode");

  glGenVertexArrays(1, &g_postProcessVao);
  glGenBuffers(1, &g_postProcessVbo);
  glBindVertexArray(g_postProcessVao);
  glBindBuffer(GL_ARRAY_BUFFER, g_postProcessVbo);
  static const float quadData[] = {
    -1.0f, -1.0f,  0.0f, 1.0f,
     1.0f, -1.0f,  1.0f, 1.0f,
    -1.0f,  1.0f,  0.0f, 0.0f,
     1.0f,  1.0f,  1.0f, 0.0f,
  };
  glBufferData(GL_ARRAY_BUFFER, sizeof(quadData), quadData, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), reinterpret_cast<void*>(0));
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), reinterpret_cast<void*>(2 * sizeof(float)));
  glEnableVertexAttribArray(1);
  glBindBuffer(GL_ARRAY_BUFFER, 0);
  glBindVertexArray(0);
}'''

target2 = '''    if (g_postProcess.enabled && (g_postProcess.gamma != 2.2f || g_postProcess.contrast != 1.0f || g_postProcess.brightness != 0.0f || g_postProcess.saturation != 1.0f || g_postProcess.fake_hdr)) {
      init_post_process_shader();
      glBindFramebuffer(GL_FRAMEBUFFER, 0);
      glViewport(x, static_cast<GLint>(drawableHeight) - y - height, width, height);
      glUseProgram(g_postProcessProgram);
      glActiveTexture(GL_TEXTURE0);
      glBindTexture(GL_TEXTURE_2D, source->gl());
      glUniform1i(u_postTextureLoc, 0);
      glUniform1f(u_postGammaLoc, g_postProcess.gamma);
      glUniform1f(u_postContrastLoc, g_postProcess.contrast);
      glUniform1f(u_postBrightnessLoc, g_postProcess.brightness);
      glUniform1f(u_postSaturationLoc, g_postProcess.saturation);
      glUniform1f(u_postFakeHdrLoc, g_postProcess.fake_hdr ? 1.0f : 0.0f);
      glBindVertexArray(g_postProcessVao);
      glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
      glBindVertexArray(0);
      glUseProgram(0);
      glBindTexture(GL_TEXTURE_2D, 0);
      invalidate_state();
    }'''

repl2 = '''    if (g_postProcess.enabled && g_postProcess.mh3u_mode) {
      init_post_process_shader();
      glBindFramebuffer(GL_FRAMEBUFFER, 0);
      glViewport(x, static_cast<GLint>(drawableHeight) - y - height, width, height);
      glUseProgram(g_postProcessProgram);
      glActiveTexture(GL_TEXTURE0);
      glBindTexture(GL_TEXTURE_2D, source->gl());
      glUniform1i(u_postTextureLoc, 0);
      glUniform1f(u_postMh3uModeLoc, g_postProcess.mh3u_mode ? 1.0f : 0.0f);
      glBindVertexArray(g_postProcessVao);
      glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
      glBindVertexArray(0);
      glUseProgram(0);
      glBindTexture(GL_TEXTURE_2D, 0);
      invalidate_state();
    }'''

if target in text and target2 in text:
    text = text.replace(target, repl).replace(target2, repl2)
    with open(r'c:\mh3src\aurora-main\lib\gl\gl.cpp', 'w', newline='\r\n', encoding='utf-8') as f:
        f.write(text)
    print('gl.cpp patched successfully')
else:
    print('Failed to find targets in gl.cpp', file=sys.stderr)
    sys.exit(1)
