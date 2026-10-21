#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804323F4_ra28_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804323F4u);
    goto loc_804323F4;

loc_804323F4:
{
    r5 = 12;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 417), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 414), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r4 + 16634));
}

loc_8043241C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043242C;
    }
}

loc_80432420:
{
    r0 = 24;
    MemoryInline::FlatWrite8((r3 + 419), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_8043242C:
{
    MemoryInline::FlatWrite8((r3 + 419), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_804323F4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804323F4_ra28_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002028 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804323F4 func_804323F4 preserves=true fpr_mask=0x00000000
