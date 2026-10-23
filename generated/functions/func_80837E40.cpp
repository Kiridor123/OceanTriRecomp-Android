#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80837E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80837E40;

loc_80837E40:
{
    r7 = MemoryInline::FlatRead8((r3 + 24));
}

loc_80837E48:
{
    r6 = MemoryInline::FlatRead8((r3 + 25));
    r5 = MemoryInline::FlatRead8((r3 + 26));
    r0 = MemoryInline::FlatRead8((r3 + 27));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80837E74;
    }
}

loc_80837E6C:
{
    r5 = (r3 + 24);
    goto loc_80837E78;
}

loc_80837E74:
{
    r5 = (r3 + 28);
}

loc_80837E78:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80837E90:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837EAC;
    }
}

loc_80837EA4:
{
    r5 = (r3 + 24);
    goto loc_80837EB0;
}

loc_80837EAC:
{
    r5 = (r3 + 28);
}

loc_80837EB0:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80837EC8:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80837EE4;
    }
}

loc_80837EDC:
{
    r5 = (r3 + 24);
    goto loc_80837EE8;
}

loc_80837EE4:
{
    r5 = (r3 + 28);
}

loc_80837EE8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4 = 0x80810000u;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r10 = (r4 + -32639);
    r0 = MemoryInline::FlatRead8((r3 + 11));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r4));
    r7 = MemoryInline::FlatRead8((r3 + 66));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r4));
    r6 = (r0 * r7);
    r4 = MemoryInline::FlatRead8((r3 + 15));
    r0 = MemoryInline::FlatRead8((r3 + 19));
    r8 = MemoryInline::FlatRead8((r5 + 3));
    r5 = (r0 * r7);
    r0 = (r8 * r7);
    r4 = (r4 * r7);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r6 = (r8 + r6);
    r8 = (static_cast<int32_t>(r6) >> 7);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r4 = (r7 + r4);
    r7 = (r8 + r9);
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r7));
    r7 = (static_cast<int32_t>(r4) >> 7);
    r5 = (r6 + r5);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r6));
    r5 = (static_cast<int32_t>(r5) >> 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r5 = (r5 + r6);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B8 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80837E40 func_80837E40 preserves=true fpr_mask=0x00000000
