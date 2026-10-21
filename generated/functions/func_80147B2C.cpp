#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80147BD8(CpuContext* ctx);
extern "C" uint32_t func_80147BD8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80147C64(CpuContext* ctx);
extern "C" uint32_t func_80147C64_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80147C98(CpuContext* ctx);
extern "C" uint32_t func_80147C98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80147CC8(CpuContext* ctx);
extern "C" uint32_t func_80147CC8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80147B2C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80147B2Cu);
    goto loc_80147B2C;

loc_80147B2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r31 = (r3 + 144);
    r30 = (r3 + 304);
}

loc_80147B54:
{
    r3 = r31;
    ctx->lr = 0x80147B5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80147CC8u>(&func_80147CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80147CC8_560 = func_80147CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80147CC8_560;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80147CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = (r31 + 20);
}

loc_80147B64:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_80147B54;
    }
}

loc_80147B68:
{
    r29 = (r28 + 504);
}

loc_80147B6C:
{
    r3 = r30;
    ctx->lr = 0x80147B74u;
    if constexpr (KnownRegArgsCpuCall<0x80147C98u>(&func_80147C98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80147C98_85A = func_80147C98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80147C98_85A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80147C98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 20);
}

loc_80147B7C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r29))) {
        goto loc_80147B6C;
    }
}

loc_80147B80:
{
    r31 = (r28 + 864);
}

loc_80147B84:
{
    r3 = r29;
    ctx->lr = 0x80147B8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80147C64u>(&func_80147C64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80147C64_B54 = func_80147C64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80147C64_B54;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80147C64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = (r29 + 36);
}

loc_80147B94:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80147B84;
    }
}

loc_80147B98:
{
    r29 = (r28 + 876);
    r31 = (r28 + 3484);
}

loc_80147BA0:
{
    r3 = r29;
    ctx->lr = 0x80147BA8u;
    if constexpr (KnownRegArgsCpuCall<0x80147BD8u>(&func_80147BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80147BD8_E66 = func_80147BD8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80147BD8_E66;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80147BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = (r29 + 1304);
}

loc_80147BB0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80147BA0;
    }
}

loc_80147BB4:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80147B2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80147B2C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80147B2C func_80147B2C preserves=true fpr_mask=0x00000000
