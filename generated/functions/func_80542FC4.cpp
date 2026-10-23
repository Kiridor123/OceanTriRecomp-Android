#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80542FC4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_80542FC4;

loc_80542FC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r4 = 80;
    r3 = r30;
    ctx->lr = 0x80542FF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80542FF8:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80543048;
    }
}

loc_80543000:
{
    r0 = 512;
    r12 = 0x80650000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = 0;
    r12 = (r12 + 14952);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    r12 = MemoryInline::FlatRead32((r12 + 196));
    ctr = r12;
    ctx->lr = 0x80543048u;
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
}

loc_80543048:
{
    MemoryInline::FlatWrite32((r29 + 4), r31);
    r3 = r31;
    r4 = r30;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80543064u;
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
    r3 = r30;
    r4 = 80;
    ctx->lr = 0x80543070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80543074:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805430D0;
    }
}

loc_8054307C:
{
    r0 = 512;
    r12 = 0x80650000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = 0;
    r12 = (r12 + 14952);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r3 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    r12 = MemoryInline::FlatRead32((r12 + 196));
    ctr = r12;
    ctx->lr = 0x805430C4u;
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
    r3 = 0x80650000u;
    r3 = (r3 + 5720);
    MemoryInline::FlatWrite32(r31, r3);
}

loc_805430D0:
{
    MemoryInline::FlatWrite32((r29 + 8), r31);
    r3 = r31;
    r4 = r30;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805430ECu;
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
    r3 = r30;
    r4 = 80;
    ctx->lr = 0x805430F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_805430FC:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80543158;
    }
}

loc_80543104:
{
    r0 = 512;
    r12 = 0x80650000u;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = 0;
    r12 = (r12 + 14952);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 36u, (r3 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r0);
    r12 = MemoryInline::FlatRead32((r12 + 196));
    ctr = r12;
    ctx->lr = 0x8054314Cu;
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
    r3 = 0x80650000u;
    r3 = (r3 + 5460);
    MemoryInline::FlatWrite32(r31, r3);
}

loc_80543158:
{
    MemoryInline::FlatWrite32((r29 + 12), r31);
    r3 = r31;
    r4 = r30;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80543174u;
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
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80542FC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80542FC4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80542FC4 func_80542FC4 preserves=true fpr_mask=0x00000000
