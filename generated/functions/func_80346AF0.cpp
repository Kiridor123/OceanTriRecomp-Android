#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80127220(CpuContext* ctx);
extern "C" uint64_t func_80127220_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80344E08(CpuContext* ctx);
extern "C" uint64_t func_80344E08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034530C(CpuContext* ctx);
extern "C" uint64_t func_8034530C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034550C(CpuContext* ctx);
extern "C" uint64_t func_8034550C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80345FB0(CpuContext* ctx);
extern "C" uint64_t func_80345FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803461A0(CpuContext* ctx);
extern "C" uint64_t func_803461A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80346A94(CpuContext* ctx);
extern "C" uint32_t func_80346A94_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80346AF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r31_ca_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80346AF0u);
    goto loc_80346AF0;

loc_80346AF0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 308u, (r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r3 = 0x806A0000u;
    r31 = (r3 + 31072);
    r28 = 0;
    r26 = 0;
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 140), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 148), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r1 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r1 + 156), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r1 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r1 + 164), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r1 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r1 + 172), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r1 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r1 + 184), r0);
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r1 + 188), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r1 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 200u, (r1 + 200), r0);
        MemoryInline::WriteResolved32(guest_range_2, 204u, (r1 + 204), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 208u, (r1 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_2, 212u, (r1 + 212), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 216u, (r1 + 216), r0);
        MemoryInline::WriteResolved32(guest_range_2, 220u, (r1 + 220), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 224u, (r1 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 232u, (r1 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_2, 236u, (r1 + 236), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 240u, (r1 + 240), r0);
        MemoryInline::WriteResolved32(guest_range_2, 244u, (r1 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 248u, (r1 + 248), r0);
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r1 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 256u, (r1 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_2, 260u, (r1 + 260), r0);
    }
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r22 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r30 = 0;
    r29 = 0;
    r23 = 0;
    r24 = (r1 + 136);
    r27 = (r3 & 65535);
    goto loc_80346C1C;
}

loc_80346BC8:
{
    r3 = r25;
    r4 = r22;
    ctx->lr = 0x80346BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x803441C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80346BD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346C14;
    }
}

loc_80346BDC:
{
    r0 = (r30 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r24_addr_2 = (r24 + r0);
    MemoryInline::FlatWrite32(r24_addr_2, r22);
    r30 = (r30 + 1);
    r3 = MemoryInline::FlatRead8((r22 + 481));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346BF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80346C04;
    }
}

loc_80346BFC:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80346C04:
{
    r0 = MemoryInline::FlatRead8((r22 + 16));
}

loc_80346C0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80346C14;
    }
}

loc_80346C10:
{
    r26 = 1;
}

loc_80346C14:
{
    r23 = (r23 + 1);
    r22 = (r22 + 2840);
}

loc_80346C1C:
{
}

loc_80346C20:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r27))) {
        goto loc_80346BC8;
    }
}

loc_80346C24:
{
    r24 = 0;
    r27 = (r1 + 8);
}

loc_80346C2C:
{
    r3 = r25;
    r4 = r31;
    ctx->lr = 0x80346C38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80344260u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80346C3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80346C78;
    }
}

loc_80346C40:
{
    r0 = (r29 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r27_addr_2 = (r27 + r0);
    MemoryInline::FlatWrite32(r27_addr_2, r31);
    r29 = (r29 + 1);
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346C5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80346C68;
    }
}

loc_80346C60:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80346C68:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_80346C70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80346C78;
    }
}

loc_80346C74:
{
    r26 = 1;
}

loc_80346C78:
{
    r24 = (r24 + 1);
    r31 = (r31 + 68);
}

loc_80346C84:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(128))) {
        goto loc_80346C2C;
    }
}

loc_80346C88:
{
    r5 = (r30 & 255);
    r0 = (r29 & 255);
    r0 = (r5 + r0);
    r4 = (static_cast<int32_t>(r28) >> 31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0_subfc_sub_0 = r0;
    r0 = (r28 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r31_ca_0 = (xer >> 29) & 1u;
    r31 = (r4 + r3);
    r31 = (r31 + r31_ca_0);
    r28 = MemoryInline::FlatRead8((r25 + 8));
    r27 = 0;
    r7 = 0;
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80346CB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80346D48;
    }
}

loc_80346CBC:
{
    r4 = MemoryInline::FlatRead8((r25 + 16));
    r6 = (r1 + 136);
    ctr = r5;
}

loc_80346CCC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80346CF0;
    }
}

loc_80346CD0:
{
    r3 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_80346CDC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80346CE8;
    }
}

loc_80346CE0:
{
    r7 = 1;
    goto loc_80346CF0;
}

loc_80346CE8:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80346CD0;
    }
}

loc_80346CF0:
{
}

loc_80346CF4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80346D2C;
    }
}

loc_80346CF8:
{
    r5 = (r1 + 8);
    r0 = (r29 & 255);
    ctr = r0;
}

loc_80346D08:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80346D2C;
    }
}

loc_80346D0C:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80346D18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80346D24;
    }
}

loc_80346D1C:
{
    r7 = 1;
    goto loc_80346D2C;
}

loc_80346D24:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80346D0C;
    }
}

loc_80346D2C:
{
}

loc_80346D30:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_80346D48;
    }
}

loc_80346D34:
{
    r3 = r25;
    r5 = 0;
    ctx->lr = 0x80346D40u;
    if constexpr (KnownRegArgsCpuCall<0x80344E08u>(&func_80344E08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80344E08_441F = func_80344E08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80344E08_441F);
        r4 = static_cast<uint32_t>(regargs_result_80344E08_441F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80344E08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r28 = 0;
    r27 = 1;
}

loc_80346D48:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80346D50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80346D70;
    }
}

loc_80346D54:
{
}

loc_80346D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80346D70;
    }
}

loc_80346D5C:
{
}

loc_80346D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80346E1C;
    }
}

loc_80346D64:
{
}

loc_80346D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80346E68;
    }
}

loc_80346D6C:
{
    goto loc_80346E84;
}

loc_80346D70:
{
    r4 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r25 + 59));
}

loc_80346D7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80346D94;
    }
}

loc_80346D80:
{
    r3 = MemoryInline::FlatRead8((r25 + 58));
    r0 = (r3 + -1);
}

loc_80346D8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80346D94;
    }
}

loc_80346D90:
{
    r28 = 4;
}

loc_80346D94:
{
}

loc_80346D98:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(4))) {
        goto loc_80346DDC;
    }
}

loc_80346D9C:
{
    r3 = r25;
    r5 = 0;
    ctx->lr = 0x80346DA8u;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80345FB0_509D = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_509D);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_509D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80345FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r3 & 255);
}

loc_80346DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80346DC8;
    }
}

loc_80346DB4:
{
}

loc_80346DB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80346DD0;
    }
}

loc_80346DBC:
{
}

loc_80346DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80346DD8;
    }
}

loc_80346DC4:
{
    goto loc_80346DDC;
}

loc_80346DC8:
{
    r28 = 3;
    goto loc_80346DDC;
}

loc_80346DD0:
{
    r28 = 2;
    goto loc_80346DDC;
}

loc_80346DD8:
{
    r28 = 0;
}

loc_80346DDC:
{
}

loc_80346DE0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80346DEC;
    }
}

loc_80346DE4:
{
}

loc_80346DE8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_80346E84;
    }
}

loc_80346DEC:
{
}

loc_80346DF0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80346E84;
    }
}

loc_80346DF4:
{
    r3 = r25;
    ctx->lr = 0x80346DFCu;
    if constexpr (KnownRegArgsCpuCall<0x80346A94u>(&func_80346A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        const auto regargs_result_80346A94_5858 = func_80346A94_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80346A94_5858;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80346A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead16((r25 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80346E08:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_80346E84;
    }
}

loc_80346E0C:
{
}

loc_80346E10:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(1))) {
        goto loc_80346E84;
    }
}

loc_80346E14:
{
    r28 = 5;
    goto loc_80346E84;
}

loc_80346E1C:
{
    r4 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r25 + 59));
}

loc_80346E28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80346E40;
    }
}

loc_80346E2C:
{
    r3 = MemoryInline::FlatRead8((r25 + 58));
    r0 = (r3 + -1);
}

loc_80346E38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80346E40;
    }
}

loc_80346E3C:
{
    r28 = 4;
}

loc_80346E40:
{
}

loc_80346E44:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(4))) {
        goto loc_80346E84;
    }
}

loc_80346E48:
{
    r3 = r25;
    r5 = 0;
    ctx->lr = 0x80346E54u;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80345FB0_5F80 = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_5F80);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_5F80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x80345FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r3 & 255);
}

loc_80346E5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80346E84;
    }
}

loc_80346E60:
{
    r28 = 4;
    goto loc_80346E84;
}

loc_80346E68:
{
    r3 = MemoryInline::FlatRead16((r25 + 32));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150919784);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r25 + 32), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80346E7C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80346E84;
    }
}

loc_80346E80:
{
    r28 = 4;
}

loc_80346E84:
{
}

loc_80346E88:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80346E98;
    }
}

loc_80346E8C:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80346E94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r28))) {
        goto loc_80346EAC;
    }
}

loc_80346E98:
{
    r3 = r25;
    r4 = r28;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x80346EACu;
    if constexpr (KnownRegArgsCpuCall<0x8034530Cu>(&func_8034530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8034530C_6795 = func_8034530C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034530C_6795);
        r4 = static_cast<uint32_t>(regargs_result_8034530C_6795 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8034530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80346EAC:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80346EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80346EDC;
    }
}

loc_80346EB8:
{
}

loc_80346EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80346EDC;
    }
}

loc_80346EC0:
{
}

loc_80346EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80346EDC;
    }
}

loc_80346EC8:
{
}

loc_80346ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80346F08;
    }
}

loc_80346ED0:
{
}

loc_80346ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80346F18;
    }
}

loc_80346ED8:
{
    goto loc_80347054;
}

loc_80346EDC:
{
    r3 = MemoryInline::FlatRead8((r25 + 59));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346EE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80347054;
    }
}

loc_80346EEC:
{
    r3 = MemoryInline::FlatRead8((r25 + 58));
    r0 = (r3 + -1);
}

loc_80346EF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80347054;
    }
}

loc_80346EFC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    goto loc_80347054;
}

loc_80346F08:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150919944);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80347054;
}

loc_80346F18:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150919960);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8((r25 + 10));
}

loc_80346F2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80347054;
    }
}

loc_80346F30:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80346F38:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(600))) {
        goto loc_80347054;
    }
}

loc_80346F3C:
{
    r3 = r25;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80346F48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347054;
    }
}

loc_80346F4C:
{
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80346F54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80347054;
    }
}

loc_80346F58:
{
    r3 = MemoryInline::FlatRead8((r25 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r25 + 10), static_cast<uint8_t>(r0));
    r22 = 0;
    r3 = MemoryInline::FlatRead8((r25 + 19));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl4_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
}

loc_inl4_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802B06E4:
{
    r3 = r0;
    goto loc_inl4_cont_802B06CC;
}

loc_inl4_return:
{
}

loc_inl4_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80346F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80346F90;
    }
}

loc_80346F7C:
{
}

loc_80346F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80346FA4;
    }
}

loc_80346F84:
{
}

loc_80346F88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80346FB8;
    }
}

loc_80346F8C:
{
    goto loc_80346FC8;
}

loc_80346F90:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346F98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80346FC8;
    }
}

loc_80346F9C:
{
    r22 = 1;
    goto loc_80346FC8;
}

loc_80346FA4:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80346FC8;
    }
}

loc_80346FB0:
{
    r22 = 1;
    goto loc_80346FC8;
}

loc_80346FB8:
{
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80346FC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80346FC8;
    }
}

loc_80346FC4:
{
    r22 = 1;
}

loc_80346FC8:
{
}

loc_80346FCC:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_80347038;
    }
}

loc_80346FD0:
{
    r0 = (r30 & 255);
}

loc_80346FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80346FF8;
    }
}

loc_80346FDC:
{
    r3 = MemoryInline::FlatRead32((r1 + 136));
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_80126098_8218 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_8218);
        r4 = static_cast<uint32_t>(regargs_result_80126098_8218 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r25 + 36);
    r5 = MemoryInline::FlatRead8((r25 + 20));
    ctx->lr = 0x80346FF0u;
    if constexpr (KnownRegArgsCpuCall<0x80127220u>(&func_80127220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        const auto regargs_result_80127220_85AB = func_80127220_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80127220_85AB);
        r4 = static_cast<uint32_t>(regargs_result_80127220_85AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x80127220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        xer = ctx->xer;
    }
    r0 = r3;
    goto loc_80347044;
}

loc_80346FF8:
{
    r0 = (r29 & 255);
}

loc_80347000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80347028;
    }
}

loc_80347004:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    ctx->lr = 0x80347014u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80140C64u>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r25 + 36);
    r5 = MemoryInline::FlatRead8((r25 + 20));
    ctx->lr = 0x80347020u;
    if constexpr (KnownRegArgsCpuCall<0x80127220u>(&func_80127220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        const auto regargs_result_80127220_8CF7 = func_80127220_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80127220_8CF7);
        r4 = static_cast<uint32_t>(regargs_result_80127220_8CF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x80127220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        xer = ctx->xer;
    }
    r0 = r3;
    goto loc_80347044;
}

loc_80347028:
{
    r3 = r25;
    ctx->lr = 0x80347030u;
    if constexpr (KnownRegArgsCpuCall<0x803461A0u>(&func_803461A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_803461A0_9209 = func_803461A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803461A0_9209);
        r4 = static_cast<uint32_t>(regargs_result_803461A0_9209 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x803461A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = r3;
    goto loc_80347044;
}

loc_80347038:
{
    r3 = r25;
    ctx->lr = 0x80347040u;
    if constexpr (KnownRegArgsCpuCall<0x803461A0u>(&func_803461A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_803461A0_95FB = func_803461A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803461A0_95FB);
        r4 = static_cast<uint32_t>(regargs_result_803461A0_95FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x803461A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = r3;
}

loc_80347044:
{
    r3 = r25;
    r4 = 3;
    r5 = (r0 & 255);
    ctx->lr = 0x80347054u;
    if constexpr (KnownRegArgsCpuCall<0x8034550Cu>(&func_8034550C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8034550C_9A43 = func_8034550C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034550C_9A43);
        r4 = static_cast<uint32_t>(regargs_result_8034550C_9A43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8034550Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80347054:
{
    r11 = (r1 + 304);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80346AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80346AF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80346AF0 func_80346AF0 preserves=true fpr_mask=0x00000000
