#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8054F6B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8054F6B0;

loc_8054F6B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8054F6BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_8054F6F8;
    }
}

loc_8054F6D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8054F6DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8054F6F8;
    }
}

loc_8054F6E0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F6F4u;
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
    goto loc_8054F748;
}

loc_8054F6F8:
{
}

loc_8054F6FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(7))) {
        goto loc_8054F728;
    }
}

loc_8054F700:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8054F708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8054F728;
    }
}

loc_8054F70C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 6;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F724u;
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
    goto loc_8054F748;
}

loc_8054F728:
{
}

loc_8054F72C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8054F748;
    }
}

loc_8054F730:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F748u;
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

loc_8054F748:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 44));
}

loc_8054F750:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(6))) {
        goto loc_8054F8E4;
    }
}

loc_8054F754:
{
    r3 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 4288);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8054F7B0u:
        goto loc_8054F7B0;
        break;
    case 0x8054F7D4u:
        goto loc_8054F7D4;
        break;
    case 0x8054F83Cu:
        goto loc_8054F83C;
        break;
    case 0x8054F818u:
        goto loc_8054F818;
        break;
    case 0x8054F880u:
        goto loc_8054F880;
        break;
    case 0x8054F76Cu:
        goto loc_8054F76C;
        break;
    case 0x8054F8C4u:
        goto loc_8054F8C4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8054F76C:
{
}

loc_8054F770:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8054F78C;
    }
}

loc_8054F774:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F78Cu;
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

loc_8054F78C:
{
}

loc_8054F790:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_8054F8E4;
    }
}

loc_8054F794:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F7ACu;
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
    goto loc_8054F8E4;
}

loc_8054F7B0:
{
}

loc_8054F7B4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_8054F8E4;
    }
}

loc_8054F7B8:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F7D0u;
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
    goto loc_8054F8E4;
}

loc_8054F7D4:
{
}

loc_8054F7D8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8054F7F4;
    }
}

loc_8054F7DC:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F7F4u;
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

loc_8054F7F4:
{
}

loc_8054F7F8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_8054F8E4;
    }
}

loc_8054F7FC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F814u;
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
    goto loc_8054F8E4;
}

loc_8054F818:
{
}

loc_8054F81C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_8054F8E4;
    }
}

loc_8054F820:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F838u;
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
    goto loc_8054F8E4;
}

loc_8054F83C:
{
}

loc_8054F840:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8054F85C;
    }
}

loc_8054F844:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F85Cu;
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

loc_8054F85C:
{
}

loc_8054F860:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_8054F8E4;
    }
}

loc_8054F864:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F87Cu;
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
    goto loc_8054F8E4;
}

loc_8054F880:
{
}

loc_8054F884:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8054F8A0;
    }
}

loc_8054F888:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F8A0u;
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

loc_8054F8A0:
{
}

loc_8054F8A4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_8054F8E4;
    }
}

loc_8054F8A8:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F8C0u;
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
    goto loc_8054F8E4;
}

loc_8054F8C4:
{
}

loc_8054F8C8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8054F8E4;
    }
}

loc_8054F8CC:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r3 = r30;
    r4 = 7;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054F8E4u;
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

loc_8054F8E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8054F6B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054F6B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8054F6B0 func_8054F6B0 preserves=true fpr_mask=0x00000000
