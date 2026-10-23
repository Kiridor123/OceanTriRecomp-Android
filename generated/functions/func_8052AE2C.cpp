#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C6730(CpuContext* ctx);
extern "C" uint64_t func_804C6730_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052AE2C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword9 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8052AE2C;

loc_8052AE2C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 208);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r6 = MemoryInline::FlatRead8((r3 + 187));
    r30 = r3;
    r31 = r4;
    r0 = (r6 & 1);
}

loc_8052AE58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052AE68;
    }
}

loc_8052AE5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 80));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 1);
}

loc_8052AE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052B104;
    }
}

loc_8052AE68:
{
    r0 = MemoryInline::FlatRead8((r4 + 80));
    r5 = MemoryInline::FlatRead32((r3 + 68));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052AE74:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052AEAC;
    }
}

loc_8052AE84:
{
    r0 = (r6 & 4);
}

loc_8052AE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052AEAC;
    }
}

loc_8052AE8C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8052AEAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 64);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1356));
    // inline leaf 0x804C6A20 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x804C6A20
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1352));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    r4 = 120;
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x8052AED8u;
    if constexpr (KnownRegArgsCpuCall<0x804C6730u>(&func_804C6730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C6730_1D07 = func_804C6730_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C6730_1D07);
        r4 = static_cast<uint32_t>(regargs_result_804C6730_1D07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804C6730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 16);
    r4 = (r1 + 64);
    r5 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1352));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    r4 = 121;
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x8052AF00u;
    if constexpr (KnownRegArgsCpuCall<0x804C6730u>(&func_804C6730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C6730_29AF = func_804C6730_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C6730_29AF);
        r4 = static_cast<uint32_t>(regargs_result_804C6730_29AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804C6730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 16);
    r4 = (r1 + 112);
    r5 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1352));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    r4 = 122;
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x8052AF28u;
    if constexpr (KnownRegArgsCpuCall<0x804C6730u>(&func_804C6730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C6730_3657 = func_804C6730_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C6730_3657);
        r4 = static_cast<uint32_t>(regargs_result_804C6730_3657 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804C6730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 16);
    r4 = (r1 + 64);
    r5 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 120u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 44));
    r3 = (r1 + 112);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 48));
    r4 = (r30 + 84);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 52));
    // inline leaf 0x804C69D0 (19 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 24);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 40);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f4.d);
    PpcSetPairedFprInline(f5, PPC_PsSum1Inline(PPC_PsFromScalarInline(f1.d), f5.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 16);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f5.d);
    PpcSetPairedFprInline(f7, PPC_PsSum1Inline(PPC_PsFromScalarInline(f2.d), f7.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 32);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f6.d);
    PpcSetPairedFprInline(f8, PPC_PsSum1Inline(PPC_PsFromScalarInline(f3.d), f8.d, f8.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f7.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f9.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f8.d);
    // end of inlined leaf 0x804C69D0
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 12));
}

loc_8052AF58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052AF70;
    }
}

loc_8052AF5C:
{
    r3 = (r3 + 132);
    r4 = (r30 + 84);
    r5 = (r30 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    goto loc_8052AFF0;
}

loc_8052AF70:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_4 & 1);
}

loc_8052AF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052AFE0;
    }
}

loc_8052AF7C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r30 + 84));
            r12 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r30 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r30 + 92));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r30 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r30 + 100));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r30 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 96u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r30 + 108));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r30 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r30 + 116));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r30 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 112u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r30 + 124));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r30 + 128));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 132), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 132), r27);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 136), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 140), r11);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 144), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 148), r9);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 152), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 160), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 168), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r30 + 172), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 176), r0);
    }
    goto loc_8052AFF0;
}

loc_8052AFE0:
{
    r3 = (r31 + 4);
    r4 = (r30 + 84);
    r5 = (r30 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
}

loc_8052AFF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_6 & 1);
}

loc_8052AFF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052B040;
    }
}

loc_8052AFFC:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8052B004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052B040;
    }
}

loc_8052B008:
{
    r3 = MemoryInline::FlatRead8((r30 + 184));
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 160), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1344));
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 164), r3);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 168), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r30 + 185), static_cast<uint8_t>(r0));
    goto loc_8052B048;
}

loc_8052B040:
{
    r0 = MemoryInline::FlatRead8((r30 + 184));
    MemoryInline::FlatWrite8((r30 + 185), static_cast<uint8_t>(r0));
}

loc_8052B048:
{
    r0 = MemoryInline::FlatRead8((r30 + 187));
    r28 = 0;
    r3 = MemoryInline::FlatRead8((r31 + 80));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052B058:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 76));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r3 = (r3_rot_1 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052B080;
    }
}

loc_8052B070:
{
    r0 = MemoryInline::FlatRead8((r30 + 184));
}

loc_8052B078:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8052B080;
    }
}

loc_8052B07C:
{
    r28 = 1;
}

loc_8052B080:
{
}

loc_8052B084:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8052B0C0;
    }
}

loc_8052B088:
{
    r4 = MemoryInline::FlatRead8((r30 + 184));
    r3 = 1127219200;
    r0 = MemoryInline::FlatRead8((r31 + 80));
    stackword11 = r4;
    MemoryInline::FlatWriteRam32((r1 + 172), r4);
    r0 = (r0 | 64);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1344));
    stackword12 = r3;
    MemoryInline::FlatWriteRam32((r1 + 168), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1348));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    MemoryInline::FlatWrite8((r31 + 80), static_cast<uint8_t>(r0));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
}

loc_8052B0C0:
{
    r30 = (r30 + 20);
    r29 = MemoryInline::FlatRead32(r30);
    goto loc_8052B0E4;
}

loc_8052B0C8:
{
    r12 = MemoryInline::FlatRead32((r29 + -4));
    r3 = (r29 + -4);
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8052B0E0u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r29 = MemoryInline::FlatRead32(r29);
}

loc_8052B0E4:
{
}

loc_8052B0E8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r30))) {
        goto loc_8052B0C8;
    }
}

loc_8052B0EC:
{
}

loc_8052B0F0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8052B104;
    }
}

loc_8052B0F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(6));
    r0_mrot_1 = (r0_rot_7 & 64);
    r0_mdest_1 = (r0 & -65);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    MemoryInline::FlatWrite8((r31 + 80), static_cast<uint8_t>(r0));
}

loc_8052B104:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 208);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052AE2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052AE2C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052AE2C func_8052AE2C preserves=true fpr_mask=0x00000000
