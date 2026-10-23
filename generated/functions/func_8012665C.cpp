#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012665C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012665C;

loc_8012665C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r5 + 3));
    ctx->lr = 0x80126680u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80140C64u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80126688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801266DC;
    }
}

loc_8012668C:
{
    r0 = (r31 & 255);
}

loc_80126694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_801266B4;
    }
}

loc_80126698:
{
}

loc_8012669C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_801266BC;
    }
}

loc_801266A0:
{
}

loc_801266A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_801266C4;
    }
}

loc_801266A8:
{
}

loc_801266AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_801266CC;
    }
}

loc_801266B0:
{
    goto loc_801266D4;
}

loc_801266B4:
{
    r3 = MemoryInline::FlatRead32((r3 + 92));
    goto loc_801266E0;
}

loc_801266BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 96));
    goto loc_801266E0;
}

loc_801266C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    goto loc_801266E0;
}

loc_801266CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 104));
    goto loc_801266E0;
}

loc_801266D4:
{
    r3 = 0;
    goto loc_801266E0;
}

loc_801266DC:
{
    r3 = 0;
}

loc_801266E0:
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

extern "C" void func_8012665C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012665C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012665C func_8012665C preserves=true fpr_mask=0x00000000
