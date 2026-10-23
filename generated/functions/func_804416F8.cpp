#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80455EB0(CpuContext* ctx);
extern "C" uint64_t func_80455EB0_ra148_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804416F8_ra1c0_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r8 = arg_r8;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    goto loc_804416F8;

loc_804416F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806E0000u;
    r30 = (r3 + -30960);
    r31 = MemoryInline::FlatRead32((r30 + 84));
    r3 = r31;
    r4 = 0;
    r5 = 136;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    ctx->lr = 0x80441730u;
    if constexpr (KnownRegArgsCpuCall<0x80455EB0u>(&func_80455EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_80455EB0_6AB = func_80455EB0_ra148_1e_18_0(ctx, r3, r6, r8, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80455EB0_6AB);
        r4 = static_cast<uint32_t>(regargs_result_80455EB0_6AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80455EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 84));
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = (r3 + 4);
    r0 = 2047;
    ctr = r0;
}

loc_80441748:
{
    r4 = MemoryInline::FlatRead32(r31);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80441748;
    }
}

loc_804417D0:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804416F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804416F8_ra1c0_1e_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F42 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804416F8 func_804416F8 preserves=true fpr_mask=0x00000000
