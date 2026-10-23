#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271604(CpuContext* ctx);
extern "C" uint64_t func_80271604_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80314668_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80314668;

loc_80314668:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = 0;
}

loc_80314688:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_803146A4;
    }
}

loc_8031468C:
{
    r4 = 11;
    ctx->lr = 0x80314694u;
    if constexpr (KnownRegArgsCpuCall<0x80271604u>(&func_80271604)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271604_494 = func_80271604_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271604_494);
        r4 = static_cast<uint32_t>(regargs_result_80271604_494 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271604u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8031469C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_803146A4;
    }
}

loc_803146A0:
{
    r31 = 1;
}

loc_803146A4:
{
}

loc_803146A8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_803146C4;
    }
}

loc_803146AC:
{
    r30 = (r30 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_803146B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_803146D4;
    }
}

loc_803146BC:
{
    r30 = 6;
    goto loc_803146D4;
}

loc_803146C4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_803146CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(5))) {
        goto loc_803146D4;
    }
}

loc_803146D0:
{
    r30 = 5;
}

loc_803146D4:
{
    r3 = (r30 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80314668(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80314668_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80314668 func_80314668 preserves=true fpr_mask=0x00000000
