#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEE9C(CpuContext* ctx);
extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021D8E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8021D8E8;

loc_8021D8E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 0x806B0000u;
    r31 = (r3 + -12984);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803BEE9Cu>(&func_803BEE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BEE9C_49A = func_803BEE9C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BEE9C_49A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BEE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r5 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r30 & 255);
    r4 = (r0 - r3);
    r0 = 2;
    ctr = r0;
}

loc_8021D938:
{
    r0 = (r5 & 255);
}

loc_8021D940:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8021D958;
    }
}

loc_8021D944:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
    goto loc_8021D970;
}

loc_8021D958:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
}

loc_8021D964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021D970;
    }
}

loc_8021D968:
{
    r0 = (r0 & 251);
}

loc_8021D96C:
{
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
}

loc_8021D970:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
}

loc_8021D97C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8021D994;
    }
}

loc_8021D980:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
    goto loc_8021D9AC;
}

loc_8021D994:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
}

loc_8021D9A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021D9AC;
    }
}

loc_8021D9A4:
{
    r0 = (r0 & 251);
}

loc_8021D9A8:
{
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
}

loc_8021D9AC:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
}

loc_8021D9B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8021D9D0;
    }
}

loc_8021D9BC:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
    goto loc_8021D9E8;
}

loc_8021D9D0:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
}

loc_8021D9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021D9E8;
    }
}

loc_8021D9E0:
{
    r0 = (r0 & 251);
}

loc_8021D9E4:
{
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
}

loc_8021D9E8:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
}

loc_8021D9F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8021DA0C;
    }
}

loc_8021D9F8:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
    goto loc_8021DA24;
}

loc_8021DA0C:
{
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 342));
}

loc_8021DA18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021DA24;
    }
}

loc_8021DA1C:
{
    r0 = (r0 & 251);
}

loc_8021DA20:
{
    MemoryInline::FlatWrite8((r3 + 342), static_cast<uint8_t>(r0));
}

loc_8021DA24:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021D938;
    }
}

loc_8021DA2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021D8E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021D8E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021D8E8 func_8021D8E8 preserves=true fpr_mask=0x00000000
