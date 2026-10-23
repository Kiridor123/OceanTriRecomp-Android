#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802730A8(CpuContext* ctx);
extern "C" uint64_t func_802730A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80272E18_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80272E18;

loc_80272E18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = (r4 & 65535);
    ctx->lr = 0x80272E34u;
    if constexpr (KnownRegArgsCpuCall<0x802730A8u>(&func_802730A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802730A8_449 = func_802730A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802730A8_449);
        r4 = static_cast<uint32_t>(regargs_result_802730A8_449 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802730A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 65535);
}

loc_80272E3C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_80272E7C;
    }
}

loc_80272E40:
{
    r0 = (r3 & 128);
}

loc_80272E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272E68;
    }
}

loc_80272E4C:
{
    r3 = (r3 & 127);
    r0 = (r3 + 26);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r31 + r0);
    r3 = (r3 + 632);
    // inline leaf 0x8004BD94 (10 guest instruction(s))
}

loc_inl0_0x8004BD94:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_inl0_0x8004BDA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004BDB0;
    }
}

loc_inl0_0x8004BDA8:
{
    r3 = 0;
    goto loc_inl0_cont_8004BD94;
}

loc_inl0_0x8004BDB0:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r3 = 1;
}

loc_inl0_cont_8004BD94:
{
    // end of inlined leaf 0x8004BD94
    goto loc_80272E80;
}

loc_80272E68:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    r3 = (r3 + 632);
    // inline leaf 0x8004BD94 (10 guest instruction(s))
}

loc_inl1_0x8004BD94:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_inl1_0x8004BDA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004BDB0;
    }
}

loc_inl1_0x8004BDA8:
{
    r3 = 0;
    goto loc_inl1_cont_8004BD94;
}

loc_inl1_0x8004BDB0:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r3 = 1;
}

loc_inl1_cont_8004BD94:
{
    // end of inlined leaf 0x8004BD94
    goto loc_80272E80;
}

loc_80272E7C:
{
    r3 = 2;
}

loc_80272E80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80272E18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80272E18_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80272E18 func_80272E18 preserves=true fpr_mask=0x00000000
