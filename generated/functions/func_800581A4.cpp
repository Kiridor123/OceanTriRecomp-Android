#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800581A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_800581A4;

loc_800581A4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_800581B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800581B8:
{
    r3 = 0x80670000u;
    r6 = (r3 + -12024);
    r5 = 0;
    r4 = 3;
    r0 = 4;
    ctr = r0;
}

loc_800581D0:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_800581D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800581E8;
    }
}

loc_800581DC:
{
}

loc_800581E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80058250;
    }
}

loc_800581E4:
{
    goto loc_800582B4;
}

loc_800581E8:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & -16777216);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7 = (r7_rot_3 & 255);
    r0 = MemoryInline::FlatRead32((r6 + 96));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 80));
}

loc_80058204:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80058210;
    }
}

loc_80058208:
{
    r7 = r0;
    MemoryInline::FlatWrite32((r6 + 48), r5);
}

loc_80058210:
{
    r3 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::FlatRead32((r6 + 48));
}

loc_80058224:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80058230;
    }
}

loc_80058228:
{
    MemoryInline::FlatWrite32((r6 + 48), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
}

loc_80058230:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & 16777215);
    MemoryInline::FlatWrite32(r6, r0);
    r3 = MemoryInline::FlatRead32(r6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & -16777216);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_800582B4;
}

loc_80058250:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & -16777216);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & 255);
    r0 = MemoryInline::FlatRead32((r6 + 96));
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 80));
}

loc_8005826C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_80058278;
    }
}

loc_80058270:
{
    r7 = r0;
    MemoryInline::FlatWrite32((r6 + 48), r5);
}

loc_80058278:
{
    r3 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::FlatRead32((r6 + 48));
}

loc_8005828C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80058298;
    }
}

loc_80058290:
{
    MemoryInline::FlatWrite32((r6 + 48), r5);
    MemoryInline::FlatWrite32((r6 + 16), r5);
}

loc_80058298:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & 16777215);
    MemoryInline::FlatWrite32(r6, r0);
    r3 = MemoryInline::FlatRead32(r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & -16777216);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_800582B4:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800581D0;
    }
}

loc_800582BC:
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
// RECOMP_REGISTRATION base 0x800581A4 func_800581A4 preserves=true fpr_mask=0x00000000
