#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DF520_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t ctr = ctx->ctr;

    goto loc_804DF520;

loc_804DF520:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r28 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804DF360u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80630000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -22344);
    r30 = r3;
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r0 & 128);
}

loc_804DF56C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DF5F0;
    }
}

loc_804DF570:
{
    r3 = 0x80760000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + -25432);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = r3_addr_0;
}

loc_804DF584:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r29))) {
        goto loc_804DF604;
    }
}

loc_804DF588:
{
}

loc_804DF58C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DF598;
    }
}

loc_804DF590:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804DF604;
}

loc_804DF598:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804DF5A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r29))) {
        goto loc_804DF604;
    }
}

loc_804DF5A4:
{
}

loc_804DF5A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DF5B4;
    }
}

loc_804DF5AC:
{
    MemoryInline::FlatWrite32((r3 + 4), r29);
    goto loc_804DF604;
}

loc_804DF5B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804DF5BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r29))) {
        goto loc_804DF604;
    }
}

loc_804DF5C0:
{
}

loc_804DF5C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DF5D0;
    }
}

loc_804DF5C8:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_804DF604;
}

loc_804DF5D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_804DF5D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r29))) {
        goto loc_804DF604;
    }
}

loc_804DF5DC:
{
}

loc_804DF5E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DF604;
    }
}

loc_804DF5E4:
{
    MemoryInline::FlatWrite32((r3 + 12), r29);
    goto loc_804DF604;
}

loc_804DF5F0:
{
    r12 = r29;
    r3 = r28;
    r4 = r30;
    ctr = r12;
    ctx->lr = 0x804DF604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_804DF604:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DF520(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DF520_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DF520 func_804DF520 preserves=true fpr_mask=0x00000000
