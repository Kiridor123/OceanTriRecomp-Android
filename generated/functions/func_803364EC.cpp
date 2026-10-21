#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801255C0(CpuContext* ctx);
extern "C" uint64_t func_801255C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801271BC(CpuContext* ctx);
extern "C" uint64_t func_801271BC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012A6BC(CpuContext* ctx);
extern "C" uint64_t func_8012A6BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80130A74(CpuContext* ctx);
extern "C" uint64_t func_80130A74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80131770(CpuContext* ctx);
extern "C" uint64_t func_80131770_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80132650(CpuContext* ctx);
extern "C" uint32_t func_80132650_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80132690(CpuContext* ctx);
extern "C" uint64_t func_80132690_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013398C(CpuContext* ctx);
extern "C" uint64_t func_8013398C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80137784(CpuContext* ctx);
extern "C" uint64_t func_80137784_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80336010(CpuContext* ctx);
extern "C" uint64_t func_80336010_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803364EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    MKW_GUEST_ENTER(0x803364ECu);
    goto loc_803364EC;

loc_803364EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r29 = 0;
    MemoryInline::FlatWrite16((r3 + 1128), static_cast<uint16_t>(r29));
    r4 = 12;
    r5 = 255;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl0_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl0_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl0_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D290:
{
    r3 = 1;
    goto loc_inl0_cont_8012D270;
}

loc_inl0_0x8012D298:
{
    r3 = 0;
}

loc_inl0_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_80336524:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80336544;
    }
}

loc_80336528:
{
    r3 = MemoryInline::FlatRead8((r30 + 22));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 18), static_cast<uint8_t>(r29));
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80336544u;
    if constexpr (KnownRegArgsCpuCall<0x801255C0u>(&func_801255C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_801255C0_11A7 = func_801255C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801255C0_11A7);
        r4 = static_cast<uint32_t>(regargs_result_801255C0_11A7 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801255C0u>(ctx);
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

loc_80336544:
{
    r3 = (r30 + 392);
    r4 = (r31 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 30u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 428), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 36));
    MemoryInline::FlatWrite32((r30 + 444), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r31 + 38));
    MemoryInline::FlatWrite32((r30 + 448), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 40));
    MemoryInline::FlatWrite32((r30 + 452), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r31 + 44));
    MemoryInline::FlatWrite16((r30 + 492), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r31 + 49));
    MemoryInline::FlatWrite8((r30 + 487), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r31 + 46));
    MemoryInline::FlatWrite8((r30 + 484), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r31 + 48));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80336594:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803365A8;
    }
}

loc_80336598:
{
    MemoryInline::FlatWrite8((r30 + 2551), static_cast<uint8_t>(r3));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x803365A8u;
    if constexpr (KnownRegArgsCpuCall<0x8012A6BCu>(&func_8012A6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012A6BC_1E0E = func_8012A6BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012A6BC_1E0E);
        r4 = static_cast<uint32_t>(regargs_result_8012A6BC_1E0E >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012A6BCu>(ctx);
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

loc_803365A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 62));
    MemoryInline::FlatWrite8((r30 + 2551), static_cast<uint8_t>(r0));
    r3 = (r30 + 876);
    r4 = (r31 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r31 + 50));
    MemoryInline::FlatWrite8((r30 + 896), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 51));
    MemoryInline::FlatWrite8((r30 + 897), static_cast<uint8_t>(r0));
}

loc_803365D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_80336628;
    }
}

loc_803365D4:
{
}

loc_803365D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80336628;
    }
}

loc_803365DC:
{
    r3 = MemoryInline::FlatRead16((r31 + 52));
}

loc_803365E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_8033661C;
    }
}

loc_803365E8:
{
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x803365F4u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_284A = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_284A);
        r4 = static_cast<uint32_t>(regargs_result_80144644_284A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_803365FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8033660C;
    }
}

loc_80336600:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r0));
    goto loc_80336668;
}

loc_8033660C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r0));
    goto loc_80336668;
}

loc_8033661C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r0));
    goto loc_80336668;
}

loc_80336628:
{
}

loc_8033662C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(8))) {
        goto loc_8033665C;
    }
}

loc_80336630:
{
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 2458), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r30 + 897));
    ctx->lr = 0x80336658u;
    if constexpr (KnownRegArgsCpuCall<0x801271BCu>(&func_801271BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801271BC_2FD6 = func_801271BC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801271BC_2FD6);
        r4 = static_cast<uint32_t>(regargs_result_801271BC_2FD6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801271BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80336668;
}

loc_8033665C:
{
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r0));
}

loc_80336668:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 47), 0, 21u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 54));
    MemoryInline::FlatWrite8((r30 + 2552), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 55));
    MemoryInline::FlatWrite8((r30 + 899), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 9u, (r31 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 900), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 13u, (r31 + 60));
    MemoryInline::FlatWrite16((r30 + 904), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r31 + 47));
    // inline leaf 0x801307DC (11 guest instruction(s))
}

loc_inl1_0x801307DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
    r5 = (r4 & 255);
}

loc_inl1_0x801307E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307EC:
{
    MemoryInline::FlatWrite8((r3 + 1085), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_inl1_0x801307FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80130800:
{
    MemoryInline::FlatWrite8((r3 + 1082), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_801307DC;
}

loc_inl1_return:
{
}

loc_inl1_cont_801307DC:
{
    // end of inlined leaf 0x801307DC
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r31 + 63));
    MemoryInline::FlatWrite8((r30 + 2383), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 19u, (r31 + 66));
    r0 = (r0 & 1);
}

loc_803366A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803366B8;
    }
}

loc_803366AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1086), static_cast<uint8_t>(r0));
    goto loc_803366C0;
}

loc_803366B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1086), static_cast<uint8_t>(r0));
}

loc_803366C0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 19u, (r31 + 66));
    r0 = (r0 & 2);
}

loc_803366CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803366E0;
    }
}

loc_803366D0:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x803366DCu;
    if constexpr (KnownRegArgsCpuCall<0x80130A74u>(&func_80130A74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80130A74_3CE3 = func_80130A74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130A74_3CE3);
        r4 = static_cast<uint32_t>(regargs_result_80130A74_3CE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130A74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803366EC;
}

loc_803366E0:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x803366ECu;
    if constexpr (KnownRegArgsCpuCall<0x80130A74u>(&func_80130A74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80130A74_4034 = func_80130A74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130A74_4034);
        r4 = static_cast<uint32_t>(regargs_result_80130A74_4034 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130A74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803366EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 12);
}

loc_803366F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80336710;
    }
}

loc_803366FC:
{
}

loc_80336700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80336718;
    }
}

loc_80336704:
{
}

loc_80336708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80336720;
    }
}

loc_8033670C:
{
    goto loc_80336728;
}

loc_80336710:
{
    r4 = 1;
    goto loc_8033672C;
}

loc_80336718:
{
    r4 = 2;
    goto loc_8033672C;
}

loc_80336720:
{
    r4 = 3;
    goto loc_8033672C;
}

loc_80336728:
{
    r4 = 0;
}

loc_8033672C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2207));
}

loc_80336734:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80336740;
    }
}

loc_80336738:
{
    r3 = r30;
    ctx->lr = 0x80336740u;
    if constexpr (KnownRegArgsCpuCall<0x80137784u>(&func_80137784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137784_46E4 = func_80137784_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137784_46E4);
        r4 = static_cast<uint32_t>(regargs_result_80137784_46E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80336740:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 16);
}

loc_8033674C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033678C;
    }
}

loc_80336750:
{
    r0 = MemoryInline::FlatRead16((r30 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80336758:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80336778;
    }
}

loc_8033675C:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80336768u;
    if constexpr (KnownRegArgsCpuCall<0x80131770u>(&func_80131770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80131770_4C15 = func_80131770_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80131770_4C15);
        r4 = static_cast<uint32_t>(regargs_result_80131770_4C15 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80131770u>(ctx);
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
    goto loc_80336778;
}

loc_8033676C:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80336778u;
    if constexpr (KnownRegArgsCpuCall<0x80131770u>(&func_80131770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80131770_52D8 = func_80131770_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80131770_52D8);
        r4 = static_cast<uint32_t>(regargs_result_80131770_52D8 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80131770u>(ctx);
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

loc_80336778:
{
    r3 = MemoryInline::FlatRead8((r30 + 2329));
    r0 = MemoryInline::FlatRead8((r31 + 69));
}

loc_80336784:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8033676C;
    }
}

loc_80336788:
{
    goto loc_8033679C;
}

loc_8033678C:
{
    r0 = MemoryInline::FlatRead8((r31 + 69));
    MemoryInline::FlatWrite8((r30 + 2329), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2326), static_cast<uint16_t>(r0));
}

loc_8033679C:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 32);
}

loc_803367A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803367C8;
    }
}

loc_803367AC:
{
    r3 = r30;
    // inline leaf 0x80133A10 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2380));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80133A10
}

loc_803367B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803367D0;
    }
}

loc_803367BC:
{
    r3 = r30;
    ctx->lr = 0x803367C4u;
    if constexpr (KnownRegArgsCpuCall<0x8013398Cu>(&func_8013398C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8013398C_5E0F = func_8013398C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013398C_5E0F);
        r4 = static_cast<uint32_t>(regargs_result_8013398C_5E0F >> 32);
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
        InvokeDirectCpu<0x8013398Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_803367D0;
}

loc_803367C8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 2380), static_cast<uint16_t>(r0));
}

loc_803367D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 128);
}

loc_803367DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803367EC;
    }
}

loc_803367E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 505), static_cast<uint8_t>(r0));
    goto loc_803367F4;
}

loc_803367EC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 505), static_cast<uint8_t>(r0));
}

loc_803367F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 256);
}

loc_80336800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336810;
    }
}

loc_80336804:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 506), static_cast<uint8_t>(r0));
    goto loc_80336818;
}

loc_80336810:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 506), static_cast<uint8_t>(r0));
}

loc_80336818:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 2048);
}

loc_80336824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336830;
    }
}

loc_80336828:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1081), static_cast<uint8_t>(r0));
}

loc_80336830:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 512);
}

loc_8033683C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033684C;
    }
}

loc_80336840:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 509), static_cast<uint8_t>(r0));
    goto loc_80336854;
}

loc_8033684C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 509), static_cast<uint8_t>(r0));
}

loc_80336854:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 1024);
}

loc_80336860:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336870;
    }
}

loc_80336864:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2459), static_cast<uint8_t>(r0));
    goto loc_80336878;
}

loc_80336870:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2459), static_cast<uint8_t>(r0));
}

loc_80336878:
{
    r3 = MemoryInline::FlatRead8((r30 + 2332));
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_80336884:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_803368A4;
    }
}

loc_80336888:
{
    goto loc_80336894;
}

loc_8033688C:
{
    r3 = r30;
    ctx->lr = 0x80336894u;
    if constexpr (KnownRegArgsCpuCall<0x80132690u>(&func_80132690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80132690_6B31 = func_80132690_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132690_6B31);
        r4 = static_cast<uint32_t>(regargs_result_80132690_6B31 >> 32);
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
        InvokeDirectCpu<0x80132690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336894:
{
    r3 = MemoryInline::FlatRead8((r30 + 2332));
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_803368A0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8033688C;
    }
}

loc_803368A4:
{
    r0 = MemoryInline::FlatRead16((r31 + 66));
    r0 = (r0 & 64);
}

loc_803368B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803368D4;
    }
}

loc_803368B4:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80132330
}

loc_803368C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803368F0;
    }
}

loc_803368C8:
{
    r3 = r30;
    ctx->lr = 0x803368D0u;
    if constexpr (KnownRegArgsCpuCall<0x80132650u>(&func_80132650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80132650_725D = func_80132650_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80132650_725D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80132650u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_803368F0;
}

loc_803368D4:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80132330
}

loc_803368E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803368F0;
    }
}

loc_803368E8:
{
    r3 = r30;
    ctx->lr = 0x803368F0u;
    if constexpr (KnownRegArgsCpuCall<0x80132690u>(&func_80132690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80132690_7742 = func_80132690_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132690_7742);
        r4 = static_cast<uint32_t>(regargs_result_80132690_7742 >> 32);
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
        InvokeDirectCpu<0x80132690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803368F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 64));
    MemoryInline::FlatWrite16((r30 + 2210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 70));
    MemoryInline::FlatWrite8((r30 + 2401), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 72));
    MemoryInline::FlatWrite32((r30 + 1952), r0);
    r3 = r30;
    r4 = (r31 + 76);
    ctx->lr = 0x80336914u;
    if constexpr (KnownRegArgsCpuCall<0x80336010u>(&func_80336010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80336010_7C49 = func_80336010_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80336010_7C49);
        r4 = static_cast<uint32_t>(regargs_result_80336010_7C49 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80336010u>(ctx);
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
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r31 + 42));
    r5 = MemoryInline::FlatRead8((r31 + 43));
    r6 = 4;
    ctx->lr = 0x80336928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80128624u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = r30;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_803364EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803364EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803364EC func_803364EC preserves=true fpr_mask=0x00000000
