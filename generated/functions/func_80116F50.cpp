#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80116F50_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80116F50u);
    goto loc_80116F50;

loc_80116F50:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 4;
    ctr = r0;
}

loc_80116F60:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80116F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116F74;
    }
}

loc_80116F6C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116F74:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80116F80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116F8C;
    }
}

loc_80116F84:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116F8C:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80116F98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116FA4;
    }
}

loc_80116F9C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116FA4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80116FB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116FBC;
    }
}

loc_80116FB4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116FBC:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80116FC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116FD4;
    }
}

loc_80116FCC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116FD4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80116FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80116FEC;
    }
}

loc_80116FE4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80116FEC:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80116FF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117004;
    }
}

loc_80116FFC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80117004:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_80117010:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011701C;
    }
}

loc_80117014:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8011701C:
{
    r3 = (r3 + 32);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80116F60;
    }
}

loc_80117028:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80116F50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80116F50_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80116F50 func_80116F50 preserves=true fpr_mask=0x00000000
