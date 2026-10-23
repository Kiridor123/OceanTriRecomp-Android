#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027E284_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027E284;

loc_8027E284:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 918));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027E2A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027E2AC;
    }
}

loc_8027E2A4:
{
    r3 = 1;
    goto loc_8027E2D4;
}

loc_8027E2AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027E2B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027E2D0;
    }
}

loc_8027E2B8:
{
    r3 = r31;
    // inline leaf 0x8027E248 (15 guest instruction(s))
}

loc_inl0_0x8027E248:
{
    r0 = MemoryInline::FlatRead16((r3 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl0_0x8027E250:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl0_0x8027E274;
    }
}

loc_inl0_0x8027E254:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 42));
}

loc_inl0_0x8027E264:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8027E274;
    }
}

loc_inl0_0x8027E268:
{
    r0 = MemoryInline::FlatRead8((r3 + 1135));
}

loc_inl0_0x8027E270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8027E27C;
    }
}

loc_inl0_0x8027E274:
{
    r3 = 1;
    goto loc_inl0_cont_8027E248;
}

loc_inl0_0x8027E27C:
{
    r3 = 0;
}

loc_inl0_cont_8027E248:
{
    // end of inlined leaf 0x8027E248
}

loc_8027E2C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027E2D0;
    }
}

loc_8027E2C8:
{
    r3 = 1;
    goto loc_8027E2D4;
}

loc_8027E2D0:
{
    r3 = 0;
}

loc_8027E2D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027E284(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027E284_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E284 func_8027E284 preserves=true fpr_mask=0x00000000
