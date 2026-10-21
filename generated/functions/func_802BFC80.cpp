#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE09C(CpuContext* ctx);
extern "C" uint32_t func_802BE09C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802BFC80_ra38_1e2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802BFF04_loc_0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802BFC80u);
    goto loc_802BFC80;

loc_802BFC80:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r4 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 324));
}

loc_802BFCB8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802BFCC4;
    }
}

loc_802BFCBC:
{
    r3 = 0;
    goto loc_802BFF00;
}

loc_802BFCC4:
{
    r4 = 255;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 64), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 24), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 68), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 28), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 72), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 32), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 76), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 36), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 80), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 40), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 84), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 44), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 88), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 48), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 92), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 52), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 96), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r1 + 56), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 100), r4);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r1 + 60), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 17), static_cast<uint8_t>(r0));
    r31 = (r3 + 4);
    r21 = 0;
    r24 = (r1 + 24);
    r23 = (r1 + 64);
    r22 = (r1 + 8);
    r26 = 1;
}

loc_802BFD60:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802BFD68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BFDE0;
    }
}

loc_802BFD6C:
{
    r3 = r28;
    r4 = (r31 + 4);
    ctx->lr = 0x802BFD78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    MemoryInline::FlatWriteFloat32(r24, f1.d);
    MemoryInline::FlatWrite32(r23, r21);
    r0 = (r30 & 255);
}

loc_802BFD8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BFDE0;
    }
}

loc_802BFD90:
{
    ctx->lr = 0x802BFD94u;
    if constexpr (KnownRegArgsCpuCall<0x802BE09Cu>(&func_802BE09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE09C_1B71 = func_802BE09C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE09C_1B71;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r25 = r3;
    r3 = r28;
    r4 = (r31 + 4);
    ctx->lr = 0x802BFDA4u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_1EB7 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_1EB7);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_1EB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r25 - r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r13 + -26932));
}

loc_802BFDB8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_802BFDE0;
    }
}

loc_802BFDBC:
{
    r0 = (0 - r0);
    r0 = (r0 & 65535);
}

loc_802BFDC8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_802BFDE0;
    }
}

loc_802BFDCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -26936));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802BFDD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802BFDE0;
    }
}

loc_802BFDDC:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r26));
}

loc_802BFDE0:
{
    r24 = (r24 + 4);
    r23 = (r23 + 4);
    r22 = (r22 + 1);
    r21 = (r21 + 1);
    r31 = (r31 + 32);
}

loc_802BFDF8:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(10))) {
        goto loc_802BFD60;
    }
}

loc_802BFDFC:
{
    r9 = 0;
    r4 = 1;
    r3 = 0;
}

loc_802BFE08:
{
    r5 = (r1 + 100);
    r6 = (r1 + 17);
    r7 = (r1 + 60);
    r0 = (9 - r9);
    ctr = r0;
}

loc_802BFE20:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(9))) {
        goto loc_802BFECC;
    }
}

loc_802BFE24:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_802BFE2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_802BFE38;
    }
}

loc_802BFE30:
{
    r0 = 0;
    goto loc_802BFE94;
}

loc_802BFE38:
{
    r8 = MemoryInline::FlatRead8(r6);
}

loc_802BFE40:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_802BFE60;
    }
}

loc_802BFE44:
{
    r0 = MemoryInline::FlatRead8((r6 + -1));
}

loc_802BFE4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BFE60;
    }
}

loc_802BFE50:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r3));
    goto loc_802BFE94;
}

loc_802BFE60:
{
}

loc_802BFE64:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(1))) {
        goto loc_802BFE7C;
    }
}

loc_802BFE68:
{
    r0 = MemoryInline::FlatRead8((r6 + -1));
}

loc_802BFE70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BFE7C;
    }
}

loc_802BFE74:
{
    r0 = 0;
    goto loc_802BFE94;
}

loc_802BFE7C:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BFE88:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r0 & 255);
}

loc_802BFE94:
{
}

loc_802BFE98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BFEBC;
    }
}

loc_802BFE9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -4));
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    MemoryInline::FlatWriteFloat32((r7 + -4), f1.d);
    r8 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + -4));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + -4), r8);
}

loc_802BFEBC:
{
    r5 = (r5 + -4);
    r6 = (r6 + -1);
    r7 = (r7 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802BFE24;
    }
}

loc_802BFECC:
{
    r9 = (r9 + 1);
}

loc_802BFED4:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(10))) {
        goto loc_802BFE08;
    }
}

loc_802BFED8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r1 + 64);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_802BFEE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_802BFEF4;
    }
}

loc_802BFEEC:
{
    r3 = 0;
    goto loc_802BFF00;
}

loc_802BFEF4:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & -32);
    r3 = (r27 + r0);
    r3 = (r3 + 4);
}

loc_802BFF00:
{
    r0 = 168;
    addr_psqx_802BFF04_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BFF04_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BFC80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BFC80_ra38_1e2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80003FE3 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BFC80 func_802BFC80 preserves=true fpr_mask=0x00000000
