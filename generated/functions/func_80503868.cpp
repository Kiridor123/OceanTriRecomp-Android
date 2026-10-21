#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80503868_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80503868u);
    goto loc_80503868;

loc_80503868:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r4 = 1179189248;
    r11 = (r4 + 20038);
    r5 = 0;
    r4 = (r3 + r0);
    r6 = 0;
    r8 = 1413939200;
    r10 = 1129775104;
    r9 = 1129119744;
    r7 = 1196163072;
    goto loc_80503974;
}

loc_80503894:
{
    r12 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r11));
}

loc_8050389C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805038E4;
    }
}

loc_805038A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805038C4;
    }
}

loc_805038A4:
{
    r0 = (r10 + 17480);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_805038AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80503930;
    }
}

loc_805038B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80503960;
    }
}

loc_805038B4:
{
    r0 = (r9 + 16720);
}

loc_805038BC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r0))) {
        goto loc_80503948;
    }
}

loc_805038C0:
{
    goto loc_80503960;
}

loc_805038C4:
{
    r0 = (r8 + 19536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r0));
}

loc_805038CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80503920;
    }
}

loc_805038D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80503960;
    }
}

loc_805038D4:
{
    r0 = (r7 + 18258);
}

loc_805038DC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r0))) {
        goto loc_80503968;
    }
}

loc_805038E0:
{
    goto loc_80503960;
}

loc_805038E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r4 + 8);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_805038FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80503908;
    }
}

loc_80503900:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_80503908:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80503910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80503968;
    }
}

loc_80503914:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80503968;
}

loc_80503920:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_80503968;
}

loc_80503930:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80503938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80503968;
    }
}

loc_8050393C:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80503968;
}

loc_80503948:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80503950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80503968;
    }
}

loc_80503954:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_80503968;
}

loc_80503960:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80503968:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r6 + 1);
    r4 = (r4 + r0);
}

loc_80503974:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_8050397C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80503894;
    }
}

loc_80503980:
{
    r4 = 1380319232;
    r0 = (r4 + 20053);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80503868(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80503868_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80503868 func_80503868 preserves=true fpr_mask=0x00000000
