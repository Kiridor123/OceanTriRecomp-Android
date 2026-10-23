#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF7C(CpuContext* ctx);
extern "C" uint32_t func_800CEF7C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8021274C(CpuContext* ctx);
extern "C" uint64_t func_8021274C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8022063C(CpuContext* ctx);
extern "C" uint64_t func_8022063C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802201C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802201C0;

loc_802201C0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r26 = r3;
    r27 = r4;
    r3 = (r3 + 224);
    r4 = 0;
    r5 = 360;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r18 = (r27 + 4);
    r17 = (r26 + 224);
    r24 = 1374420992;
    r23 = (r24 + -31457);
    r19 = 0x80790000u;
    r3 = 0x80790000u;
    r14 = (r3 + 17352);
}

loc_80220210:
{
    r3 = MemoryInline::FlatRead8((r18 + 4));
    r0 = MemoryInline::FlatRead8((r18 + 5));
    r0 = (r0 - r3);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_8022050C;
}

loc_80220224:
{
    r4 = 0;
    r3 = r26;
    r0 = 30;
    ctr = r0;
}

loc_80220234:
{
    r0 = MemoryInline::FlatRead16((r3 + 224));
}

loc_8022023C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8022024C;
    }
}

loc_80220240:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r15 = (r17 + r0);
    goto loc_80220258;
}

loc_8022024C:
{
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80220234;
    }
}

loc_80220258:
{
    r3 = MemoryInline::FlatRead16((r18 + 6));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r18 + 6), static_cast<uint16_t>(r3));
    r3 = (r19 + 17344);
    r4 = 4;
    r6 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r23)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 100);
    r5 = (r6 - r0);
    if constexpr (KnownRegArgsCpuCall<0x8021274Cu>(&func_8021274C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8021274C_19C5 = func_8021274C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021274C_19C5);
        r4 = static_cast<uint32_t>(regargs_result_8021274C_19C5 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021274Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r25 = (r3 + 1);
    r3 = MemoryInline::FlatRead16(r18);
    if constexpr (KnownRegArgsCpuCall<0x8022063Cu>(&func_8022063C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8022063C_1DB8 = func_8022063C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8022063C_1DB8);
        r4 = static_cast<uint32_t>(regargs_result_8022063C_1DB8 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8022063Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r20 = r3;
    r21 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r27_addr_3 = (r27 + r21);
    r3 = MemoryInline::FlatRead8(r27_addr_3);
    r0 = (r3 + -1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r25 = (r25 + r0);
    r3 = MemoryInline::FlatRead16(r18);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl2_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F758;
    }
}

loc_inl2_0x8029F754:
{
    r3 = 0;
}

loc_inl2_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl2_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r14_addr_3 = (r14 + r0);
    r3 = MemoryInline::FlatRead8(r14_addr_3);
    r0 = MemoryInline::FlatRead16((r18 + 2));
}

loc_802202CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022033C;
    }
}

loc_802202D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(238));
}

loc_802202D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220334;
    }
}

loc_802202D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80220304;
    }
}

loc_802202DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(224));
}

loc_802202E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220328;
    }
}

loc_802202E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802202F4;
    }
}

loc_802202E8:
{
}

loc_802202EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(197))) {
        goto loc_80220328;
    }
}

loc_802202F0:
{
    goto loc_8022033C;
}

loc_802202F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(226));
}

loc_802202F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220328;
    }
}

loc_802202FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022033C;
    }
}

loc_80220300:
{
    goto loc_80220334;
}

loc_80220304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(247));
}

loc_80220308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80220334;
    }
}

loc_8022030C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022031C;
    }
}

loc_80220310:
{
}

loc_80220314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(244))) {
        goto loc_80220328;
    }
}

loc_80220318:
{
    goto loc_8022033C;
}

loc_8022031C:
{
}

loc_80220320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(421))) {
        goto loc_80220334;
    }
}

loc_80220324:
{
    goto loc_8022033C;
}

loc_80220328:
{
    r3 = (r3 + 10);
    r25 = (r25 + 2);
    goto loc_8022033C;
}

loc_80220334:
{
    r3 = (r3 + 20);
    r25 = (r25 + 2);
}

loc_8022033C:
{
    r29 = 0;
    r28 = 0;
    r30 = 0;
    r16 = 0;
    r22 = (r3 & 65535);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    goto loc_802203C0;
}

loc_80220358:
{
    r3 = MemoryInline::FlatRead16((r18 + 6));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl3_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl3_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF8C;
    }
}

loc_inl3_0x800CEF88:
{
    r0 = 1;
}

loc_inl3_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r18 + 6), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r23)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_80220384:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r0))) {
        goto loc_80220390;
    }
}

loc_80220388:
{
    r0 = (r29 + 1);
    r29 = (r0 & 65535);
}

loc_80220390:
{
    r4 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r23)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_802203B0:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_802203BC;
    }
}

loc_802203B4:
{
    r0 = (r28 + 1);
    r28 = (r0 & 65535);
}

loc_802203BC:
{
    r16 = (r16 + 1);
}

loc_802203C0:
{
}

loc_802203C4:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(r25))) {
        goto loc_80220358;
    }
}

loc_802203C8:
{
    r0 = MemoryInline::FlatRead16((r18 + 2));
}

loc_802203D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(245))) {
        goto loc_8022048C;
    }
}

loc_802203D4:
{
    r27_addr_4 = (r27 + r21);
    r0 = MemoryInline::FlatRead8(r27_addr_4);
}

loc_802203DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80220454;
    }
}

loc_802203E0:
{
    r3 = MemoryInline::FlatRead16((r18 + 6));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl4_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl4_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CEF8C;
    }
}

loc_inl4_0x800CEF88:
{
    r0 = 1;
}

loc_inl4_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_6 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl4_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r18 + 6), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (r24 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r0 = (r3 - r0);
}

loc_80220410:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8022048C;
    }
}

loc_80220414:
{
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl5_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl5_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CEF8C;
    }
}

loc_inl5_0x800CEF88:
{
    r0 = 1;
}

loc_inl5_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_10 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_8 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl5_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r18 + 6), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (r24 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_80220440:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8022044C;
    }
}

loc_80220444:
{
    r30 = 157;
    goto loc_8022048C;
}

loc_8022044C:
{
    r30 = 227;
    goto loc_8022048C;
}

loc_80220454:
{
    r3 = MemoryInline::FlatRead16((r18 + 6));
    if constexpr (KnownRegArgsCpuCall<0x800CEF7Cu>(&func_800CEF7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF7C_47A7 = func_800CEF7C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CEF7C_47A7;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r18 + 6), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r18 + 6));
    r0 = (r24 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_80220484:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8022048C;
    }
}

loc_80220488:
{
    r30 = 227;
}

loc_8022048C:
{
}

loc_80220490:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802204B0;
    }
}

loc_80220494:
{
    r3 = MemoryInline::FlatRead16(r18);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r5 = r15;
    r6 = 3;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x802204B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802204B0:
{
}

loc_802204B4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_802204E4;
    }
}

loc_802204B8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = 0x80790000u;
    r3 = (r3 + 17328);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r5 = r15;
    r6 = 3;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x802204E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802204E4:
{
}

loc_802204E8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80220508;
    }
}

loc_802204EC:
{
    r3 = r30;
    r4 = 1;
    r5 = r15;
    r6 = 3;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x80220508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80220508:
{
    r31 = (r31 + -1);
}

loc_8022050C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_80220514:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80220224;
    }
}

loc_80220518:
{
    r18 = (r18 + 8);
    r26 = (r26 + 120);
    r17 = (r17 + 120);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = r3;
}

loc_80220538:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_80220210;
    }
}

loc_8022053C:
{
    r11 = (r1 + 96);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802201C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802201C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802201C0 func_802201C0 preserves=true fpr_mask=0x00000000
