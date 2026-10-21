#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D27C(CpuContext* ctx);
extern "C" uint64_t func_8005D27C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80070040(CpuContext* ctx);
extern "C" uint64_t func_80070040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80070084(CpuContext* ctx);
extern "C" uint64_t func_80070084_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074684(CpuContext* ctx);
extern "C" uint64_t func_80074684_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800746A8(CpuContext* ctx);
extern "C" uint64_t func_800746A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800746CC(CpuContext* ctx);
extern "C" uint32_t func_800746CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80097DA4(CpuContext* ctx);
extern "C" uint64_t func_80097DA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800746CC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80074180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80074628_loc_0 = 0;
    uint32_t addr_psqx_80074634_loc_0 = 0;
    uint32_t addr_psqx_80074640_loc_0 = 0;
    uint32_t addr_psqx_8007464C_loc_0 = 0;
    uint32_t addr_psqx_80074658_loc_0 = 0;
    uint32_t addr_psqx_80074664_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r20_addr_6 = 0;
    uint32_t r20_addr_7 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
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
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80074180u);
    goto loc_80074180;

loc_80074180:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r22 = r6;
}

loc_800741D8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800741F4;
    }
}

loc_800741DC:
{
    r3 = r21;
    r4 = (r13 + -31816);
    ctx->lr = 0x800741E8u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80097DA4_1B85 = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_1B85);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_1B85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = r3;
}

loc_800741F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074624;
    }
}

loc_800741F4:
{
    // inline leaf 0x8005CF5C (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    // end of inlined leaf 0x8005CF5C
    r28 = r3;
    r29 = 0x80590000u;
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    goto loc_800743C4;
}

loc_8007420C:
{
}

loc_80074210:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80074338;
    }
}

loc_80074214:
{
    r0 = MemoryInline::FlatRead8((r22 + 1));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r26 = (r3 + r0);
    r25 = MemoryInline::FlatRead8((r22 + 3));
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r27 = (r27_rot_2 & -4);
    // inline leaf 0x80074178 (2 guest instruction(s))
    r3 = -268435456;
    // end of inlined leaf 0x80074178
    r20_addr_2 = (r20 + r27);
    MemoryInline::FlatWrite32(r20_addr_2, r3);
    r22 = (r22 + 4);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31964));
    PpcSetPairedFprInline(f31, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f31.d), PPC_PsFromScalarInline(f31.d)));
    PpcSetPairedFprInline(f30, PPC_PsMerge00Inline(f31.d, f31.d));
    PpcSetPairedFprInline(f29, PPC_PsMerge00Inline(f31.d, f31.d));
    PpcSetPairedFprInline(f28, PPC_PsMerge00Inline(f31.d, f31.d));
    PpcSetPairedFprInline(f27, PPC_PsMerge00Inline(f31.d, f31.d));
    PpcSetPairedFprInline(f26, PPC_PsMerge00Inline(f31.d, f31.d));
    r24 = 0;
    goto loc_8007430C;
}

loc_8007425C:
{
    r0 = MemoryInline::FlatRead8(r22);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r0 = MemoryInline::FlatRead8((r22 + 1));
    r23 = (r3 + r0);
}

loc_80074270:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(2048))) {
        goto loc_80074288;
    }
}

loc_80074274:
{
    r3 = (r29 + -5820);
    r4 = 396;
    r5 = (r30 + -5568);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074288u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80074288:
{
    r3 = MemoryInline::FlatRead8((r22 + 5));
    r0 = MemoryInline::FlatRead8((r22 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r4 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_5 & -16777216);
    r0 = MemoryInline::FlatRead8((r22 + 3));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = (r23 * 48);
    r3 = (r28 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 16);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 24);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 32);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 40);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    PpcSetPairedFprInline(f31, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f0.d), f31.d));
    PpcSetPairedFprInline(f30, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f30.d));
    PpcSetPairedFprInline(f29, PPC_PsMadds0Inline(f3.d, PPC_PsFromScalarInline(f0.d), f29.d));
    PpcSetPairedFprInline(f28, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f0.d), f28.d));
    PpcSetPairedFprInline(f27, PPC_PsMadds0Inline(f5.d, PPC_PsFromScalarInline(f0.d), f27.d));
    PpcSetPairedFprInline(f26, PPC_PsMadds0Inline(f6.d, PPC_PsFromScalarInline(f0.d), f26.d));
    r20_addr_4 = (r20 + r27);
    r3 = MemoryInline::FlatRead32(r20_addr_4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r20_addr_5 = (r20 + r0);
    r0 = MemoryInline::FlatRead32(r20_addr_5);
    r0 = (r3 & r0);
    r20_addr_6 = (r20 + r27);
    MemoryInline::FlatWrite32(r20_addr_6, r0);
    r22 = (r22 + 6);
    r24 = (r24 + 1);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_8007430C:
{
}

loc_80074310:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r25))) {
        goto loc_8007425C;
    }
}

loc_80074314:
{
    r0 = (r26 * 48);
    r3 = (r19 + r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8, f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9, f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10, f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11, f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_12 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12, f26.d);
    f26.d = PPC_PsToScalarInline(f26.d);
    f27.d = PPC_PsToScalarInline(f27.d);
    f28.d = PPC_PsToScalarInline(f28.d);
    f29.d = PPC_PsToScalarInline(f29.d);
    f30.d = PPC_PsToScalarInline(f30.d);
    f31.d = PPC_PsToScalarInline(f31.d);
    goto loc_800743C4;
}

loc_80074338:
{
}

loc_8007433C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_80074354;
    }
}

loc_80074340:
{
    r3 = (r29 + -5820);
    r4 = 457;
    r5 = (r31 + -5496);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074354u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80074354:
{
    r0 = MemoryInline::FlatRead8((r22 + 1));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & -256);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r23 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r22 + 3));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_7 & -256);
    r0 = MemoryInline::FlatRead8((r22 + 4));
    r24 = (r3 + r0);
}

loc_80074378:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(2048))) {
        goto loc_80074390;
    }
}

loc_8007437C:
{
    r3 = (r29 + -5820);
    r4 = 461;
    r5 = (r30 + -5568);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074390u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80074390:
{
    r3 = r21;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r23 = (r23 * 48);
    r3 = (r1 + 12);
    ctx->lr = 0x800743ACu;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_42FD = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_42FD);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_42FD >> 32);
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
        InvokeDirectCpu<0x8005D27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r5 = r3;
    r3 = (r28 + r23);
    r4 = (r19 + r23);
    r5 = (r5 + 160);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r22 = (r22 + 5);
}

loc_800743C4:
{
    r0 = MemoryInline::FlatRead8(r22);
}

loc_800743CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8007420C;
    }
}

loc_800743D0:
{
    r3 = r21;
    ctx->lr = 0x800743D8u;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80070084_489A = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_489A);
        r4 = static_cast<uint32_t>(regargs_result_80070084_489A >> 32);
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
        InvokeDirectCpu<0x80070084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x800743E8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800746CCu) && KnownTranslatedCpuCall<0x800746CCu>::kAvailable && !KnownTranslatedCpuCall<0x800746CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800746CCu>()) {
        const auto state_free_result_800746CC_4D26 = func_800746CC_statefree(r1, r3, r4, 0x800743E8u);
        r1 = static_cast<uint32_t>(state_free_result_800746CC_4D26);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800746CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 16);
    ctx->lr = 0x800743F0u;
    if constexpr (KnownRegArgsCpuCall<0x800746A8u>(&func_800746A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800746A8_53A7 = func_800746A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800746A8_53A7);
        r4 = static_cast<uint32_t>(regargs_result_800746A8_53A7 >> 32);
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
        InvokeDirectCpu<0x800746A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800743F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074624;
    }
}

loc_800743F8:
{
}

loc_800743FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80074410;
    }
}

loc_80074400:
{
}

loc_80074404:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8007450C;
    }
}

loc_80074408:
{
    goto loc_80074608;
}

loc_80074410:
{
    r3 = (r1 + 16);
    ctx->lr = 0x80074418u;
    if constexpr (KnownRegArgsCpuCall<0x80070040u>(&func_80070040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80070040_5966 = func_80070040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070040_5966);
        r4 = static_cast<uint32_t>(regargs_result_80070040_5966 >> 32);
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
        InvokeDirectCpu<0x80070040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r3 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 - r3);
    r3 = (r1 + 16);
    ctx->lr = 0x80074430u;
    if constexpr (KnownRegArgsCpuCall<0x80074684u>(&func_80074684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80074684_5E1A = func_80074684_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074684_5E1A);
        r4 = static_cast<uint32_t>(regargs_result_80074684_5E1A >> 32);
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
        InvokeDirectCpu<0x80074684u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r6 = (r3 - r19);
}

loc_80074438:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_80074624;
    }
}

loc_8007443C:
{
    r4 = (r3 + -8);
}

loc_80074444:
{
    if ((static_cast<uint32_t>(r19) <= static_cast<uint32_t>(8))) {
        goto loc_800744DC;
    }
}

loc_80074448:
{
}

loc_8007444C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r6))) {
        goto loc_800744DC;
    }
}

loc_80074450:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5 = (r20 + r0);
    r0 = (r4 + 7);
    r0 = (r0 - r6);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
    ctr = r0;
}

loc_8007446C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r4))) {
        goto loc_800744DC;
    }
}

loc_80074470:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r5 = (r5 + 32);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80074470;
    }
}

loc_800744DC:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4 = (r20 + r0);
    r0 = (r3 - r6);
    ctr = r0;
}

loc_800744F0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_80074624;
    }
}

loc_800744F4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 805306368);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800744F4;
    }
}

loc_80074508:
{
    goto loc_80074624;
}

loc_8007450C:
{
    r3 = (r1 + 16);
    ctx->lr = 0x80074514u;
    if constexpr (KnownRegArgsCpuCall<0x80070040u>(&func_80070040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80070040_6C05 = func_80070040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070040_6C05);
        r4 = static_cast<uint32_t>(regargs_result_80070040_6C05 >> 32);
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
        InvokeDirectCpu<0x80070040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
    r3 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 - r3);
    r3 = (r1 + 16);
    ctx->lr = 0x8007452Cu;
    if constexpr (KnownRegArgsCpuCall<0x80074684u>(&func_80074684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80074684_70B9 = func_80074684_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074684_70B9);
        r4 = static_cast<uint32_t>(regargs_result_80074684_70B9 >> 32);
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
        InvokeDirectCpu<0x80074684u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r6 = (r3 - r19);
}

loc_80074534:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_80074624;
    }
}

loc_80074538:
{
    r4 = (r3 + -8);
}

loc_80074540:
{
    if ((static_cast<uint32_t>(r19) <= static_cast<uint32_t>(8))) {
        goto loc_800745D8;
    }
}

loc_80074544:
{
}

loc_80074548:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r6))) {
        goto loc_800745D8;
    }
}

loc_8007454C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r20 + r0);
    r0 = (r4 + 7);
    r0 = (r0 - r6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_80074568:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r4))) {
        goto loc_800745D8;
    }
}

loc_8007456C:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r5 = (r5 + 32);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8007456C;
    }
}

loc_800745D8:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = (r20 + r0);
    r0 = (r3 - r6);
    ctr = r0;
}

loc_800745EC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_80074624;
    }
}

loc_800745F0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800745F0;
    }
}

loc_80074604:
{
    goto loc_80074624;
}

loc_80074608:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5820);
    r4 = 505;
    r5 = 0x80590000u;
    r5 = (r5 + -5440);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074624u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80074624:
{
    r0 = 168;
    addr_psqx_80074628_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80074628_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_80074634_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80074634_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_80074640_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80074640_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_8007464C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8007464C_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_80074658_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80074658_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_80074664_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80074664_loc_0));
    f26.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xFC00007F fpr_write=0xFC00007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80074180 func_80074180 preserves=true fpr_mask=0x00000000
