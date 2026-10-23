#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808C7DCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_808C7DCC;

loc_808C7DCC:
{
    r9 = r3;
    r7 = 0;
    r4 = 0x80920000u;
    r4 = (r4 + 9672);
}

loc_808C7DDC:
{
    r0 = MemoryInline::FlatRead32(r9);
}

loc_808C7DE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7EC0;
    }
}

loc_808C7DE8:
{
    r10 = (r0 + r3);
    MemoryInline::FlatWrite32(r9, r10);
    r6 = MemoryInline::FlatRead32(r4);
    r11 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808C7DFC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_808C7E4C;
    }
}

loc_808C7E00:
{
    r0 = MemoryInline::FlatRead32(r10);
    r8 = MemoryInline::FlatRead32((r10 + 4));
    r10 = (r10 + 8);
}

loc_808C7E10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7E4C;
    }
}

loc_808C7E14:
{
    r5 = (r0 + r3);
    ctr = r8;
}

loc_808C7E20:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_808C7E4C;
    }
}

loc_808C7E24:
{
    r0 = MemoryInline::FlatRead32(r5);
    r5 = (r5 + 4);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_808C7E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7E44;
    }
}

loc_808C7E3C:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r6 + 4), r0);
}

loc_808C7E44:
{
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7E24;
    }
}

loc_808C7E4C:
{
}

loc_808C7E50:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_808C7EC0;
    }
}

loc_808C7E54:
{
    r8 = 0;
}

loc_808C7E58:
{
    r0 = MemoryInline::FlatRead32(r10);
    r6 = MemoryInline::FlatRead32((r10 + 4));
    r10 = (r10 + 8);
}

loc_808C7E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7EB0;
    }
}

loc_808C7E6C:
{
    r5 = (r0 + r3);
    r12 = MemoryInline::FlatRead32(r11);
}

loc_808C7E78:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808C7EB0;
    }
}

loc_808C7E7C:
{
    ctr = r6;
}

loc_808C7E84:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_808C7EB0;
    }
}

loc_808C7E88:
{
    r0 = MemoryInline::FlatRead32(r5);
    r5 = (r5 + 4);
    MemoryInline::FlatWrite32((r12 + 4), r0);
    r0 = MemoryInline::FlatRead32((r12 + 4));
}

loc_808C7E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7EA8;
    }
}

loc_808C7EA0:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r12 + 4), r0);
}

loc_808C7EA8:
{
    r12 = (r12 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7E88;
    }
}

loc_808C7EB0:
{
    r8 = (r8 + 1);
    r11 = (r11 + 8);
}

loc_808C7EBC:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(4))) {
        goto loc_808C7E58;
    }
}

loc_808C7EC0:
{
    r9 = (r9 + 4);
    r4 = (r4 + 8);
    r7 = (r7 + 1);
}

loc_808C7ED0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
        goto loc_808C7DDC;
    }
}

loc_808C7ED4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808C7DCC func_808C7DCC preserves=true fpr_mask=0x00000000
