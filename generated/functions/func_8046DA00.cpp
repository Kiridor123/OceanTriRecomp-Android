#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046DA00_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8046DA00;

loc_8046DA00:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r3, r0);
    r0 = 0;
    r5 = 0x80000000u;
    MemoryInline::FlatWrite32(r4, r0);
    r7 = MemoryInline::FlatRead32((r5 + 220));
    r0 = (r7 + 65536);
}

loc_8046DA20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_return;
    }
}

loc_8046DA24:
{
}

loc_8046DA28:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8046DA2C:
{
    r0 = (r7 + -2147483648);
}

loc_8046DA34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8046DA3C;
    }
}

loc_8046DA38:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_8046DA3C:
{
    r6 = 0;
    goto loc_8046DA80;
}

loc_8046DA44:
{
    r0 = MemoryInline::FlatRead32((r5 + 228));
}

loc_8046DA4C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8046DA54;
    }
}

loc_8046DA50:
{
    MemoryInline::FlatWrite32(r4, r6);
}

loc_8046DA54:
{
    r0 = MemoryInline::FlatRead32((r7 + 764));
    r6 = (r6 + 1);
    r7 = (r0 | -2147483648);
    r0 = (r7 + 65536);
}

loc_8046DA68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8046DA88;
    }
}

loc_8046DA6C:
{
}

loc_8046DA70:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8046DA88;
    }
}

loc_8046DA74:
{
    r0 = (r7 + -2147483648);
}

loc_8046DA7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8046DA88;
    }
}

loc_8046DA80:
{
}

loc_8046DA84:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8046DA44;
    }
}

loc_8046DA88:
{
    MemoryInline::FlatWrite32(r3, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

extern "C" void func_8046DA00(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8046DA00_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046DA00 func_8046DA00 preserves=true fpr_mask=0x00000000
