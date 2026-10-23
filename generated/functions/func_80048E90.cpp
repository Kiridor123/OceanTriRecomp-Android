#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048D48(CpuContext* ctx);
extern "C" uint64_t func_80048D48_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80048E90_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80048E90;

loc_80048E90:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = (r3 & 255);
    // inline leaf 0x800D0608 (14 guest instruction(s))
}

loc_inl0_0x800D0608:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
}

loc_inl0_0x800D0614:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_inl0_0x800D0620;
    }
}

loc_inl0_0x800D0618:
{
    r3 = 0;
    goto loc_inl0_cont_800D0608;
}

loc_inl0_0x800D0620:
{
    r0 = (r3 * 56);
    r3 = (r4 + r0);
    r3 = (r3 + 188);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x800D0634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800D0638:
{
    r3 = 0;
    goto loc_inl0_cont_800D0608;
}

loc_inl0_return:
{
}

loc_inl0_cont_800D0608:
{
    // end of inlined leaf 0x800D0608
}

loc_80048ED0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80048FE0;
    }
}

loc_80048ED4:
{
    r4 = MemoryInline::FlatRead16((r3 + 40));
    r0 = (r4 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32488));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 52), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::FlatRead16((r3 + 42));
    r0 = (r3 + -1);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 60), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r30);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 12), static_cast<uint16_t>(r4));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 16), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 52), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 24), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r30 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 60), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 28), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r30 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 52), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 32), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r30 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 60), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 36), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 52), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32496));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 20), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 40), r0);
    r3 = (r29 & 255);
    r4 = (r1 + 8);
    r5 = (r31 & 255);
    ctx->lr = 0x80048FE0u;
    if constexpr (KnownRegArgsCpuCall<0x80048D48u>(&func_80048D48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80048D48_1F97 = func_80048D48_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80048D48_1F97);
        r4 = static_cast<uint32_t>(regargs_result_80048D48_1F97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80048D48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80048FE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80048E90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80048E90_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80048E90 func_80048E90 preserves=true fpr_mask=0x00000000
