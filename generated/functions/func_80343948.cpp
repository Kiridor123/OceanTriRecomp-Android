#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80343948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80343948u);
    goto loc_80343948;

loc_80343948:
{
    r7 = 0;
    r4 = (r4 & 255);
    r5 = 0x806C0000u;
    r6 = (r5 + 5408);
    r5 = (r3 & 255);
    r0 = 2;
    ctr = r0;
}

loc_80343964:
{
    r0 = (r7 & 255);
    r0 = (r0 * 60);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80343978:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80343988;
    }
}

loc_8034397C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80343984:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80343988:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0 = (r0 * 60);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803439A0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_803439B0;
    }
}

loc_803439A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803439AC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803439B0:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0 = (r0 * 60);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803439C8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_803439D8;
    }
}

loc_803439CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803439D4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_803439D8:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0 = (r0 * 60);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803439F0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80343A00;
    }
}

loc_803439F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803439FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80343A00:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r0 = (r0 * 60);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80343A18:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80343A28;
    }
}

loc_80343A1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80343A24:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80343A28:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80343964;
    }
}

loc_80343A30:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80343948 func_80343948 preserves=true fpr_mask=0x00000000
