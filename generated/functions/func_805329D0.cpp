#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805329D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805329D0;

loc_805329D0:
{
}

loc_805329D4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_805329EC;
    }
}

loc_805329D8:
{
}

loc_805329DC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_80532AA4;
    }
}

loc_805329E0:
{
}

loc_805329E4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_805329F8;
    }
}

loc_805329E8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805329EC:
{
}

loc_805329F0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_return;
    }
}

loc_805329F4:
{
    goto loc_80532B18;
}

loc_805329F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
}

loc_80532A04:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80532A08:
{
    r7 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (static_cast<int32_t>(r5) >> 31);
    r10 = (r5 & ~r0);
    r9 = MemoryInline::FlatRead32((r3 + 64));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 15);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r3 = (r3_rot_1 & 15);
    r6 = (r0 * 20);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r8 = (r8_rot_1 & 4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r7 = (r7_rot_1 & 60);
    r5 = (r3 * 28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_80532A38:
{
    r0 = (r8 + r7);
    r3 = 255;
    r5 = (r6 + r5);
    r0 = (r9 + r0);
    r5 = (r5 + r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80532A54;
    }
}

loc_80532A50:
{
    r3 = r10;
}

loc_80532A54:
{
    r0 = (r4 & 3);
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80532A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532A94;
    }
}

loc_80532A64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532A78;
    }
}

loc_80532A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80532A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532A84;
    }
}

loc_80532A70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532A8C;
    }
}

loc_80532A74:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532A78:
{
}

loc_80532A7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_80532A80:
{
    goto loc_80532A9C;
}

loc_80532A84:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532A8C:
{
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532A94:
{
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532A9C:
{
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532AA4:
{
    r4 = (r4 + -4);
    r0 = (r4 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80532AB0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r4 = (r4_rot_1 & 1073741823);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532AF8;
    }
}

loc_80532AB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532ACC;
    }
}

loc_80532ABC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80532AC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532AD8;
    }
}

loc_80532AC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532AE8;
    }
}

loc_80532AC8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532ACC:
{
}

loc_80532AD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_80532AD4:
{
    goto loc_80532B08;
}

loc_80532AD8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532AE8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532AF8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532B08:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532B18:
{
    r0 = (static_cast<int32_t>(r5) >> 31);
    r6 = (r4 + -16);
    r7 = (r5 & ~r0);
    r5 = 255;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
}

loc_80532B34:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(255))) {
        goto loc_80532B3C;
    }
}

loc_80532B38:
{
    r5 = r7;
}

loc_80532B3C:
{
    r0 = (r4 + -16);
    r4 = (r5 & 255);
    r0 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80532B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532B90;
    }
}

loc_80532B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532B64;
    }
}

loc_80532B54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80532B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532B70;
    }
}

loc_80532B5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80532B80;
    }
}

loc_80532B60:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532B64:
{
}

loc_80532B68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_80532B6C:
{
    goto loc_80532BA0;
}

loc_80532B70:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532B80:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532B90:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 42), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80532BA0:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 43), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805329D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805329D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805329D0 func_805329D0 preserves=true fpr_mask=0x00000000
