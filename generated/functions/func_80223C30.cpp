#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80223AA8(CpuContext* ctx);
extern "C" uint32_t func_80223AA8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80223CB8(CpuContext* ctx);
extern "C" uint64_t func_80223CB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80223C30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80223C30;

loc_80223C30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r4 + 20));
    r4 = MemoryInline::FlatRead32((r4 + 552));
    // inline leaf 0x80223A7C (11 guest instruction(s))
}

loc_inl0_0x80223A7C:
{
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r13 + -27504);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_inl0_0x80223A90:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x80223A9C;
    }
}

loc_inl0_0x80223A94:
{
    r3 = 0;
    goto loc_inl0_cont_80223A7C;
}

loc_inl0_0x80223A9C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
}

loc_inl0_cont_80223A7C:
{
    // end of inlined leaf 0x80223A7C
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead8((r4 + 20));
    r4 = MemoryInline::FlatRead32((r4 + 556));
    if constexpr (KnownRegArgsCpuCall<0x80223AA8u>(&func_80223AA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223AA8_8FE = func_80223AA8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80223AA8_8FE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80223AA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80223C70:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80223C7C;
    }
}

loc_80223C74:
{
    r4 = MemoryInline::FlatRead8((r31 + 5));
    goto loc_80223C80;
}

loc_80223C7C:
{
    r4 = -1;
}

loc_80223C80:
{
}

loc_80223C84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80223C98;
    }
}

loc_80223C88:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80223C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80223C98;
    }
}

loc_80223C94:
{
    r4 = (r4 & -5);
}

loc_80223C98:
{
    r3 = r30;
    ctx->lr = 0x80223CA0u;
    if constexpr (KnownRegArgsCpuCall<0x80223CB8u>(&func_80223CB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223CB8_DBD = func_80223CB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223CB8_DBD);
        r4 = static_cast<uint32_t>(regargs_result_80223CB8_DBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223CB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80223C30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80223C30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223C30 func_80223C30 preserves=true fpr_mask=0x00000000
