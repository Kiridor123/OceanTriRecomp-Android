#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AB678(CpuContext* ctx);
extern "C" uint64_t func_803AB678_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803AD06C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803AD06C;

loc_803AD06C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = r5;
    r3 = (r5 + 1012);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 & 255);
}

loc_803AD0A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803AD15C;
    }
}

loc_803AD0A8:
{
    ctx->lr = 0x803AD0ACu;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_65E = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_65E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 1076));
}

loc_803AD0C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AD0EC;
    }
}

loc_803AD0CC:
{
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 22;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r6 = 3;
    goto loc_803AD110;
}

loc_803AD0EC:
{
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 22;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r6 = 5;
}

loc_803AD110:
{
    r0 = (r29 & 255);
}

loc_803AD118:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803AD15C;
    }
}

loc_803AD11C:
{
    r4 = (r31 + 156);
    r3 = 0;
    goto loc_803AD134;
}

loc_803AD128:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r3 = (r3 + r0);
    r4 = (r4 + 4);
}

loc_803AD134:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803AD13C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AD128;
    }
}

loc_803AD140:
{
    r7 = (r3 & 65535);
}

loc_803AD148:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803AD15C;
    }
}

loc_803AD14C:
{
    r3 = (r1 + 8);
    r4 = (r31 + 156);
    r5 = (r30 + 1012);
    ctx->lr = 0x803AD15Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AB678u>(&func_803AB678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB678_10AF = func_803AB678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB678_10AF);
        r4 = static_cast<uint32_t>(regargs_result_803AB678_10AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803AD15C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AD06C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AD06C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AD06C func_803AD06C preserves=true fpr_mask=0x00000000
