#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CF090(CpuContext* ctx);
extern "C" uint64_t func_804CF090_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804CF7F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804CF7F0;

loc_804CF7F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 12);
    r30 = r5;
    r29 = r4;
    r4 = (r1 + 8);
    // inline leaf 0x804D2850 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -15016));
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -15012));
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x804D2850
    r5 = r31;
    r3 = (r1 + 16);
    r4 = (r13 + -20088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804CF834u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_B9A = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_B9A);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_B9A >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804CF838:
{
    r31 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804CF85C;
    }
}

loc_804CF840:
{
    r3 = r30;
    goto loc_804CF850;
}

loc_804CF848:
{
    r3 = (r3 + 4);
    r31 = (r31 + 1);
}

loc_804CF850:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804CF858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CF848;
    }
}

loc_804CF85C:
{
    r0 = (r31 + 2);
    r4 = 1;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    r6 = (r31 + 1);
    r0 = (r1 + 16);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_804CF878:
{
    MemoryInline::FlatWrite32(r3, r0);
    r4 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804CF994;
    }
}

loc_804CF884:
{
}

loc_804CF888:
{
    r7 = (r31 + -7);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_804CF960;
    }
}

loc_804CF890:
{
    r8 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804CF8B0;
    }
}

loc_804CF89C:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_804CF8A8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_804CF8B0;
    }
}

loc_804CF8AC:
{
    r9 = 1;
}

loc_804CF8B0:
{
}

loc_804CF8B4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CF8EC;
    }
}

loc_804CF8B8:
{
    r0 = (r31 + 1);
    r5 = 1;
    r6 = (r0 & -2147483648);
    r0 = (r6 + -2147483648);
}

loc_804CF8CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804CF8E0;
    }
}

loc_804CF8D0:
{
    r0 = (r31 & -2147483648);
}

loc_804CF8D8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_804CF8E0;
    }
}

loc_804CF8DC:
{
    r5 = 0;
}

loc_804CF8E0:
{
}

loc_804CF8E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804CF8EC;
    }
}

loc_804CF8E8:
{
    r8 = 1;
}

loc_804CF8EC:
{
}

loc_804CF8F0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804CF960;
    }
}

loc_804CF8F4:
{
    r0 = (r7 + 6);
    r5 = (r30 + 4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r6 = (r3 + 4);
    ctr = r0;
}

loc_804CF90C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(1))) {
        goto loc_804CF960;
    }
}

loc_804CF910:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -4), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -4));
    r4 = (r4 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, r5);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 24));
    r5 = (r5 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CF910;
    }
}

loc_804CF960:
{
    r5 = (r31 + 1);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r0 = (r5 - r4);
    r6 = (r30 + r7);
    r7 = (r3 + r7);
    ctr = r0;
}

loc_804CF97C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_804CF994;
    }
}

loc_804CF980:
{
    r0 = MemoryInline::FlatRead32((r6 + -4));
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32(r7, r0);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CF980;
    }
}

loc_804CF994:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r9 = r3;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r29;
    r8 = (r31 + 1);
    r3 = -1;
    r7 = 0;
    ctx->lr = 0x804CF9B4u;
    if constexpr (KnownRegArgsCpuCall<0x804CF090u>(&func_804CF090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CF090_28E4 = func_804CF090_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CF090_28E4);
        r4 = static_cast<uint32_t>(regargs_result_804CF090_28E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CF090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CF7F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CF7F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CF7F0 func_804CF7F0 preserves=true fpr_mask=0x00000000
