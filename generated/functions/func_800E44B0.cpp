#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4470(CpuContext* ctx);
extern "C" uint64_t func_800E4470_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800E44B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_800E44B0;

loc_800E44B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -31520);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r31 = (r4 & 255);
}

loc_800E44E4:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x800E4470u>(&func_800E4470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4470_579 = func_800E4470_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E4470_579);
        r4 = static_cast<uint32_t>(regargs_result_800E4470_579 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4470u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_800E44F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E45C0;
    }
}

loc_800E44F8:
{
}

loc_800E44FC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_800E450C;
    }
}

loc_800E4500:
{
}

loc_800E4504:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_800E451C;
    }
}

loc_800E4508:
{
    goto loc_800E4528;
}

loc_800E450C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_800E4514:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800E44E4;
    }
}

loc_800E4518:
{
    goto loc_800E4528;
}

loc_800E451C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_800E4524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800E44E4;
    }
}

loc_800E4528:
{
    r0 = MemoryInline::FlatRead16((r3 + 30));
    r0 = (r0 & 64);
}

loc_800E4534:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E454C;
    }
}

loc_800E4538:
{
    r12 = MemoryInline::FlatRead32((r3 + 32));
}

loc_800E4540:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800E454C;
    }
}

loc_800E4544:
{
    ctr = r12;
    ctx->lr = 0x800E454Cu;
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

loc_800E454C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_800E4558:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800E4568;
    }
}

loc_800E455C:
{
}

loc_800E4560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800E4594;
    }
}

loc_800E4564:
{
    goto loc_800E44E4;
}

loc_800E4568:
{
    r0 = (r30 & 255);
}

loc_800E4570:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E4584;
    }
}

loc_800E4574:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = 4;
    ctx->lr = 0x800E4580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004978Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_800E44E4;
}

loc_800E4584:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = -1;
    ctx->lr = 0x800E4590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004978Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_800E44E4;
}

loc_800E4594:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 196608);
    r4 = MemoryInline::FlatRead32((r4 + -28540));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x800E45B4u;
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
    r3 = 2047;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800885F4u>(ctx);
    goto loc_800E44E4;
}

loc_800E45C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E44B0 func_800E44B0 preserves=true fpr_mask=0x00000000
