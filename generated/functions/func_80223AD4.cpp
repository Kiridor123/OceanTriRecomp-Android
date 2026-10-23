#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80223A7C(CpuContext* ctx);
extern "C" uint32_t func_80223A7C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80223AD4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80223AD4;

loc_80223AD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80223AE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80223AF4;
    }
}

loc_80223AE8:
{
}

loc_80223AEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80223B10;
    }
}

loc_80223AF0:
{
    goto loc_80223B2C;
}

loc_80223AF4:
{
    r3 = (r3 & 255);
    r4 = r5;
    // inline leaf 0x80223AA8 (11 guest instruction(s))
}

loc_inl0_0x80223AA8:
{
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r13 + -27496);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_inl0_0x80223ABC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x80223AC8;
    }
}

loc_inl0_0x80223AC0:
{
    r3 = 0;
    goto loc_inl0_cont_80223AA8;
}

loc_inl0_0x80223AC8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + r0);
}

loc_inl0_cont_80223AA8:
{
    // end of inlined leaf 0x80223AA8
}

loc_80223B04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80223B2C;
    }
}

loc_80223B08:
{
    r3 = MemoryInline::FlatRead8(r3);
    goto loc_80223B30;
}

loc_80223B10:
{
    r3 = (r3 & 255);
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x80223A7Cu>(&func_80223A7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223A7C_A34 = func_80223A7C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80223A7C_A34;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80223A7Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80223B20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80223B2C;
    }
}

loc_80223B24:
{
    r3 = MemoryInline::FlatRead8((r3 + 4));
    goto loc_80223B30;
}

loc_80223B2C:
{
    r3 = 0;
}

loc_80223B30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80223AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80223AD4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223AD4 func_80223AD4 preserves=true fpr_mask=0x00000000
