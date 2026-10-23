#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802730A8(CpuContext* ctx);
extern "C" uint64_t func_802730A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027DEEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027DEEC;

loc_8027DEEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
}

loc_8027DF08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027DF20;
    }
}

loc_8027DF0C:
{
}

loc_8027DF10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8027DF2C;
    }
}

loc_8027DF14:
{
}

loc_8027DF18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8027DF38;
    }
}

loc_8027DF1C:
{
    goto loc_8027DF44;
}

loc_8027DF20:
{
    r3 = 0x80790000u;
    r31 = (r3 + 17648);
    goto loc_8027DF70;
}

loc_8027DF2C:
{
    r3 = 0x80790000u;
    r31 = (r3 + 17656);
    goto loc_8027DF70;
}

loc_8027DF38:
{
    r3 = 0x805C0000u;
    r31 = (r3 + 1952);
    goto loc_8027DF70;
}

loc_8027DF44:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_8027DF84;
}

loc_8027DF54:
{
    r3 = r30;
    ctx->lr = 0x8027DF5Cu;
    if constexpr (KnownRegArgsCpuCall<0x802730A8u>(&func_802730A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802730A8_74B = func_802730A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802730A8_74B);
        r4 = static_cast<uint32_t>(regargs_result_802730A8_74B >> 32);
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
    r0 = (r3 & 65535);
}

loc_8027DF64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8027DF6C;
    }
}

loc_8027DF68:
{
    goto loc_8027DF84;
}

loc_8027DF6C:
{
    r31 = (r31 + 2);
}

loc_8027DF70:
{
    r4 = MemoryInline::FlatRead16(r31);
}

loc_8027DF78:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_8027DF54;
    }
}

loc_8027DF7C:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8027DF84:
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

extern "C" void func_8027DEEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027DEEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027DEEC func_8027DEEC preserves=true fpr_mask=0x00000000
