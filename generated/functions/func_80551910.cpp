#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80551910_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x80551910u);
    goto loc_80551910;

loc_80551910:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 6800), 0, 72u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 6800));
}

loc_8055192C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80551974;
    }
}

loc_80551930:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 6860));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 156));
    r0 = MemoryInline::FlatRead8((r5 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r5 + 187), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 6864));
    r5 = MemoryInline::FlatRead32((r5 + 156));
    r0 = MemoryInline::FlatRead8((r5 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r5 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 6868));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80551970u;
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
    goto loc_805519CC;
}

loc_80551974:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 6860));
    r4 = MemoryInline::FlatRead32((r4 + 156));
    r0 = MemoryInline::FlatRead8((r4 + 187));
    r0 = (r0 & 1);
}

loc_80551984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805519CC;
    }
}

loc_80551988:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 6860));
    r4 = MemoryInline::FlatRead32((r4 + 156));
    r0 = MemoryInline::FlatRead8((r4 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r4 + 187), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 6864));
    r4 = MemoryInline::FlatRead32((r4 + 156));
    r0 = MemoryInline::FlatRead8((r4 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r4 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 6864));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805519CCu;
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

loc_805519CC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 6808), 0, 96u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 6808));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r31 + 6820));
    r0 = (r3 + -1);
}

loc_805519DC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80551A24;
    }
}

loc_805519E0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r31 + 6892));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r31 + 6896));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r31 + 6900));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80551A20u;
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
    goto loc_80551A7C;
}

loc_80551A24:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r31 + 6892));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_80551A34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80551A7C;
    }
}

loc_80551A38:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r31 + 6892));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r31 + 6896));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r31 + 6896));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80551A7Cu;
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

loc_80551A7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80551910(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80551910_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80551910 func_80551910 preserves=true fpr_mask=0x00000000
