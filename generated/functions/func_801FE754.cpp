#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208B24(CpuContext* ctx);
extern "C" uint32_t func_80208B24_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80208B24_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80208B24_statefree_v1(uint32_t, uint32_t);

extern "C" uint64_t func_801FE754_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_801FE754;

loc_801FE754:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
}

loc_801FE770:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(23))) {
        goto loc_801FE77C;
    }
}

loc_801FE774:
{
    r3 = 1;
    goto loc_801FE80C;
}

loc_801FE77C:
{
    r3 = 0x806B0000u;
    r30 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r30 + 119));
}

loc_801FE78C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801FE798;
    }
}

loc_801FE790:
{
    r3 = 0;
    goto loc_801FE80C;
}

loc_801FE798:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r3 = (r31 + r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80208B24u) && KnownTranslatedCpuCall<0x80208B24u>::kAvailable && !KnownTranslatedCpuCall<0x80208B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80208B24u>()) {
        const auto state_free_result_80208B24_C81 = func_80208B24_statefree_v1(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80208B24_C81);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80208B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_801FE7BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FE7D4;
    }
}

loc_801FE7C0:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r30 + 85), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_801FE80C;
}

loc_801FE7D4:
{
    r0 = MemoryInline::FlatRead8((r30 + 118));
}

loc_801FE7DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801FE7F4;
    }
}

loc_801FE7E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r30 + 85), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_801FE80C;
}

loc_801FE7F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 85));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_801FE80C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801FE754(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FE754_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FE754 func_801FE754 preserves=true fpr_mask=0x00000000
