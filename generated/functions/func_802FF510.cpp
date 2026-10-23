#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80212788(CpuContext* ctx);
extern "C" uint64_t func_80212788_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021CC14(CpuContext* ctx);
extern "C" uint64_t func_8021CC14_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802FF510_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_802FF510;

loc_802FF510:
{
    guest_range_0 = MemoryAlias::ResolveRangeHost((r1 + -416), 0, 424u, false, true);
    MemoryAlias::WriteResolved32(guest_range_0, 0u, (r1 + -416), r1);
    r1 = (r1 + -416);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_0, 420u, (r1 + 420), r0);
    r11 = (r1 + 416);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r26 = r4;
    r30 = 0x806B0000u;
    r29 = (r30 + -12348);
    r31 = MemoryAlias::FlatRead32((r29 + 172));
    r3 = r31;
    r4 = 0;
    r5 = 8192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryAlias::FlatWrite32((r31 + 92), r27);
    MemoryAlias::FlatWrite32((r31 + 96), r26);
    r0 = 11;
    MemoryAlias::FlatWriteRam8((r30 + -12348), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryAlias::FlatWriteRam8((r29 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x802FF568u;
    if constexpr (KnownRegArgsCpuCall<0x8021CC14u>(&func_8021CC14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8021CC14_DC7 = func_8021CC14_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021CC14_DC7);
        r4 = static_cast<uint32_t>(regargs_result_8021CC14_DC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021CC14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = MemoryAlias::FlatRead32((r13 + -17824));
    r30 = MemoryAlias::FlatRead16((r3 + 18486));
    r3 = 0x80790000u;
    r3 = (r3 + 20228);
    r4 = 2;
    r29 = 1374420992;
    r0 = (r29 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 100);
    r5 = (r30 - r0);
    if constexpr (KnownRegArgsCpuCall<0x80212788u>(&func_80212788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80212788_1740 = func_80212788_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212788_1740);
        r4 = static_cast<uint32_t>(regargs_result_80212788_1740 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80212788u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x80790000u;
    r3 = (r3 + 20240);
    r3_addr_0 = (r3 + r0);
    r28 = MemoryAlias::FlatRead32(r3_addr_0);
    r27 = 0;
    r29 = (r29 + -31457);
}

loc_802FF5BC:
{
    r3 = (r30 & 65535);
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
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r30 = r3;
    r3 = r28;
    r4 = 3;
    r6 = (r30 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 100);
    r5 = (r6 - r0);
    if constexpr (KnownRegArgsCpuCall<0x80212788u>(&func_80212788)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80212788_2136 = func_80212788_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212788_2136);
        r4 = static_cast<uint32_t>(regargs_result_80212788_2136 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80212788u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = (r3 & 255);
    r0 = (r27 & 255);
    r3 = (r31 + r0);
    MemoryAlias::FlatWrite8((r3 + 116), static_cast<uint8_t>(r4));
    r27 = (r27 + 1);
}

loc_802FF608:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(192))) {
        goto loc_802FF5BC;
    }
}

loc_802FF60C:
{
    r27 = 0;
    r6 = 0;
    r3 = 0x805E0000u;
    r3 = (r3 + -19608);
    r4 = (r1 + 8);
    r0 = 48;
    ctr = r0;
}

loc_802FF628:
{
    r5 = MemoryAlias::FlatRead16(r3);
}

loc_802FF630:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802FF6D0;
    }
}

loc_802FF634:
{
    r0 = MemoryAlias::FlatRead8((r3 + 4));
}

loc_802FF63C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FF64C;
    }
}

loc_802FF640:
{
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r4 = (r4 + 2);
    r27 = (r27 + 1);
}

loc_802FF64C:
{
    r6 = (r6 + 1);
    r5 = MemoryAlias::FlatRead16((r3 + 6));
}

loc_802FF658:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802FF6D0;
    }
}

loc_802FF65C:
{
    r0 = MemoryAlias::FlatRead8((r3 + 10));
}

loc_802FF664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FF674;
    }
}

loc_802FF668:
{
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r4 = (r4 + 2);
    r27 = (r27 + 1);
}

loc_802FF674:
{
    r6 = (r6 + 1);
    r5 = MemoryAlias::FlatRead16((r3 + 12));
}

loc_802FF680:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802FF6D0;
    }
}

loc_802FF684:
{
    r0 = MemoryAlias::FlatRead8((r3 + 16));
}

loc_802FF68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FF69C;
    }
}

loc_802FF690:
{
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r4 = (r4 + 2);
    r27 = (r27 + 1);
}

loc_802FF69C:
{
    r6 = (r6 + 1);
    r5 = MemoryAlias::FlatRead16((r3 + 18));
}

loc_802FF6A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802FF6D0;
    }
}

loc_802FF6AC:
{
    r0 = MemoryAlias::FlatRead8((r3 + 22));
}

loc_802FF6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FF6C4;
    }
}

loc_802FF6B8:
{
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r4 = (r4 + 2);
    r27 = (r27 + 1);
}

loc_802FF6C4:
{
    r3 = (r3 + 24);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802FF628;
    }
}

loc_802FF6D0:
{
    r3 = (r30 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl2_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF8C;
    }
}

loc_inl2_0x800CEF88:
{
    r0 = 1;
}

loc_inl2_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl2_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r4 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & -1073741824);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r0 = (r0 - r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -1);
    r4 = (r0 + r4);
    r0 = (r4 + 1);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 0;
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r30 = (r1 + 8);
    goto loc_802FF740;
}

loc_802FF708:
{
    r3 = (r3 & 65535);
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
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_6 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r4 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r0 = (r4 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r30_addr_2 = (r30 + r0);
    r5 = MemoryAlias::FlatRead16(r30_addr_2);
    r0 = (r28 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r4 = (r31 + r0);
    MemoryAlias::FlatWrite16((r4 + 308), static_cast<uint16_t>(r5));
    r28 = (r28 + 1);
}

loc_802FF740:
{
    r0 = (r28 & 255);
}

loc_802FF748:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r26))) {
        goto loc_802FF708;
    }
}

loc_802FF74C:
{
    r11 = (r1 + 416);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryAlias::FlatRead32((r1 + 420));
    ctx->lr = r0;
    r1 = (r1 + 416);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FF510(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FF510_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FF510 func_802FF510 preserves=true fpr_mask=0x00000000
