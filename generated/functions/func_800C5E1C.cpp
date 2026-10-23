#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B4B2C(CpuContext* ctx);
extern "C" uint32_t func_800B4B2C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800B9AA8(CpuContext* ctx);
extern "C" uint32_t func_800B9AA8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BBE50(CpuContext* ctx);
extern "C" uint32_t func_800BBE50_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BE17C(CpuContext* ctx);
extern "C" uint32_t func_800BE17C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BEFC0(CpuContext* ctx);
extern "C" uint32_t func_800BEFC0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BF840(CpuContext* ctx);
extern "C" uint32_t func_800BF840_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BFFFC(CpuContext* ctx);
extern "C" uint32_t func_800BFFFC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800C5E1C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800C5E1C;

loc_800C5E1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r0 = MemoryInline::FlatRead8((r13 + -17648));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5E3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5E54;
    }
}

loc_800C5E40:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27240);
    ctx->lr = 0x800C5E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B9AA8u>(&func_800B9AA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800B9AA8_7B0 = func_800B9AA8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800B9AA8_7B0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800B9AA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17648), static_cast<uint8_t>(r0));
}

loc_800C5E54:
{
    r0 = MemoryInline::FlatRead8((r13 + -17647));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5E78;
    }
}

loc_800C5E64:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27464);
    ctx->lr = 0x800C5E70u;
    if constexpr (KnownRegArgsCpuCall<0x800BBE50u>(&func_800BBE50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800BBE50_BEA = func_800BBE50_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BBE50_BEA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800BBE50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17647), static_cast<uint8_t>(r0));
}

loc_800C5E78:
{
    r0 = MemoryInline::FlatRead8((r13 + -17646));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5E9C;
    }
}

loc_800C5E88:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27688);
    ctx->lr = 0x800C5E94u;
    if constexpr (KnownRegArgsCpuCall<0x800BE17Cu>(&func_800BE17C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800BE17C_1024 = func_800BE17C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BE17C_1024;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800BE17Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17646), static_cast<uint8_t>(r0));
}

loc_800C5E9C:
{
    r0 = MemoryInline::FlatRead8((r13 + -17645));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5EA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5EC0;
    }
}

loc_800C5EAC:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27912);
    ctx->lr = 0x800C5EB8u;
    if constexpr (KnownRegArgsCpuCall<0x800BEFC0u>(&func_800BEFC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800BEFC0_1460 = func_800BEFC0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BEFC0_1460;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800BEFC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17645), static_cast<uint8_t>(r0));
}

loc_800C5EC0:
{
    r0 = MemoryInline::FlatRead8((r13 + -17644));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5ECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5EE4;
    }
}

loc_800C5ED0:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28136);
    ctx->lr = 0x800C5EDCu;
    if constexpr (KnownRegArgsCpuCall<0x800BF840u>(&func_800BF840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800BF840_189C = func_800BF840_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BF840_189C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800BF840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17644), static_cast<uint8_t>(r0));
}

loc_800C5EE4:
{
    r0 = MemoryInline::FlatRead8((r13 + -17643));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5EF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5F08;
    }
}

loc_800C5EF4:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28360);
    ctx->lr = 0x800C5F00u;
    if constexpr (KnownRegArgsCpuCall<0x800B4B2Cu>(&func_800B4B2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800B4B2C_1CD8 = func_800B4B2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800B4B2C_1CD8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800B4B2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17643), static_cast<uint8_t>(r0));
}

loc_800C5F08:
{
    r0 = MemoryInline::FlatRead8((r13 + -17642));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800C5F14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C5F2C;
    }
}

loc_800C5F18:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28584);
    ctx->lr = 0x800C5F24u;
    if constexpr (KnownRegArgsCpuCall<0x800BFFFCu>(&func_800BFFFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800BFFFC_2114 = func_800BFFFC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800BFFFC_2114;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800BFFFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17642), static_cast<uint8_t>(r0));
}

loc_800C5F2C:
{
}

loc_800C5F30:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(3))) {
        goto loc_800C5F68;
    }
}

loc_800C5F34:
{
}

loc_800C5F38:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(4))) {
        goto loc_800C5F74;
    }
}

loc_800C5F3C:
{
}

loc_800C5F40:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_800C5F80;
    }
}

loc_800C5F44:
{
}

loc_800C5F48:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_800C5F8C;
    }
}

loc_800C5F4C:
{
}

loc_800C5F50:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800C5F98;
    }
}

loc_800C5F54:
{
}

loc_800C5F58:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(5))) {
        goto loc_800C5FA4;
    }
}

loc_800C5F5C:
{
}

loc_800C5F60:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(6))) {
        goto loc_800C5FB0;
    }
}

loc_800C5F64:
{
    goto loc_800C5FBC;
}

loc_800C5F68:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27240);
    goto loc_800C5FC4;
}

loc_800C5F74:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27464);
    goto loc_800C5FC4;
}

loc_800C5F80:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27688);
    goto loc_800C5FC4;
}

loc_800C5F8C:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27912);
    goto loc_800C5FC4;
}

loc_800C5F98:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28136);
    goto loc_800C5FC4;
}

loc_800C5FA4:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28360);
    goto loc_800C5FC4;
}

loc_800C5FB0:
{
    r3 = 0x80690000u;
    r3 = (r3 + 28584);
    goto loc_800C5FC4;
}

loc_800C5FBC:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27240);
}

loc_800C5FC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C5E1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C5E1C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C5E1C func_800C5E1C preserves=true fpr_mask=0x00000000
