#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802920F0(CpuContext* ctx);
extern "C" uint64_t func_802920F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D7B88(CpuContext* ctx);
extern "C" uint32_t func_802D7B88_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D7B88_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802D7B88_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_802D1640_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    goto loc_802D1640;

loc_802D1640:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = 32;
    r30 = 0;
    r0 = MemoryInline::FlatRead16((r29 + 970));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D167C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D168C;
    }
}

loc_802D1680:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 968), static_cast<uint8_t>(r0));
    goto loc_802D1758;
}

loc_802D168C:
{
    r3 = r29;
    r4 = 2;
    r5 = 9;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl2_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl2_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x802D2BC4;
    }
}

loc_inl2_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl2_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x802D2BC4;
    }
}

loc_inl2_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl2_cont_802D2B9C;
}

loc_inl2_0x802D2BC4:
{
    r3 = 0;
}

loc_inl2_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_802D16A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D16BC;
    }
}

loc_802D16A4:
{
    r3 = r29;
    r4 = 2;
    r5 = 19;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl3_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl3_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x802D2BC4;
    }
}

loc_inl3_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl3_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x802D2BC4;
    }
}

loc_inl3_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl3_cont_802D2B9C;
}

loc_inl3_0x802D2BC4:
{
    r3 = 0;
}

loc_inl3_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_802D16B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D16C0;
    }
}

loc_802D16BC:
{
    r30 = 1;
}

loc_802D16C0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802D7B88u) && KnownTranslatedCpuCall<0x802D7B88u>::kAvailable && !KnownTranslatedCpuCall<0x802D7B88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802D7B88u>()) {
        const auto state_free_result_802D7B88_11FB = func_802D7B88_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802D7B88_11FB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D7B88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_802D16CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D16D4;
    }
}

loc_802D16D0:
{
    r30 = 1;
}

loc_802D16D4:
{
    r3 = MemoryInline::FlatRead8((r29 + 369));
    r0 = (r3 + -4);
}

loc_802D16E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802D16F0;
    }
}

loc_802D16E4:
{
}

loc_802D16E8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802D16F0;
    }
}

loc_802D16EC:
{
    r31 = (r31 | 192);
}

loc_802D16F0:
{
    r3 = (r1 + 20);
    r4 = (r29 + 388);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13048));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r3 = (r1 + 8);
    r4 = (r29 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13048));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    r5 = (r29 + 376);
    r6 = 65536;
    r6 = (r6 + -1);
    r7 = (r31 & 65535);
    r8 = 1;
    r9 = MemoryInline::FlatRead8((r29 + 420));
    ctx->lr = 0x802D174Cu;
    if constexpr (KnownRegArgsCpuCall<0x802920F0u>(&func_802920F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_802920F0_1E25 = func_802920F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802920F0_1E25);
        r4 = static_cast<uint32_t>(regargs_result_802920F0_1E25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802920F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r29 + 968), static_cast<uint8_t>(r0));
}

loc_802D1758:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D1640(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D1640_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D1640 func_802D1640 preserves=true fpr_mask=0x00000000
