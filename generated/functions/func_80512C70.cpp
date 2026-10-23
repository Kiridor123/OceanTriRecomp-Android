#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8050C000(CpuContext* ctx);
extern "C" uint64_t func_8050C000_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C0E0(CpuContext* ctx);
extern "C" uint64_t func_8050C0E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C850(CpuContext* ctx);
extern "C" uint32_t func_8050C850_ra188_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C8F0(CpuContext* ctx);
extern "C" uint64_t func_8050C8F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050CAD0(CpuContext* ctx);
extern "C" uint64_t func_8050CAD0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80512B80(CpuContext* ctx);
extern "C" uint64_t func_80512B80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80512C70_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80512C70;

loc_80512C70:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r0 = MemoryInline::FlatRead32((r13 + -13788));
    r5 = 8;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r23 = r3;
}

loc_80512C98:
{
    r24 = r4;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CA0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13792));
}

loc_80512CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CAC:
{
    r0 = MemoryInline::FlatRead32((r13 + -13796));
}

loc_80512CB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CB8:
{
    r0 = MemoryInline::FlatRead32((r13 + -13800));
}

loc_80512CC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CC4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13804));
}

loc_80512CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CD0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13808));
}

loc_80512CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CDC:
{
    r0 = MemoryInline::FlatRead32((r13 + -13812));
}

loc_80512CE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80512CF0;
    }
}

loc_80512CE8:
{
    r3 = 0;
    goto loc_80512FE8;
}

loc_80512CF0:
{
}

loc_80512CF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80512FE4;
    }
}

loc_80512CF8:
{
    r25 = 0x80760000u;
    r30 = 2130706432;
    r27 = (r25 + 19392);
    r28 = 1;
    r29 = 0;
    r26 = 0x80790000u;
    r31 = 8;
    goto loc_80512FD4;
}

loc_80512D18:
{
    r3 = r23;
    r4 = (r25 + 19392);
    r7 = (r1 + 24);
    r8 = (r1 + 12);
    r5 = 512;
    r6 = 0;
    ctx->lr = 0x80512D34u;
    if constexpr (KnownRegArgsCpuCall<0x8050C000u>(&func_8050C000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8050C000_1872 = func_8050C000_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C000_1872);
        r4 = static_cast<uint32_t>(regargs_result_8050C000_1872 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8050C000u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80512D38:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80512D4C;
    }
}

loc_80512D40:
{
    r3 = r23;
    // inline leaf 0x8050C180 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13840));
    // end of inlined leaf 0x8050C180
    goto loc_80512FE4;
}

loc_80512D4C:
{
    r3 = (r25 + 19392);
    r4 = (r26 + 26696);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_21F5 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_21F5);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_21F5 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80512D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80512D6C;
    }
}

loc_80512D64:
{
    r3 = 1;
    goto loc_80512FE8;
}

loc_80512D6C:
{
}

loc_80512D70:
{
    r0 = MemoryInline::FlatRead8((r27 + 7));
    if ((static_cast<int32_t>(r21) >= static_cast<int32_t>(21))) {
        goto loc_80512D80;
    }
}

loc_80512D78:
{
    r3 = 1;
    goto loc_80512FE8;
}

loc_80512D80:
{
}

loc_80512D84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80512E34;
    }
}

loc_80512D88:
{
    r4 = r27;
    r3 = (r1 + 32);
    r5 = 21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r1 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80512DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80512DE4;
    }
}

loc_80512DA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80512DB4;
    }
}

loc_80512DA8:
{
}

loc_80512DAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80512DC0;
    }
}

loc_80512DB0:
{
    goto loc_80512FCC;
}

loc_80512DB4:
{
}

loc_80512DB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_80512FCC;
    }
}

loc_80512DBC:
{
    goto loc_80512E0C;
}

loc_80512DC0:
{
    MemoryInline::FlatWrite32((r13 + -13788), r28);
    r3 = MemoryInline::FlatRead16((r1 + 26));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r4 = (r0 & 65535);
    r5 = 0;
    ctx->lr = 0x80512DE0u;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_2D94 = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_2D94);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_2D94 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80512FCC;
}

loc_80512DE4:
{
    MemoryInline::FlatWrite32((r24 + 128), r29);
    MemoryInline::FlatWrite32((r13 + -13792), r28);
    r3 = MemoryInline::FlatRead16((r1 + 26));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r4 = (r0 & 65535);
    r5 = 0;
    ctx->lr = 0x80512E08u;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_3756 = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_3756);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_3756 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80512FCC;
}

loc_80512E0C:
{
    MemoryInline::FlatWrite32((r24 + 132), r29);
    MemoryInline::FlatWrite32((r13 + -13796), r28);
    r3 = MemoryInline::FlatRead16((r1 + 26));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r4 = (r0 & 65535);
    r5 = 0;
    ctx->lr = 0x80512E30u;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_4118 = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_4118);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_4118 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80512FCC;
}

loc_80512E34:
{
}

loc_80512E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80512FCC;
    }
}

loc_80512E3C:
{
    r4 = r27;
    r3 = (r1 + 32);
    r5 = 21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r1 + 40));
    // inline leaf 0x80520CD8 (1 guest instruction(s))
    // end of inlined leaf 0x80520CD8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80512E58:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80512E98;
    }
}

loc_80512E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80512E74;
    }
}

loc_80512E64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80512E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80512E80;
    }
}

loc_80512E6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80512E90;
    }
}

loc_80512E70:
{
    goto loc_80512E9C;
}

loc_80512E74:
{
}

loc_80512E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_80512E9C;
    }
}

loc_80512E7C:
{
    goto loc_80512E88;
}

loc_80512E80:
{
    MemoryInline::FlatWrite32((r13 + -13800), r28);
    goto loc_80512E9C;
}

loc_80512E88:
{
    MemoryInline::FlatWrite32((r13 + -13804), r28);
    goto loc_80512E9C;
}

loc_80512E90:
{
    MemoryInline::FlatWrite32((r13 + -13808), r28);
    goto loc_80512E9C;
}

loc_80512E98:
{
    MemoryInline::FlatWrite32((r13 + -13812), r28);
}

loc_80512E9C:
{
    r20 = 0;
    ctx->lr = 0x80512EA4u;
    if constexpr (KnownRegArgsCpuCall<0x8050C8F0u>(&func_8050C8F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->cr = cr;
        const auto regargs_result_8050C8F0_5107 = func_8050C8F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C8F0_5107);
        r4 = static_cast<uint32_t>(regargs_result_8050C8F0_5107 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8050C8F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
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

loc_80512EA8:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80512EB8;
    }
}

loc_80512EB0:
{
    r20 = 0;
    goto loc_80512F00;
}

loc_80512EB8:
{
    r22 = 0;
}

loc_80512EBC:
{
    r3 = MemoryInline::FlatRead32((r21 + 12));
    r3_addr_3 = (r3 + r22);
    r19 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_80512EC8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80512F00;
    }
}

loc_80512ECC:
{
    r3 = (r30 + 1);
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    r0 = MemoryInline::FlatRead32(r19);
}

loc_80512EDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80512EF8;
    }
}

loc_80512EE0:
{
    r20 = r0;
    r3 = r19;
    ctx->lr = 0x80512EECu;
    if constexpr (KnownRegArgsCpuCall<0x8050CAD0u>(&func_8050CAD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8050CAD0_5E67 = func_8050CAD0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8050CAD0_5E67);
        r4 = static_cast<uint32_t>(regargs_result_8050CAD0_5E67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8050CAD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80512EF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80512EF8;
    }
}

loc_80512EF4:
{
    goto loc_80512F00;
}

loc_80512EF8:
{
    r22 = (r22 + 4);
    goto loc_80512EBC;
}

loc_80512F00:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = r23;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r6 = (r24 + r0);
    MemoryInline::FlatWrite32((r6 + 148), r20);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    ctx->lr = 0x80512F24u;
    if constexpr (KnownRegArgsCpuCall<0x8050C0E0u>(&func_8050C0E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8050C0E0_6459 = func_8050C0E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C0E0_6459);
        r4 = static_cast<uint32_t>(regargs_result_8050C0E0_6459 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8050C0E0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80512F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80512F34;
    }
}

loc_80512F2C:
{
    r3 = 0;
    goto loc_80512F38;
}

loc_80512F34:
{
    r3 = MemoryInline::FlatRead16((r1 + 18));
}

loc_80512F38:
{
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite16((r4 + 152), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r4 = MemoryInline::FlatRead32((r1 + 47));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite32((r3 + 156), r4);
    r3 = MemoryInline::FlatRead16((r1 + 51));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite16((r4 + 160), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r1 + 26));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 28));
    r4 = (r0 & 65535);
    r5 = 0;
    ctx->lr = 0x80512F94u;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_72CA = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_72CA);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_72CA >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r0 = (r24 + r0);
    r19 = (r0 + 148);
}

loc_80512FA4:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_80512FAC;
    }
}

loc_80512FA8:
{
    goto loc_80512FCC;
}

loc_80512FAC:
{
    r3 = MemoryInline::FlatRead32(r19);
    r5 = 0;
    r4 = MemoryInline::FlatRead16((r19 + 4));
    ctx->lr = 0x80512FBCu;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_7CE4 = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_7CE4);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_7CE4 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r19 + 8));
    r5 = 0;
    r4 = MemoryInline::FlatRead16((r19 + 12));
    ctx->lr = 0x80512FCCu;
    if constexpr (KnownRegArgsCpuCall<0x80512B80u>(&func_80512B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80512B80_8574 = func_80512B80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80512B80_8574);
        r4 = static_cast<uint32_t>(regargs_result_80512B80_8574 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80512B80u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80512FCC:
{
}

loc_80512FD0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(-1))) {
        goto loc_80512FE4;
    }
}

loc_80512FD4:
{
    r3 = r23;
    ctx->lr = 0x80512FDCu;
    if constexpr (KnownRegArgsCpuCall<0x8050C850u>(&func_8050C850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8050C850_8E53 = func_8050C850_ra188_1fe_8_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_8050C850_8E53;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8050C850u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80512FE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80512D18;
    }
}

loc_80512FE4:
{
    r3 = 1;
}

loc_80512FE8:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->cr = cr;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80512C70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80512C70_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0007FFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80512C70 func_80512C70 preserves=true fpr_mask=0x00000000
