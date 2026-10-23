#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050739C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8050739C;

loc_8050739C:
{
    r5 = MemoryInline::FlatRead32((r13 + -13984));
    r6 = 0;
    r4 = r5;
    goto loc_805073C4;
}

loc_805073AC:
{
}

loc_805073B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805073BC;
    }
}

loc_805073B4:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805073BC:
{
    r6 = (r6 + 1);
    r4 = (r4 + 4);
}

loc_805073C4:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805073CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805073AC;
    }
}

loc_805073D0:
{
    r4 = r5;
    r3 = 0;
    goto loc_805073EC;
}

loc_805073DC:
{
}

loc_805073E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(63))) {
        goto loc_return;
    }
}

loc_805073E4:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_805073EC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805073F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_805073DC;
    }
}

loc_805073F8:
{
    r4 = r5;
    r3 = 0;
    goto loc_80507414;
}

loc_80507404:
{
}

loc_80507408:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(63))) {
        goto loc_return;
    }
}

loc_8050740C:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
}

loc_80507414:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8050741C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80507404;
    }
}

loc_80507420:
{
    r3 = 0;
    goto loc_80507438;
}

loc_80507428:
{
}

loc_8050742C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(63))) {
        goto loc_return;
    }
}

loc_80507430:
{
    r3 = (r3 + 1);
    r5 = (r5 + 4);
}

loc_80507438:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_80507440:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80507428;
    }
}

loc_80507444:
{
    r3 = 63;
    goto loc_8050739C;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050739C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050739C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050739C func_8050739C preserves=true fpr_mask=0x00000000
