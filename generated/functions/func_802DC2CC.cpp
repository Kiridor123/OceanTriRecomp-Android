#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA41C(CpuContext* ctx);
extern "C" uint32_t func_800FA41C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA484(CpuContext* ctx);
extern "C" uint32_t func_800FA484_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80126168(CpuContext* ctx);
extern "C" uint64_t func_80126168_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012F400(CpuContext* ctx);
extern "C" uint32_t func_8012F400_ra8_4_8_0(CpuContext*, uint32_t, double);
extern "C" void func_802DC014(CpuContext* ctx);
extern "C" uint64_t func_802DC014_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802DC110(CpuContext* ctx);
extern "C" uint64_t func_802DC110_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DC4C4(CpuContext* ctx);
extern "C" uint32_t func_802DC4C4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8034C3B4(CpuContext* ctx);
extern "C" uint32_t func_8034C3B4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_800FA41C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802DC4C4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8034C3B4_statefree(uint32_t);
extern "C" uint64_t func_800FA41C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802DC4C4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802DC2CC_ra38_1f6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802DC498_loc_0 = 0;
    uint32_t addr_psqx_802DC4A4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802DC2CC;

loc_802DC2CC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 128);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r3 = 0x806C0000u;
    r28 = (r3 + -376);
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r26 = (r3 & 65535);
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r29 = r3;
    r3 = (r1 + 56);
    ctx->lr = 0x802DC314u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA41Cu) && KnownTranslatedCpuCall<0x800FA41Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA41Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA41Cu>() && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA41C_1652 = func_800FA41C_statefree_v0(r1, r3, r31, 0x802DC314u);
        r1 = static_cast<uint32_t>(state_free_result_800FA41C_1652);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FA41Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 16);
    ctx->lr = 0x802DC31Cu;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_1AD0 = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_1AD0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    ctx->lr = 0x802DC324u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802DC4C4u) && KnownTranslatedCpuCall<0x802DC4C4u>::kAvailable && !KnownTranslatedCpuCall<0x802DC4C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802DC4C4u>()) {
        const auto state_free_result_802DC4C4_1D93 = func_802DC4C4_statefree_v0(r1, r3, r31, 0x802DC324u);
        r1 = static_cast<uint32_t>(state_free_result_802DC4C4_1D93);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802DC4C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = MemoryInline::FlatReadFloat32((r2 + -12796));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 39), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    r5 = (r28 + 4);
    ctx->lr = 0x802DC340u;
    if constexpr (KnownRegArgsCpuCall<0x802DC110u>(&func_802DC110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_802DC110_2350 = func_802DC110_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DC110_2350);
        r4 = static_cast<uint32_t>(regargs_result_802DC110_2350 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802DC110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r24 = 0;
    r30 = 1;
    r31 = 4;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12828));
    goto loc_802DC47C;
}

loc_802DC360:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_802DC368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DC474;
    }
}

loc_802DC36C:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_802DC374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DC474;
    }
}

loc_802DC378:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 468));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802DC380:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802DC474;
    }
}

loc_802DC388:
{
    r3 = r27;
    r4 = 12;
    r5 = 255;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl4_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl4_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl4_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D290:
{
    r3 = 1;
    goto loc_inl4_cont_8012D270;
}

loc_inl4_0x8012D298:
{
    r3 = 0;
}

loc_inl4_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_802DC39C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802DC474;
    }
}

loc_802DC3A0:
{
    r3 = MemoryInline::FlatRead8((r27 + 481));
    r0 = (r29 & 255);
}

loc_802DC3AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802DC474;
    }
}

loc_802DC3B0:
{
    r0 = MemoryInline::FlatRead8((r27 + 482));
}

loc_802DC3B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802DC3CC;
    }
}

loc_802DC3BC:
{
    r3 = r27;
    ctx->lr = 0x802DC3C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F400u>(&func_8012F400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8012F400_351A = func_8012F400_ra8_4_8_0(ctx, r3, f2.d);
        r3 = regargs_result_8012F400_351A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_802DC3C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DC474;
    }
}

loc_802DC3CC:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8034C3B4u) && KnownTranslatedCpuCall<0x8034C3B4u>::kAvailable && !KnownTranslatedCpuCall<0x8034C3B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8034C3B4u>()) {
        const auto state_free_result_8034C3B4_3A4D = func_8034C3B4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8034C3B4_3A4D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8034C3B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802DC3DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802DC474;
    }
}

loc_802DC3E0:
{
    r3 = r27;
    ctx->lr = 0x802DC3E8u;
    if constexpr (KnownRegArgsCpuCall<0x80126168u>(&func_80126168)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126168_3FAB = func_80126168_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126168_3FAB);
        r4 = static_cast<uint32_t>(regargs_result_80126168_3FAB >> 32);
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
        InvokeDirectCpu<0x80126168u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r25 = r3;
}

loc_802DC3F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DC474;
    }
}

loc_802DC3F4:
{
    goto loc_802DC468;
}

loc_802DC3F8:
{
    r3 = r27;
    r4 = r25;
    r5 = (r1 + 56);
    r6 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8029D8F8u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 255);
}

loc_802DC414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DC464;
    }
}

loc_802DC418:
{
    r3 = (r1 + 16);
    r4 = (r1 + 32);
    r5 = (r1 + 8);
    ctx->lr = 0x802DC428u;
    if constexpr (KnownRegArgsCpuCall<0x802DC014u>(&func_802DC014)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802DC014_4644 = func_802DC014_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802DC014_4644);
        r4 = static_cast<uint32_t>(regargs_result_802DC014_4644 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802DC014u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802DC42C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DC464;
    }
}

loc_802DC430:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_802DC438:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802DC464;
    }
}

loc_802DC43C:
{
    f30.d = f0.d;
    MemoryInline::FlatWriteRam8((r28 + 40), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r28 + 41), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r27 + 3));
    MemoryInline::FlatWriteRam16((r28 + 42), static_cast<uint16_t>(r0));
    r3 = (r28 + 44);
    r4 = (r28 + 4);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
    MemoryInline::FlatWriteRam8((r28 + 25), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r28 + 39), static_cast<uint8_t>(r30));
}

loc_802DC464:
{
    r25 = (r25 + 44);
}

loc_802DC468:
{
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DC470:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_802DC3F8;
    }
}

loc_802DC474:
{
    r24 = (r24 + 1);
    r27 = (r27 + 2840);
}

loc_802DC47C:
{
}

loc_802DC480:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r26))) {
        goto loc_802DC360;
    }
}

loc_802DC484:
{
    r3 = MemoryInline::FlatRead8((r28 + 39));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = 152;
    addr_psqx_802DC498_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802DC498_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_802DC4A4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802DC4A4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DC2CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DC2CC_ra38_1f6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DC2CC func_802DC2CC preserves=true fpr_mask=0x00000000
