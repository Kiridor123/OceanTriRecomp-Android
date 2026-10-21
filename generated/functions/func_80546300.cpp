#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805433BC(CpuContext* ctx);
extern "C" uint64_t func_805433BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8055AB14(CpuContext* ctx);
extern "C" uint32_t func_8055AB14_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80546300_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x80546300u);
    goto loc_80546300;

loc_80546300:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = r5;
    r29 = r4;
    MemoryInline::FlatWrite32((r3 + 6588), r4);
    r3 = (r3 + 16);
    if constexpr (KnownRegArgsCpuCall<0x8055AB14u>(&func_8055AB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8055AB14_88B = func_8055AB14_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8055AB14_88B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8055AB14u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r31 + 6632));
    MemoryInline::FlatWrite32((r31 + 6460), r0);
    r0 = (r4 + 2);
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    MemoryInline::FlatWrite32((r31 + 6464), r5);
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r31 + 6468), r0);
    MemoryInline::FlatWrite32((r31 + 6636), r29);
    ctx->lr = 0x80546360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    MemoryInline::FlatWrite32((r31 + 6628), r3);
    r3 = (r31 + 6628);
    if constexpr (KnownRegArgsCpuCall<0x805433BCu>(&func_805433BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_805433BC_F29 = func_805433BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805433BC_F29);
        r4 = static_cast<uint32_t>(regargs_result_805433BC_F29 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x805433BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead16((r31 + 6632));
    r6 = MemoryInline::FlatRead32((r31 + 6628));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r5 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r8 = MemoryInline::FlatRead16(r6_addr_0);
    r7 = MemoryInline::FlatRead16((r5 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r6_addr_1 = (r6 + r4);
    r9 = MemoryInline::FlatRead16(r6_addr_1);
    r3 = (r6 + r0);
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite16(r6_addr_2, static_cast<uint16_t>(r8));
}

loc_805463A8:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    r3 = MemoryInline::FlatRead16((r31 + 6632));
    r6 = MemoryInline::FlatRead32((r31 + 6628));
    r0 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r4 = (r6 + r0);
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r9))) {
        goto loc_805463F0;
    }
}

loc_805463D4:
{
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & -8);
    r6_addr_4 = (r6 + r3);
    r0 = MemoryInline::FlatRead16(r6_addr_4);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r9));
    r6_addr_5 = (r6 + r3);
    MemoryInline::FlatWrite16(r6_addr_5, static_cast<uint16_t>(r9));
}

loc_805463F0:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 6640), r5);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80546300(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80546300_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80546300 func_80546300 preserves=true fpr_mask=0x00000000
