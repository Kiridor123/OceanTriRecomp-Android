#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E9D64_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800E9D64u);
    goto loc_800E9D64;

loc_800E9D64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = MemoryInline::FlatRead16((r13 + -31160));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(r4) >> 1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800E9D98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r4))) {
        goto loc_800E9DA8;
    }
}

loc_800E9D9C:
{
    r0 = (r3 + 257);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
}

loc_800E9DA8:
{
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite16((r13 + -31160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_800E9D64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E9D64_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E9D64 func_800E9D64 preserves=true fpr_mask=0x00000000
