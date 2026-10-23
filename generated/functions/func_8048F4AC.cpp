#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048F4AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8048F4AC;

loc_8048F4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_838 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_838);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_838 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + 1);
    r6 = 251;
    r7 = (r0 & 65535);
    r5 = 0;
    r4 = 19;
    r3 = 12;
    r0 = 248;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r6));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8048F4F4:
{
    r6 = (r31 + 11);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r5));
    r8 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8048F5CC;
    }
}

loc_8048F510:
{
}

loc_8048F514:
{
    r4 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_8048F5A4;
    }
}

loc_8048F51C:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8048F538;
    }
}

loc_8048F524:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8048F530:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_8048F538;
    }
}

loc_8048F534:
{
    r5 = 1;
}

loc_8048F538:
{
}

loc_8048F53C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8048F5A4;
    }
}

loc_8048F540:
{
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8048F550:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8048F5A4;
    }
}

loc_8048F554:
{
    r30_addr_2 = (r30 + r8);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r3 = (r30 + r8);
    r8 = (r8 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048F554;
    }
}

loc_8048F5A4:
{
    r0 = (r7 - r8);
    r3 = (r30 + r8);
    ctr = r0;
}

loc_8048F5B4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r7))) {
        goto loc_8048F5CC;
    }
}

loc_8048F5B8:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048F5B8;
    }
}

loc_8048F5CC:
{
    r3 = r31;
    ctx->lr = 0x8048F5D4u;
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048BB18_191D = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_191D);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_191D >> 32);
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
        InvokeDirectCpu<0x8048BB18u>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048F4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048F4AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048F4AC func_8048F4AC preserves=true fpr_mask=0x00000000
