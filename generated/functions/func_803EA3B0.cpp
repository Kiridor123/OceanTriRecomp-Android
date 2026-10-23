#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803EF424(CpuContext* ctx);
extern "C" uint64_t func_803EF424_ra190_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EF52C(CpuContext* ctx);
extern "C" uint64_t func_803EF52C_rad0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401AD0(CpuContext* ctx);
extern "C" uint64_t func_80401AD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401B54(CpuContext* ctx);
extern "C" uint64_t func_80401B54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401BD0(CpuContext* ctx);
extern "C" uint64_t func_80401BD0_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803EA3B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803EA3B0;

loc_803EA3B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 962));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_803EA3D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803EA5BC;
    }
}

loc_803EA3D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803EA40C;
    }
}

loc_803EA3DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_803EA3E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803EA4F0;
    }
}

loc_803EA3E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803EA400;
    }
}

loc_803EA3E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_803EA3EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803EA474;
    }
}

loc_803EA3F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803EA660;
    }
}

loc_803EA3F4:
{
}

loc_803EA3F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA43C;
    }
}

loc_803EA3FC:
{
    goto loc_803EA660;
}

loc_803EA400:
{
}

loc_803EA404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_803EA538;
    }
}

loc_803EA408:
{
    goto loc_803EA660;
}

loc_803EA40C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_803EA410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803EA640;
    }
}

loc_803EA414:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803EA430;
    }
}

loc_803EA418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_803EA41C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803EA630;
    }
}

loc_803EA420:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803EA660;
    }
}

loc_803EA424:
{
}

loc_803EA428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_803EA5DC;
    }
}

loc_803EA42C:
{
    goto loc_803EA660;
}

loc_803EA430:
{
}

loc_803EA434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(110))) {
        goto loc_803EA650;
    }
}

loc_803EA438:
{
    goto loc_803EA660;
}

loc_803EA43C:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDD04 (9 guest instruction(s))
}

loc_inl1_0x803FDD04:
{
    r0 = MemoryInline::FlatRead8((r3 + 24859));
}

loc_inl1_0x803FDD0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x803FDD18;
    }
}

loc_inl1_0x803FDD10:
{
    r3 = 1;
    goto loc_inl1_cont_803FDD04;
}

loc_inl1_0x803FDD18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24859), static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_inl1_cont_803FDD04:
{
    // end of inlined leaf 0x803FDD04
}

loc_803EA448:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803EA660;
    }
}

loc_803EA44C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 1;
    r5 = 40;
    ctx->lr = 0x803EA464u;
    if constexpr (KnownRegArgsCpuCall<0x80401AD0u>(&func_80401AD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80401AD0_1716 = func_80401AD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401AD0_1716);
        r4 = static_cast<uint32_t>(regargs_result_80401AD0_1716 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401AD0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 904), r3);
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA474:
{
    r5 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r5 & 1);
}

loc_803EA480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA494;
    }
}

loc_803EA484:
{
    ctx->lr = 0x803EA488u;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF424_1FC9 = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_1FC9);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_1FC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF424u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 110;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA494:
{
    r0 = (r5 & 2);
}

loc_803EA49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA4B0;
    }
}

loc_803EA4A0:
{
    ctx->lr = 0x803EA4A4u;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF52C_2858 = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_2858);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_2858 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA4B0:
{
    r0 = (r5 & 32768);
}

loc_803EA4B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA660;
    }
}

loc_803EA4BC:
{
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 1344), r5);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -3676));
}

loc_803EA4D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803EA4E4;
    }
}

loc_803EA4D4:
{
    MemoryInline::FlatWrite32((r4 + -3680), r5);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA4E4:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA4F0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 816), r0);
    r3 = (r3 + 65536);
    r29 = MemoryInline::FlatRead32((r3 + -3680));
    r0 = MemoryInline::FlatRead32((r3 + -3676));
    r0 = (r0 - r29);
}

loc_803EA50C:
{
    r30 = 10;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_803EA518;
    }
}

loc_803EA514:
{
    r30 = r0;
}

loc_803EA518:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r29 + 1);
    r5 = r30;
    ctx->lr = 0x803EA528u;
    if constexpr (KnownRegArgsCpuCall<0x80401B54u>(&func_80401B54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80401B54_3570 = func_80401B54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401B54_3570);
        r4 = static_cast<uint32_t>(regargs_result_80401B54_3570 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401B54u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 904), r3);
    r0 = 15;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA538:
{
    r5 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r5 & 1);
}

loc_803EA544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA558;
    }
}

loc_803EA548:
{
    ctx->lr = 0x803EA54Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF424_3E24 = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_3E24);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_3E24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF424u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 110;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA558:
{
    r0 = (r5 & 2);
}

loc_803EA560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA574;
    }
}

loc_803EA564:
{
    ctx->lr = 0x803EA568u;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF52C_46B3 = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_46B3);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_46B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA574:
{
    r0 = (r5 & 65536);
}

loc_803EA57C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA660;
    }
}

loc_803EA580:
{
    r0 = MemoryInline::FlatRead32((r3 + 1344));
}

loc_803EA588:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(40))) {
        goto loc_803EA5B0;
    }
}

loc_803EA58C:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -3680));
    r0 = MemoryInline::FlatRead32((r5 + -3676));
    r0 = (r0 - r4);
}

loc_803EA5A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803EA5B0;
    }
}

loc_803EA5A4:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA5B0:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA5BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 816), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    ctx->lr = 0x803EA5CCu;
    if constexpr (KnownRegArgsCpuCall<0x80401BD0u>(&func_80401BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80401BD0_5304 = func_80401BD0_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401BD0_5304);
        r4 = static_cast<uint32_t>(regargs_result_80401BD0_5304 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80401BD0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r31 + 904), r3);
    r0 = 25;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA5DC:
{
    r5 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r5 & 1);
}

loc_803EA5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA5FC;
    }
}

loc_803EA5EC:
{
    ctx->lr = 0x803EA5F0u;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF424_5BB8 = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_5BB8);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_5BB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF424u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 110;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA5FC:
{
    r0 = (r5 & 2);
}

loc_803EA604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA618;
    }
}

loc_803EA608:
{
    ctx->lr = 0x803EA60Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_803EF52C_6447 = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_6447);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_6447 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r13 = ctx->gpr[13];
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
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA618:
{
    r0 = (r5 & 131072);
}

loc_803EA620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA660;
    }
}

loc_803EA624:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 962), static_cast<uint8_t>(r0));
    goto loc_803EA660;
}

loc_803EA630:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDD28 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24859), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803FDD28
    r3 = 1;
    goto loc_803EA664;
}

loc_803EA640:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDD28 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24859), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803FDD28
    r3 = -2;
    goto loc_803EA664;
}

loc_803EA650:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FDD28 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24859), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803FDD28
    r3 = -1;
    goto loc_803EA664;
}

loc_803EA660:
{
    r3 = 0;
}

loc_803EA664:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_803EA3B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EA3B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EA3B0 func_803EA3B0 preserves=true fpr_mask=0x00000000
