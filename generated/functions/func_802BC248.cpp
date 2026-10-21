#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800580A8(CpuContext* ctx);
extern "C" uint64_t func_800580A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AFCD8(CpuContext* ctx);
extern "C" uint32_t func_802AFCD8_ra0_0_8_0(CpuContext*);
extern "C" void func_802BC0F8(CpuContext* ctx);
extern "C" uint64_t func_802BC0F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BC230(CpuContext* ctx);
extern "C" uint32_t func_802BC230_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BC4CC(CpuContext* ctx);
extern "C" uint32_t func_802BC4CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BC950(CpuContext* ctx);
extern "C" uint64_t func_802BC950_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802BD78C(CpuContext* ctx);
extern "C" uint64_t func_802BD78C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802BE158(CpuContext* ctx);
extern "C" uint64_t func_802BE158_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80339DF8(CpuContext* ctx);
extern "C" uint64_t func_80339DF8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803C4B18(CpuContext* ctx);
extern "C" uint32_t func_803C4B18_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802AFCD8_statefree();
extern "C" MkwStateFreeResult2 func_802BC230_statefree(uint32_t);

extern "C" uint64_t func_802BC248_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    MKW_GUEST_ENTER(0x802BC248u);
    goto loc_802BC248;

loc_802BC248:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = (r3 + 580);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 258));
}

loc_802BC28C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BC2A4;
    }
}

loc_802BC290:
{
}

loc_802BC294:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802BC348;
    }
}

loc_802BC298:
{
}

loc_802BC29C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802BC370;
    }
}

loc_802BC2A0:
{
    goto loc_802BC390;
}

loc_802BC2A4:
{
    r3 = r29;
    r4 = 24;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802BC2B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC390;
    }
}

loc_802BC2B8:
{
    ctx->lr = 0x802BC2BCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802BC2C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC320;
    }
}

loc_802BC2C4:
{
    ctx->lr = 0x802BC2C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x803C4B78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_802BC2CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC300;
    }
}

loc_802BC2D0:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x802BC0D4 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 1271));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x802BC0D4
}

loc_802BC2E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BC390;
    }
}

loc_802BC2E4:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = 1;
    ctx->lr = 0x802BC2F0u;
    if constexpr (KnownRegArgsCpuCall<0x80339DF8u>(&func_80339DF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_80339DF8_1D27 = func_80339DF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339DF8_1D27);
        r4 = static_cast<uint32_t>(regargs_result_80339DF8_1D27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80339DF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r3 = MemoryInline::FlatRead8((r31 + 258));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 258), static_cast<uint8_t>(r0));
    goto loc_802BC390;
}

loc_802BC300:
{
    ctx->lr = 0x802BC304u;
    if constexpr (KnownRegArgsCpuCall<0x803C4B18u>(&func_803C4B18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C4B18_2547 = func_803C4B18_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803C4B18_2547;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C4B18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802BC308:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC390;
    }
}

loc_802BC30C:
{
    ctx->lr = 0x802BC310u;
    if constexpr (KnownRegArgsCpuCall<0x802BC4CCu>(&func_802BC4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC4CC_284B = func_802BC4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BC4CC_284B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = 0;
    r4 = 2;
    // inline leaf 0x800580A8 (42 guest instruction(s))
}

loc_inl4_0x800580A8:
{
    r5 = 0x80670000u;
    r7 = (r5 + -12024);
    r6 = (r4 * 24);
    r5 = 0x80590000u;
    r0 = (r5 + -18120);
    r9 = (r0 + r6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r5 = (r7 + r6);
    MemoryInline::FlatWriteRam32((r5 + 64), r4);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r7_addr_1 = (r7 + r6);
    MemoryInline::FlatWriteRam32(r7_addr_1, r0);
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r0 = MemoryInline::FlatRead32((r9 + 12));
    r8 = (r0 - r3);
}

loc_inl4_0x800580E4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_inl4_0x800580FC;
    }
}

loc_inl4_0x800580E8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r8 = (r8 - r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r5 + 16), r0);
    goto loc_inl4_0x80058104;
}

loc_inl4_0x800580FC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r5 + 16), r0);
}

loc_inl4_0x80058104:
{
    r4 = (r7 + r6);
    r0 = MemoryInline::FlatRead32((r9 + 16));
    MemoryInline::FlatWriteRam32((r4 + 96), r0);
    r5 = MemoryInline::FlatRead32((r4 + 96));
    r3 = (static_cast<int32_t>(r5) >> 31);
    r0 = (r3 ^ r5);
    r5 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r5));
    MemoryInline::FlatWriteRam32((r4 + 48), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r5 * r3);
}

loc_inl4_0x80058134:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r0))) {
        goto loc_inl4_0x80058140;
    }
}

loc_inl4_0x80058138:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 48), r0);
}

loc_inl4_0x80058140:
{
    r0 = MemoryInline::FlatRead32((r9 + 12));
    r3 = (r7 + r6);
    MemoryInline::FlatWriteRam32((r3 + 80), r0);
}

loc_inl4_cont_800580A8:
{
    // end of inlined leaf 0x800580A8
    goto loc_802BC390;
}

loc_802BC320:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AFCD8u) && KnownTranslatedCpuCall<0x802AFCD8u>::kAvailable && !KnownTranslatedCpuCall<0x802AFCD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AFCD8u>()) {
        const auto state_free_result_802AFCD8_3310 = func_802AFCD8_statefree();
        r3 = static_cast<uint32_t>(state_free_result_802AFCD8_3310);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFCD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r0 = (r3 & 255);
}

loc_802BC32C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21))) {
        goto loc_802BC390;
    }
}

loc_802BC330:
{
    r0 = MemoryInline::FlatRead8((r31 + 65));
    r0 = (r0 & 8);
}

loc_802BC33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BC390;
    }
}

loc_802BC340:
{
    ctx->lr = 0x802BC344u;
    if constexpr (KnownRegArgsCpuCall<0x802BC4CCu>(&func_802BC4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC4CC_39AF = func_802BC4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BC4CC_39AF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_802BC390;
}

loc_802BC348:
{
    r3 = r30;
    ctx->lr = 0x802BC350u;
    if constexpr (KnownRegArgsCpuCall<0x802BC0F8u>(&func_802BC0F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC0F8_3C61 = func_802BC0F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BC0F8_3C61);
        r4 = static_cast<uint32_t>(regargs_result_802BC0F8_3C61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC0F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802BC354:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC370;
    }
}

loc_802BC358:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = 2;
    ctx->lr = 0x802BC364u;
    if constexpr (KnownRegArgsCpuCall<0x80339DF8u>(&func_80339DF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_80339DF8_409F = func_80339DF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339DF8_409F);
        r4 = static_cast<uint32_t>(regargs_result_80339DF8_409F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80339DF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r3 = MemoryInline::FlatRead8((r31 + 258));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 258), static_cast<uint8_t>(r0));
}

loc_802BC370:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BC230u) && KnownTranslatedCpuCall<0x802BC230u>::kAvailable && !KnownTranslatedCpuCall<0x802BC230u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BC230u>()) {
        const auto state_free_result_802BC230_4901 = func_802BC230_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_802BC230_4901[0]);
        r3 = static_cast<uint32_t>(state_free_result_802BC230_4901[1]);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC230u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_802BC37C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BC390;
    }
}

loc_802BC380:
{
    ctx->lr = 0x802BC384u;
    if constexpr (KnownRegArgsCpuCall<0x802BC4CCu>(&func_802BC4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BC4CC_4F0E = func_802BC4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BC4CC_4F0E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = 0;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_800580A8_51ED = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_51ED);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_51ED >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800580A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802BC390:
{
    r3 = MemoryInline::FlatRead8((r31 + 66));
}

loc_802BC398:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802BC3B0;
    }
}

loc_802BC39C:
{
}

loc_802BC3A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_802BC3F8;
    }
}

loc_802BC3A4:
{
}

loc_802BC3A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802BC470;
    }
}

loc_802BC3AC:
{
    goto loc_802BC498;
}

loc_802BC3B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 1256));
}

loc_802BC3B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BC3C8;
    }
}

loc_802BC3BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 64), static_cast<uint8_t>(r0));
    goto loc_802BC498;
}

loc_802BC3C8:
{
    MemoryInline::FlatWrite8((r31 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 1252));
    MemoryInline::FlatWrite32((r31 + 140), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 133), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 134), static_cast<uint8_t>(r0));
}

loc_802BC3F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1256), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 138));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 12780);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r3 + 65536);
}

loc_802BC41C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802BC430;
    }
}

loc_802BC420:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802BC42Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BD78Cu>(&func_802BD78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_802BD78C_5E91 = func_802BD78C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BD78C_5E91);
        r4 = static_cast<uint32_t>(regargs_result_802BD78C_5E91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BD78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    goto loc_802BC43C;
}

loc_802BC430:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x802BC43Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BC950u>(&func_802BC950)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_802BC950_66AE = func_802BC950_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BC950_66AE);
        r4 = static_cast<uint32_t>(regargs_result_802BC950_66AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BC950u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_802BC43C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802BC440:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802BC464;
    }
}

loc_802BC444:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 64), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BC458;
    }
}

loc_802BC450:
{
    MemoryInline::FlatWrite8((r31 + 139), static_cast<uint8_t>(r0));
    goto loc_802BC498;
}

loc_802BC458:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 139), static_cast<uint8_t>(r0));
    goto loc_802BC498;
}

loc_802BC464:
{
    r3 = MemoryInline::FlatRead8((r31 + 66));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r0));
}

loc_802BC470:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 64), 0, 195u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 67), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r31 + 138), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r31 + 139), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 140), r0);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 189u, (r31 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 64), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 194u, (r31 + 258), static_cast<uint8_t>(r0));
}

loc_802BC498:
{
    r3 = 3;
    r4 = r31;
    r5 = (r31 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    ctx->lr = 0x802BC4B0u;
    if constexpr (KnownRegArgsCpuCall<0x802BE158u>(&func_802BE158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE158_7554 = func_802BE158_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE158_7554);
        r4 = static_cast<uint32_t>(regargs_result_802BE158_7554 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_802BC248(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BC248_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BC248 func_802BC248 preserves=true fpr_mask=0x00000000
