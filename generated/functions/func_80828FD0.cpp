#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_80829154_loc_0 = 0;
    uint32_t addr_stfsx_8082924C_loc_0 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x80828FD0u);
    goto loc_80828FD0;

loc_80828FD0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 64);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r6 = 0x80840000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    f30.d = MemoryInline::FlatReadFloat32((r6 + 18548));
    r0 = MemoryInline::FlatRead32((r7 + 16));
    r22 = r3;
    r23 = r5;
    r31 = (r1 + 8);
    r0 = (r7 + r0);
    r24 = 0;
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r29 = (r7 + r0);
    r27 = (r29 + 24);
    goto loc_8082926C;
}

loc_80829034:
{
    r0 = MemoryInline::FlatRead32(r27);
    r29_addr_2 = (r29 + r0);
    r3 = MemoryInline::FlatRead32(r29_addr_2);
    r28 = (r29 + r0);
    r26 = (r28 + 8);
    r0 = (r3 + -1380712448);
}

loc_8082904C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(19779))) {
        goto loc_8082906C;
    }
}

loc_80829050:
{
}

loc_80829054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21587))) {
        goto loc_808290F8;
    }
}

loc_80829058:
{
}

loc_8082905C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21584))) {
        goto loc_80829170;
    }
}

loc_80829060:
{
}

loc_80829064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(18765))) {
        goto loc_808291F0;
    }
}

loc_80829068:
{
    goto loc_80829264;
}

loc_8082906C:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
    r25 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r22 + 16));
}

loc_8082907C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80829264;
    }
}

loc_80829080:
{
    goto loc_808290E8;
}

loc_80829084:
{
    r0 = MemoryInline::FlatRead32(r26);
    f1.d = f31.d;
    r21 = (r28 + r0);
    r0 = MemoryInline::FlatRead32((r21 + 8));
    r4 = MemoryInline::FlatRead16((r21 + 4));
    r3 = (r21 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80828720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 5u>(ctx, r31, PPC_PsFromScalarInline(f0.d));
    r6 = -1024;
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808290B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(-1024))) {
        goto loc_808290BC;
    }
}

loc_808290B8:
{
    r6 = r0;
}

loc_808290BC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead8((r21 + 1));
}

loc_808290C8:
{
    r3 = r23;
    r5 = 1023;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1023))) {
        goto loc_808290D8;
    }
}

loc_808290D4:
{
    r5 = r6;
}

loc_808290D8:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x8082EEF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = (r26 + 4);
    r25 = (r25 + 1);
}

loc_808290E8:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_808290F0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_80829084;
    }
}

loc_808290F4:
{
    goto loc_80829264;
}

loc_808290F8:
{
    f29.d = MemoryInline::FlatReadFloat32((r22 + 16));
    r30 = 0;
    goto loc_80829160;
}

loc_80829104:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r23 + 76));
    r21 = (r28 + r3);
    r28_addr_7 = (r28 + r3);
    r3 = MemoryInline::FlatRead8(r28_addr_7);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_13 & 15);
}

loc_8082911C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80829158;
    }
}

loc_80829120:
{
    r0 = MemoryInline::FlatRead32((r21 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r21 + 4));
    r3 = (r21 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80828720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f31.d = f1.d;
    r25 = MemoryInline::FlatRead8((r21 + 1));
    r21 = MemoryInline::FlatRead8(r21);
    r3 = r23;
    // inline leaf 0x8082E0D0 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_14 & 480);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8082E0D0
    r4 = (r21 * 20);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r3 + r4);
    addr_stfsx_80829154_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80829154_loc_0, f31.d);
}

loc_80829158:
{
    r26 = (r26 + 4);
    r30 = (r30 + 1);
}

loc_80829160:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_80829168:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80829104;
    }
}

loc_8082916C:
{
    goto loc_80829264;
}

loc_80829170:
{
    r25 = MemoryInline::FlatRead32((r22 + 20));
}

loc_80829178:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80829264;
    }
}

loc_8082917C:
{
    f29.d = MemoryInline::FlatReadFloat32((r22 + 16));
    r30 = 0;
    goto loc_808291E0;
}

loc_80829188:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r23 + 80));
    r21 = (r28 + r3);
    r28_addr_5 = (r28 + r3);
    r3 = MemoryInline::FlatRead8(r28_addr_5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & 15);
}

loc_808291A0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_808291D8;
    }
}

loc_808291A4:
{
    r0 = MemoryInline::FlatRead8((r21 + 1));
}

loc_808291AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808291D8;
    }
}

loc_808291B0:
{
    r0 = MemoryInline::FlatRead32((r21 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r21 + 4));
    r3 = (r21 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80828630u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 262140);
    r4 = MemoryInline::FlatRead8(r21);
    r25_addr_3 = (r25 + r0);
    r5 = MemoryInline::FlatRead32(r25_addr_3);
    r3 = r23;
    ctx->lr = 0x808291D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8082EBC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_808291D8:
{
    r26 = (r26 + 4);
    r30 = (r30 + 1);
}

loc_808291E0:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_808291E8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80829188;
    }
}

loc_808291EC:
{
    goto loc_80829264;
}

loc_808291F0:
{
    f29.d = MemoryInline::FlatReadFloat32((r22 + 16));
    r30 = 0;
    goto loc_80829258;
}

loc_808291FC:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r23 + 76));
    r25 = (r28 + r3);
    r28_addr_3 = (r28 + r3);
    r3 = MemoryInline::FlatRead8(r28_addr_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_3 & 3);
}

loc_80829214:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80829250;
    }
}

loc_80829218:
{
    r0 = MemoryInline::FlatRead32((r25 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r25 + 4));
    r3 = (r25 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80828720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f31.d = f1.d;
    r21 = MemoryInline::FlatRead8((r25 + 1));
    r25 = MemoryInline::FlatRead8(r25);
    r3 = r23;
    // inline leaf 0x8082E490 (22 guest instruction(s))
    r9 = MemoryInline::FlatRead32((r3 + 76));
    r11 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 15);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_3 & 4);
    r3 = (r0 * 20);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_3 & 4);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_3 & 4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r5 = (r5_rot_3 & 4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r4 = (r4_rot_3 & 60);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_5 & 480);
    r0 = (r4 + r0);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r10 = (r10_rot_3 & 28);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_3 & 4);
    r5 = (r7 + r5);
    r4 = (r8 + r6);
    r3 = (r3 + r0);
    r4 = (r5 + r4);
    r0 = (r10 + r9);
    r3 = (r4 + r3);
    r0 = (r11 + r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8082E490
    r4 = (r25 * 20);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r4);
    addr_stfsx_8082924C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8082924C_loc_0, f31.d);
}

loc_80829250:
{
    r26 = (r26 + 4);
    r30 = (r30 + 1);
}

loc_80829258:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_80829260:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_808291FC;
    }
}

loc_80829264:
{
    r27 = (r27 + 4);
    r24 = (r24 + 1);
}

loc_8082926C:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
}

loc_80829274:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_80829034;
    }
}

loc_80829278:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828FD0 func_80828FD0 preserves=true fpr_mask=0x00000000
