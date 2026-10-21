#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803EBB54(CpuContext* ctx);
extern "C" uint64_t func_803EBB54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EF074(CpuContext* ctx);
extern "C" uint64_t func_803EF074_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803EEF80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x803EEF80u);
    goto loc_803EEF80;

loc_803EEF80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r5;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x803EF074u>(&func_803EF074)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803EF074_700 = func_803EF074_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EF074_700);
        r4 = static_cast<uint32_t>(regargs_result_803EF074_700 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803EF074u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803EEFAC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_803EF05C;
    }
}

loc_803EEFB0:
{
    r0 = -1;
    r4 = (r30 + 65536);
    r3 = (r4 + r5);
    MemoryInline::FlatWrite8((r3 + -4352), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + -4252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 977));
}

loc_803EEFD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EF004;
    }
}

loc_803EEFD4:
{
    r0 = MemoryInline::FlatRead8((r4 + -16260));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803EEFE0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803EF05C;
    }
}

loc_803EEFE4:
{
    r3 = r30;
    r4 = 40;
    r5 = MemoryInline::FlatRead32(r31);
    r6 = 1;
    r7 = r31;
    r8 = MemoryInline::FlatRead32((r30 + 8));
    ctx->lr = 0x803EF000u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_803EBB54_E88 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_E88);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_E88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803EBB54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803EF05C;
}

loc_803EF004:
{
    r0 = MemoryInline::FlatRead8((r3 + -4152));
}

loc_803EF00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF05C;
    }
}

loc_803EF010:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r30 + 1092), r0);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r30 + 1096), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r30 + 1100), r0);
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
}

loc_803EF030:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803EF05C;
    }
}

loc_803EF034:
{
    // inline leaf 0x803D6AFC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16700));
    // end of inlined leaf 0x803D6AFC
    r4 = (r1 + 8);
    // inline leaf 0x8041D614 (9 guest instruction(s))
}

loc_inl2_0x8041D614:
{
}

loc_inl2_0x8041D618:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8041D61C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32(r4, r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    goto loc_inl2_cont_8041D614;
}

loc_inl2_return:
{
}

loc_inl2_cont_8041D614:
{
    // end of inlined leaf 0x8041D614
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_803EF048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EF05C;
    }
}

loc_803EF04C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r30 + 1096), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r30 + 1100), r0);
}

loc_803EF05C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_803EEF80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EEF80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EEF80 func_803EEF80 preserves=true fpr_mask=0x00000000
