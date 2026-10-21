#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082AAE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8082AAE0u);
    goto loc_8082AAE0;

loc_8082AAE0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8082AAEC:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8082ABE8;
    }
}

loc_8082AB0C:
{
    r0 = 2;
    r12 = r7;
    r31 = (r1 + 16);
    r11 = 0;
    r9 = 0x80810000u;
    ctr = r0;
    // nop
}

loc_8082AB28:
{
    r0 = MemoryInline::FlatRead32(r12);
}

loc_8082AB30:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(255))) {
        goto loc_8082AB60;
    }
}

loc_8082AB3C:
{
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r10 = (r9 + -32639);
    r0 = (r0 * r8);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r10 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r0 = (r0 + r10);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_8082AB60:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8082AB68:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r12 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(255))) {
        goto loc_8082ABB8;
    }
}

loc_8082AB94:
{
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r10 = (r9 + -32639);
    r0 = (r0 * r8);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r10 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_4 & 1);
    r0 = (r0 + r10);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_8082ABB8:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r12 = (r12 + 8);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r11 = (r11 + 1);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r31 = (r31 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082AB28;
    }
}

loc_8082ABE8:
{
    r8 = (0 - r7);
    r0 = (r1 + 16);
    r7 = (r8 | r7);
    r7 = (static_cast<int32_t>(r7) >> 31);
    r7 = (r0 & r7);
    ctx->lr = 0x8082AC00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082A580u>(ctx);
    r0 = ctx->gpr[0];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082AAE0 func_8082AAE0 preserves=true fpr_mask=0x00000000
