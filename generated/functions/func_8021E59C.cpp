#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050778(CpuContext* ctx);
extern "C" uint64_t func_80050778_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021DB94(CpuContext* ctx);
extern "C" uint64_t func_8021DB94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021DF60(CpuContext* ctx);
extern "C" uint64_t func_8021DF60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021E250(CpuContext* ctx);
extern "C" uint64_t func_8021E250_ra38_1ea_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8021E368(CpuContext* ctx);
extern "C" uint32_t func_8021E368_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021E3A4(CpuContext* ctx);
extern "C" uint32_t func_8021E3A4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021E4E8(CpuContext* ctx);
extern "C" uint32_t func_8021E4E8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802AFEC0(CpuContext* ctx);
extern "C" uint64_t func_802AFEC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B25D8(CpuContext* ctx);
extern "C" uint64_t func_802B25D8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8021E59C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8021EC28_loc_0 = 0;
    uint32_t addr_psqx_8021EC34_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8021E59C;

loc_8021E59C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021E5D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8021E5E8;
    }
}

loc_8021E5D4:
{
    r3 = (r1 + 8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r30 + r0);
    r4 = (r4 + 12);
    // inline leaf 0x8021DF3C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x8021DF3C
}

loc_8021E5E8:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8021DB94u>(&func_8021DB94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8021DB94_182C = func_8021DB94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021DB94_182C);
        r4 = static_cast<uint32_t>(regargs_result_8021DB94_182C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021DB94u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_8021E604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E638;
    }
}

loc_8021E608:
{
    r3 = r31;
    r4 = 0;
    r5 = 25;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8021E61C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E638;
    }
}

loc_8021E620:
{
    r0 = MemoryInline::FlatRead8((r31 + 787));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8021E62C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E638;
    }
}

loc_8021E630:
{
    r3 = 0;
    goto loc_8021E63C;
}

loc_8021E638:
{
    r3 = 1;
}

loc_8021E63C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_8021E64C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E878;
    }
}

loc_8021E650:
{
    r3 = r31;
    // inline leaf 0x80208B24 (10 guest instruction(s))
}

loc_inl3_0x80208B24:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl3_0x80208B2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_inl3_0x80208B38;
    }
}

loc_inl3_0x80208B30:
{
    r3 = 0;
    goto loc_inl3_cont_80208B24;
}

loc_inl3_0x80208B38:
{
    r3 = MemoryInline::FlatRead8((r3 + 2816));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl3_cont_80208B24:
{
    // end of inlined leaf 0x80208B24
}

loc_8021E65C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E6F0;
    }
}

loc_8021E660:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8021E668:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8021E6F0;
    }
}

loc_8021E66C:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_8021E678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E6F0;
    }
}

loc_8021E67C:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15932));
    r27 = 0;
    r3 = 0x806B0000u;
    r29 = (r3 + -24544);
}

loc_8021E68C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8021E694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E6E0;
    }
}

loc_8021E698:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_8021E6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E6E0;
    }
}

loc_8021E6A4:
{
    r3 = r31;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8021E368u>(&func_8021E368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8021E368_2A91 = func_8021E368_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8021E368_2A91;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E368u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8021E6B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021E6E0;
    }
}

loc_8021E6B8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 0;
    r5 = r29;
    f1.d = f30.d;
    r6 = 10923;
    ctx->lr = 0x8021E6D0u;
    if constexpr (KnownRegArgsCpuCall<0x8021E250u>(&func_8021E250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8021E250_2EAE = func_8021E250_ra38_1ea_18_0(ctx, r3, r4, r5, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021E250_2EAE);
        r4 = static_cast<uint32_t>(regargs_result_8021E250_2EAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 340));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
}

loc_8021E6E0:
{
    r29 = (r29 + 616);
    r27 = (r27 + 1);
}

loc_8021E6EC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(18))) {
        goto loc_8021E68C;
    }
}

loc_8021E6F0:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_8021E6FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E790;
    }
}

loc_8021E700:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15928));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r28 = r3;
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl5_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB50;
    }
}

loc_inl5_0x800CFB48:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB64;
    }
}

loc_inl5_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFB34;
}

loc_inl5_0x800CFB64:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl5_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r27 = (r3 & 65535);
    r29 = 0;
    goto loc_8021E788;
}

loc_8021E724:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_8021E72C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E780;
    }
}

loc_8021E730:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_8021E738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E780;
    }
}

loc_8021E73C:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_8021E748:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8021E780;
    }
}

loc_8021E74C:
{
    r0 = MemoryInline::FlatRead8((r28 + 2820));
}

loc_8021E754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E780;
    }
}

loc_8021E758:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r28;
    r5 = 0;
    f1.d = f30.d;
    r6 = 9102;
    ctx->lr = 0x8021E770u;
    if constexpr (KnownRegArgsCpuCall<0x8021E250u>(&func_8021E250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8021E250_44ED = func_8021E250_ra38_1ea_18_0(ctx, r3, r4, r5, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021E250_44ED);
        r4 = static_cast<uint32_t>(regargs_result_8021E250_44ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 340));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
}

loc_8021E780:
{
    r29 = (r29 + 1);
    r28 = (r28 + 2848);
}

loc_8021E788:
{
}

loc_8021E78C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r27))) {
        goto loc_8021E724;
    }
}

loc_8021E790:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r4 + 82));
}

loc_8021E7A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E7B4;
    }
}

loc_8021E7A4:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = MemoryInline::FlatRead8((r4 + 2));
    ctx->lr = 0x8021E7B0u;
    if constexpr (KnownRegArgsCpuCall<0x802AFEC0u>(&func_802AFEC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802AFEC0_4F4B = func_802AFEC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AFEC0_4F4B);
        r4 = static_cast<uint32_t>(regargs_result_802AFEC0_4F4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFEC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8021E7B8;
}

loc_8021E7B4:
{
    r3 = 0;
}

loc_8021E7B8:
{
    r4 = (r30 + 8);
    r5 = MemoryInline::FlatRead32(r30);
    r5 = (r5 + 60);
    ctx->lr = 0x8021E7C8u;
    if constexpr (KnownRegArgsCpuCall<0x802B25D8u>(&func_802B25D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802B25D8_53FA = func_802B25D8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B25D8_53FA);
        r4 = static_cast<uint32_t>(regargs_result_802B25D8_53FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B25D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8021E7CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021E878;
    }
}

loc_8021E7D0:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8021E7D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021E86C;
    }
}

loc_8021E7DC:
{
    r27 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8021E7EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8021E804;
    }
}

loc_8021E7F0:
{
}

loc_8021E7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8021E81C;
    }
}

loc_8021E7F8:
{
}

loc_8021E7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8021E834;
    }
}

loc_8021E800:
{
    goto loc_8021E848;
}

loc_8021E804:
{
    r3 = 0;
    ctx->lr = 0x8021E80Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021E4E8u>(&func_8021E4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8021E4E8_601E = func_8021E4E8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021E4E8_601E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8021E810:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E848;
    }
}

loc_8021E814:
{
    r27 = 1;
    goto loc_8021E848;
}

loc_8021E81C:
{
    r3 = 1;
    ctx->lr = 0x8021E824u;
    if constexpr (KnownRegArgsCpuCall<0x8021E4E8u>(&func_8021E4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8021E4E8_638A = func_8021E4E8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021E4E8_638A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8021E828:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E848;
    }
}

loc_8021E82C:
{
    r27 = 1;
    goto loc_8021E848;
}

loc_8021E834:
{
    r3 = 2;
    ctx->lr = 0x8021E83Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021E4E8u>(&func_8021E4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8021E4E8_66F6 = func_8021E4E8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021E4E8_66F6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8021E840:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021E848;
    }
}

loc_8021E844:
{
    r27 = 1;
}

loc_8021E848:
{
}

loc_8021E84C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8021E85C;
    }
}

loc_8021E850:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8021E878;
}

loc_8021E85C:
{
    r3 = MemoryInline::FlatRead8((r30 + 340));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
    goto loc_8021E878;
}

loc_8021E86C:
{
    r3 = MemoryInline::FlatRead8((r30 + 340));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
}

loc_8021E878:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021E880:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E960;
    }
}

loc_8021E884:
{
    r3 = MemoryInline::FlatRead32((r13 + -17160));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8021E890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_8021E8AC;
    }
}

loc_8021E894:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + -21424);
    r3_addr_1 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_8021E8C0;
}

loc_8021E8AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + -21264);
    r3_addr_2 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8021E8C0:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15920));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15924));
    goto loc_8021E954;
}

loc_8021E8CC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8021E8DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021E950;
    }
}

loc_8021E8E4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8021E8EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021E950;
    }
}

loc_8021E8F0:
{
    r3 = r31;
    r4 = r27;
    ctx->lr = 0x8021E8FCu;
    if constexpr (KnownRegArgsCpuCall<0x8021E3A4u>(&func_8021E3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8021E3A4_747A = func_8021E3A4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8021E3A4_747A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8021E3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8021E900:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021E950;
    }
}

loc_8021E904:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x8021E92Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050778u>(&func_80050778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050778_7A62 = func_80050778_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80050778_7A62);
        r4 = static_cast<uint32_t>(regargs_result_80050778_7A62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r27 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021E934:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021E950;
    }
}

loc_8021E93C:
{
    MemoryInline::FlatWrite32((r30 + 4), r27);
    r3 = MemoryInline::FlatRead8((r30 + 340));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 340), static_cast<uint8_t>(r0));
    goto loc_8021E960;
}

loc_8021E950:
{
    r27 = (r27 + 24);
}

loc_8021E954:
{
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021E95C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E8CC;
    }
}

loc_8021E960:
{
    r0 = MemoryInline::FlatRead32((r30 + 24));
}

loc_8021E968:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8021E9B0;
    }
}

loc_8021E96C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8021E974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E990;
    }
}

loc_8021E978:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021E980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021E990;
    }
}

loc_8021E984:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EC24;
}

loc_8021E990:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021E998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8021EC24;
    }
}

loc_8021E99C:
{
    r0 = -2;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x8021E9ACu;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_87C0 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_87C0);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_87C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8021EC24;
}

loc_8021E9B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021E9B8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8021EAAC;
    }
}

loc_8021E9BC:
{
    r6 = 0;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 4;
    ctr = r0;
}

loc_8021E9D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8021E9DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8021E9F8;
    }
}

loc_8021E9E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8021E9E8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8021E9F8;
    }
}

loc_8021E9EC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EAAC;
}

loc_8021E9F8:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8021EA04:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA20;
    }
}

loc_8021EA08:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8021EA10:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA20;
    }
}

loc_8021EA14:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EAAC;
}

loc_8021EA20:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8021EA2C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA48;
    }
}

loc_8021EA30:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_8021EA38:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA48;
    }
}

loc_8021EA3C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EAAC;
}

loc_8021EA48:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 60));
}

loc_8021EA54:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA70;
    }
}

loc_8021EA58:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_8021EA60:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA70;
    }
}

loc_8021EA64:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EAAC;
}

loc_8021EA70:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 76));
}

loc_8021EA7C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA98;
    }
}

loc_8021EA80:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_8021EA88:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8021EA98;
    }
}

loc_8021EA8C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EAAC;
}

loc_8021EA98:
{
    r3 = (r3 + 80);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021E9D4;
    }
}

loc_8021EAA4:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
}

loc_8021EAAC:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021EAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8021EC14;
    }
}

loc_8021EAB8:
{
    r3 = 32;
    ctx->lr = 0x8021EAC0u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802121A0_9F71 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_9F71);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_9F71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8021EAC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021EB0C;
    }
}

loc_8021EAC8:
{
    // inline leaf 0x8021E4B8 (12 guest instruction(s))
}

loc_inl7_0x8021E4B8:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_inl7_0x8021E4C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8021E4E0;
    }
}

loc_inl7_0x8021E4C8:
{
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 39));
}

loc_inl7_0x8021E4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8021E4E0;
    }
}

loc_inl7_0x8021E4D8:
{
    r3 = 1;
    goto loc_inl7_cont_8021E4B8;
}

loc_inl7_0x8021E4E0:
{
    r3 = 0;
}

loc_inl7_cont_8021E4B8:
{
    // end of inlined leaf 0x8021E4B8
}

loc_8021EAD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021EB0C;
    }
}

loc_8021EAD4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8021EADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EAEC;
    }
}

loc_8021EAE0:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021EAE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021EB0C;
    }
}

loc_8021EAEC:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021EAF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8021EC24;
    }
}

loc_8021EAF8:
{
    r0 = -2;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x8021EB08u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_AA67 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_AA67);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_AA67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8021EC24;
}

loc_8021EB0C:
{
    r3 = 12;
    ctx->lr = 0x8021EB14u;
    if constexpr (KnownRegArgsCpuCall<0x8021DF60u>(&func_8021DF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8021DF60_B2FC = func_8021DF60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8021DF60_B2FC);
        r4 = static_cast<uint32_t>(regargs_result_8021DF60_B2FC >> 32);
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
        InvokeDirectCpu<0x8021DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8021EB18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021EBDC;
    }
}

loc_8021EB1C:
{
    // inline leaf 0x8021E4B8 (12 guest instruction(s))
}

loc_inl8_0x8021E4B8:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_inl8_0x8021E4C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x8021E4E0;
    }
}

loc_inl8_0x8021E4C8:
{
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 39));
}

loc_inl8_0x8021E4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x8021E4E0;
    }
}

loc_inl8_0x8021E4D8:
{
    r3 = 1;
    goto loc_inl8_cont_8021E4B8;
}

loc_inl8_0x8021E4E0:
{
    r3 = 0;
}

loc_inl8_cont_8021E4B8:
{
    // end of inlined leaf 0x8021E4B8
}

loc_8021EB24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021EBDC;
    }
}

loc_8021EB28:
{
    r4 = MemoryInline::FlatRead16((r30 + 332));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8021EB30:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-2))) {
        goto loc_8021EB40;
    }
}

loc_8021EB34:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EBC4;
}

loc_8021EB40:
{
    r5 = (r4 + 1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8021EB54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8021EB60;
    }
}

loc_8021EB58:
{
}

loc_8021EB5C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(20))) {
        goto loc_8021EB84;
    }
}

loc_8021EB60:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8021EB68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EB84;
    }
}

loc_8021EB6C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021EB74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EB84;
    }
}

loc_8021EB78:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EBC4;
}

loc_8021EB84:
{
}

loc_8021EB88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8021EB94;
    }
}

loc_8021EB8C:
{
}

loc_8021EB90:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(20))) {
        goto loc_8021EBB8;
    }
}

loc_8021EB94:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8021EB9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EBAC;
    }
}

loc_8021EBA0:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021EBA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021EBB8;
    }
}

loc_8021EBAC:
{
    r0 = -2;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    goto loc_8021EBC4;
}

loc_8021EBB8:
{
    r3 = MemoryInline::FlatRead16((r30 + 332));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
}

loc_8021EBC4:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021EBCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8021EC24;
    }
}

loc_8021EBD0:
{
    r3 = 2;
    ctx->lr = 0x8021EBD8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_C606 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_C606);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_C606 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8021EC24;
}

loc_8021EBDC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8021EBE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EC24;
    }
}

loc_8021EBE8:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8021EBF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021EC24;
    }
}

loc_8021EBF4:
{
    r0 = MemoryInline::FlatRead16((r30 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021EBFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-2))) {
        goto loc_8021EC24;
    }
}

loc_8021EC00:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x8021EC10u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_D23B = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_D23B);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_D23B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8021EC24;
}

loc_8021EC14:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x8021EC24u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_DBE5 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_DBE5);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_DBE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8021EC24:
{
    r0 = 72;
    addr_psqx_8021EC28_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8021EC28_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 64));
    r0 = 56;
    addr_psqx_8021EC34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8021EC34_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021E59C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021E59C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021E59C func_8021E59C preserves=true fpr_mask=0x00000000
