#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F02FC(CpuContext* ctx);
extern "C" uint64_t func_801F02FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801F0594_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x801F0594u);
    goto loc_801F0594;

loc_801F0594:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32(r5, r0);
    ctx->lr = 0x801F05BCu;
    if constexpr (KnownRegArgsCpuCall<0x801F02FCu>(&func_801F02FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F02FC_55D = func_801F02FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F02FC_55D);
        r4 = static_cast<uint32_t>(regargs_result_801F02FC_55D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801F02FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 38));
}

loc_801F05C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(17))) {
        goto loc_801F0670;
    }
}

loc_801F05C8:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -27816);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801F05E0u:
        goto loc_801F05E0;
        break;
    case 0x801F05E8u:
        goto loc_801F05E8;
        break;
    case 0x801F05F0u:
        goto loc_801F05F0;
        break;
    case 0x801F05F8u:
        goto loc_801F05F8;
        break;
    case 0x801F0600u:
        goto loc_801F0600;
        break;
    case 0x801F0608u:
        goto loc_801F0608;
        break;
    case 0x801F0610u:
        goto loc_801F0610;
        break;
    case 0x801F0618u:
        goto loc_801F0618;
        break;
    case 0x801F0620u:
        goto loc_801F0620;
        break;
    case 0x801F0628u:
        goto loc_801F0628;
        break;
    case 0x801F0630u:
        goto loc_801F0630;
        break;
    case 0x801F0638u:
        goto loc_801F0638;
        break;
    case 0x801F0640u:
        goto loc_801F0640;
        break;
    case 0x801F0648u:
        goto loc_801F0648;
        break;
    case 0x801F0650u:
        goto loc_801F0650;
        break;
    case 0x801F0658u:
        goto loc_801F0658;
        break;
    case 0x801F0660u:
        goto loc_801F0660;
        break;
    case 0x801F0668u:
        goto loc_801F0668;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801F05E0:
{
    r3 = 16;
    goto loc_801F0674;
}

loc_801F05E8:
{
    r3 = 16;
    goto loc_801F0674;
}

loc_801F05F0:
{
    r3 = 12;
    goto loc_801F0674;
}

loc_801F05F8:
{
    r3 = 7;
    goto loc_801F0674;
}

loc_801F0600:
{
    r3 = 8;
    goto loc_801F0674;
}

loc_801F0608:
{
    r3 = 9;
    goto loc_801F0674;
}

loc_801F0610:
{
    r3 = 10;
    goto loc_801F0674;
}

loc_801F0618:
{
    r3 = 11;
    goto loc_801F0674;
}

loc_801F0620:
{
    r3 = 14;
    goto loc_801F0674;
}

loc_801F0628:
{
    r3 = 15;
    goto loc_801F0674;
}

loc_801F0630:
{
    r3 = 13;
    goto loc_801F0674;
}

loc_801F0638:
{
    r3 = 6;
    goto loc_801F0674;
}

loc_801F0640:
{
    r3 = 1;
    goto loc_801F0674;
}

loc_801F0648:
{
    r3 = 2;
    goto loc_801F0674;
}

loc_801F0650:
{
    r3 = 3;
    goto loc_801F0674;
}

loc_801F0658:
{
    r3 = 4;
    goto loc_801F0674;
}

loc_801F0660:
{
    r3 = 5;
    goto loc_801F0674;
}

loc_801F0668:
{
    r3 = 17;
    goto loc_801F0674;
}

loc_801F0670:
{
    r3 = 16;
}

loc_801F0674:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F0594(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F0594_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F0594 func_801F0594 preserves=true fpr_mask=0x00000000
