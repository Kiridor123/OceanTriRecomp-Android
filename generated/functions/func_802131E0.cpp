#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E30C(CpuContext* ctx);
extern "C" uint64_t func_8027E30C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802131E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802131E0;

loc_802131E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    r0 = (r5 & 255);
}

loc_802131FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021325C;
    }
}

loc_80213200:
{
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8021320C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_80213254;
    }
}

loc_80213210:
{
    r4 = (r4 & 65535);
    ctx->lr = 0x80213218u;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_541 = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_541);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_541 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 & 255);
}

loc_80213220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8021323C;
    }
}

loc_80213224:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 4);
}

loc_80213230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80213254;
    }
}

loc_80213234:
{
    r3 = 1;
    goto loc_80213260;
}

loc_8021323C:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 8);
}

loc_80213248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80213254;
    }
}

loc_8021324C:
{
    r3 = 1;
    goto loc_80213260;
}

loc_80213254:
{
    r3 = 0;
    goto loc_80213260;
}

loc_8021325C:
{
    r3 = 1;
}

loc_80213260:
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

extern "C" void func_802131E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802131E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802131E0 func_802131E0 preserves=true fpr_mask=0x00000000
