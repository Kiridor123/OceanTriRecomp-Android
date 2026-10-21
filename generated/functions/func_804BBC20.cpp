#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BB9C0(CpuContext* ctx);
extern "C" uint64_t func_804BB9C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804BBC20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x804BBC20u);
    goto loc_804BBC20;

loc_804BBC20:
{
    MemoryHw::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = -855638016;
    r3_addr_0 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 20);
}

loc_804BBC48:
{
}

loc_804BBC4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_804BBC5C;
    }
}

loc_804BBC50:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x804BBC5Cu;
    if constexpr (KnownRegArgsCpuCall<0x804BB9C0u>(&func_804BB9C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804BB9C0_ADA = func_804BB9C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BB9C0_ADA);
        r4 = static_cast<uint32_t>(regargs_result_804BB9C0_ADA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804BB9C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_804BBC5C:
{
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = -855638016;
    r3_addr_1 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 34);
}

loc_804BBC68:
{
}

loc_804BBC6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(34))) {
        goto loc_804BBDB4;
    }
}

loc_804BBC70:
{
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = -855638016;
    r3_addr_2 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    r3 = -855638016;
    r0 = 1073741824;
    MemoryHw::FlatWrite32((r3 + 48), r0);
    r31 = MemoryHw::FlatRead32((r13 + -20336));
}

loc_804BBC9C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_804BBCAC;
    }
}

loc_804BBCA0:
{
    r31 = (r31 + 1);
    MemoryHw::FlatWrite32((r13 + -20336), r31);
    // inline leaf 0x804BDD70 (4 guest instruction(s))
    r3 = MemoryHw::FlatRead32((r13 + -15300));
    r0 = (r3 + -1);
    MemoryHw::FlatWrite32((r13 + -15300), r0);
    // end of inlined leaf 0x804BDD70
}

loc_804BBCAC:
{
}

loc_804BBCB0:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_804BBDB4;
    }
}

loc_804BBCB4:
{
    r0 = MemoryHw::FlatRead32((r13 + -15328));
}

loc_804BBCBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BBCF4;
    }
}

loc_804BBCC0:
{
    r3 = MemoryHw::FlatRead32((r13 + -15324));
    r0 = 0;
    MemoryHw::FlatWrite32((r3 + 4), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15324));
    MemoryHw::FlatWrite32((r13 + -15328), r0);
    r3 = (r3 + 44);
    ctx->lr = 0x804BBCDCu;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804D51A0_19CD = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_19CD);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_19CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D51A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = -855638016;
    r3_addr_3 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
}

loc_804BBCF4:
{
    r4 = 0x80750000u;
    r3 = (r4 + -26688);
    r4 = MemoryHw::FlatRead32((r4 + -26688));
    r0 = MemoryHw::FlatRead32((r3 + 4));
}

loc_804BBD08:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_804BBD14;
    }
}

loc_804BBD0C:
{
    r0 = (r0 - r4);
    goto loc_804BBD20;
}

loc_804BBD14:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_804BBD20:
{
}

loc_804BBD24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BBDB4;
    }
}

loc_804BBD28:
{
    r3 = 0x80750000u;
    r3 = (r3 + -26688);
    r0 = MemoryHw::FlatRead32((r3 + 8));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + r0);
    r4 = MemoryHw::FlatRead32((r3 + 16));
}

loc_804BBD44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BBDB4;
    }
}

loc_804BBD48:
{
    r0 = MemoryHw::FlatRead32((r4 + 40));
}

loc_804BBD50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BBD60;
    }
}

loc_804BBD54:
{
    r3 = MemoryHw::FlatRead32((r13 + -20336));
    r0 = (r3 + -1);
    MemoryHw::FlatWrite32((r13 + -20336), r0);
}

loc_804BBD60:
{
    r4 = (r4 + -2147483648);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    r7 = 0x80750000u;
    r3 = MemoryHw::FlatRead32((r13 + -20336));
    r6 = (r7 + -26688);
    r4 = MemoryHw::FlatRead32((r7 + -26688));
    r5 = MemoryHw::FlatRead32((r6 + 8));
    r0 = (r3 + -1);
    r3 = (r4 + 1);
    MemoryHw::FlatWriteRam32((r7 + -26688), r3);
    r4 = (r5 + 1);
    r4 = (r4 & 15);
    MemoryHw::FlatWriteRam32((r6 + 8), r4);
    r3 = 1;
    MemoryHw::FlatWrite32((r13 + -20336), r0);
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = -855638016;
    r3_addr_5 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
}

loc_804BBDB4:
{
    r0 = MemoryHw::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BBC20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BBC20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x3FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BBC20 func_804BBC20 preserves=true fpr_mask=0x00000000
