#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80469D94_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80469D94u);
    goto loc_80469D94;

loc_80469D94:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = 18;
    r5 = 52;
    r4 = 86;
    r0 = 120;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r6 = 1;
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r13 + -16328), r6);
    r0 = (r4 + -305397760);
}

loc_80469DD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22136))) {
        goto loc_80469DDC;
    }
}

loc_80469DD4:
{
    MemoryInline::FlatWrite32((r13 + -16328), r6);
    goto loc_80469E00;
}

loc_80469DDC:
{
    r0 = (r4 + -2018902016);
}

loc_80469DE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13330))) {
        goto loc_80469DF0;
    }
}

loc_80469DE8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16328), r0);
}

loc_80469DF0:
{
    r0 = (r4 + -2018902016);
}

loc_80469DF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(13330))) {
        goto loc_80469E00;
    }
}

loc_80469DFC:
{
    r3 = 1;
}

loc_80469E00:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80469D94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80469D94_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000205B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80469D94 func_80469D94 preserves=true fpr_mask=0x00000000
