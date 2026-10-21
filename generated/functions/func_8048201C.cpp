#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8048201C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8048201Cu);
    goto loc_8048201C;

loc_8048201C:
{
    r4 = 0x80740000u;
    r3 = 0;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead8((r4 + 333));
}

loc_80482030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482038;
    }
}

loc_80482034:
{
    r3 = 1;
}

loc_80482038:
{
    r0 = MemoryInline::FlatRead8((r4 + 617));
}

loc_80482040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048204C;
    }
}

loc_80482044:
{
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
}

loc_8048204C:
{
    r0 = MemoryInline::FlatRead8((r4 + 901));
}

loc_80482054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80482060;
    }
}

loc_80482058:
{
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
}

loc_80482060:
{
    r0 = MemoryInline::FlatRead8((r4 + 1185));
}

loc_80482068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8048206C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048201C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048201C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8048201C func_8048201C preserves=true fpr_mask=0x00000000
