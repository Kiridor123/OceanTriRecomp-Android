#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D7078(CpuContext* ctx);
extern "C" uint64_t func_802D7078_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_802CCF64_ra38_ce_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f6, double arg_f7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;

    goto loc_802CCF64;

loc_802CCF64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r30 + 452));
}

loc_802CCF90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802CD024;
    }
}

loc_802CCF94:
{
    r0 = (r0 * 2840);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_802CCFA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CCFCC;
    }
}

loc_802CCFA8:
{
    r0 = MemoryInline::FlatRead8((r5 + 485));
}

loc_802CCFB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802CCFCC;
    }
}

loc_802CCFB4:
{
}

loc_802CCFB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802CCFCC;
    }
}

loc_802CCFBC:
{
    r3 = MemoryInline::FlatRead8((r5 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 420));
}

loc_802CCFC8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802CCFF0;
    }
}

loc_802CCFCC:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 452), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 456), r0);
    r3 = r30;
    // inline leaf 0x802D427C (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 465), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D427C
    r0 = 5;
    MemoryInline::FlatWrite8((r30 + 460), static_cast<uint8_t>(r0));
    goto loc_802CD024;
}

loc_802CCFF0:
{
    r0 = (r31 & 255);
}

loc_802CCFF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CD018;
    }
}

loc_802CCFFC:
{
    r4 = MemoryInline::FlatRead32((r30 + 456));
}

loc_802CD004:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802CD018;
    }
}

loc_802CD008:
{
    r3 = r30;
    r6 = (r30 + 432);
    ctx->lr = 0x802CD014u;
    if constexpr (KnownRegArgsCpuCall<0x802D7078u>(&func_802D7078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7078_10C0 = func_802D7078_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802D7078_10C0);
        r4 = static_cast<uint32_t>(regargs_result_802D7078_10C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        InvokeDirectCpu<0x802D7078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    goto loc_802CD024;
}

loc_802CD018:
{
    r3 = (r30 + 432);
    r4 = (r5 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802CD024:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CCF64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CCF64_ra38_ce_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE00030CE fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CCF64 func_802CCF64 preserves=true fpr_mask=0x00000000
