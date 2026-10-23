#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800D076C(CpuContext* ctx);
extern "C" uint32_t func_800D076C_ra0_0_8_0(CpuContext*);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8026FEA8(CpuContext* ctx);
extern "C" uint64_t func_8026FEA8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802753F8(CpuContext* ctx);
extern "C" uint32_t func_802753F8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8029FAD8(CpuContext* ctx);
extern "C" uint32_t func_8029FAD8_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BECD4(CpuContext* ctx);
extern "C" uint32_t func_803BECD4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_800D076C_statefree();
extern "C" MkwStateFreeResult2 func_802753F8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802753F8_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8029F898_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    goto loc_8029F898;

loc_8029F898:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 0x806B0000u;
    r31 = (r3 + -4792);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    MemoryInline::FlatWriteRam8((r31 + 15), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8029F8D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029F8D4:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F8E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029F8E4:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8029F8F8;
    }
}

loc_8029F8F4:
{
    goto loc_8029FABC;
}

loc_8029F8F8:
{
    r3 = 1;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F904:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029F908:
{
    r3 = 1;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F914:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8029F91C;
    }
}

loc_8029F918:
{
    goto loc_8029FABC;
}

loc_8029F91C:
{
    r3 = 2;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F928:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029F92C:
{
    r3 = 2;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F938:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8029F940;
    }
}

loc_8029F93C:
{
    goto loc_8029FABC;
}

loc_8029F940:
{
    r3 = 3;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F94C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029F950:
{
    r3 = 3;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8029F95C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8029F964;
    }
}

loc_8029F960:
{
    goto loc_8029FABC;
}

loc_8029F964:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl9_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl9_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CFB10;
    }
}

loc_inl9_0x800CFB08:
{
    r3 = 0;
    goto loc_inl9_cont_800CFAF4;
}

loc_inl9_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl9_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl9_0x800CFB24;
    }
}

loc_inl9_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl9_cont_800CFAF4;
}

loc_inl9_0x800CFB24:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl9_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_8029F974:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029FABC;
    }
}

loc_8029F978:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r29 = (r29 + r0);
    MemoryInline::FlatWriteRam32((r31 + 400), r29);
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_8029F994:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029F9B4;
    }
}

loc_8029F998:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D076Cu) && KnownTranslatedCpuCall<0x800D076Cu>::kAvailable && !KnownTranslatedCpuCall<0x800D076Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D076Cu>()) {
        const auto state_free_result_800D076C_239D = func_800D076C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_800D076C_239D[0]);
        r3 = static_cast<uint32_t>(state_free_result_800D076C_239D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D076Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_8029F9A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029F9B4;
    }
}

loc_8029F9A4:
{
    r0 = MemoryInline::FlatRead8((r29 + 2817));
    r0 = (r0 & 4);
}

loc_8029F9B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029FABC;
    }
}

loc_8029F9B4:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8026FEA8u>(&func_8026FEA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FEA8_295D = func_8026FEA8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FEA8_295D);
        r4 = static_cast<uint32_t>(regargs_result_8026FEA8_295D >> 32);
        r0 = ctx->gpr[0];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8026FEA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_8029F9C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029F9D0;
    }
}

loc_8029F9C4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 16), static_cast<uint8_t>(r0));
    goto loc_8029F9D8;
}

loc_8029F9D0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 16), static_cast<uint8_t>(r0));
}

loc_8029F9D8:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_8029F9E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029FA14;
    }
}

loc_8029F9E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8029F9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_2EBB = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_2EBB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r31 + 404), r3);
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_8029F9F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029FA08;
    }
}

loc_8029F9FC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 408), r0);
    goto loc_8029FA3C;
}

loc_8029FA08:
{
    r0 = (r3 + 96);
    MemoryInline::FlatWriteRam32((r31 + 408), r0);
    goto loc_8029FA3C;
}

loc_8029FA14:
{
    r3 = (r29 + 632);
    MemoryInline::FlatWriteRam32((r31 + 404), r3);
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_8029FA24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029FA34;
    }
}

loc_8029FA28:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 408), r0);
    goto loc_8029FA3C;
}

loc_8029FA34:
{
    r0 = (r3 + 104);
    MemoryInline::FlatWriteRam32((r31 + 408), r0);
}

loc_8029FA3C:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802753F8u) && KnownTranslatedCpuCall<0x802753F8u>::kAvailable && !KnownTranslatedCpuCall<0x802753F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802753F8u>()) {
        const auto state_free_result_802753F8_35F1 = func_802753F8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802753F8_35F1[0]);
        r3 = static_cast<uint32_t>(state_free_result_802753F8_35F1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802753F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_8029FA48:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029FA4C:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 571u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r31 + 14), static_cast<uint8_t>(r0));
    r29 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 17), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 1), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 2), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r31 + 26), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r31 + 28), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r31 + 21), static_cast<uint8_t>(r29));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 570u, (r31 + 570), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x8029FA84u;
    if constexpr (KnownRegArgsCpuCall<0x8029FAD8u>(&func_8029FAD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8029FAD8_3ED4 = func_8029FAD8_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8029FAD8_3ED4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029FAD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = 10;
    MemoryInline::FlatWriteRam8((r31 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 33), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 798), static_cast<uint8_t>(r29));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D076Cu) && KnownTranslatedCpuCall<0x800D076Cu>::kAvailable && !KnownTranslatedCpuCall<0x800D076Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D076Cu>()) {
        const auto state_free_result_800D076C_4362 = func_800D076C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_800D076C_4362[0]);
        r3 = static_cast<uint32_t>(state_free_result_800D076C_4362[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D076Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_8029FA9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029FAAC;
    }
}

loc_8029FAA0:
{
    r3 = 27;
    if constexpr (KnownRegArgsCpuCall<0x803BECD4u>(&func_803BECD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BECD4_4849 = func_803BECD4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BECD4_4849;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BECD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWriteRam8((r31 + 799), static_cast<uint8_t>(r3));
}

loc_8029FAAC:
{
}

loc_8029FAB0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8029FABC;
    }
}

loc_8029FAB4:
{
    r3 = 5;
    ctx->lr = 0x8029FABCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DBC94_4B49 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4B49);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4B49 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_8029FABC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029F898(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029F898_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029F898 func_8029F898 preserves=true fpr_mask=0x00000000
