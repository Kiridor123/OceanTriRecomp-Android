#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80344E08(CpuContext* ctx);
extern "C" uint64_t func_80344E08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034530C(CpuContext* ctx);
extern "C" uint64_t func_8034530C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034550C(CpuContext* ctx);
extern "C" uint64_t func_8034550C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803455B0(CpuContext* ctx);
extern "C" uint64_t func_803455B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803459F8(CpuContext* ctx);
extern "C" uint64_t func_803459F8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345AD0(CpuContext* ctx);
extern "C" uint64_t func_80345AD0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345FB0(CpuContext* ctx);
extern "C" uint64_t func_80345FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803463C4(CpuContext* ctx);
extern "C" uint64_t func_803463C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80347BB8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
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
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_ca_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_80347BB8;

loc_80347BB8:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r4 = 0x806A0000u;
    r31 = (r4 + 31072);
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
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
    r23 = r3;
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
    r22 = 0;
    r24 = (r3 & 65535);
    goto loc_80347C44;
}

loc_80347C0C:
{
    r3 = r23;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl3_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl3_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D080:
{
    r3 = 0;
    goto loc_inl3_cont_8012D068;
}

loc_inl3_0x8012D088:
{
    r3 = 1;
}

loc_inl3_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_80347C18:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80347C3C;
    }
}

loc_80347C1C:
{
    r3 = r25;
    r4 = r23;
    ctx->lr = 0x80347C28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x803443B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80347C2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347C3C;
    }
}

loc_80347C30:
{
    r27 = r23;
    MemoryInline::FlatWrite32((r25 + 24), r23);
    goto loc_80347C4C;
}

loc_80347C3C:
{
    r22 = (r22 + 1);
    r23 = (r23 + 2840);
}

loc_80347C44:
{
}

loc_80347C48:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r24))) {
        goto loc_80347C0C;
    }
}

loc_80347C4C:
{
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 140), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 148), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 156), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 164), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 172), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 180), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 184), r0);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 188), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 196), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 200), r0);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 204), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 212), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 216), r0);
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 220), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 228), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 236), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 240), r0);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r1 + 248), r0);
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 260), r0);
    }
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r23 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl5_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB50;
    }
}

loc_inl5_0x800CFB48:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB64;
    }
}

loc_inl5_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB64:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_inl5_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r30 = 0;
    r22 = 0;
    r29 = (r1 + 136);
    r24 = (r3 & 65535);
    goto loc_80347D40;
}

loc_80347CF8:
{
    r3 = r25;
    r4 = r23;
    ctx->lr = 0x80347D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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

loc_80347D08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347D38;
    }
}

loc_80347D0C:
{
    r0 = r30;
    r30 = (r30 + 1);
    r0 = (r0 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r29_addr_2 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_2, r23);
    r3 = MemoryInline::FlatRead8((r23 + 481));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80347D2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347D38;
    }
}

loc_80347D30:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80347D38:
{
    r22 = (r22 + 1);
    r23 = (r23 + 2840);
}

loc_80347D40:
{
}

loc_80347D44:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r24))) {
        goto loc_80347CF8;
    }
}

loc_80347D48:
{
    r29 = 0;
    r23 = 0;
    r24 = (r1 + 8);
}

loc_80347D54:
{
    r3 = r25;
    r4 = r31;
    ctx->lr = 0x80347D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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

loc_80347D64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347D94;
    }
}

loc_80347D68:
{
    r0 = r29;
    r29 = (r29 + 1);
    r0 = (r0 & 255);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r24_addr_2 = (r24 + r0);
    MemoryInline::FlatWrite32(r24_addr_2, r31);
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80347D88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347D94;
    }
}

loc_80347D8C:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80347D94:
{
    r23 = (r23 + 1);
    r31 = (r31 + 68);
}

loc_80347DA0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(128))) {
        goto loc_80347D54;
    }
}

loc_80347DA4:
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
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r4 + r3);
    r7 = (r7 + r7_ca_0);
    r31 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80347DC8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80347DE0;
    }
}

loc_80347DCC:
{
}

loc_80347DD0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80347ED4;
    }
}

loc_80347DD4:
{
}

loc_80347DD8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(5))) {
        goto loc_80347F80;
    }
}

loc_80347DDC:
{
    goto loc_80347FA4;
}

loc_80347DE0:
{
    r6 = 0;
    r4 = (r1 + 136);
    ctr = r5;
}

loc_80347DF0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80347E74;
    }
}

loc_80347DF4:
{
    r5 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r5 + 481));
}

loc_80347E04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347E68;
    }
}

loc_80347E08:
{
    r0 = MemoryInline::FlatRead8((r25 + 11));
}

loc_80347E10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80347E34;
    }
}

loc_80347E14:
{
    r0 = MemoryInline::FlatRead8((r5 + 1085));
}

loc_80347E1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80347E68;
    }
}

loc_80347E20:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3 = (r1 + 136);
    r3_addr_1 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_1);
    r31 = 1;
    goto loc_80347E74;
}

loc_80347E34:
{
}

loc_80347E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80347E68;
    }
}

loc_80347E3C:
{
    r0 = MemoryInline::FlatRead8((r5 + 2099));
}

loc_80347E44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80347E68;
    }
}

loc_80347E48:
{
    r0 = MemoryInline::FlatRead16((r25 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80347E50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(300))) {
        goto loc_80347E68;
    }
}

loc_80347E54:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r1 + 136);
    r3_addr_2 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_2);
    r31 = 1;
    goto loc_80347E74;
}

loc_80347E68:
{
    r4 = (r4 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80347DF4;
    }
}

loc_80347E74:
{
}

loc_80347E78:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80347E98;
    }
}

loc_80347E7C:
{
    r0 = MemoryInline::FlatRead16((r25 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80347E84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3600))) {
        goto loc_80347E98;
    }
}

loc_80347E88:
{
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80347E90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80347E98;
    }
}

loc_80347E94:
{
    r31 = 5;
}

loc_80347E98:
{
    r0 = MemoryInline::FlatRead8((r25 + 11));
}

loc_80347EA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80347FA4;
    }
}

loc_80347EA4:
{
    r0 = (r31 & 255);
}

loc_80347EAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80347FA4;
    }
}

loc_80347EB0:
{
}

loc_80347EB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_80347FA4;
    }
}

loc_80347EB8:
{
    r3 = r25;
    ctx->lr = 0x80347EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x803445C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80347EC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347FA4;
    }
}

loc_80347EC8:
{
    r26 = 1;
    r31 = 1;
    goto loc_80347FA4;
}

loc_80347ED4:
{
    r0 = MemoryInline::FlatRead8((r25 + 58));
}

loc_80347EDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80347F08;
    }
}

loc_80347EE0:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl6_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl6_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CEF40;
    }
}

loc_inl6_0x800CEF3C:
{
    r0 = 1;
}

loc_inl6_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_16 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl6_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_80347EF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80347F00;
    }
}

loc_80347EF8:
{
    r31 = 0;
    goto loc_80347FA4;
}

loc_80347F00:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 58), static_cast<uint8_t>(r0));
}

loc_80347F08:
{
    r22 = 1;
    r4 = (r1 + 136);
    r0 = (r30 & 255);
    ctr = r0;
}

loc_80347F1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80347F50;
    }
}

loc_80347F20:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r5 + 1085));
}

loc_80347F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80347F48;
    }
}

loc_80347F30:
{
    r3 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r5 + 481));
}

loc_80347F3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347F48;
    }
}

loc_80347F40:
{
    r22 = 0;
    goto loc_80347F50;
}

loc_80347F48:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80347F20;
    }
}

loc_80347F50:
{
    r0 = MemoryInline::FlatRead8((r25 + 5));
}

loc_80347F58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80347F70;
    }
}

loc_80347F5C:
{
    r3 = r25;
    ctx->lr = 0x80347F64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x803445C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80347F68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347F70;
    }
}

loc_80347F6C:
{
    r22 = 0;
}

loc_80347F70:
{
}

loc_80347F74:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_80347FA4;
    }
}

loc_80347F78:
{
    r31 = 0;
    goto loc_80347FA4;
}

loc_80347F80:
{
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80347F88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80347FA4;
    }
}

loc_80347F8C:
{
    r3 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r25 + 16));
}

loc_80347F98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347FA4;
    }
}

loc_80347F9C:
{
    r31 = 0;
    r27 = 0;
}

loc_80347FA4:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
    r4 = (r31 & 255);
}

loc_80347FB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80347FC4;
    }
}

loc_80347FB4:
{
    r3 = r25;
    r5 = r27;
    r6 = r26;
    ctx->lr = 0x80347FC4u;
    if constexpr (KnownRegArgsCpuCall<0x8034530Cu>(&func_8034530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8034530C_78C2 = func_8034530C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034530C_78C2);
        r4 = static_cast<uint32_t>(regargs_result_8034530C_78C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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

loc_80347FC4:
{
    r0 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80347FCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80347FE4;
    }
}

loc_80347FD0:
{
}

loc_80347FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80348104;
    }
}

loc_80347FD8:
{
}

loc_80347FDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8034827C;
    }
}

loc_80347FE0:
{
    goto loc_80348320;
}

loc_80347FE4:
{
    r0 = MemoryInline::FlatRead8((r25 + 11));
}

loc_80347FEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80348010;
    }
}

loc_80347FF0:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80347FF8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(900))) {
        goto loc_80348008;
    }
}

loc_80347FFC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    goto loc_80348010;
}

loc_80348008:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
}

loc_80348010:
{
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80348018:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80348028;
    }
}

loc_8034801C:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 16));
    ctx->lr = 0x80348028u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803459F8_8686 = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_8686);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_8686 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_80348028:
{
    r3 = r25;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80348034:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80348320;
    }
}

loc_80348038:
{
    r0 = MemoryInline::FlatRead16((r25 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80348040:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_80348320;
    }
}

loc_80348044:
{
    r23 = 0;
    r24 = (r1 + 136);
    r26 = (r30 & 255);
    goto loc_803480F8;
}

loc_80348054:
{
    r5 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r5 + 481));
}

loc_80348064:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803480F0;
    }
}

loc_80348068:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 54));
    r5 = (r5 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10064));
    ctx->lr = 0x8034807Cu;
    if constexpr (KnownRegArgsCpuCall<0x80345AD0u>(&func_80345AD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        const auto regargs_result_80345AD0_8F7D = func_80345AD0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345AD0_8F7D);
        r4 = static_cast<uint32_t>(regargs_result_80345AD0_8F7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80345AD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80348080:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803480F0;
    }
}

loc_80348084:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 16));
    r5 = MemoryInline::FlatRead8((r25 + 18));
    r6 = 0x805F0000u;
    r6 = (r6 + -26928);
    ctx->lr = 0x8034809Cu;
    if constexpr (KnownRegArgsCpuCall<0x803463C4u>(&func_803463C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_803463C4_95CB = func_803463C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803463C4_95CB);
        r4 = static_cast<uint32_t>(regargs_result_803463C4_95CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x803463C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_803480A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803480CC;
    }
}

loc_803480A8:
{
    r3 = MemoryInline::FlatRead8((r25 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r25 + 54), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_803480BC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(6))) {
        goto loc_803480D0;
    }
}

loc_803480C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 54), static_cast<uint8_t>(r0));
    goto loc_803480D0;
}

loc_803480CC:
{
    MemoryInline::FlatWrite8((r25 + 54), static_cast<uint8_t>(r3));
}

loc_803480D0:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 54));
    ctx->lr = 0x803480DCu;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803459F8_9C9E = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_9C9E);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_9C9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r25;
    r4 = 4;
    r5 = MemoryInline::FlatRead8((r25 + 54));
    ctx->lr = 0x803480ECu;
    if constexpr (KnownRegArgsCpuCall<0x8034550Cu>(&func_8034550C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8034550C_A1CB = func_8034550C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034550C_A1CB);
        r4 = static_cast<uint32_t>(regargs_result_8034550C_A1CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    goto loc_80348320;
}

loc_803480F0:
{
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_803480F8:
{
}

loc_803480FC:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r26))) {
        goto loc_80348054;
    }
}

loc_80348100:
{
    goto loc_80348320;
}

loc_80348104:
{
    r0 = MemoryInline::FlatRead16((r25 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8034810C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_803481F0;
    }
}

loc_80348110:
{
    r23 = 0;
    r24 = (r1 + 136);
    r26 = (r30 & 255);
    goto loc_803481E8;
}

loc_80348120:
{
    r3 = MemoryInline::FlatRead32(r24);
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl8_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl8_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x8012D088;
    }
}

loc_inl8_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl8_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl8_0x8012D088;
    }
}

loc_inl8_0x8012D080:
{
    r3 = 0;
    goto loc_inl8_cont_8012D068;
}

loc_inl8_0x8012D088:
{
    r3 = 1;
}

loc_inl8_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8034812C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803481E0;
    }
}

loc_80348130:
{
    r4 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead8((r4 + 485));
}

loc_8034813C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_803481E0;
    }
}

loc_80348140:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r4 = MemoryInline::FlatRead8((r4 + 10));
    ctx->lr = 0x8034814Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80348158:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803481E0;
    }
}

loc_8034815C:
{
    r4 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead8((r25 + 20));
    r0 = MemoryInline::FlatRead8((r4 + 481));
}

loc_8034816C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803481E0;
    }
}

loc_80348170:
{
    r0 = MemoryInline::FlatRead8((r4 + 1085));
}

loc_80348178:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803481E0;
    }
}

loc_8034817C:
{
    r0 = MemoryInline::FlatRead8((r25 + 5));
}

loc_80348184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80348198;
    }
}

loc_80348188:
{
    r3 = r25;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80348194:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803481B8;
    }
}

loc_80348198:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead32(r24);
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x803481B4u;
    if constexpr (KnownRegArgsCpuCall<0x803455B0u>(&func_803455B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803455B0_BA1D = func_803455B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803455B0_BA1D);
        r4 = static_cast<uint32_t>(regargs_result_803455B0_BA1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x803455B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803481D4;
}

loc_803481B8:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead32(r24);
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 1;
    ctx->lr = 0x803481D4u;
    if constexpr (KnownRegArgsCpuCall<0x803455B0u>(&func_803455B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803455B0_C316 = func_803455B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803455B0_C316);
        r4 = static_cast<uint32_t>(regargs_result_803455B0_C316 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x803455B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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

loc_803481D4:
{
    r0 = MemoryInline::FlatRead8((r25 + 16));
}

loc_803481DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803481F0;
    }
}

loc_803481E0:
{
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_803481E8:
{
}

loc_803481EC:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r26))) {
        goto loc_80348120;
    }
}

loc_803481F0:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r25 + 20));
    r5 = 0;
    ctx->lr = 0x80348200u;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_80345FB0_CD0A = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_CD0A);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_CD0A >> 32);
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

loc_80348208:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034826C;
    }
}

loc_8034820C:
{
    r4 = MemoryInline::FlatRead8((r25 + 10));
}

loc_80348214:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80348224;
    }
}

loc_80348218:
{
}

loc_8034821C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80348240;
    }
}

loc_80348220:
{
    goto loc_80348320;
}

loc_80348224:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r25 + 10), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    goto loc_80348320;
}

loc_80348240:
{
    r3 = MemoryInline::FlatRead16((r25 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 34), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80348254:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(900))) {
        goto loc_80348320;
    }
}

loc_80348258:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r25 + 10), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    goto loc_80348320;
}

loc_8034826C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 11), static_cast<uint8_t>(r0));
    goto loc_80348320;
}

loc_8034827C:
{
    r4 = MemoryInline::FlatRead8((r25 + 16));
    r0 = MemoryInline::FlatRead8((r25 + 20));
}

loc_80348288:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80348320;
    }
}

loc_8034828C:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r25 + 15));
}

loc_80348298:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80348320;
    }
}

loc_8034829C:
{
    r5 = (r1 + 136);
    r0 = (r30 & 255);
    ctr = r0;
}

loc_803482AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803482D0;
    }
}

loc_803482B0:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_803482BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803482C8;
    }
}

loc_803482C0:
{
    r6 = 1;
    goto loc_803482D0;
}

loc_803482C8:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803482B0;
    }
}

loc_803482D0:
{
}

loc_803482D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8034830C;
    }
}

loc_803482D8:
{
    r5 = (r1 + 8);
    r0 = (r29 & 255);
    ctr = r0;
}

loc_803482E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8034830C;
    }
}

loc_803482EC:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_803482F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80348304;
    }
}

loc_803482FC:
{
    r6 = 1;
    goto loc_8034830C;
}

loc_80348304:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803482EC;
    }
}

loc_8034830C:
{
}

loc_80348310:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_80348320;
    }
}

loc_80348314:
{
    r3 = r25;
    r5 = 0;
    ctx->lr = 0x80348320u;
    if constexpr (KnownRegArgsCpuCall<0x80344E08u>(&func_80344E08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80344E08_DFC5 = func_80344E08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80344E08_DFC5);
        r4 = static_cast<uint32_t>(regargs_result_80344E08_DFC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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

loc_80348320:
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
    ctx->gpr[8] = r8;
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

extern "C" void func_80347BB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80347BB8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80347BB8 func_80347BB8 preserves=true fpr_mask=0x00000000
