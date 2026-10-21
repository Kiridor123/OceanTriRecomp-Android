#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80131CFC_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80131CFCu);
    goto loc_80131CFC;

loc_80131CFC:
{
    r7 = 0;
    r5 = 1;
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 1092));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736264);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1092), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1092));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131D1C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_80131D3C;
    }
}

loc_80131D20:
{
    r6 = MemoryInline::FlatRead8((r3 + 911));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r4 = ~(r4 | r4);
    r4 = (r4 & 255);
    r4 = (r6 & r4);
    MemoryInline::FlatWrite8((r3 + 911), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1092), static_cast<uint16_t>(r0));
}

loc_80131D3C:
{
    r7 = 1;
    r4 = MemoryInline::FlatRead16((r3 + 1094));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736320);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1094), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1094));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131D54:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_80131D74;
    }
}

loc_80131D58:
{
    r6 = MemoryInline::FlatRead8((r3 + 911));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r4 = ~(r4 | r4);
    r4 = (r4 & 255);
    r4 = (r6 & r4);
    MemoryInline::FlatWrite8((r3 + 911), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1094), static_cast<uint16_t>(r0));
}

loc_80131D74:
{
    r7 = 2;
    r4 = MemoryInline::FlatRead16((r3 + 1096));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736376);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1096), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1096));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131D8C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_80131DAC;
    }
}

loc_80131D90:
{
    r6 = MemoryInline::FlatRead8((r3 + 911));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r4 = ~(r4 | r4);
    r4 = (r4 & 255);
    r4 = (r6 & r4);
    MemoryInline::FlatWrite8((r3 + 911), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1096), static_cast<uint16_t>(r0));
}

loc_80131DAC:
{
    r7 = 3;
    r4 = MemoryInline::FlatRead16((r3 + 1098));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736432);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1098), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1098));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131DC4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80131DC8:
{
    r6 = MemoryInline::FlatRead8((r3 + 911));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r4 = ~(r4 | r4);
    r4 = (r4 & 255);
    r4 = (r6 & r4);
    MemoryInline::FlatWrite8((r3 + 911), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1098), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80131CFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80131CFC_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80131CFC func_80131CFC preserves=true fpr_mask=0x00000000
