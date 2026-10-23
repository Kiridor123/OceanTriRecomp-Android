#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80077DC8(CpuContext* ctx);
extern "C" uint32_t func_80077DC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80077E20(CpuContext* ctx);
extern "C" double func_80077E20_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800882C4(CpuContext* ctx);
extern "C" uint64_t func_800882C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800883A0(CpuContext* ctx);
extern "C" uint64_t func_800883A0_ra30_180_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80088470(CpuContext* ctx);
extern "C" uint64_t func_80088470_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80084694_ra38_182_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80084694;

loc_80084694:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800846DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800846F4;
    }
}

loc_800846E0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800846EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800846F4;
    }
}

loc_800846F0:
{
    r10 = 0;
}

loc_800846F4:
{
}

loc_800846F8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80084710;
    }
}

loc_800846FC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80084708:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084710;
    }
}

loc_8008470C:
{
    r9 = 0;
}

loc_80084710:
{
}

loc_80084714:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80084728;
    }
}

loc_80084718:
{
    r0 = (r11 + 1073741824);
}

loc_80084720:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084728;
    }
}

loc_80084724:
{
    r8 = 0;
}

loc_80084728:
{
}

loc_8008472C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80084744;
    }
}

loc_80084730:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008473C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084744;
    }
}

loc_80084740:
{
    r7 = 0;
}

loc_80084744:
{
}

loc_80084748:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80084760;
    }
}

loc_8008474C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80084758:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80084760;
    }
}

loc_8008475C:
{
    r6 = 0;
}

loc_80084760:
{
}

loc_80084764:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008477C;
    }
}

loc_80084768:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80084774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008477C;
    }
}

loc_80084778:
{
    r5 = 0;
}

loc_8008477C:
{
}

loc_80084780:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800847A4;
    }
}

loc_80084784:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 49;
    r5 = 0x80590000u;
    r5 = (r5 + -224);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800847A4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800847A4:
{
}

loc_800847A8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80084A5C;
    }
}

loc_800847AC:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800882D4u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r30 & 255);
}

loc_800847C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8008480C;
    }
}

loc_800847C4:
{
    ctx->lr = 0x800847C8u;
    if constexpr (KnownRegArgsCpuCall<0x800883A0u>(&func_800883A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800883A0_1928 = func_800883A0_ra30_180_18_0(ctx, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800883A0_1928);
        r4 = static_cast<uint32_t>(regargs_result_800883A0_1928 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800883A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r31 = r3;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x800847D4u;
    if constexpr (KnownRegArgsCpuCall<0x80088470u>(&func_80088470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80088470_1E41 = func_80088470_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088470_1E41);
        r4 = static_cast<uint32_t>(regargs_result_80088470_1E41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80088470u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = r29;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    // inline leaf 0x800885B8 (8 guest instruction(s))
}

loc_inl0_0x800885B8:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl0_0x800885C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
}

loc_inl0_cont_800885B8:
{
    // end of inlined leaf 0x800885B8
    r4 = r3;
    r3 = r29;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_80084A5C;
}

loc_8008480C:
{
    r0 = (r31 & 255);
}

loc_80084814:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(127))) {
        goto loc_80084A4C;
    }
}

loc_80084818:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800882C4u>(&func_800882C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800882C4_2626 = func_800882C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800882C4_2626);
        r4 = static_cast<uint32_t>(regargs_result_800882C4_2626 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800882C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800651F0
}

loc_80084828:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80084A4C;
    }
}

loc_8008482C:
{
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800882C4u>(&func_800882C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800882C4_2CA0 = func_800882C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800882C4_2CA0);
        r4 = static_cast<uint32_t>(regargs_result_800882C4_2CA0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800882C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A848u>(ctx);
    ctx->lr = 0x80084864u;
    if constexpr (KnownRegArgsCpuCall<0x800883A0u>(&func_800883A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800883A0_3057 = func_800883A0_ra30_180_18_0(ctx, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800883A0_3057);
        r4 = static_cast<uint32_t>(regargs_result_800883A0_3057 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800883A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r31 = r3;
    r3 = r30;
    ctx->lr = 0x80084870u;
    if constexpr (KnownRegArgsCpuCall<0x80077DC8u>(&func_80077DC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80077DC8_3543 = func_80077DC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80077DC8_3543;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80077DC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80084874:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800848A0;
    }
}

loc_80084878:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084908;
    }
}

loc_80084888:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084890:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084908;
    }
}

loc_80084894:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008489C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084908;
    }
}

loc_800848A0:
{
    r3 = r30;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A82Cu>(ctx);
    r3 = (r1 + 56);
    r4 = r31;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    if constexpr (KnownRegArgsCpuCall<0x80077E20u>(&func_80077E20)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80077E20_3C67 = func_80077E20_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_80077E20_3C67;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80077E20u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800848E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084918;
    }
}

loc_800848E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800848EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084918;
    }
}

loc_800848F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800848F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084918;
    }
}

loc_800848FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31784));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    goto loc_80084918;
}

loc_80084908:
{
    r3 = (r1 + 56);
    r4 = r31;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
}

loc_80084918:
{
    r3 = (r1 + 56);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80084980;
    }
}

loc_80084938:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31780));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80084948:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80084980;
    }
}

loc_8008494C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80084960:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80084974;
    }
}

loc_80084968:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31784));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_80084994;
}

loc_80084974:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31776));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_80084994;
}

loc_80084980:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31776));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_80084994:
{
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r5 = (r1 + 44);
    ctx->lr = 0x800849A4u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_80051884_4C4F = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_4C4F);
        r4 = static_cast<uint32_t>(regargs_result_80051884_4C4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r1 + 32);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    r5 = (r1 + 56);
    ctx->lr = 0x800849C0u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_80051884_51F2 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_51F2);
        r4 = static_cast<uint32_t>(regargs_result_80051884_51F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 32));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r1 + 56));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r1 + 60));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r1 + 64));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    r3 = r29;
    r4 = r29;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    r3 = r29;
    r4 = 0x80570000u;
    r4 = (r4 + -352);
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_80084A5C;
}

loc_80084A4C:
{
    // inline leaf 0x800885B8 (8 guest instruction(s))
}

loc_inl8_0x800885B8:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl8_0x800885C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
}

loc_inl8_cont_800885B8:
{
    // end of inlined leaf 0x800885B8
    r4 = r3;
    r3 = r29;
    ctx->lr = 0x80084A5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80071070_60F6 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_60F6);
        r4 = static_cast<uint32_t>(regargs_result_80071070_60F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80084A5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80084694(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80084694_ra38_182_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00003F83 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80084694 func_80084694 preserves=true fpr_mask=0x00000000
