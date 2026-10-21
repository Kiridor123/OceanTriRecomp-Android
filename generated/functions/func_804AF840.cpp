#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804AF840_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804AF840u);
    goto loc_804AF840;

loc_804AF840:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
}

loc_804AF848:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804AF874;
    }
}

loc_804AF858:
{
}

loc_804AF85C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_804AF87C;
    }
}

loc_804AF860:
{
}

loc_804AF864:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_804AF88C;
    }
}

loc_804AF868:
{
}

loc_804AF86C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_804AF89C;
    }
}

loc_804AF870:
{
    goto loc_804AFA84;
}

loc_804AF874:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    goto loc_804AF8B0;
}

loc_804AF87C:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r6 = (r6_rot_3 & 67108863);
    r0 = (r6 + 192);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_804AF8B0;
}

loc_804AF88C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r6 = (r6_rot_2 & 1048575);
    r0 = (r6 + 224);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_804AF8B0;
}

loc_804AF89C:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r6 = (r6_rot_1 & 16383);
    r0 = (r6 + 240);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_804AF8B0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_804AF8B4:
{
    r10 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804AFA84;
    }
}

loc_804AF8BC:
{
    r0 = (r4 + -1);
    r7 = (r4 + -8);
}

loc_804AF8C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_804AFA48;
    }
}

loc_804AF8CC:
{
    r8 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804AF8EC;
    }
}

loc_804AF8D8:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_804AF8E4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804AF8EC;
    }
}

loc_804AF8E8:
{
    r9 = 1;
}

loc_804AF8EC:
{
}

loc_804AF8F0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804AF928;
    }
}

loc_804AF8F4:
{
    r9 = (r4 & -2147483648);
    r6 = 1;
    r0 = (r9 + -2147483648);
}

loc_804AF904:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804AF91C;
    }
}

loc_804AF908:
{
    r0 = (r4 + -1);
    r0 = (r0 & -2147483648);
}

loc_804AF914:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r0))) {
        goto loc_804AF91C;
    }
}

loc_804AF918:
{
    r6 = 0;
}

loc_804AF91C:
{
}

loc_804AF920:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804AF928;
    }
}

loc_804AF924:
{
    r8 = 1;
}

loc_804AF928:
{
}

loc_804AF92C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804AFA48;
    }
}

loc_804AF930:
{
    r0 = (r7 + 6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804AF940:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(1))) {
        goto loc_804AFA48;
    }
}

loc_804AF944:
{
    r7 = (r4 - r10);
    r6 = (-2 - r10);
    r7 = (r7 + -1);
    r0 = (r10 + 2);
    r8 = (r7 * 6);
    r7 = (r6 + r4);
    r6 = (r4 - r0);
    r11 = (r7 * 6);
    r0 = (r10 + 3);
    r7 = (r6 + -1);
    r6 = (r4 - r0);
    r9 = (r7 * 6);
    r0 = (r10 + 4);
    r7 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
    r6 = (r6 + -1);
    r12 = (r6 * 6);
    r8 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r6 = (r4 - r0);
    r11 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r9 = (r6 + -1);
    r8 = (r8 & 63);
    r6 = (r11 & 63);
    r12 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r12));
    r11 = (r9 * 6);
    r0 = (r10 + 5);
    r29 = (r8 + 128);
    r3_addr_2 = (r3 + r10);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r29));
    r9 = (r4 - r0);
    r7 = (r7 & 63);
    r31 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
    r0 = (r10 + 6);
    r9 = (r9 + -1);
    r30 = (r12 & 63);
    r12 = (r9 * 6);
    r29 = (r7 + 128);
    r9 = (r4 - r0);
    r0 = (r10 + 7);
    r11 = (r9 + -1);
    r9 = (r3 + r10);
    r11 = (r11 * 6);
    r8 = (r4 - r0);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r29));
    r6 = (r6 + 128);
    r0 = (r8 + -1);
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r6));
    r6 = (r30 + 128);
    r12 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r12));
    r8 = (r12 & 63);
    r7 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
    r0 = (r0 * 6);
    r31 = (r31 & 63);
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r6));
    r7 = (r7 & 63);
    r6 = (r31 + 128);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r6));
    r8 = (r8 + 128);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = (r0 & 63);
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r8));
    r7 = (r7 + 128);
    r10 = (r10 + 8);
    MemoryInline::FlatWrite8((r9 + 6), static_cast<uint8_t>(r7));
    r0 = (r6 + 128);
    MemoryInline::FlatWrite8((r9 + 7), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804AF944;
    }
}

loc_804AFA48:
{
    r0 = (r4 - r10);
    r3 = (r3 + r10);
    ctr = r0;
}

loc_804AFA58:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r4))) {
        goto loc_804AFA84;
    }
}

loc_804AFA5C:
{
    r6 = (r4 - r10);
    r10 = (r10 + 1);
    r0 = (r6 + -1);
    r0 = (r0 * 6);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = (r0 & 63);
    r0 = (r6 + 128);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804AFA5C;
    }
}

loc_804AFA84:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804AF840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804AF840_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FCB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AF840 func_804AF840 preserves=true fpr_mask=0x00000000
