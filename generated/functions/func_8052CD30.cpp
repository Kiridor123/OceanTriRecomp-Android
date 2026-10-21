#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805326D4(CpuContext* ctx);
extern "C" void func_805326D4_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80532764(CpuContext* ctx);
extern "C" void func_80532764_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80533BE0(CpuContext* ctx);
extern "C" uint32_t func_80533BE0_ra38_6_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80535C30(CpuContext* ctx);
extern "C" double func_80535C30_ra38_fe_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052CD30_ra38_fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8052CD30u);
    goto loc_8052CD30;

loc_8052CD30:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r28 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r5 + 60));
    r3 = MemoryInline::FlatRead32((r5 + 56));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r31 = (r31_rot_0 & 15);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 15);
}

loc_8052CD6C:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_8052CEC4;
    }
}

loc_8052CD70:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 15);
}

loc_8052CD78:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_8052CD80;
    }
}

loc_8052CD7C:
{
    goto loc_8052CEC4;
}

loc_8052CD80:
{
    r0 = (r31 + 1);
    r3 = r5;
    r4 = (r0 & 255);
    if constexpr (KnownRegArgsCpuCall<0x805326D4u>(&func_805326D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        func_805326D4_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x805326D4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 40));
    // inline leaf 0x80532414 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x80532414
    r0 = (r31 * 28);
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 28u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 4));
        }
    }
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r28 + 8));
    r7 = (r3 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r28 + 10));
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r6);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r28 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r7 + 8), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r28 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r7 + 10), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r28 + 22));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r7 + 12), f1.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r7 + 16), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r7 + 20), r4);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r7 + 22), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r0);
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 15);
    if constexpr (KnownRegArgsCpuCall<0x80532764u>(&func_80532764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        func_80532764_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80532764u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r28 = 0;
    r29 = 1;
    r4 = 4;
    r0 = 60;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    // inline leaf 0x80532434 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 15);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 15);
    r4 = (r3 * 20);
    r3 = (r0 * 28);
    r0 = (r5 + r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80532434
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r3 = (r30 + 232);
    r4 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 60));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 15);
    if constexpr (KnownRegArgsCpuCall<0x80535C30u>(&func_80535C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80535C30_239F = func_80535C30_ra38_fe_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        f1.d = regargs_result_80535C30_239F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80535C30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1320));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052CE74:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CE8C;
    }
}

loc_8052CE7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052CE84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CE8C;
    }
}

loc_8052CE88:
{
    r28 = r29;
}

loc_8052CE8C:
{
}

loc_8052CE90:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8052CEC4;
    }
}

loc_8052CE94:
{
    r4 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 60));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
}

loc_8052CEA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8052CEC4;
    }
}

loc_8052CEA8:
{
    r3 = (r1 + 16);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80533BE0u>(&func_80533BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80533BE0_2DD7 = func_80533BE0_ra38_6_10_0(ctx, r3, r4, r5, f1.d, f2.d);
        r4 = regargs_result_80533BE0_2DD7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80533BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8052CEC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052CD30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052CD30_ra38_fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052CD30 func_8052CD30 preserves=true fpr_mask=0x00000000
