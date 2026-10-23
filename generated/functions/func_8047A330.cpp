#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478950(CpuContext* ctx);
extern "C" uint64_t func_80478950_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);
extern "C" void func_804BBDD0(CpuContext* ctx);
extern "C" uint64_t func_804BBDD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E4ED0(CpuContext* ctx);
extern "C" uint64_t func_804E4ED0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E5180(CpuContext* ctx);
extern "C" uint64_t func_804E5180_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047A330_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8047A330;

loc_8047A330:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 76;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = 0x80730000u;
    r3 = (r30 + 32160);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x8047A360u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_A46 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_A46);
        r4 = static_cast<uint32_t>(regargs_result_80479610_A46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 32160);
    r0 = 5;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804795E0_DDF = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_DDF);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_DDF >> 32);
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
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r13 + -15895));
}

loc_8047A378:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047A38C;
    }
}

loc_8047A37C:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -15895), static_cast<uint8_t>(r0));
}

loc_8047A38C:
{
    ctx->lr = 0x8047A390u;
    if constexpr (KnownRegArgsCpuCall<0x804BBDD0u>(&func_804BBDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804BBDD0_12BC = func_804BBDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BBDD0_12BC);
        r4 = static_cast<uint32_t>(regargs_result_804BBDD0_12BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BBDD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8047A394:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047A520;
    }
}

loc_8047A398:
{
    ctx->lr = 0x8047A39Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E4ED0u>(&func_804E4ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804E4ED0_173B = func_804E4ED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E4ED0_173B);
        r4 = static_cast<uint32_t>(regargs_result_804E4ED0_173B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E4ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8047A3A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047A520;
    }
}

loc_8047A3A4:
{
    r0 = MemoryInline::FlatRead8((r13 + -15884));
    r4 = 0x80730000u;
    r4 = (r4 + 32160);
}

loc_8047A3B4:
{
    MemoryInline::FlatWriteRam32((r4 + 36), r31);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8047A3D0;
    }
}

loc_8047A3BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -15880));
    r0 = MemoryInline::FlatRead32((r13 + -15876));
    MemoryInline::FlatWriteRam32((r4 + 20), r3);
    MemoryInline::FlatWriteRam32((r4 + 24), r0);
    goto loc_8047A3E0;
}

loc_8047A3D0:
{
    r3 = 1406;
    r0 = 773;
    MemoryInline::FlatWriteRam32((r4 + 20), r3);
    MemoryInline::FlatWriteRam32((r4 + 24), r0);
}

loc_8047A3E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15888));
    r6 = 0x80730000u;
    r6 = (r6 + 32160);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8047A3F4:
{
    MemoryInline::FlatWriteRam8((r6 + 16), static_cast<uint8_t>(r3));
    r5 = MemoryInline::FlatRead32((r6 + 24));
    MemoryInline::FlatWriteRam8((r6 + 17), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r6 + 20));
    MemoryInline::FlatWriteRam8((r6 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + 19), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8047A454;
    }
}

loc_8047A410:
{
    r3 = MemoryInline::FlatRead32((r13 + -15892));
}

loc_8047A418:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047A434;
    }
}

loc_8047A41C:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -20712);
    ctx->lr = 0x8047A42Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E5180u>(&func_804E5180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804E5180_252C = func_804E5180_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E5180_252C);
        r4 = static_cast<uint32_t>(regargs_result_804E5180_252C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E5180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r30 = r3;
    goto loc_8047A468;
}

loc_8047A434:
{
}

loc_8047A438:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8047A468;
    }
}

loc_8047A43C:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -20708);
    ctx->lr = 0x8047A44Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E5180u>(&func_804E5180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804E5180_2D21 = func_804E5180_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E5180_2D21);
        r4 = static_cast<uint32_t>(regargs_result_804E5180_2D21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E5180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r30 = r3;
    goto loc_8047A468;
}

loc_8047A454:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -20708);
    ctx->lr = 0x8047A464u;
    if constexpr (KnownRegArgsCpuCall<0x804E5180u>(&func_804E5180)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804E5180_3481 = func_804E5180_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E5180_3481);
        r4 = static_cast<uint32_t>(regargs_result_804E5180_3481 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E5180u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r30 = r3;
}

loc_8047A468:
{
}

loc_8047A46C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8047A474;
    }
}

loc_8047A470:
{
    MemoryInline::FlatWrite32((r13 + -20716), r30);
}

loc_8047A474:
{
}

loc_8047A478:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8047A520;
    }
}

loc_8047A47C:
{
    r30 = 0x80730000u;
    r3 = 2;
    r30 = (r30 + 32160);
    r4 = 130;
    r0 = 129;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 57u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 16), static_cast<uint8_t>(r3));
    r3 = (r30 + 44);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 19), static_cast<uint8_t>(r31));
    // inline leaf 0x80477E40 (5 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, r3, r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80477E40
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 56), static_cast<uint8_t>(r31));
    r3 = (r30 + 60);
    // inline leaf 0x80477E40 (5 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, r3, r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80477E40
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r30 + 72), static_cast<uint8_t>(r31));
    r3 = 660;
    r4 = 45;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x8047A4D0u;
    if constexpr (KnownRegArgsCpuCall<0x80478950u>(&func_80478950)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80478950_4434 = func_80478950_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80478950_4434);
        r4 = static_cast<uint32_t>(regargs_result_80478950_4434 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80478950u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    MemoryInline::FlatWriteRam8((r30 + 28), static_cast<uint8_t>(r3));
    r3 = 1800;
    r4 = 30;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x8047A4E8u;
    if constexpr (KnownRegArgsCpuCall<0x80478950u>(&func_80478950)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80478950_4B8C = func_80478950_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80478950_4B8C);
        r4 = static_cast<uint32_t>(regargs_result_80478950_4B8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80478950u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead8((r30 + 28));
    MemoryInline::FlatWriteRam8((r30 + 29), static_cast<uint8_t>(r3));
}

loc_8047A4F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8047A520;
    }
}

loc_8047A4F8:
{
    r0 = (r3 & 255);
}

loc_8047A500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8047A508;
    }
}

loc_8047A504:
{
    goto loc_8047A520;
}

loc_8047A508:
{
    ctx->lr = 0x8047A50Cu;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_5437 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_5437);
        r4 = static_cast<uint32_t>(regargs_result_80479610_5437 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804795E0_57B9 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_57B9);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_57B9 >> 32);
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
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -20720), r0);
}

loc_8047A520:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8047A330(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047A330_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047A330 func_8047A330 preserves=true fpr_mask=0x00000000
