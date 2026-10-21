#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047AC30(CpuContext* ctx);
extern "C" uint64_t func_8047AC30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048610C(CpuContext* ctx);
extern "C" uint64_t func_8048610C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804856F8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804856F8u);
    goto loc_804856F8;

loc_804856F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80740000u;
    r31 = (r31 + -17608);
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r31 + 10176));
}

loc_80485730:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_80485758;
    }
}

loc_80485734:
{
    r3 = 851968;
    r4 = 0x80610000u;
    r5 = MemoryInline::FlatRead8(r28);
    r3 = (r3 + 2);
    r6 = MemoryInline::FlatRead8((r28 + 1));
    r4 = (r4 + 19308);
    r7 = MemoryInline::FlatRead8((r28 + 2));
    r8 = MemoryInline::FlatRead8((r28 + 3));
    ctx->lr = 0x80485758u;
    if constexpr (KnownRegArgsCpuCall<0x8047AC30u>(&func_8047AC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8047AC30_A41 = func_8047AC30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC30_A41);
        r4 = static_cast<uint32_t>(regargs_result_8047AC30_A41 >> 32);
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
        InvokeDirectCpu<0x8047AC30u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_80485758:
{
    r0 = MemoryInline::FlatRead8((r31 + 6216));
}

loc_80485760:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80485770;
    }
}

loc_80485764:
{
    r0 = MemoryInline::FlatRead8((r31 + 6212));
}

loc_8048576C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485778;
    }
}

loc_80485770:
{
    r3 = 2;
    goto loc_8048588C;
}

loc_80485778:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80485780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485794;
    }
}

loc_80485784:
{
}

loc_80485788:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80485794;
    }
}

loc_8048578C:
{
    r3 = 5;
    goto loc_8048588C;
}

loc_80485794:
{
    // inline leaf 0x804837B4 (7 guest instruction(s))
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = MemoryInline::FlatRead8((r3 + 1614));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
    // end of inlined leaf 0x804837B4
    r0 = (r3 & 255);
}

loc_8048579C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804857A8;
    }
}

loc_804857A0:
{
    r3 = 6;
    goto loc_8048588C;
}

loc_804857A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 10u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r28);
    r0 = 3;
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 1));
    r6 = 0;
    r4 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 5808), 0, 409u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 388u, (r31 + 6196), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 389u, (r31 + 6197), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 2));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 390u, (r31 + 6198), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 391u, (r31 + 6199), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 4));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r28 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 392u, (r31 + 6200), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 393u, (r31 + 6201), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r28 + 6));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r28 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 394u, (r31 + 6202), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 395u, (r31 + 6203), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r28 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 396u, (r31 + 6204), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r28 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 397u, (r31 + 6205), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 407u, (r31 + 6215), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 5808), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 5812), r29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 399u, (r31 + 6207), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r28);
    r3 = (r5 + -1);
    r0 = (1 - r5);
    r0 = ~(r3 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r3 + 2);
    MemoryInline::WriteResolved8(guest_range_1, 408u, (r31 + 6216), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80485838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8048584C;
    }
}

loc_8048583C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80485864;
    }
}

loc_80485840:
{
}

loc_80485844:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80485864;
    }
}

loc_80485848:
{
    goto loc_80485858;
}

loc_8048584C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r0));
    goto loc_8048586C;
}

loc_80485858:
{
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r28 + 3), static_cast<uint8_t>(r6));
    goto loc_8048586C;
}

loc_80485864:
{
    r3 = 5;
    goto loc_8048588C;
}

loc_8048586C:
{
    r3 = MemoryInline::FlatRead8((r28 + 3));
    r4 = (r28 + 4);
    ctx->lr = 0x80485878u;
    if constexpr (KnownRegArgsCpuCall<0x8048610Cu>(&func_8048610C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8048610C_2508 = func_8048610C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048610C_2508);
        r4 = static_cast<uint32_t>(regargs_result_8048610C_2508 >> 32);
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
        InvokeDirectCpu<0x8048610Cu>(ctx);
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
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80485880:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8048588C;
    }
}

loc_80485884:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r0));
}

loc_8048588C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_804856F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804856F8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804856F8 func_804856F8 preserves=true fpr_mask=0x00000000
