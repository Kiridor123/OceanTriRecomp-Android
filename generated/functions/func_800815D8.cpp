#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007BA20(CpuContext* ctx);
extern "C" uint32_t func_8007BA20_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8007BA20_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_800815D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800815D8u);
    goto loc_800815D8;

loc_800815D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
}

loc_800815F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800815FC;
    }
}

loc_800815F4:
{
    r3 = 0;
    goto loc_800816B8;
}

loc_800815FC:
{
}

loc_80081600:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(9))) {
        goto loc_800816AC;
    }
}

loc_80081604:
{
    r5 = 0x80590000u;
    r5 = (r5 + -1036);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800816ACu:
        goto loc_800816AC;
        break;
    case 0x8008161Cu:
        goto loc_8008161C;
        break;
    case 0x8008162Cu:
        goto loc_8008162C;
        break;
    case 0x8008163Cu:
        goto loc_8008163C;
        break;
    case 0x8008164Cu:
        goto loc_8008164C;
        break;
    case 0x8008165Cu:
        goto loc_8008165C;
        break;
    case 0x8008166Cu:
        goto loc_8008166C;
        break;
    case 0x8008167Cu:
        goto loc_8008167C;
        break;
    case 0x8008168Cu:
        goto loc_8008168C;
        break;
    case 0x8008169Cu:
        goto loc_8008169C;
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

loc_8008161C:
{
    r4 = 16;
    // inline leaf 0x8007BA20 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8007BA20
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008162C:
{
    r4 = 1;
    // inline leaf 0x8007BA20 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8007BA20
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008163C:
{
    r4 = 2;
    // inline leaf 0x8007BA20 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8007BA20
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008164C:
{
    r4 = 4;
    // inline leaf 0x8007BA20 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8007BA20
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008165C:
{
    r4 = 8;
    // inline leaf 0x8007BA20 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8007BA20
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008166C:
{
    r4 = 32;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA20u) && KnownTranslatedCpuCall<0x8007BA20u>::kAvailable && !KnownTranslatedCpuCall<0x8007BA20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA20u>()) {
        const auto state_free_result_8007BA20_1476 = func_8007BA20_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8007BA20_1476[0]);
        r3 = static_cast<uint32_t>(state_free_result_8007BA20_1476[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007BA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008167C:
{
    r4 = 64;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA20u) && KnownTranslatedCpuCall<0x8007BA20u>::kAvailable && !KnownTranslatedCpuCall<0x8007BA20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA20u>()) {
        const auto state_free_result_8007BA20_1823 = func_8007BA20_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8007BA20_1823[0]);
        r3 = static_cast<uint32_t>(state_free_result_8007BA20_1823[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007BA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008168C:
{
    r4 = 128;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA20u) && KnownTranslatedCpuCall<0x8007BA20u>::kAvailable && !KnownTranslatedCpuCall<0x8007BA20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA20u>()) {
        const auto state_free_result_8007BA20_1BD1 = func_8007BA20_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8007BA20_1BD1[0]);
        r3 = static_cast<uint32_t>(state_free_result_8007BA20_1BD1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007BA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_8008169C:
{
    r4 = 268435456;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA20u) && KnownTranslatedCpuCall<0x8007BA20u>::kAvailable && !KnownTranslatedCpuCall<0x8007BA20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA20u>()) {
        const auto state_free_result_8007BA20_1F85 = func_8007BA20_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8007BA20_1F85[0]);
        r3 = static_cast<uint32_t>(state_free_result_8007BA20_1F85[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007BA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_800816B4;
}

loc_800816AC:
{
    r3 = 0;
    goto loc_800816B8;
}

loc_800816B4:
{
    r3 = 1;
}

loc_800816B8:
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

extern "C" void func_800815D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800815D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800815D8 func_800815D8 preserves=true fpr_mask=0x00000000
