import os, sys, math
from PIL import Image, ImageFont, ImageDraw

def main():
    atlas_w, atlas_h = 1024, 512
    img = Image.new('L', (atlas_w, atlas_h), 0)
    draw = ImageDraw.Draw(img)

    font_path = '/usr/share/fonts/google-noto/NotoSans-Bold.ttf'
    f = ImageFont.truetype(font_path, 52)
    base_font_size = 52.0

    chars = [chr(c) for c in range(32, 127)]
    extra = 'áéíóúñÁÉÍÓÚÑ¿¡äöüÄÖÜßàèêçìòù•‹›'
    for c in extra:
        if c not in chars:
            chars.append(c)

    def render_hi_res_icon(draw_func):
        hi = Image.new('L', (208, 208), 0)
        d = ImageDraw.Draw(hi)
        draw_func(d)
        return hi.resize((52, 52), Image.Resampling.LANCZOS)

    def draw_arrow_up(d):
        d.polygon([(104, 28), (180, 180), (28, 180)], fill=255)

    def draw_arrow_down(d):
        d.polygon([(28, 28), (180, 28), (104, 180)], fill=255)

    def draw_arrow_left(d):
        d.polygon([(180, 28), (28, 104), (180, 180)], fill=255)

    def draw_arrow_right(d):
        d.polygon([(28, 28), (180, 104), (28, 180)], fill=255)

    def draw_home(d):
        d.polygon([(104, 22), (188, 100), (20, 100)], fill=255)
        d.rectangle([(38, 96), (170, 186)], fill=255)
        d.rectangle([(84, 120), (124, 186)], fill=0)

    def draw_gear(d):
        cx, cy = 104, 104
        for i in range(6):
            ang = i * (math.pi / 3.0)
            tw, th = 30, 96
            cos_a, sin_a = math.cos(ang), math.sin(ang)
            p1 = (cx + cos_a*th - sin_a*tw, cy + sin_a*th + cos_a*tw)
            p2 = (cx + cos_a*th + sin_a*tw, cy + sin_a*th - cos_a*tw)
            p3 = (cx - cos_a*th + sin_a*tw, cy - sin_a*th - cos_a*tw)
            p4 = (cx - cos_a*th - sin_a*tw, cy - sin_a*th + cos_a*tw)
            d.polygon([p1, p2, p3, p4], fill=255)
        d.ellipse([(24, 24), (184, 184)], fill=255)
        d.ellipse([(72, 72), (136, 136)], fill=0)

    def draw_cross(d):
        d.line([(36, 36), (172, 172)], fill=255, width=28)
        d.line([(36, 172), (172, 36)], fill=255, width=28)

    def draw_folder(d):
        d.rounded_rectangle([(28, 40), (96, 76)], radius=14, fill=255)
        d.rounded_rectangle([(24, 62), (184, 172)], radius=18, fill=255)

    def draw_pencil(d):
        # 45 deg tilted pencil
        # Body
        d.polygon([(150, 30), (178, 58), (76, 160), (48, 132)], fill=255)
        # Tip
        d.polygon([(48, 132), (76, 160), (28, 180)], fill=255)

    def draw_check(d):
        d.line([(36, 104), (80, 156)], fill=255, width=24)
        d.line([(80, 156), (172, 48)], fill=255, width=24)

    custom_icons = {
        '▲': render_hi_res_icon(draw_arrow_up),
        '▼': render_hi_res_icon(draw_arrow_down),
        '◀': render_hi_res_icon(draw_arrow_left),
        '▶': render_hi_res_icon(draw_arrow_right),
        '⌂': render_hi_res_icon(draw_home),
        '⚙': render_hi_res_icon(draw_gear),
        '✕': render_hi_res_icon(draw_cross),
        '📁': render_hi_res_icon(draw_folder),
        '✏': render_hi_res_icon(draw_pencil),
        '✓': render_hi_res_icon(draw_check),
    }

    x, y = 4, 4
    row_h = 60
    glyph_data = []

    for ch in chars:
        bbox = f.getbbox(ch)
        advance = f.getlength(ch)
        if not bbox or ch == ' ':
            glyph_data.append((ord(ch), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, advance))
            continue

        bw = bbox[2] - bbox[0]
        bh = bbox[3] - bbox[1]
        gw = bw + 4
        gh = bh + 4

        if x + gw + 6 >= atlas_w:
            x = 4
            y += row_h + 6
        if y + row_h >= atlas_h:
            print("Atlas overflow at char:", ch)
            sys.exit(1)

        draw.text((x - bbox[0] + 2, y - bbox[1] + 2), ch, fill=255, font=f)

        u0 = float(x) / float(atlas_w)
        v0 = float(y) / float(atlas_h)
        u1 = float(x + gw) / float(atlas_w)
        v1 = float(y + gh) / float(atlas_h)

        offX = float(bbox[0] - 2)
        offY = float(bbox[1] - 2)
        glyph_data.append((ord(ch), u0, v0, u1, v1, float(gw), float(gh), offX, offY, advance))
        x += gw + 6

    for ch, icon_img in custom_icons.items():
        iw, ih = icon_img.size
        gw = iw + 4
        gh = ih + 4
        if x + gw + 6 >= atlas_w:
            x = 4
            y += row_h + 6
        if y + row_h >= atlas_h:
            print("Atlas overflow at custom icon:", ch)
            sys.exit(1)

        img.paste(icon_img, (x + 2, y + 2))

        u0 = float(x) / float(atlas_w)
        v0 = float(y) / float(atlas_h)
        u1 = float(x + gw) / float(atlas_w)
        v1 = float(y + gh) / float(atlas_h)

        offX = 0.0
        offY = 0.0
        advance = float(iw)
        glyph_data.append((ord(ch), u0, v0, u1, v1, float(gw), float(gh), offX, offY, advance))
        x += gw + 6

    preview_path = '/home/Kiridor/.gemini/antigravity/brain/9c53bb70-cc04-4aed-9d8c-daaa1692cefe/font_atlas_hd.png'
    img.save(preview_path)
    print(f"Saved atlas preview to {preview_path}, size={img.size}")

    raw = img.tobytes()
    rle = bytearray()
    i = 0
    while i < len(raw):
        val = raw[i]
        run = 1
        while i + run < len(raw) and raw[i + run] == val and run < 255:
            run += 1
        rle.append(run)
        rle.append(val)
        i += run

    out_path = '/var/mnt/juegos_sdb2/ocean tri code/runtime/src/droid_sans_atlas.h'
    with open(out_path, 'w') as out:
        out.write('// Auto-generated High-Resolution Font Atlas (52pt)\n')
        out.write('#pragma once\n#include <cstdint>\n#include <cstddef>\n\n')
        out.write(f'constexpr size_t FONT_ATLAS_WIDTH = {atlas_w};\n')
        out.write(f'constexpr size_t FONT_ATLAS_HEIGHT = {atlas_h};\n')
        out.write(f'constexpr float BASE_FONT_SIZE = {base_font_size}f;\n')
        out.write(f'constexpr size_t FONT_RAW_SIZE = {len(raw)};\n')
        out.write(f'constexpr size_t FONT_RLE_SIZE = {len(rle)};\n\n')
        out.write('struct FontGlyphMetric {\n')
        out.write('    uint32_t codepoint;\n')
        out.write('    float u0, v0, u1, v1;\n')
        out.write('    float w, h;\n')
        out.write('    float offX, offY;\n')
        out.write('    float advance;\n')
        out.write('};\n\n')
        out.write(f'constexpr size_t FONT_GLYPH_COUNT = {len(glyph_data)};\n')
        out.write('inline const FontGlyphMetric g_fontGlyphs[FONT_GLYPH_COUNT] = {\n')
        for g in glyph_data:
            out.write(f'    {{ {g[0]}, {g[1]:.6f}f, {g[2]:.6f}f, {g[3]:.6f}f, {g[4]:.6f}f, {g[5]:.1f}f, {g[6]:.1f}f, {g[7]:.1f}f, {g[8]:.1f}f, {g[9]:.2f}f }},\n')
        out.write('};\n\n')
        out.write(f'inline const uint8_t g_fontAtlasRLE[{len(rle)}] = {{\n')
        for i in range(0, len(rle), 24):
            chunk = rle[i:i+24]
            out.write('    ' + ', '.join(f'0x{b:02x}' for b in chunk) + ',\n')
        out.write('};\n\n')
        out.write('inline const FontGlyphMetric* FindFontGlyph(uint32_t cp) {\n    for (size_t i = 0; i < FONT_GLYPH_COUNT; ++i) {\n        if (g_fontGlyphs[i].codepoint == cp) return &g_fontGlyphs[i];\n    }\n    return nullptr;\n}\n\n')
        out.write('inline void DecompressFontAtlas(uint8_t* dst) {\n')
        out.write('    size_t inIdx = 0, outIdx = 0;\n')
        out.write(f'    while (inIdx < {len(rle)} && outIdx < {len(raw)}) {{\n')
        out.write('        uint8_t count = g_fontAtlasRLE[inIdx++];\n')
        out.write('        uint8_t val = g_fontAtlasRLE[inIdx++];\n')
        out.write('        for (uint8_t c = 0; c < count && outIdx < FONT_RAW_SIZE; ++c) {\n')
        out.write('            dst[outIdx++] = val;\n')
        out.write('        }\n')
        out.write('    }\n')
        out.write('}\n')

    print(f"Generated {out_path} with {len(glyph_data)} glyphs, raw={len(raw)}, rle={len(rle)}")

if __name__ == '__main__':
    main()
