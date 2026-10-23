#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C554(CpuContext* ctx);
extern "C" void func_8004C554_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004C554_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_801BB52C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_801BB52C;

loc_801BB52C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 808));
}

loc_801BB550:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801BB65C;
    }
}

loc_801BB554:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 808), static_cast<uint8_t>(r0));
    r29 = 0;
    r30 = MemoryInline::FlatRead8((r3 + 559));
    // inline leaf 0x80130168 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80130168
}

loc_801BB56C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BB588;
    }
}

loc_801BB570:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801BB57C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BB588;
    }
}

loc_801BB580:
{
    r29 = 3;
    r30 = (r30 + 3);
}

loc_801BB588:
{
    r0 = (r30 & 255);
}

loc_801BB590:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_801BB65C;
    }
}

loc_801BB594:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 16);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r30 & 255);
    r4 = 1;
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004C554u) && KnownTranslatedCpuCall<0x8004C554u>::kAvailable && !KnownTranslatedCpuCall<0x8004C554u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004C554u>()) {
        const auto state_free_result_8004C554_122D = func_8004C554_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004C554_122D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r31 + 36);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 20);
    ctx->lr = 0x801BB5E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2B58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_801BB5E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801BB65C;
    }
}

loc_801BB5E8:
{
    r3 = MemoryInline::FlatRead8((r1 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead8((r1 + 28));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 25));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead8((r1 + 29));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r31 + 36);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x801BB65Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_801BB65C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801BB52C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801BB52C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BB52C func_801BB52C preserves=true fpr_mask=0x00000000
