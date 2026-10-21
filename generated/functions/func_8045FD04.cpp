#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FD04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8045FD04u);
    goto loc_8045FD04;

loc_8045FD04:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FD1C;
    }
}

loc_8045FD14:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FD1C:
{
    r0 = (r4 & 3);
    r6 = (r3 & 3);
}

loc_8045FD28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_8045FDE8;
    }
}

loc_8045FD2C:
{
}

loc_8045FD30:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8045FD88;
    }
}

loc_8045FD34:
{
}

loc_8045FD38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FD44;
    }
}

loc_8045FD3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FD44:
{
    r0 = (3 - r6);
    ctr = r0;
}

loc_8045FD50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FD80;
    }
}

loc_8045FD54:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FD6C;
    }
}

loc_8045FD64:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FD6C:
{
}

loc_8045FD70:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FD7C;
    }
}

loc_8045FD74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FD7C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045FD54;
    }
}

loc_8045FD80:
{
    r3 = (r3 + 1);
    r4 = (r4 + 1);
}

loc_8045FD88:
{
    r7 = MemoryInline::FlatRead32(r3);
    r5 = 0x80810000u;
    r6 = (r5 + -32640);
    r8 = MemoryInline::FlatRead32(r4);
    r5 = (r7 + -16842752);
    r5 = (r5 + -257);
    r5 = (r5 & ~r7);
    r0 = (r5 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FDD0;
    }
}

loc_8045FDAC:
{
    goto loc_8045FDC8;
}

loc_8045FDB0:
{
    r3 = (r3 + 4);
    r7 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 4);
    r8 = MemoryInline::FlatRead32(r4);
    r5 = (r7 + -16842752);
    r0 = (r5 + -257);
    r0 = (r0 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FDD0;
    }
}

loc_8045FDC8:
{
}

loc_8045FDCC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r8))) {
        goto loc_8045FDB0;
    }
}

loc_8045FDD0:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FDE8;
    }
}

loc_8045FDE0:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FDE8:
{
}

loc_8045FDEC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FDF8;
    }
}

loc_8045FDF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FDF8:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FE10;
    }
}

loc_8045FE08:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

loc_8045FE10:
{
}

loc_8045FE14:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FDF8;
    }
}

loc_8045FE18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045FD04 func_8045FD04 preserves=true fpr_mask=0x00000000
