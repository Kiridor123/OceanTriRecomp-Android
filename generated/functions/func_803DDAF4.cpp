#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803DDAF4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_803DDAF4;

loc_803DDAF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_803DDB0C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(31))) {
        goto loc_803DDB5C;
    }
}

loc_803DDB10:
{
    r0 = (r4 * 796);
    r30 = (r3 + r0);
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 2804), r31);
    MemoryInline::FlatWrite32((r30 + 2808), r31);
    MemoryInline::FlatWrite8((r30 + 2812), static_cast<uint8_t>(r31));
    r3 = (r30 + 3068);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803DDB3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 3104), 0, 349u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 3172), r31);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 3176), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 3180), r31);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 3184), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 3104), r31);
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r30 + 3188), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 3192), r31);
    MemoryInline::WriteResolved8(guest_range_0, 348u, (r30 + 3452), static_cast<uint8_t>(r31));
}

loc_803DDB5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803DDAF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803DDAF4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803DDAF4 func_803DDAF4 preserves=true fpr_mask=0x00000000
