#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA600(CpuContext* ctx);
extern "C" uint32_t func_802AA600_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8033DAB4(CpuContext* ctx);
extern "C" uint64_t func_8033DAB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8035B660(CpuContext* ctx);
extern "C" uint64_t func_8035B660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8033DC68_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
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

    goto loc_8033DC68;

loc_8033DC68:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r30 = r3;
    r31 = 0;
    r29 = 0;
    goto loc_8033DD84;
}

loc_8033DC94:
{
    r3 = (r30 + 32);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r8 = 0;
    r7 = 0;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    goto loc_8033DCE4;
}

loc_8033DCB4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r3 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8033DCC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8033DCE0;
    }
}

loc_8033DCC8:
{
}

loc_8033DCCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r5))) {
        goto loc_8033DCE0;
    }
}

loc_8033DCD0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    r8 = (r8 + 1);
}

loc_8033DCE0:
{
    r7 = (r7 + 1);
}

loc_8033DCE4:
{
    r6 = MemoryInline::FlatRead32((r30 + 144));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r3 = MemoryInline::FlatRead32((r30 + 148));
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8033DD00:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8033DCB4;
    }
}

loc_8033DD04:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8033DD14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8033DD80;
    }
}

loc_8033DD18:
{
    r3 = r30;
    ctx->lr = 0x8033DD20u;
    if constexpr (KnownRegArgsCpuCall<0x8033DAB4u>(&func_8033DAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8033DAB4_1123 = func_8033DAB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DAB4_1123);
        r4 = static_cast<uint32_t>(regargs_result_8033DAB4_1123 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8033DAB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
}

loc_8033DD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033DD80;
    }
}

loc_8033DD2C:
{
    r3 = MemoryInline::FlatRead32((r30 + 144));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    ctx->lr = 0x8033DD40u;
    if constexpr (KnownRegArgsCpuCall<0x802AA600u>(&func_802AA600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA600_1592 = func_802AA600_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AA600_1592;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802AA600u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = r3;
    r3 = 3;
    r4 = 425;
    // inline leaf 0x80211E80 (19 guest instruction(s))
}

loc_inl0_0x80211E80:
{
    r0 = (r3 & 255);
}

loc_inl0_0x80211E88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(5))) {
        goto loc_inl0_0x80211EA8;
    }
}

loc_inl0_0x80211E8C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r4 = (r4 & 65535);
    r3 = 0x805C0000u;
    r3 = (r3 + -25584);
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_inl0_0x80211EA4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl0_0x80211EB8;
    }
}

loc_inl0_0x80211EA8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80211E80;
}

loc_inl0_0x80211EB8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3_addr_3 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_inl0_cont_80211E80:
{
    // end of inlined leaf 0x80211E80
    r4 = r3;
    r3 = (r1 + 8);
    r5 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8033DD64u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_1E25 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1E25);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1E25 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
    }
    r3 = 0;
    r4 = (r1 + 8);
    ctx->lr = 0x8033DD70u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8035B660_25C4 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_25C4);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_25C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 144));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r29));
}

loc_8033DD80:
{
    r31 = (r31 + 1);
}

loc_8033DD84:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = MemoryInline::FlatRead32((r30 + 148));
    r3 = MemoryInline::FlatRead32((r30 + 144));
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8033DDA0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8033DC94;
    }
}

loc_8033DDA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_8033DC68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033DC68_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033DC68 func_8033DC68 preserves=true fpr_mask=0x00000000
