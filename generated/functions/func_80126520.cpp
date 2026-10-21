#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_80126520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80126520u);
    goto loc_80126520;

loc_80126520:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_4AF = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_4AF);
        r4 = static_cast<uint32_t>(regargs_result_80126098_4AF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80126548:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80126640;
    }
}

loc_8012654C:
{
    r0 = (r31 & 255);
}

loc_80126554:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(22))) {
        goto loc_80126638;
    }
}

loc_80126558:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 6228);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80126570u:
        goto loc_80126570;
        break;
    case 0x80126578u:
        goto loc_80126578;
        break;
    case 0x80126580u:
        goto loc_80126580;
        break;
    case 0x80126588u:
        goto loc_80126588;
        break;
    case 0x80126590u:
        goto loc_80126590;
        break;
    case 0x80126598u:
        goto loc_80126598;
        break;
    case 0x801265A0u:
        goto loc_801265A0;
        break;
    case 0x801265A8u:
        goto loc_801265A8;
        break;
    case 0x801265C0u:
        goto loc_801265C0;
        break;
    case 0x801265C8u:
        goto loc_801265C8;
        break;
    case 0x801265D0u:
        goto loc_801265D0;
        break;
    case 0x801265D8u:
        goto loc_801265D8;
        break;
    case 0x801265E0u:
        goto loc_801265E0;
        break;
    case 0x801265E8u:
        goto loc_801265E8;
        break;
    case 0x801265F0u:
        goto loc_801265F0;
        break;
    case 0x801265F8u:
        goto loc_801265F8;
        break;
    case 0x80126600u:
        goto loc_80126600;
        break;
    case 0x80126608u:
        goto loc_80126608;
        break;
    case 0x80126610u:
        goto loc_80126610;
        break;
    case 0x80126618u:
        goto loc_80126618;
        break;
    case 0x80126620u:
        goto loc_80126620;
        break;
    case 0x80126628u:
        goto loc_80126628;
        break;
    case 0x80126630u:
        goto loc_80126630;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80126570:
{
    r3 = MemoryInline::FlatRead32(r4);
    goto loc_80126644;
}

loc_80126578:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_80126644;
}

loc_80126580:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_80126644;
}

loc_80126588:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_80126644;
}

loc_80126590:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_80126644;
}

loc_80126598:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    goto loc_80126644;
}

loc_801265A0:
{
    r3 = MemoryInline::FlatRead32((r4 + 24));
    goto loc_80126644;
}

loc_801265A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -25676);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_80126644;
}

loc_801265C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 32));
    goto loc_80126644;
}

loc_801265C8:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    goto loc_80126644;
}

loc_801265D0:
{
    r3 = MemoryInline::FlatRead32((r4 + 40));
    goto loc_80126644;
}

loc_801265D8:
{
    r3 = MemoryInline::FlatRead32((r4 + 44));
    goto loc_80126644;
}

loc_801265E0:
{
    r3 = MemoryInline::FlatRead32((r4 + 48));
    goto loc_80126644;
}

loc_801265E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80126644;
}

loc_801265F0:
{
    r3 = MemoryInline::FlatRead32((r4 + 56));
    goto loc_80126644;
}

loc_801265F8:
{
    r3 = MemoryInline::FlatRead32((r4 + 60));
    goto loc_80126644;
}

loc_80126600:
{
    r3 = MemoryInline::FlatRead32((r4 + 64));
    goto loc_80126644;
}

loc_80126608:
{
    r3 = MemoryInline::FlatRead32((r4 + 68));
    goto loc_80126644;
}

loc_80126610:
{
    r3 = MemoryInline::FlatRead32((r4 + 72));
    goto loc_80126644;
}

loc_80126618:
{
    r3 = MemoryInline::FlatRead32((r4 + 76));
    goto loc_80126644;
}

loc_80126620:
{
    r3 = MemoryInline::FlatRead32((r4 + 80));
    goto loc_80126644;
}

loc_80126628:
{
    r3 = MemoryInline::FlatRead32((r4 + 84));
    goto loc_80126644;
}

loc_80126630:
{
    r3 = MemoryInline::FlatRead32((r4 + 88));
    goto loc_80126644;
}

loc_80126638:
{
    r3 = 0;
    goto loc_80126644;
}

loc_80126640:
{
    r3 = 0;
}

loc_80126644:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80126520 func_80126520 preserves=true fpr_mask=0x00000000
