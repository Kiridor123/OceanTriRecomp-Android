#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E9720;

loc_800E9720:
{
    r0 = MemoryInline::FlatRead8((r5 + 58));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E9728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E9750;
    }
}

loc_800E972C:
{
}

loc_800E9730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800E9760;
    }
}

loc_800E9734:
{
}

loc_800E9738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800E9768;
    }
}

loc_800E973C:
{
}

loc_800E9740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800E9770;
    }
}

loc_800E9744:
{
}

loc_800E9748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800E9778;
    }
}

loc_800E974C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E9750:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_800E9760:
{
    r4 = r5;
    goto loc_800E9780;
}

loc_800E9768:
{
    r4 = r5;
    goto loc_800E97E0;
}

loc_800E9770:
{
    r4 = r5;
    goto loc_800E9828;
}

loc_800E9778:
{
    goto loc_800E9874;
}

loc_800E9780:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E9798:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(127))) {
        goto loc_return;
    }
}

loc_800E979C:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E97AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E97BC;
    }
}

loc_800E97B0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E97BC:
{
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E97C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E97D4;
    }
}

loc_800E97C8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E97D4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E97E0:
{
    r3 = MemoryInline::FlatRead16((r4 + 50));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r4 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E97FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r3))) {
        goto loc_return;
    }
}

loc_800E9800:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E980C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E981C;
    }
}

loc_800E9810:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E981C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E9828:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E9840:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(127))) {
        goto loc_800E9858;
    }
}

loc_800E9844:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E9858:
{
}

loc_800E985C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800E9860:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800E9874:
{
    r6 = MemoryInline::FlatRead16((r5 + 56));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E988C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800E9890:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E9720 func_800E9720 preserves=true fpr_mask=0x00000000
