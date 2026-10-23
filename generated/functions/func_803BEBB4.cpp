#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2A20(CpuContext* ctx);
extern "C" uint64_t func_800F2A20_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_800F2A6C(CpuContext* ctx);
extern "C" uint64_t func_800F2A6C_ra8_2_18_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_803BEBB4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_803BEBB4;

loc_803BEBB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = (r3 & 255);
    r5 = 0x80600000u;
    r5 = (r5 + -29464);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_0);
    r0 = (r4 & 255);
}

loc_803BEBE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_803BEBF0;
    }
}

loc_803BEBEC:
{
    r31 = r5;
}

loc_803BEBF0:
{
    r0 = (r3 & 255);
}

loc_803BEBF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803BEC04;
    }
}

loc_803BEBFC:
{
    r0 = (r31 ^ 1);
    r31 = (r0 & 255);
}

loc_803BEC04:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0 = (r3 & 255);
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r4));
}

loc_803BEC1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_803BEC28;
    }
}

loc_803BEC20:
{
    r3 = (r31 & 255);
    ctx->lr = 0x803BEC28u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A20u>(&func_800F2A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A20_8AD = func_800F2A20_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A20_8AD);
        r4 = static_cast<uint32_t>(regargs_result_800F2A20_8AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_803BEC28:
{
    r0 = (r30 & 255);
}

loc_803BEC30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803BEC3C;
    }
}

loc_803BEC34:
{
    r3 = (r31 & 255);
    ctx->lr = 0x803BEC3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F2A6Cu>(&func_800F2A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A6C_CA6 = func_800F2A6C_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A6C_CA6);
        r4 = static_cast<uint32_t>(regargs_result_800F2A6C_CA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_803BEC3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BEBB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BEBB4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEBB4 func_803BEBB4 preserves=true fpr_mask=0x00000000
