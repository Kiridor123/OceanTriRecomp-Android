#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8036C9EC(CpuContext* ctx);
extern "C" uint32_t func_8036C9EC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8036CB68_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8036CB68u);
    goto loc_8036CB68;

loc_8036CB68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 430), static_cast<uint8_t>(r0));
    ctx->lr = 0x8036CB90u;
    if constexpr (KnownRegArgsCpuCall<0x8036C9ECu>(&func_8036C9EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8036C9EC_3F4 = func_8036C9EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8036C9EC_3F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8036C9ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 + -3);
}

loc_8036CB98:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8036CBC8;
    }
}

loc_8036CB9C:
{
}

loc_8036CBA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8036CBB0;
    }
}

loc_8036CBA4:
{
}

loc_8036CBA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8036CBBC;
    }
}

loc_8036CBAC:
{
    goto loc_8036CBD0;
}

loc_8036CBB0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 431), static_cast<uint8_t>(r0));
    goto loc_8036CBD0;
}

loc_8036CBBC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 431), static_cast<uint8_t>(r0));
    goto loc_8036CBD0;
}

loc_8036CBC8:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 431), static_cast<uint8_t>(r0));
}

loc_8036CBD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8036CB68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8036CB68_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8036CB68 func_8036CB68 preserves=true fpr_mask=0x00000000
