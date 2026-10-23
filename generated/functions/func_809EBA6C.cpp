#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EBA6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_809EBA6C;

loc_809EBA6C:
{
    r6 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_809EBA78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(48))) {
        goto loc_return;
    }
}

loc_809EBA7C:
{
    r4 = 0x80A20000u;
    r4 = (r4 + 29832);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809EBA94u:
        goto loc_809EBA94;
        break;
    case 0x809EBA9Cu:
        goto loc_809EBA9C;
        break;
    case 0x809EBAA4u:
        goto loc_809EBAA4;
        break;
    case 0x809EBAACu:
        goto loc_809EBAAC;
        break;
    case 0x809EBAB4u:
        goto loc_809EBAB4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809EBA94:
{
    r5 = 28;
    goto loc_809EBAB8;
}

loc_809EBA9C:
{
    r5 = 29;
    goto loc_809EBAB8;
}

loc_809EBAA4:
{
    r5 = 30;
    goto loc_809EBAB8;
}

loc_809EBAAC:
{
    r5 = 31;
    goto loc_809EBAB8;
}

loc_809EBAB4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_809EBAB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_809EBAC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBAD8;
    }
}

loc_809EBAC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_809EBAC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBAFC;
    }
}

loc_809EBACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_809EBAD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809EBB28;
    }
}

loc_809EBAD4:
{
    goto loc_809EBB48;
}

loc_809EBAD8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r6 + 24);
    r6 = MemoryInline::FlatRead8((r6 + 8));
    r7 = 0;
    r8 = 0x80790000u;
    r8 = MemoryInline::FlatRead32((r8 + 28704));
    r12 = MemoryInline::FlatRead32((r8 + 12));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_809EBAFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r6 + 24);
    r6 = MemoryInline::FlatRead8((r6 + 8));
    r7 = 65536;
    r7 = (r7 + -1);
    r7 = (r7 & 65535);
    r8 = 0x80790000u;
    r8 = MemoryInline::FlatRead32((r8 + 28704));
    r12 = MemoryInline::FlatRead32((r8 + 20));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_809EBB28:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r6 + 24);
    r6 = MemoryInline::FlatRead8((r6 + 8));
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 16));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_809EBB48:
{
    r3 = (r3 + 24);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 8));
    r6 = 0;
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002F6F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EBA6C func_809EBA6C preserves=true fpr_mask=0x00000000
