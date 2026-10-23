#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052AB88(CpuContext* ctx);
extern "C" uint64_t func_8052AB88_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8052B7E0(CpuContext* ctx);
extern "C" uint64_t func_8052B7E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052BA70(CpuContext* ctx);
extern "C" uint64_t func_8052BA70_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8052C900(CpuContext* ctx);
extern "C" uint64_t func_8052C900_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052BEFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052BEFC;

loc_8052BEFC:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r31 = r4;
    r4 = 1380712448;
    r30 = r3;
    r14 = r5;
    r4 = (r4 + 22868);
    r3 = r31;
    // inline leaf 0x80535B10 (10 guest instruction(s))
}

loc_inl1_0x80535B10:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_inl1_0x80535B1C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x80535B30;
    }
}

loc_inl1_0x80535B20:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl1_0x80535B28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl1_0x80535B30;
    }
}

loc_inl1_0x80535B2C:
{
    r5 = 1;
}

loc_inl1_0x80535B30:
{
    r3 = r5;
}

loc_inl1_cont_80535B10:
{
    // end of inlined leaf 0x80535B10
}

loc_8052BF30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052BF3C;
    }
}

loc_8052BF34:
{
    r3 = 0;
    goto loc_8052C224;
}

loc_8052BF3C:
{
    r4 = MemoryInline::FlatRead16((r31 + 6));
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052BF48:
{
    r0 = (r4 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052BF64;
    }
}

loc_8052BF50:
{
}

loc_8052BF54:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_8052BF64;
    }
}

loc_8052BF58:
{
}

loc_8052BF5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8052BF64;
    }
}

loc_8052BF60:
{
    r3 = 1;
}

loc_8052BF64:
{
}

loc_8052BF68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052BF74;
    }
}

loc_8052BF6C:
{
    r3 = 0;
    goto loc_8052C224;
}

loc_8052BF74:
{
    r22 = 0;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r28 = 1885405184;
    MemoryInline::FlatWriteRam32((r1 + 20), r14);
    r16 = (r31 + r0);
    r20 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r22);
    r23 = (r28 + 25905);
    r19 = 0;
    r18 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r22);
    r17 = 0;
    r15 = 0;
    r14 = 1835073536;
    MemoryInline::FlatWriteRam32((r1 + 16), r22);
    r29 = 1954021376;
    r25 = 1651376128;
    r26 = 1819869184;
    r27 = 1735524352;
    r24 = 1718484992;
    goto loc_8052C214;
}

loc_8052BFC8:
{
    r3 = MemoryInline::FlatRead32(r16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r23));
}

loc_8052BFD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C144;
    }
}

loc_8052BFD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C048;
    }
}

loc_8052BFD8:
{
    r0 = (r27 + 28721);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052BFE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C150;
    }
}

loc_8052BFE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C018;
    }
}

loc_8052BFE8:
{
    r0 = (r24 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052BFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C0E0;
    }
}

loc_8052BFF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C008;
    }
}

loc_8052BFF8:
{
    r0 = (r25 + 25649);
}

loc_8052C000:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0F0;
    }
}

loc_8052C004:
{
    goto loc_8052C208;
}

loc_8052C008:
{
    r0 = (r27 + 25905);
}

loc_8052C010:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C204;
    }
}

loc_8052C014:
{
    goto loc_8052C208;
}

loc_8052C018:
{
    r0 = (r26 + 29745);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052C020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C0C4;
    }
}

loc_8052C024:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C038;
    }
}

loc_8052C028:
{
    r0 = (r27 + 29489);
}

loc_8052C030:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C1FC;
    }
}

loc_8052C034:
{
    goto loc_8052C208;
}

loc_8052C038:
{
    r0 = (r14 + 29745);
}

loc_8052C040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0E8;
    }
}

loc_8052C044:
{
    goto loc_8052C208;
}

loc_8052C048:
{
    r0 = (r29 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052C050:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C0D8;
    }
}

loc_8052C054:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C08C;
    }
}

loc_8052C058:
{
    r0 = (r28 + 29489);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052C060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C13C;
    }
}

loc_8052C064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C078;
    }
}

loc_8052C068:
{
    r0 = (r28 + 28209);
}

loc_8052C070:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0F0;
    }
}

loc_8052C074:
{
    goto loc_8052C208;
}

loc_8052C078:
{
    r4 = 1885929472;
    r0 = (r4 + 25393);
}

loc_8052C084:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0F0;
    }
}

loc_8052C088:
{
    goto loc_8052C208;
}

loc_8052C08C:
{
    r4 = 1970470912;
    r0 = (r4 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052C098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C134;
    }
}

loc_8052C09C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052C0B0;
    }
}

loc_8052C0A0:
{
    r0 = (r29 + 29745);
}

loc_8052C0A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0F0;
    }
}

loc_8052C0AC:
{
    goto loc_8052C208;
}

loc_8052C0B0:
{
    r4 = 2003697664;
    r0 = (r4 + 25649);
}

loc_8052C0BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8052C0F0;
    }
}

loc_8052C0C0:
{
    goto loc_8052C208;
}

loc_8052C0C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r16 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r16 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_8052C208;
}

loc_8052C0D8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r16);
    goto loc_8052C208;
}

loc_8052C0E0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r16);
    goto loc_8052C208;
}

loc_8052C0E8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r16);
    goto loc_8052C208;
}

loc_8052C0F0:
{
    r4 = r16;
    r5 = (r1 + 8);
    ctx->lr = 0x8052C0FCu;
    if constexpr (KnownRegArgsCpuCall<0x8052C900u>(&func_8052C900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8052C900_2805 = func_8052C900_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052C900_2805);
        r4 = static_cast<uint32_t>(regargs_result_8052C900_2805 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052C900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8052C100:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052C208;
    }
}

loc_8052C108:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_8052C110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052C118;
    }
}

loc_8052C114:
{
    MemoryInline::FlatWrite32((r30 + 16), r3);
}

loc_8052C118:
{
}

loc_8052C11C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8052C12C;
    }
}

loc_8052C120:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x8052C12Cu;
    if constexpr (KnownRegArgsCpuCall<0x8052AB88u>(&func_8052AB88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052AB88_317B = func_8052AB88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8052AB88_317B);
        r4 = static_cast<uint32_t>(regargs_result_8052AB88_317B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052AB88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8052C12C:
{
    r19 = r21;
    goto loc_8052C208;
}

loc_8052C134:
{
    MemoryInline::FlatWrite32((r19 + 180), r16);
    goto loc_8052C208;
}

loc_8052C13C:
{
    r20 = r19;
    goto loc_8052C208;
}

loc_8052C144:
{
    r19 = r20;
    r20 = MemoryInline::FlatRead32((r20 + 12));
    goto loc_8052C208;
}

loc_8052C150:
{
}

loc_8052C154:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8052C19C;
    }
}

loc_8052C158:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r18 = 1;
    r4 = 12;
    ctx->lr = 0x8052C168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C16C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C190;
    }
}

loc_8052C170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C194;
    }
}

loc_8052C174:
{
    MemoryInline::FlatWrite32((r3 + 4), r22);
    r4 = (r3 + 4);
    MemoryInline::FlatWrite32((r3 + 8), r22);
    MemoryInline::FlatWrite32(r3, r22);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_8052C194;
}

loc_8052C190:
{
    r3 = 0;
}

loc_8052C194:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    goto loc_8052C208;
}

loc_8052C19C:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8052C1A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052C208;
    }
}

loc_8052C1A8:
{
}

loc_8052C1AC:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(1))) {
        goto loc_8052C208;
    }
}

loc_8052C1B0:
{
    r21 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 44;
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    ctx->lr = 0x8052C1C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C1C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C1E4;
    }
}

loc_8052C1C8:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C1E8;
    }
}

loc_8052C1D0:
{
    r4 = r16;
    r5 = r21;
    ctx->lr = 0x8052C1DCu;
    if constexpr (KnownRegArgsCpuCall<0x8052B7E0u>(&func_8052B7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8052B7E0_4363 = func_8052B7E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052B7E0_4363);
        r4 = static_cast<uint32_t>(regargs_result_8052B7E0_4363 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052B7E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    goto loc_8052C1E8;
}

loc_8052C1E4:
{
    r4 = 0;
}

loc_8052C1E8:
{
}

loc_8052C1EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052C208;
    }
}

loc_8052C1F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x8052C1F8u;
    if constexpr (KnownRegArgsCpuCall<0x8052BA70u>(&func_8052BA70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052BA70_4B9F = func_8052BA70_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8052BA70_4B9F);
        r4 = static_cast<uint32_t>(regargs_result_8052BA70_4B9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052BA70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8052C208;
}

loc_8052C1FC:
{
    r17 = (r17 + 1);
    goto loc_8052C208;
}

loc_8052C204:
{
    r17 = (r17 + -1);
}

loc_8052C208:
{
    r0 = MemoryInline::FlatRead32((r16 + 4));
    r15 = (r15 + 1);
    r16 = (r16 + r0);
}

loc_8052C214:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
}

loc_8052C21C:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(r0))) {
        goto loc_8052BFC8;
    }
}

loc_8052C220:
{
    r3 = 1;
}

loc_8052C224:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052BEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052BEFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052BEFC func_8052BEFC preserves=true fpr_mask=0x00000000
