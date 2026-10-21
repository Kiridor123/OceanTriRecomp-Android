#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80315794_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    MKW_GUEST_ENTER(0x80315794u);
    goto loc_80315794;

loc_80315794:
{
    r11 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    r12 = 0;
    MemoryInline::FlatWrite32(r11, r12);
    MemoryInline::FlatWrite32((r11 + 4), r12);
    MemoryInline::FlatWrite32((r11 + 8), r12);
    MemoryInline::FlatWrite32((r11 + 12), r12);
    MemoryInline::FlatWrite32((r11 + 16), r12);
    MemoryInline::FlatWrite32((r11 + 20), r12);
}

loc_803157BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803157C8;
    }
}

loc_803157C0:
{
    r0 = 1;
    goto loc_80315914;
}

loc_803157C8:
{
    r12 = MemoryInline::FlatRead8(r10);
    r12 = (r12 & 1);
}

loc_803157D4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_803158D4;
    }
}

loc_803157D8:
{
}

loc_803157DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803157E8;
    }
}

loc_803157E0:
{
    r0 = 1;
    goto loc_80315914;
}

loc_803157E8:
{
}

loc_803157EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80315868;
    }
}

loc_803157F0:
{
}

loc_803157F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80315868;
    }
}

loc_803157F8:
{
    r5 = MemoryInline::FlatRead8(r4);
}

loc_80315800:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(11))) {
        goto loc_80315818;
    }
}

loc_80315804:
{
}

loc_80315808:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(12))) {
        goto loc_80315830;
    }
}

loc_8031580C:
{
}

loc_80315810:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(13))) {
        goto loc_80315848;
    }
}

loc_80315814:
{
    goto loc_80315860;
}

loc_80315818:
{
    MemoryInline::FlatWrite32(r11, r4);
    r4 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 4), r4);
    r4 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 8), r4);
    goto loc_80315914;
}

loc_80315830:
{
    r5 = (r3 + 464);
    MemoryInline::FlatWrite32(r11, r5);
    MemoryInline::FlatWrite32((r11 + 4), r4);
    r4 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 8), r4);
    goto loc_80315914;
}

loc_80315848:
{
    r5 = (r3 + 464);
    MemoryInline::FlatWrite32(r11, r5);
    r5 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 4), r5);
    MemoryInline::FlatWrite32((r11 + 8), r4);
    goto loc_80315914;
}

loc_80315860:
{
    r0 = 1;
    goto loc_80315914;
}

loc_80315868:
{
    r12 = MemoryInline::FlatRead8(r4);
}

loc_80315870:
{
    if ((static_cast<uint32_t>(r12) != static_cast<uint32_t>(11))) {
        goto loc_8031587C;
    }
}

loc_80315874:
{
    MemoryInline::FlatWrite32(r11, r4);
    goto loc_80315880;
}

loc_8031587C:
{
    r0 = 1;
}

loc_80315880:
{
}

loc_80315884:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803158A4;
    }
}

loc_80315888:
{
    r4 = MemoryInline::FlatRead8(r5);
}

loc_80315890:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12))) {
        goto loc_8031589C;
    }
}

loc_80315894:
{
    MemoryInline::FlatWrite32((r11 + 4), r5);
    goto loc_803158A8;
}

loc_8031589C:
{
    r0 = 1;
    goto loc_803158A8;
}

loc_803158A4:
{
    r0 = 1;
}

loc_803158A8:
{
}

loc_803158AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803158CC;
    }
}

loc_803158B0:
{
    r4 = MemoryInline::FlatRead8(r6);
}

loc_803158B8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(13))) {
        goto loc_803158C4;
    }
}

loc_803158BC:
{
    MemoryInline::FlatWrite32((r11 + 8), r6);
    goto loc_80315914;
}

loc_803158C4:
{
    r0 = 1;
    goto loc_80315914;
}

loc_803158CC:
{
    r0 = 1;
    goto loc_80315914;
}

loc_803158D4:
{
}

loc_803158D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803158FC;
    }
}

loc_803158DC:
{
}

loc_803158E0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803158FC;
    }
}

loc_803158E4:
{
}

loc_803158E8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_803158FC;
    }
}

loc_803158EC:
{
    MemoryInline::FlatWrite32(r11, r7);
    MemoryInline::FlatWrite32((r11 + 4), r8);
    MemoryInline::FlatWrite32((r11 + 8), r9);
    goto loc_80315914;
}

loc_803158FC:
{
    r4 = (r3 + 464);
    MemoryInline::FlatWrite32(r11, r4);
    r4 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 4), r4);
    r4 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 8), r4);
}

loc_80315914:
{
}

loc_80315918:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80315988;
    }
}

loc_8031591C:
{
}

loc_80315920:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80315988;
    }
}

loc_80315924:
{
}

loc_80315928:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80315988;
    }
}

loc_8031592C:
{
    r4 = MemoryInline::FlatRead8(r7);
}

loc_80315934:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(11))) {
        goto loc_80315960;
    }
}

loc_80315938:
{
    r4 = MemoryInline::FlatRead8(r8);
}

loc_80315940:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12))) {
        goto loc_80315960;
    }
}

loc_80315944:
{
    r4 = MemoryInline::FlatRead8(r9);
}

loc_8031594C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(13))) {
        goto loc_80315960;
    }
}

loc_80315950:
{
    MemoryInline::FlatWrite32((r11 + 12), r7);
    MemoryInline::FlatWrite32((r11 + 16), r8);
    MemoryInline::FlatWrite32((r11 + 20), r9);
    goto loc_803159EC;
}

loc_80315960:
{
    r4 = MemoryInline::FlatRead8(r10);
    r4 = (r4 & 247);
}

loc_80315968:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r4));
    r4 = (r3 + 464);
    MemoryInline::FlatWrite32((r11 + 12), r4);
    r4 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 16), r4);
    r3 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 20), r3);
    goto loc_803159EC;
}

loc_80315988:
{
    r4 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315990:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(11))) {
        goto loc_803159C8;
    }
}

loc_80315994:
{
    r4 = MemoryInline::FlatRead8((r3 + 488));
}

loc_8031599C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12))) {
        goto loc_803159C8;
    }
}

loc_803159A0:
{
    r4 = MemoryInline::FlatRead8((r3 + 500));
}

loc_803159A8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(13))) {
        goto loc_803159C8;
    }
}

loc_803159AC:
{
    r4 = (r3 + 464);
    MemoryInline::FlatWrite32((r11 + 12), r4);
    r4 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 16), r4);
    r3 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 20), r3);
    goto loc_803159EC;
}

loc_803159C8:
{
    r4 = MemoryInline::FlatRead8(r10);
    r4 = (r4 & 247);
}

loc_803159D0:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r4));
    r4 = (r3 + 464);
    MemoryInline::FlatWrite32((r11 + 12), r4);
    r4 = (r3 + 488);
    MemoryInline::FlatWrite32((r11 + 16), r4);
    r3 = (r3 + 500);
    MemoryInline::FlatWrite32((r11 + 20), r3);
}

loc_803159EC:
{
    r3 = MemoryInline::FlatRead32((r11 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_803159F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80315A1C;
    }
}

loc_803159FC:
{
    r3 = MemoryInline::FlatRead32((r11 + 16));
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80315A08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80315A1C;
    }
}

loc_80315A0C:
{
    r3 = MemoryInline::FlatRead32((r11 + 20));
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80315A18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80315A28;
    }
}

loc_80315A1C:
{
    r3 = MemoryInline::FlatRead8(r10);
    r3 = (r3 & 247);
}

loc_80315A24:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r3));
}

loc_80315A28:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80315794(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80315794_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001839 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80315794 func_80315794 preserves=true fpr_mask=0x00000000
