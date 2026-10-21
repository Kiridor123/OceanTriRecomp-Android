#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8029628C(CpuContext* ctx);
extern "C" uint32_t func_8029628C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802963CC(CpuContext* ctx);
extern "C" uint32_t func_802963CC_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802968D4(CpuContext* ctx);
extern "C" uint64_t func_802968D4_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80297878(CpuContext* ctx);
extern "C" uint64_t func_80297878_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_80291D34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80291D34u);
    goto loc_80291D34;

loc_80291D34:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r11 = (r1 + 272);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r16 = r4;
    r14 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r17 = r7;
    r18 = r8;
    r19 = r9;
    r20 = r10;
    r21 = MemoryInline::FlatRead32((r1 + 280));
    r3 = (r1 + 88);
    ctx->lr = 0x80291D74u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_C68 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_C68;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 108);
    ctx->lr = 0x80291D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_E9D = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_E9D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 128);
    ctx->lr = 0x80291D84u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_10D2 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_10D2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 148);
    ctx->lr = 0x80291D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_1309 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_1309;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 168);
    ctx->lr = 0x80291D94u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_1540 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_1540;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r26 = 0;
    r25 = 0;
    r0 = (r16 & 255);
}

loc_80291DA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80291DB8;
    }
}

loc_80291DA8:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80291DB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80291DC0;
    }
}

loc_80291DB8:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r16 = r3;
}

loc_80291DC0:
{
    r0 = (r16 & 255);
    r4 = (r0 * 136);
    r3 = 0x806B0000u;
    r0 = (r3 + -6904);
    r24 = (r0 + r4);
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80291DDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80291DE8;
    }
}

loc_80291DE0:
{
    r3 = -1;
    goto loc_802920D8;
}

loc_80291DE8:
{
    r3 = r15;
    r4 = r24;
    if constexpr (KnownRegArgsCpuCall<0x802963CCu>(&func_802963CC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802963CC_1BBA = func_802963CC_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_802963CC_1BBA;
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802963CCu>(ctx);
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80291DF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80292048;
    }
}

loc_80291DFC:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 64);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r15;
    r4 = r24;
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->lr = 0x80291E30u;
    if constexpr (KnownRegArgsCpuCall<0x802968D4u>(&func_802968D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802968D4_2189 = func_802968D4_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802968D4_2189);
        r4 = static_cast<uint32_t>(regargs_result_802968D4_2189 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802968D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32(r15);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r15 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r23 = 0;
    r30 = (r1 + 32);
    r29 = (r1 + 88);
    r3 = 0x806B0000u;
    r28 = (r3 + -4864);
    r31 = 1;
    goto loc_80292038;
}

loc_80291E5C:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = r23;
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r6 = r24;
    // inline leaf 0x80296A0C (10 guest instruction(s))
    r8 = MemoryInline::FlatRead32((r6 + 120));
    r7 = MemoryInline::FlatRead32((r6 + 108));
    r0 = MemoryInline::FlatRead32((r6 + 112));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r8_addr_2 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_2);
    // end of inlined leaf 0x80296A0C
    r27 = r3;
    goto loc_80292024;
}

loc_80291E78:
{
    r0 = MemoryInline::FlatRead16(r22);
}

loc_80291E80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80291E8C;
    }
}

loc_80291E84:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r0));
}

loc_80291E8C:
{
    r0 = MemoryInline::FlatRead16(r22);
    r0 = (r17 & r0);
}

loc_80291E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80292020;
    }
}

loc_80291E9C:
{
    r3 = (r16 & 255);
    // inline leaf 0x802B0B50 (6 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 10268));
    // end of inlined leaf 0x802B0B50
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r22 + 7));
    r0 = (r0 & r3);
}

loc_80291EB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80292020;
    }
}

loc_80291EB8:
{
    r3 = (r18 & 65535);
    r0 = MemoryInline::FlatRead16((r22 + 4));
    r0 = (r3 & r0);
}

loc_80291EC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80292020;
    }
}

loc_80291ECC:
{
    r3 = r22;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    if constexpr (KnownRegArgsCpuCall<0x8029628Cu>(&func_8029628C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8029628C_2FA4 = func_8029628C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8029628C_2FA4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029628Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80291EDC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80292020;
    }
}

loc_80291EE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    r3 = (r1 + 52);
    r4 = (r1 + 20);
    ctx->lr = 0x80291F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80296A5Cu>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_80291F20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80292020;
    }
}

loc_80291F24:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 44));
    f0.d = MemoryInline::FlatReadFloat32(r15);
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r15 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = MemoryInline::FlatRead16(r22);
    r0 = (r3 & 4);
}

loc_80291F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80291F74;
    }
}

loc_80291F64:
{
}

loc_80291F68:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80291F74;
    }
}

loc_80291F6C:
{
    MemoryInline::FlatWriteFloat32(r19, f0.d);
    goto loc_80292020;
}

loc_80291F74:
{
    r0 = (r3 & 8192);
}

loc_80291F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80291F90;
    }
}

loc_80291F80:
{
}

loc_80291F84:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80291F90;
    }
}

loc_80291F88:
{
    MemoryInline::FlatWriteFloat32(r20, f0.d);
    goto loc_80292020;
}

loc_80291F90:
{
    r0 = (r3 & 16);
}

loc_80291F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80291FB8;
    }
}

loc_80291F9C:
{
}

loc_80291FA0:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80291FB8;
    }
}

loc_80291FA4:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r22 + 2));
    MemoryInline::FlatWrite8((r21 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r21 + 4), f0.d);
    goto loc_80292020;
}

loc_80291FB8:
{
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r0 = MemoryInline::FlatRead16(r22);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 2));
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 3));
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r22 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 6));
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 7));
    r0 = (r0 & 15);
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r0));
    r3 = (r29 + 8);
    r4 = (r22 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWrite32(r28, r22);
    r30 = (r30 + 4);
    r29 = (r29 + 20);
    r28 = (r28 + 4);
    r26 = (r26 + 1);
    r25 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
}

loc_8029201C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_8029208C;
    }
}

loc_80292020:
{
    r27 = (r27 + 4);
}

loc_80292024:
{
    r22 = MemoryInline::FlatRead32(r27);
    r0 = (r22 + 65536);
}

loc_80292030:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80291E78;
    }
}

loc_80292034:
{
    r23 = (r23 + 1);
}

loc_80292038:
{
    r0 = MemoryInline::FlatRead32((r24 + 112));
}

loc_80292040:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_80291E5C;
    }
}

loc_80292044:
{
    goto loc_8029208C;
}

loc_80292048:
{
    f0.d = MemoryInline::FlatReadFloat32((r15 + 4));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r14, 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r14, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r14 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r14 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r14 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r14 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r14 + 7), static_cast<uint8_t>(r0));
    r3 = (r14 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14184));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = 0;
    goto loc_802920D8;
}

loc_8029208C:
{
}

loc_80292090:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8029209C;
    }
}

loc_80292094:
{
    r3 = 0;
    goto loc_802920D8;
}

loc_8029209C:
{
    r3 = r14;
    r4 = r15;
    r5 = (r1 + 88);
    r6 = (r1 + 32);
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    ctx->lr = 0x802920B8u;
    if constexpr (KnownRegArgsCpuCall<0x80297878u>(&func_80297878)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80297878_4F45 = func_80297878_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80297878_4F45);
        r4 = static_cast<uint32_t>(regargs_result_80297878_4F45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80297878u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14180));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802920C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802920D4;
    }
}

loc_802920CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_802920D4:
{
    r3 = 1;
}

loc_802920D8:
{
    r11 = (r1 + 272);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80291D34 func_80291D34 preserves=true fpr_mask=0x00000000
