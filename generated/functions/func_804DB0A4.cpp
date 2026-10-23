#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCDB0(CpuContext* ctx);
extern "C" uint64_t func_804CCDB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804DB0A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_804DB0A4;

loc_804DB0A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 * 12);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 8u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r3_addr_0 = (r3 + r4);
    r31 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_804DB0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB180;
    }
}

loc_804DB0CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB0FC;
    }
}

loc_804DB0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_804DB0D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB130;
    }
}

loc_804DB0D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB0EC;
    }
}

loc_804DB0DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804DB0E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB244;
    }
}

loc_804DB0E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB120;
    }
}

loc_804DB0E8:
{
    goto loc_804DB230;
}

loc_804DB0EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_804DB0F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB15C;
    }
}

loc_804DB0F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB16C;
    }
}

loc_804DB0F8:
{
    goto loc_804DB14C;
}

loc_804DB0FC:
{
}

loc_804DB100:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_804DB114;
    }
}

loc_804DB104:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_804DB108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB1B8;
    }
}

loc_804DB10C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB210;
    }
}

loc_804DB110:
{
    goto loc_804DB19C;
}

loc_804DB114:
{
}

loc_804DB118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(109))) {
        goto loc_804DB244;
    }
}

loc_804DB11C:
{
    goto loc_804DB230;
}

loc_804DB120:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804DB244;
}

loc_804DB130:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r4 = MemoryInline::FlatRead32(r31);
    r3 = (r5 + r0);
    r0 = (r4 & -67108861);
    r0_mrot_1 = (r3 & 67108860);
    r0_mdest_1 = (r0 & -67108861);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804DB244;
}

loc_804DB14C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_804DB244;
}

loc_804DB15C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_804DB244;
}

loc_804DB16C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = (r5 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_804DB244;
}

loc_804DB180:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = (r5 + r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_804DB244;
}

loc_804DB19C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r4 = MemoryInline::FlatRead32(r31);
    r3 = (r5 + r0);
    r0 = (r4 & -65533);
    r0_mrot_2 = (r3 & 65532);
    r0_mdest_2 = (r0 & -65533);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804DB244;
}

loc_804DB1B8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r4 = (r31 & 67108860);
    r0 = MemoryInline::FlatRead32(r31);
    r8 = (r31 & -67108861);
    r6 = (r5 + r6);
    r7 = (r6 - r31);
    r6 = (r0 & -67108861);
    r6_mrot_1 = (r7 & 67108860);
    r6_mdest_1 = (r6 & -67108861);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32(r31, r6);
    r0 = (r6 & 67108860);
    r0 = (r4 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r8_mrot_1 = (r0 & 67108860);
    r8_mdest_1 = (r8 & -67108861);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r0 = (r5 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DB244;
    }
}

loc_804DB1F4:
{
}

loc_804DB1F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r8))) {
        goto loc_804DB244;
    }
}

loc_804DB1FC:
{
    r0 = (r6 & -67108861);
    r0 = (r0 | 67043328);
    r0 = (r0 | 65532);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804DB244;
}

loc_804DB210:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r4 = MemoryInline::FlatRead32(r31);
    r0 = (r5 + r0);
    r3 = (r0 - r31);
    r0 = (r4 & -65533);
    r0_mrot_3 = (r3 & 65532);
    r0_mdest_3 = (r0 & -65533);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804DB244;
}

loc_804DB230:
{
    r3 = 0x80630000u;
    r4 = (r6 & 255);
    r3 = (r3 + -23296);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DB244u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_2239 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_2239);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_2239 >> 32);
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
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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

loc_804DB244:
{
    r3 = r31;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_29B0 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_29B0);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_29B0 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x804CCDB0u>(&func_804CCDB0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCDB0_2CA6 = func_804CCDB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCDB0_2CA6);
        r4 = static_cast<uint32_t>(regargs_result_804CCDB0_2CA6 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCDB0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DB0A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DB0A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DB0A4 func_804DB0A4 preserves=true fpr_mask=0x00000000
