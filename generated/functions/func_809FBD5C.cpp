#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800DC924(CpuContext* ctx);
extern "C" uint64_t func_800DC924_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8010A9EC(CpuContext* ctx);
extern "C" uint64_t func_8010A9EC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802F229C(CpuContext* ctx);
extern "C" uint64_t func_802F229C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_809FBD5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809FBD5Cu);
    goto loc_809FBD5C;

loc_809FBD5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r31 = MemoryInline::FlatRead32((r29 + 256));
    r30 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MemoryInline::FlatRead8((r31 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 48));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809FBDA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_809FC2C8;
    }
}

loc_809FBDA4:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = MemoryInline::FlatRead32(r31);
}

loc_809FBDB0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_809FBDCC;
    }
}

loc_809FBDB4:
{
    r3 = r30;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 52));
}

loc_809FBDC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_809FBDD8;
    }
}

loc_809FBDCC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    goto loc_809FC2C8;
}

loc_809FBDD8:
{
    r3 = MemoryInline::FlatRead16((r31 + 56));
    r4 = MemoryInline::FlatRead32(r31);
    r0 = (r4 + 1);
    r4 = (r0 & 255);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x809FC2F4 (13 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r3 * r0);
    r3 = (r0 & 65535);
    r0 = (r3 & r5);
    r5 = (r0 & 65535);
    r4 = (r6 & 255);
    r0 = (16 - r4);
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r5 = (r0 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r0 & 65535);
    r3 = (r3 | r5);
    // end of inlined leaf 0x809FC2F4
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32(r31);
    r3 = (32 - r0);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r5 = (r4 - r0);
    r4 = 0;
    goto loc_809FBE2C;
}

loc_809FBE14:
{
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_809FBE20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809FBE28;
    }
}

loc_809FBE24:
{
    r5 = (r5 + 1);
}

loc_809FBE28:
{
    r4 = (r4 + 1);
}

loc_809FBE2C:
{
}

loc_809FBE30:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r5))) {
        goto loc_809FBE14;
    }
}

loc_809FBE34:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 1;
    r3 = (r31 + r5);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_809FBE50:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(30))) {
        goto loc_809FC178;
    }
}

loc_809FBE54:
{
    r3 = 0x80A30000u;
    r3 = (r3 + -17256);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809FBE6Cu:
        goto loc_809FBE6C;
        break;
    case 0x809FBE80u:
        goto loc_809FBE80;
        break;
    case 0x809FBE94u:
        goto loc_809FBE94;
        break;
    case 0x809FBEACu:
        goto loc_809FBEAC;
        break;
    case 0x809FBEC8u:
        goto loc_809FBEC8;
        break;
    case 0x809FBEE4u:
        goto loc_809FBEE4;
        break;
    case 0x809FBEF8u:
        goto loc_809FBEF8;
        break;
    case 0x809FBF10u:
        goto loc_809FBF10;
        break;
    case 0x809FBF28u:
        goto loc_809FBF28;
        break;
    case 0x809FBF44u:
        goto loc_809FBF44;
        break;
    case 0x809FBF60u:
        goto loc_809FBF60;
        break;
    case 0x809FBF7Cu:
        goto loc_809FBF7C;
        break;
    case 0x809FBF90u:
        goto loc_809FBF90;
        break;
    case 0x809FBFA8u:
        goto loc_809FBFA8;
        break;
    case 0x809FBFC0u:
        goto loc_809FBFC0;
        break;
    case 0x809FBFD8u:
        goto loc_809FBFD8;
        break;
    case 0x809FBFF0u:
        goto loc_809FBFF0;
        break;
    case 0x809FC00Cu:
        goto loc_809FC00C;
        break;
    case 0x809FC028u:
        goto loc_809FC028;
        break;
    case 0x809FC044u:
        goto loc_809FC044;
        break;
    case 0x809FC060u:
        goto loc_809FC060;
        break;
    case 0x809FC07Cu:
        goto loc_809FC07C;
        break;
    case 0x809FC090u:
        goto loc_809FC090;
        break;
    case 0x809FC0A8u:
        goto loc_809FC0A8;
        break;
    case 0x809FC0C0u:
        goto loc_809FC0C0;
        break;
    case 0x809FC0DCu:
        goto loc_809FC0DC;
        break;
    case 0x809FC0F8u:
        goto loc_809FC0F8;
        break;
    case 0x809FC114u:
        goto loc_809FC114;
        break;
    case 0x809FC128u:
        goto loc_809FC128;
        break;
    case 0x809FC140u:
        goto loc_809FC140;
        break;
    case 0x809FC15Cu:
        goto loc_809FC15C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809FBE6C:
{
    r0 = -16384;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBE80:
{
    r0 = -10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBE94:
{
    r0 = -10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 16384);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBEAC:
{
    r0 = -10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBEC8:
{
    r0 = -10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -16384);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBEE4:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBEF8:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 10923);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF10:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 21845);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF28:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF44:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -21845);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF60:
{
    r0 = -5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -10923);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBF90:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 6554);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBFA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 13107);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBFC0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 19661);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBFD8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 26214);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FBFF0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC00C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -26214);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC028:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -19661);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC044:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -13107);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC060:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -6554);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC07C:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC090:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 10923);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC0A8:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 21845);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC0C0:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC0DC:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -21845);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC0F8:
{
    r0 = 5461;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -10923);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC114:
{
    r0 = 10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC128:
{
    r0 = 10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 16384);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC140:
{
    r0 = 10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC15C:
{
    r0 = 10923;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + 65536);
    r0 = (r3 + -16384);
    MemoryInline::FlatWrite32((r29 + 40), r0);
    goto loc_809FC188;
}

loc_809FC178:
{
    r0 = 16384;
    MemoryInline::FlatWrite32((r29 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r29 + 40), r0);
}

loc_809FC188:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r3 = 1717960704;
    r3 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
}

loc_809FC1B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_809FC1C0;
    }
}

loc_809FC1B4:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
    goto loc_809FC1C8;
}

loc_809FC1C0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
}

loc_809FC1C8:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_809FC1D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FC1E0;
    }
}

loc_809FC1D4:
{
}

loc_809FC1D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FC200;
    }
}

loc_809FC1DC:
{
    goto loc_809FC21C;
}

loc_809FC1E0:
{
    r3 = (r1 + 8);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6036));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6032));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    goto loc_809FC21C;
}

loc_809FC200:
{
    r3 = (r1 + 8);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6036));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6028));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_809FC21C:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 36));
    ctx->lr = 0x809FC228u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005101C_44D4 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_44D4);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_44D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 40));
    ctx->lr = 0x809FC234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = (r29 + 24);
    r4 = (r31 + 60);
    ctx->lr = 0x809FC240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r29 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x809FC24Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r3 = r29;
    r4 = 0x80A30000u;
    r4 = (r4 + -17284);
    r5 = 0x80A30000u;
    r5 = (r5 + -17288);
    r6 = 0;
    r7 = 23;
    r8 = 2;
    ctx->lr = 0x809FC270u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_4EF7 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_4EF7);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_4EF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    r4 = 3;
    r5 = (r29 + 24);
    r6 = (r29 + 36);
    r7 = MemoryInline::FlatRead8((r29 + 8));
    r31 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6024));
    ctx->lr = 0x809FC290u;
    if constexpr (KnownRegArgsCpuCall<0x802F229Cu>(&func_802F229C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_802F229C_53CD = func_802F229C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F229C_53CD);
        r4 = static_cast<uint32_t>(regargs_result_802F229C_53CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802F229Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6024));
    r4 = (r29 + 24);
    ctx->lr = 0x809FC2A0u;
    if constexpr (KnownRegArgsCpuCall<0x8010A9ECu>(&func_8010A9EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8010A9EC_5AEE = func_8010A9EC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8010A9EC_5AEE);
        r4 = static_cast<uint32_t>(regargs_result_8010A9EC_5AEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010A9ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_809FC2B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809FC2C8;
    }
}

loc_809FC2B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 2836));
    r4 = (r29 + 24);
    r5 = 0;
    ctx->lr = 0x809FC2C8u;
    if constexpr (KnownRegArgsCpuCall<0x800DC924u>(&func_800DC924)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800DC924_6186 = func_800DC924_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC924_6186);
        r4 = static_cast<uint32_t>(regargs_result_800DC924_6186 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC924u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_809FC2C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FBD5C func_809FBD5C preserves=true fpr_mask=0x00000000
