#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801425F4(CpuContext* ctx);
extern "C" uint64_t func_801425F4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142A34(CpuContext* ctx);
extern "C" uint64_t func_80142A34_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80142BD8(CpuContext* ctx);
extern "C" uint64_t func_80142BD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801441FC(CpuContext* ctx);
extern "C" uint64_t func_801441FC_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8028EFE0(CpuContext* ctx);
extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80143010_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80143010;

loc_80143010:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r30 = r3;
    r3 = (r1 + 32);
    ctx->lr = 0x80143034u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_999 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_999;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8014303C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80143050;
    }
}

loc_80143040:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x80143050u;
    if constexpr (KnownRegArgsCpuCall<0x801441FCu>(&func_801441FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_801441FC_D0D = func_801441FC_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801441FC_D0D);
        r4 = static_cast<uint32_t>(regargs_result_801441FC_D0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801441FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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

loc_80143050:
{
    r3 = MemoryInline::FlatRead16((r30 + 22));
    ctx->lr = 0x80143058u;
    if constexpr (KnownRegArgsCpuCall<0x8028EFE0u>(&func_8028EFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8028EFE0_13B6 = func_8028EFE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8028EFE0_13B6);
        r4 = static_cast<uint32_t>(regargs_result_8028EFE0_13B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028EFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r31 = MemoryInline::FlatRead32((r30 + 48));
}

loc_80143064:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80143078;
    }
}

loc_80143068:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r30 + 2));
    ctx->lr = 0x80143074u;
    if constexpr (KnownRegArgsCpuCall<0x80142A34u>(&func_80142A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80142A34_17B1 = func_80142A34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142A34_17B1);
        r4 = static_cast<uint32_t>(regargs_result_80142A34_17B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80142A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80143094;
}

loc_80143078:
{
}

loc_8014307C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80143088;
    }
}

loc_80143080:
{
    r3 = 0;
    goto loc_801431BC;
}

loc_80143088:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    ctx->lr = 0x80143090u;
    if constexpr (KnownRegArgsCpuCall<0x80142BD8u>(&func_80142BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80142BD8_1F5D = func_80142BD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142BD8_1F5D);
        r4 = static_cast<uint32_t>(regargs_result_80142BD8_1F5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80142BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = r3;
}

loc_80143094:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 12));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 3));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 15));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 19));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 10));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
}

loc_801430C8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801430FC;
    }
}

loc_801430CC:
{
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r4 + 16);
    // inline leaf 0x801431D8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x801431D8
    r4 = r3;
    r3 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 52);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r4 + 28);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_8014312C;
}

loc_801430FC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27844));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
}

loc_8014312C:
{
}

loc_80143130:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801431B8;
    }
}

loc_80143134:
{
    r3 = r31;
    r4 = (r1 + 32);
    ctx->lr = 0x80143140u;
    if constexpr (KnownRegArgsCpuCall<0x801425F4u>(&func_801425F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_801425F4_3149 = func_801425F4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801425F4_3149);
        r4 = static_cast<uint32_t>(regargs_result_801425F4_3149 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x801425F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 11), 0, 37u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 11u, (r30 + 22));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 13), 0, 2538u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 13u, (r31 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_0, 2537u, (r31 + 2550), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 13u, (r30 + 24));
    MemoryInline::WriteResolved16(guest_range_0, 15u, (r31 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r30 + 40));
    MemoryInline::WriteResolved32(guest_range_0, 1939u, (r31 + 1952), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 33u, (r30 + 44));
    MemoryInline::WriteResolved32(guest_range_0, 1951u, (r31 + 1964), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r30 + 28));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r30 + 29));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r30 + 30));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r30 + 31));
    MemoryInline::WriteResolved8(guest_range_0, 1979u, (r31 + 1992), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 25u, (r30 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 451u, (r31 + 464), f0.d);
    r3 = (r31 + 2820);
    r4 = (r30 + 52);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
}

loc_801431B8:
{
    r3 = r31;
}

loc_801431BC:
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80143010(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80143010_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80143010 func_80143010 preserves=true fpr_mask=0x00000000
