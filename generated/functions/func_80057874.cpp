#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057874_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80057874;

loc_80057874:
{
    r6 = 0x80670000u;
    r6 = (r6 + -11912);
    r0 = (r3 & 255);
}

loc_80057884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80057898;
    }
}

loc_80057888:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r6 + 122), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r6 + 121), static_cast<uint8_t>(r0));
    goto loc_800578A8;
}

loc_80057898:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r6 + 121), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r6 + 122), static_cast<uint8_t>(r0));
}

loc_800578A8:
{
    r0 = (r4 & 255);
}

loc_800578B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800578C0;
    }
}

loc_800578B4:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r6 + 132), r0);
    goto loc_800578C8;
}

loc_800578C0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r6 + 132), r0);
}

loc_800578C8:
{
    r0 = (r5 & 255);
}

loc_800578D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800578E0;
    }
}

loc_800578D4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r6 + 140), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

loc_800578E0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r6 + 140), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_80057874(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80057874_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80057874 func_80057874 preserves=true fpr_mask=0x00000000
