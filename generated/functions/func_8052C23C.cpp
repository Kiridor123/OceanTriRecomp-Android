#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8052C23C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8052C23Cu);
    goto loc_8052C23C;

loc_8052C23C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 32;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    ctx->lr = 0x8052C260u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C27C;
    }
}

loc_8052C268:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C280;
    }
}

loc_8052C270:
{
    // inline leaf 0x805342E0 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1176));
    r4 = 0x80650000u;
    r0 = 0;
    r4 = (r4 + -12912);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805342E0
    r31 = r3;
    goto loc_8052C280;
}

loc_8052C27C:
{
    r31 = 0;
}

loc_8052C280:
{
}

loc_8052C284:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8052C2A0;
    }
}

loc_8052C288:
{
    r0 = (r30 + 8);
    r3 = (r30 + 4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r5 = (r31 + 4);
    // inline leaf 0x80502478 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x80502478
}

loc_8052C2A0:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052C23C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052C23C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052C23C func_8052C23C preserves=true fpr_mask=0x00000000
