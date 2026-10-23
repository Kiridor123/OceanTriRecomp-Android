#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9EB4(CpuContext* ctx);
extern "C" uint64_t func_801E9EB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801EA114(CpuContext* ctx);
extern "C" uint64_t func_801EA114_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801EA23C(CpuContext* ctx);
extern "C" uint64_t func_801EA23C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80359DFC(CpuContext* ctx);
extern "C" uint64_t func_80359DFC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801EA318_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    goto loc_801EA318;

loc_801EA318:
{
    MemoryAlias::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r20 = r3;
    r19 = MemoryAlias::FlatRead32((r13 + -17824));
    // inline leaf 0x801E9BCC (3 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r13 + -17824));
    r3 = MemoryAlias::FlatRead8((r3 + 15874));
    // end of inlined leaf 0x801E9BCC
    r29 = r3;
    r3 = (r20 + 84);
    r4 = 0;
    r5 = 120;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
    r24 = (r19 + 16184);
    r28 = (r20 + 84);
    r27 = 0;
    r3 = 0x805C0000u;
    r30 = (r3 + -30008);
    goto loc_801EA4E8;
}

loc_801EA368:
{
    r0 = MemoryAlias::FlatRead8(r24);
}

loc_801EA370:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801EA4D8;
    }
}

loc_801EA374:
{
    r0 = MemoryAlias::FlatRead8((r24 + 3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r30_addr_2 = (r30 + r0);
    r19 = MemoryAlias::FlatRead32(r30_addr_2);
    r3 = r24;
    ctx->lr = 0x801EA388u;
    if constexpr (KnownRegArgsCpuCall<0x801EA114u>(&func_801EA114)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_801EA114_11AF = func_801EA114_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801EA114_11AF);
        r4 = static_cast<uint32_t>(regargs_result_801EA114_11AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x801EA114u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r23 = r3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_801EA394:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_801EA39C;
    }
}

loc_801EA398:
{
    r23 = 10;
}

loc_801EA39C:
{
    r3 = r28;
    r4 = r19;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r6 = 10;
    r7 = MemoryAlias::FlatRead16((r24 + 8));
    ctx->lr = 0x801EA3B4u;
    if constexpr (KnownRegArgsCpuCall<0x801EA23Cu>(&func_801EA23C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_801EA23C_1778 = func_801EA23C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801EA23C_1778);
        r4 = static_cast<uint32_t>(regargs_result_801EA23C_1778 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x801EA23Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r3 = 0;
    r0 = MemoryAlias::FlatRead16((r24 + 6));
}

loc_801EA3C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(234))) {
        goto loc_801EA3D8;
    }
}

loc_801EA3C4:
{
}

loc_801EA3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(235))) {
        goto loc_801EA3E8;
    }
}

loc_801EA3CC:
{
}

loc_801EA3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(236))) {
        goto loc_801EA3F8;
    }
}

loc_801EA3D4:
{
    goto loc_801EA404;
}

loc_801EA3D8:
{
    r22 = 0;
    r21 = 0;
    r3 = 1;
    goto loc_801EA404;
}

loc_801EA3E8:
{
    r22 = 1;
    r21 = 4;
    r3 = 1;
    goto loc_801EA404;
}

loc_801EA3F8:
{
    r22 = 2;
    r21 = 8;
    r3 = 1;
}

loc_801EA404:
{
}

loc_801EA408:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EA4D8;
    }
}

loc_801EA40C:
{
    r3 = MemoryAlias::FlatRead8((r24 + 3));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & -1073741824);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 - r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -1);
    r0 = (r0 + r4);
    r18 = (r0 & 255);
    // inline leaf 0x801E9E60 (10 guest instruction(s))
}

loc_inl2_0x801E9E60:
{
    r3 = (r3 & 255);
}

loc_inl2_0x801E9E68:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(4))) {
        goto loc_inl2_0x801E9E74;
    }
}

loc_inl2_0x801E9E6C:
{
    r3 = 0;
    goto loc_inl2_cont_801E9E60;
}

loc_inl2_0x801E9E74:
{
    r0 = 8;
    r0_subfc_sub_2 = r0;
    r0 = (r3 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r3_not_2 = ~(r0);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r0);
    r3 = (r3 + r3_ca_2);
    r3 = (r3 + 2);
}

loc_inl2_cont_801E9E60:
{
    // end of inlined leaf 0x801E9E60
    r0 = (r3 & 255);
}

loc_801EA434:
{
    r31 = 1;
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(r0))) {
        goto loc_801EA440;
    }
}

loc_801EA43C:
{
    r31 = 3;
}

loc_801EA440:
{
    r26 = 0;
    r19 = (r21 + r18);
    goto loc_801EA47C;
}

loc_801EA44C:
{
    r3 = r24;
    r4 = (r19 & 255);
    ctx->lr = 0x801EA458u;
    if constexpr (KnownRegArgsCpuCall<0x801E9EB4u>(&func_801E9EB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_801E9EB4_256B = func_801E9EB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E9EB4_256B);
        r4 = static_cast<uint32_t>(regargs_result_801E9EB4_256B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x801E9EB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801EA460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EA474;
    }
}

loc_801EA464:
{
    r0 = (r21 + r18);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r30_addr_3 = (r30 + r0);
    r26 = MemoryAlias::FlatRead32(r30_addr_3);
    goto loc_801EA484;
}

loc_801EA474:
{
    r19 = (r19 + -1);
    r18 = (r18 + -1);
}

loc_801EA47C:
{
}

loc_801EA480:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(0))) {
        goto loc_801EA44C;
    }
}

loc_801EA484:
{
}

loc_801EA488:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801EA4D8;
    }
}

loc_801EA48C:
{
    r7 = MemoryAlias::FlatRead16((r24 + 8));
    r19 = 0;
}

loc_801EA494:
{
    r3 = (r7 & 65535);
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
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r7 = r3;
    r19 = (r19 + 1);
}

loc_801EA4A8:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(10))) {
        goto loc_801EA494;
    }
}

loc_801EA4AC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r0 = (r0 + r27);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r20 + r0);
    r3 = (r3 + 84);
    r4 = r26;
    r5 = r31;
    r0 = (10 - r23);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r7 = (r7 & 65535);
    ctx->lr = 0x801EA4D8u;
    if constexpr (KnownRegArgsCpuCall<0x801EA23Cu>(&func_801EA23C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_801EA23C_3326 = func_801EA23C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801EA23C_3326);
        r4 = static_cast<uint32_t>(regargs_result_801EA23C_3326 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x801EA23Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
}

loc_801EA4D8:
{
    r24 = (r24 + 12);
    r28 = (r28 + 40);
    r27 = (r27 + 10);
    r25 = (r25 + 1);
}

loc_801EA4E8:
{
    r0 = MemoryAlias::FlatRead16((r20 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EA4F0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_801EA368;
    }
}

loc_801EA4F4:
{
    r0 = (r29 & 255);
    r3 = MemoryAlias::FlatRead32((r13 + -17200));
    MemoryAlias::FlatWrite16((r3 + 66), static_cast<uint16_t>(r0));
    r3 = (r20 + 84);
    r4 = MemoryAlias::FlatRead32((r13 + -17200));
    r4 = (r4 + 64);
    ctx->lr = 0x801EA510u;
    if constexpr (KnownRegArgsCpuCall<0x80359DFCu>(&func_80359DFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_80359DFC_39F0 = func_80359DFC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80359DFC_39F0);
        r4 = static_cast<uint32_t>(regargs_result_80359DFC_39F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x80359DFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r11 = (r1 + 64);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryAlias::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EA318(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EA318_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EA318 func_801EA318 preserves=true fpr_mask=0x00000000
