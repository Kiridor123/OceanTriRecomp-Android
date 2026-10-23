#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B2DB4(CpuContext* ctx);
extern "C" uint64_t func_803B2DB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B2C1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B2C1C;

loc_803B2C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r5 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803B2C3C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803B2C48;
    }
}

loc_803B2C40:
{
    r3 = 0;
    goto loc_803B2CAC;
}

loc_803B2C48:
{
    r0 = (r3 * 96);
    r31 = (r5 + r0);
    r0 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 148));
    r0 = (r3 & 8);
}

loc_803B2C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B2CA8;
    }
}

loc_803B2C68:
{
    r0 = (r3 & 2);
}

loc_803B2C70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B2CA8;
    }
}

loc_803B2C74:
{
    r3 = MemoryInline::FlatRead16((r31 + 152));
    r4 = 0;
    ctx->lr = 0x803B2C80u;
    if constexpr (KnownRegArgsCpuCall<0x803B2DB4u>(&func_803B2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B2DB4_73C = func_803B2DB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B2DB4_73C);
        r4 = static_cast<uint32_t>(regargs_result_803B2DB4_73C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B2DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16((r31 + 154));
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803B2C90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803B2C98;
    }
}

loc_803B2C94:
{
    r0 = 0;
}

loc_803B2C98:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 152));
    goto loc_803B2CAC;
}

loc_803B2CA8:
{
    r3 = 0;
}

loc_803B2CAC:
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

extern "C" void func_803B2C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B2C1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B2C1C func_803B2C1C preserves=true fpr_mask=0x00000000
