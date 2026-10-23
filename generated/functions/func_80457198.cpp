#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_80457198;

loc_80457198:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = 0;
    r31 = r3;
    r30 = r7;
    r29 = r6;
    r28 = r4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
    goto loc_80457204;
}

loc_804571E0:
{
    r12 = r28;
    r3 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x804571F4u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r31 = (r31 + r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_80457204:
{
    r4 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8045720C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r30))) {
        goto loc_804571E0;
    }
}

loc_80457210:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80457218:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80457270;
    }
}

loc_8045721C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80457224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457270;
    }
}

loc_80457228:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 * r4);
    r31 = (r3 + r0);
    goto loc_80457264;
}

loc_8045723C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = -1;
    r12 = MemoryInline::FlatRead32((r1 + 20));
    r31 = (r31 - r0);
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x80457258u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_80457264:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8045726C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045723C;
    }
}

loc_80457270:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457198(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457198_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80457198 func_80457198 preserves=true fpr_mask=0x00000000
