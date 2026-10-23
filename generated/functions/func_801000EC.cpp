#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5234(CpuContext* ctx);
extern "C" uint32_t func_800A5234_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800A9770(CpuContext* ctx);
extern "C" uint32_t func_800A9770_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AEE70(CpuContext* ctx);
extern "C" uint32_t func_800AEE70_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800B2520(CpuContext* ctx);
extern "C" uint64_t func_800B2520_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B2568(CpuContext* ctx);
extern "C" uint64_t func_800B2568_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B25B0(CpuContext* ctx);
extern "C" uint64_t func_800B25B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B2714(CpuContext* ctx);
extern "C" uint64_t func_800B2714_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B2738(CpuContext* ctx);
extern "C" uint64_t func_800B2738_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B2874(CpuContext* ctx);
extern "C" uint64_t func_800B2874_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800B28A4(CpuContext* ctx);
extern "C" uint64_t func_800B28A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80100370(CpuContext* ctx);
extern "C" uint64_t func_80100370_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A5234_statefree(uint32_t);
extern "C" uint64_t func_800A9770_statefree(uint32_t);
extern "C" uint64_t func_800AEE70_statefree(uint32_t, uint32_t);
extern "C" void func_800AEE70_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_801000EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80100320_loc_0 = 0;
    uint32_t addr_psqx_8010032C_loc_0 = 0;
    uint32_t addr_psqx_80100338_loc_0 = 0;
    uint32_t addr_psqx_80100344_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801000EC;

loc_801000EC:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r25 = r4;
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    r4 = 0;
    // inline leaf 0x800A89FC (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800A89FC
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x800B25A8 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800B25A8
    r3 = (r1 + 24);
    r4 = 0;
    // inline leaf 0x800B25F4 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800B25F4
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 0;
    ctx->lr = 0x80100160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F99D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A5234u) && KnownTranslatedCpuCall<0x800A5234u>::kAvailable && !KnownTranslatedCpuCall<0x800A5234u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A5234u>()) {
        const auto state_free_result_800A5234_1811 = func_800A5234_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A5234_1811);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A5234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r29 = (r3 & 65535);
    r31 = 0;
    r26 = (r13 + -30368);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29680));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29676));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -29684));
    goto loc_80100308;
}

loc_80100184:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r31 & 65535);
    ctx->lr = 0x80100190u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A523Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r27 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A9770u) && KnownTranslatedCpuCall<0x800A9770u>::kAvailable && !KnownTranslatedCpuCall<0x800A9770u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A9770u>()) {
        const auto state_free_result_800A9770_2041 = func_800A9770_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A9770_2041);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r28 = (r3 & 65535);
    r30 = 0;
    goto loc_801002FC;
}

loc_801001A4:
{
    r3 = r27;
    r4 = (r30 & 65535);
    ctx->lr = 0x801001B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A9778u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800AEE70u) && KnownTranslatedCpuCall<0x800AEE70u>::kAvailable && !KnownTranslatedCpuCall<0x800AEE70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800AEE70u>()) {
        func_800AEE70_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AEE70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    // inline leaf 0x800A89F0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x800A89F0
    r3 = (r1 + 16);
    r4 = (r1 + 32);
    ctx->lr = 0x801001D4u;
    if constexpr (KnownRegArgsCpuCall<0x800B2568u>(&func_800B2568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2568_2CDD = func_800B2568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2568_2CDD);
        r4 = static_cast<uint32_t>(regargs_result_800B2568_2CDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 28);
    r4 = (r1 + 16);
    // inline leaf 0x800F9738 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x800F9738
    r3 = (r1 + 28);
    ctx->lr = 0x801001E8u;
    if constexpr (KnownRegArgsCpuCall<0x800B2714u>(&func_800B2714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800B2714_31FA = func_800B2714_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2714_31FA);
        r4 = static_cast<uint32_t>(regargs_result_800B2714_31FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f28.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_801001F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801002F8;
    }
}

loc_801001F4:
{
    r0 = (r25 & 255);
}

loc_801001FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801002BC;
    }
}

loc_80100200:
{
    r3 = (r1 + 32);
    ctx->lr = 0x80100208u;
    if constexpr (KnownRegArgsCpuCall<0x80100370u>(&func_80100370)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80100370_37D4 = func_80100370_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80100370_37D4);
        r4 = static_cast<uint32_t>(regargs_result_80100370_37D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80100370u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8010021C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100220:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80100234:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100238:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8010024C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100250:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r26 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80100264:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100268:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r26 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8010027C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100280:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80100294:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801002BC;
    }
}

loc_80100298:
{
    r3 = (r1 + 12);
    r4 = (r1 + 32);
    ctx->lr = 0x801002A4u;
    if constexpr (KnownRegArgsCpuCall<0x800B25B0u>(&func_800B25B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B25B0_4461 = func_800B25B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B25B0_4461);
        r4 = static_cast<uint32_t>(regargs_result_800B25B0_4461 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B25B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    // inline leaf 0x80100364 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80100364
    r3 = (r1 + 24);
    r4 = 1;
    ctx->lr = 0x801002BCu;
    if constexpr (KnownRegArgsCpuCall<0x800B2520u>(&func_800B2520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2520_4970 = func_800B2520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2520_4970);
        r4 = static_cast<uint32_t>(regargs_result_800B2520_4970 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801002BC:
{
    r3 = (r1 + 28);
    ctx->lr = 0x801002C4u;
    if constexpr (KnownRegArgsCpuCall<0x800B2738u>(&func_800B2738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2738_4DAD = func_800B2738_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B2738_4DAD);
        r4 = static_cast<uint32_t>(regargs_result_800B2738_4DAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f28.d = PpcFmulsInline(f28.d, f31.d);
    r3 = (r1 + 28);
    r4 = (r1 + 36);
    ctx->lr = 0x801002ECu;
    if constexpr (KnownRegArgsCpuCall<0x800B28A4u>(&func_800B28A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800B28A4_5377 = func_800B28A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B28A4_5377);
        r4 = static_cast<uint32_t>(regargs_result_800B28A4_5377 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B28A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 28);
    f1.d = f28.d;
    ctx->lr = 0x801002F8u;
    if constexpr (KnownRegArgsCpuCall<0x800B2874u>(&func_800B2874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800B2874_581E = func_800B2874_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800B2874_581E);
        r4 = static_cast<uint32_t>(regargs_result_800B2874_581E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801002F8:
{
    r30 = (r30 + 1);
}

loc_801002FC:
{
}

loc_80100300:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r28))) {
        goto loc_801001A4;
    }
}

loc_80100304:
{
    r31 = (r31 + 1);
}

loc_80100308:
{
}

loc_8010030C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r29))) {
        goto loc_80100184;
    }
}

loc_80100310:
{
    r3 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x8010031Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F8B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 136;
    addr_psqx_80100320_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80100320_loc_0));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 76u, (r1 + 128));
    r0 = 120;
    addr_psqx_8010032C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8010032C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 60u, (r1 + 112));
    r0 = 104;
    addr_psqx_80100338_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80100338_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r1 + 96));
    r0 = 88;
    addr_psqx_80100344_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80100344_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801000EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801000EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801000EC func_801000EC preserves=true fpr_mask=0x00000000
