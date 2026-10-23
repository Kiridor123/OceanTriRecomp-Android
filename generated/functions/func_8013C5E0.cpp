#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012CFF4(CpuContext* ctx);
extern "C" uint64_t func_8012CFF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80137834(CpuContext* ctx);
extern "C" uint64_t func_80137834_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013C5E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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

    goto loc_8013C5E0;

loc_8013C5E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r6 = 0;
    r28 = 0;
    r31 = MemoryInline::FlatRead8(r4);
    r30 = MemoryInline::FlatRead8((r4 + 1));
    r29 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (r5 & 255);
}

loc_8013C614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8013C7B8;
    }
}

loc_8013C618:
{
}

loc_8013C61C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8013C644;
    }
}

loc_8013C620:
{
}

loc_8013C624:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8013C65C;
    }
}

loc_8013C628:
{
}

loc_8013C62C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_8013C670;
    }
}

loc_8013C630:
{
}

loc_8013C634:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_8013C684;
    }
}

loc_8013C638:
{
}

loc_8013C63C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(4))) {
        goto loc_8013C698;
    }
}

loc_8013C640:
{
    goto loc_8013C6AC;
}

loc_8013C644:
{
    r4 = MemoryInline::FlatRead8((r3 + 896));
    r0 = (r4 + -1);
}

loc_8013C650:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8013C6AC;
    }
}

loc_8013C654:
{
    r6 = 1;
    goto loc_8013C6AC;
}

loc_8013C65C:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013C664:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8013C6AC;
    }
}

loc_8013C668:
{
    r6 = 1;
    goto loc_8013C6AC;
}

loc_8013C670:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013C678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8013C6AC;
    }
}

loc_8013C67C:
{
    r6 = 1;
    goto loc_8013C6AC;
}

loc_8013C684:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013C68C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8013C6AC;
    }
}

loc_8013C690:
{
    r6 = 1;
    goto loc_8013C6AC;
}

loc_8013C698:
{
    r4 = MemoryInline::FlatRead8((r3 + 896));
    r0 = (r4 + -1);
}

loc_8013C6A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8013C6AC;
    }
}

loc_8013C6A8:
{
    r6 = 1;
}

loc_8013C6AC:
{
}

loc_8013C6B0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_8013C7B8;
    }
}

loc_8013C6B4:
{
}

loc_8013C6B8:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(2))) {
        goto loc_8013C7B8;
    }
}

loc_8013C6BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 897));
}

loc_8013C6C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8013C7B8;
    }
}

loc_8013C6C8:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013C6D0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013C7B8;
    }
}

loc_8013C6D4:
{
    r5 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013C6DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8013C6F4;
    }
}

loc_8013C6E0:
{
}

loc_8013C6E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8013C724;
    }
}

loc_8013C6E8:
{
}

loc_8013C6EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8013C750;
    }
}

loc_8013C6F0:
{
    goto loc_8013C7B8;
}

loc_8013C6F4:
{
    r3 = r0;
    ctx->lr = 0x8013C6FCu;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_1897 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_1897);
        r4 = static_cast<uint32_t>(regargs_result_80137834_1897 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8013C708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013C7B8;
    }
}

loc_8013C70C:
{
    r3 = r27;
    ctx->lr = 0x8013C714u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_1CE3 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_1CE3);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_1CE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8013C718:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013C7B8;
    }
}

loc_8013C71C:
{
    r28 = 1;
    goto loc_8013C7B8;
}

loc_8013C724:
{
    r4 = 0x806C0000u;
    r5 = (r4 + -2080);
    r0 = MemoryInline::FlatRead8((r4 + -2080));
}

loc_8013C734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013C7B8;
    }
}

loc_8013C738:
{
    r3 = MemoryInline::FlatRead8((r3 + 481));
    r0 = MemoryInline::FlatRead8((r5 + 420));
}

loc_8013C744:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8013C7B8;
    }
}

loc_8013C748:
{
    r28 = 1;
    goto loc_8013C7B8;
}

loc_8013C750:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r27 + 898));
    r0 = (r0 * 2840);
    r26 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r26);
}

loc_8013C76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013C7B8;
    }
}

loc_8013C770:
{
    r3 = MemoryInline::FlatRead8((r27 + 481));
    r0 = MemoryInline::FlatRead8((r26 + 481));
}

loc_8013C77C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8013C7B8;
    }
}

loc_8013C780:
{
    r4 = MemoryInline::FlatRead8((r26 + 3));
    r0 = MemoryInline::FlatRead8((r27 + 3));
}

loc_8013C78C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_8013C7B8;
    }
}

loc_8013C790:
{
    r3 = r27;
    ctx->lr = 0x8013C798u;
    if constexpr (KnownRegArgsCpuCall<0x8012CFF4u>(&func_8012CFF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012CFF4_29EB = func_8012CFF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012CFF4_29EB);
        r4 = static_cast<uint32_t>(regargs_result_8012CFF4_29EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CFF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8013C79C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013C7B8;
    }
}

loc_8013C7A0:
{
    r0 = MemoryInline::FlatRead8((r26 + 485));
}

loc_8013C7A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8013C7B8;
    }
}

loc_8013C7AC:
{
}

loc_8013C7B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8013C7B8;
    }
}

loc_8013C7B4:
{
    r28 = 1;
}

loc_8013C7B8:
{
}

loc_8013C7BC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8013C7D4;
    }
}

loc_8013C7C0:
{
    r3 = r27;
    r4 = r31;
    r5 = r30;
    r6 = r29;
    ctx->lr = 0x8013C7D4u;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012B3E4_3029 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_3029);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_3029 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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

loc_8013C7D4:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x8013C7E0u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80128C5C_371A = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_371A);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_371A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

extern "C" void func_8013C5E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013C5E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013C5E0 func_8013C5E0 preserves=true fpr_mask=0x00000000
