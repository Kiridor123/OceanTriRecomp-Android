#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803FE634_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_803FE634;

loc_803FE634:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
}

loc_803FE658:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r0))) {
        goto loc_803FE7B8;
    }
}

loc_803FE65C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r31 = (r3 + r0);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r6 & 255);
}

loc_803FE690:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_803FE7AC;
    }
}

loc_803FE694:
{
    r3 = 0x80600000u;
    r3 = (r3 + 5120);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803FE7ACu:
        goto loc_803FE7AC;
        break;
    case 0x803FE6ACu:
        goto loc_803FE6AC;
        break;
    case 0x803FE6C4u:
        goto loc_803FE6C4;
        break;
    case 0x803FE6DCu:
        goto loc_803FE6DC;
        break;
    case 0x803FE6F4u:
        goto loc_803FE6F4;
        break;
    case 0x803FE714u:
        goto loc_803FE714;
        break;
    case 0x803FE72Cu:
        goto loc_803FE72C;
        break;
    case 0x803FE744u:
        goto loc_803FE744;
        break;
    case 0x803FE75Cu:
        goto loc_803FE75C;
        break;
    case 0x803FE78Cu:
        goto loc_803FE78C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[9] = r9;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803FE6AC:
{
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE6C4:
{
    r0 = MemoryInline::FlatRead16(r7);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE6DC:
{
    r0 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE6F4:
{
    r0 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE714:
{
    f0.d = MemoryInline::FlatReadFloat32(r7);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE72C:
{
    f0.d = MemoryInline::FlatReadFloat64(r7);
    MemoryInline::FlatWriteFloat64((r31 + 8), f0.d);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE744:
{
    r0 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE75C:
{
    MemoryInline::FlatWrite32((r31 + 8), r7);
    r3 = r7;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_16E4 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_16E4);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_16E4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16(r30);
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + 2);
    r0 = (r0 & 65535);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_803FE7AC;
}

loc_803FE78C:
{
    MemoryInline::FlatWrite32((r31 + 8), r7);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r8));
    r5 = MemoryInline::FlatRead16(r4);
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + 2);
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_803FE7AC:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
}

loc_803FE7B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FE634(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FE634_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x0000023B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE634 func_803FE634 preserves=true fpr_mask=0x00000000
