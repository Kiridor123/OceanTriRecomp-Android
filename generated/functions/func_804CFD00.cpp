#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E85E0(CpuContext* ctx);
extern "C" uint64_t func_804E85E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E8CB0(CpuContext* ctx);
extern "C" uint64_t func_804E8CB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E9360(CpuContext* ctx);
extern "C" uint64_t func_804E9360_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804CFD00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804CFD00;

loc_804CFD00:
{
    guest_range_0 = MemoryHw::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryHw::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r6 = 480;
    r5 = 40;
    MemoryHw::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r0 = 640;
    if (!MemoryHw::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryHw::WriteResolved16(guest_range_0, 12u, (r1 + 12), r3);
        MemoryHw::WriteResolved16(guest_range_0, 14u, (r1 + 14), r6);
    }
    if (!MemoryHw::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryHw::WriteResolved16(guest_range_0, 16u, (r1 + 16), r4);
        MemoryHw::WriteResolved16(guest_range_0, 18u, (r1 + 18), r5);
    }
    if (!MemoryHw::WriteResolvedPair16(guest_range_0, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryHw::WriteResolved16(guest_range_0, 22u, (r1 + 22), r0);
        MemoryHw::WriteResolved16(guest_range_0, 24u, (r1 + 24), r4);
    }
    ctx->lr = 0x804CFD34u;
    if constexpr (KnownRegArgsCpuCall<0x804E9360u>(&func_804E9360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804E9360_B0F = func_804E9360_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E9360_B0F);
        r4 = static_cast<uint32_t>(regargs_result_804E9360_B0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804E9360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804CFD38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CFD58;
    }
}

loc_804CFD3C:
{
}

loc_804CFD40:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_804CFD58;
    }
}

loc_804CFD44:
{
}

loc_804CFD48:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_804CFD98;
    }
}

loc_804CFD4C:
{
}

loc_804CFD50:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_804CFDDC;
    }
}

loc_804CFD54:
{
    goto loc_804CFDF4;
}

loc_804CFD58:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 8300));
    r0 = (r0 & 1);
}

loc_804CFD64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CFD80;
    }
}

loc_804CFD68:
{
    r0 = 0;
    r3 = 2;
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryHw::FlatWriteRam32((r1 + 28), r0);
    goto loc_804CFDF4;
}

loc_804CFD80:
{
    r3 = 0;
    r0 = 1;
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryHw::FlatWriteRam32((r1 + 28), r0);
    goto loc_804CFDF4;
}

loc_804CFD98:
{
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 8300));
    r0 = (r0 & 1);
}

loc_804CFDA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CFDC0;
    }
}

loc_804CFDA8:
{
    r0 = 0;
    r3 = 22;
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryHw::FlatWriteRam32((r1 + 28), r0);
    goto loc_804CFDF4;
}

loc_804CFDC0:
{
    r4 = 20;
    r3 = 0;
    r0 = 1;
    MemoryHw::FlatWriteRam32((r1 + 8), r4);
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryHw::FlatWriteRam32((r1 + 28), r0);
    goto loc_804CFDF4;
}

loc_804CFDDC:
{
    r4 = 4;
    r3 = 47;
    r0 = 1;
    MemoryHw::FlatWriteRam32((r1 + 8), r4);
    MemoryHw::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    MemoryHw::FlatWriteRam32((r1 + 28), r0);
}

loc_804CFDF4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x804CFDFCu;
    if constexpr (KnownRegArgsCpuCall<0x804E85E0u>(&func_804E85E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E85E0_1786 = func_804E85E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E85E0_1786);
        r4 = static_cast<uint32_t>(regargs_result_804E85E0_1786 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E85E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    r4 = 0;
    r5 = 640;
    r6 = 480;
    ctx->lr = 0x804CFE10u;
    if constexpr (KnownRegArgsCpuCall<0x804E8CB0u>(&func_804E8CB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E8CB0_1E08 = func_804E8CB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E8CB0_1E08);
        r4 = static_cast<uint32_t>(regargs_result_804E8CB0_1E08 >> 32);
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
        InvokeDirectCpu<0x804E8CB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryHw::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_804CFD00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CFD00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CFD00 func_804CFD00 preserves=true fpr_mask=0x00000000
