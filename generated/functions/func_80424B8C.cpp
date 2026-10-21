#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80424B8C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80424B8Cu);
    goto loc_80424B8C;

loc_80424B8C:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r4 + 16084);
    r5 = 0;
    r0 = 20;
    ctr = r0;
}

loc_80424BA0:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80424BA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80424BC0;
    }
}

loc_80424BAC:
{
    r0 = (r4 + 4);
}

loc_80424BB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80424BC0;
    }
}

loc_80424BB8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80424BC0:
{
    r4 = (r4 + 88);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80424BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80424BE4;
    }
}

loc_80424BD0:
{
    r0 = (r4 + 4);
}

loc_80424BD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80424BE4;
    }
}

loc_80424BDC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80424BE4:
{
    r4 = (r4 + 88);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80424BF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80424C08;
    }
}

loc_80424BF4:
{
    r0 = (r4 + 4);
}

loc_80424BFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80424C08;
    }
}

loc_80424C00:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80424C08:
{
    r4 = (r4 + 88);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80424C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80424C2C;
    }
}

loc_80424C18:
{
    r0 = (r4 + 4);
}

loc_80424C20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80424C2C;
    }
}

loc_80424C24:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80424C2C:
{
    r4 = (r4 + 88);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80424C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80424C50;
    }
}

loc_80424C3C:
{
    r0 = (r4 + 4);
}

loc_80424C44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80424C50;
    }
}

loc_80424C48:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80424C50:
{
    r5 = (r5 + 4);
    r4 = (r4 + 88);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80424BA0;
    }
}

loc_80424C5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80424B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80424B8C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80424B8C func_80424B8C preserves=true fpr_mask=0x00000000
