#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80556E28_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80556E28;

loc_80556E28:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80660000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + -26256);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r31 = 0x80650000u;
    r31 = (r31 + 10648);
    r5 = (r5 + r0);
    r30 = r4;
    r4 = (r31 + 1020);
    r29 = r3;
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32((r5 + 64));
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    r3 = (r3 + 28);
    ctx->lr = 0x80556E7Cu;
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

loc_80556E80:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(7))) {
        goto loc_80557000;
    }
}

loc_80556E84:
{
    r3 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 11740);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80556E9Cu:
        goto loc_80556E9C;
        break;
    case 0x80556EB8u:
        goto loc_80556EB8;
        break;
    case 0x80556ED4u:
        goto loc_80556ED4;
        break;
    case 0x80556FA4u:
        goto loc_80556FA4;
        break;
    case 0x80556EF0u:
        goto loc_80556EF0;
        break;
    case 0x80556F0Cu:
        goto loc_80556F0C;
        break;
    case 0x80556F44u:
        goto loc_80556F44;
        break;
    case 0x80556F28u:
        goto loc_80556F28;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80556E9C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556EB4u;
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
    goto loc_80557000;
}

loc_80556EB8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556ED0u;
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
    goto loc_80557000;
}

loc_80556ED4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556EECu;
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
    goto loc_80557000;
}

loc_80556EF0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 6;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556F08u;
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
    goto loc_80557000;
}

loc_80556F0C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556F24u;
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
    goto loc_80557000;
}

loc_80556F28:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 10;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556F40u;
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
    goto loc_80557000;
}

loc_80556F44:
{
    r0 = MemoryInline::FlatRead32((r29 + 208));
}

loc_80556F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80556F6C;
    }
}

loc_80556F50:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 8;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556F68u;
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
    goto loc_80557000;
}

loc_80556F6C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556F84u;
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
    r12 = MemoryInline::FlatRead32((r29 + 28));
    r3 = (r29 + 28);
    r4 = (r31 + 1020);
    r5 = (r31 + 1040);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80556FA0u;
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
    goto loc_80557000;
}

loc_80556FA4:
{
    r0 = MemoryInline::FlatRead32((r29 + 208));
}

loc_80556FAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80556FCC;
    }
}

loc_80556FB0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 7;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556FC8u;
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
    goto loc_80557000;
}

loc_80556FCC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80556FE4u;
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
    r12 = MemoryInline::FlatRead32((r29 + 28));
    r3 = (r29 + 28);
    r4 = (r31 + 1020);
    r5 = (r31 + 1064);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80557000u;
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

loc_80557000:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80556E28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80556E28_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80556E28 func_80556E28 preserves=true fpr_mask=0x00000000
