#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80070084(CpuContext* ctx);
extern "C" uint64_t func_80070084_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074684(CpuContext* ctx);
extern "C" uint64_t func_80074684_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8007923C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800793E8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8007923C;

loc_8007923C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r27 = 0;
    r3 = (r1 + 16);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r22;
    ctx->lr = 0x80079284u;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80070084_C8B = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_C8B);
        r4 = static_cast<uint32_t>(regargs_result_80070084_C8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80070084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x80079290u;
    if constexpr (KnownRegArgsCpuCall<0x80074684u>(&func_80074684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074684_10D8 = func_80074684_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074684_10D8);
        r4 = static_cast<uint32_t>(regargs_result_80074684_10D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074684u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r29 = r3;
    // inline leaf 0x8005CF50 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    // end of inlined leaf 0x8005CF50
    r26 = r3;
    r28 = r26;
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31880));
    goto loc_800793AC;
}

loc_800792B0:
{
}

loc_800792B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_800792CC;
    }
}

loc_800792B8:
{
    r3 = (r30 + -4032);
    r4 = 471;
    r5 = (r31 + -3824);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800792CCu;
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

loc_800792CC:
{
    r0 = MemoryInline::FlatRead8((r24 + 5));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r24 + 6));
    r0 = (r3 | r0);
    r19 = (r0 & 65535);
    r3 = r22;
    r4 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x800792FCu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_1B2C = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_1B2C);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_1B2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80079300:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80079310;
    }
}

loc_80079304:
{
    r20 = MemoryInline::FlatRead32((r25 + 4));
}

loc_8007930C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_8007931C;
    }
}

loc_80079310:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80078968u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80079334;
}

loc_8007931C:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r20_addr_2 = (r20 + r3);
    r3 = MemoryInline::FlatRead8(r20_addr_2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_80079334:
{
}

loc_80079338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800793A8;
    }
}

loc_8007933C:
{
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r19));
    r0 = MemoryInline::FlatRead8((r24 + 1));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 3));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & -256);
    r0 = MemoryInline::FlatRead8((r24 + 4));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    r3 = (r1 + 16);
    ctx->lr = 0x80079378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8007937C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r29))) {
        goto loc_80079394;
    }
}

loc_80079380:
{
    r0 = (r3 * 48);
    r3 = (r23 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_80079398;
}

loc_80079394:
{
    MemoryInline::FlatWriteFloat32(r28, f31.d);
}

loc_80079398:
{
    r0 = MemoryInline::FlatRead8((r24 + 7));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r28 = (r28 + 12);
    r27 = (r27 + 1);
}

loc_800793A8:
{
    r24 = (r24 + 8);
}

loc_800793AC:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_800793B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800792B0;
    }
}

loc_800793B8:
{
}

loc_800793BC:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(2048))) {
        goto loc_800793DC;
    }
}

loc_800793C0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -4032);
    r4 = 499;
    r5 = 0x80590000u;
    r5 = (r5 + -3772);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800793DCu;
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

loc_800793DC:
{
    MemoryInline::FlatWrite32(r21, r27);
    r3 = r26;
    r0 = 88;
    addr_psqx_800793E8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800793E8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007923C func_8007923C preserves=true fpr_mask=0x00000000
