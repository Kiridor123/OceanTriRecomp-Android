#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80124604(CpuContext* ctx);
extern "C" uint64_t func_80124604_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80124948(CpuContext* ctx);
extern "C" uint32_t func_80124948_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012F568(CpuContext* ctx);
extern "C" uint64_t func_8012F568_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012F92C(CpuContext* ctx);
extern "C" uint64_t func_8012F92C_ra68_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8012F9A0(CpuContext* ctx);
extern "C" uint64_t func_8012F9A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B99F8(CpuContext* ctx);
extern "C" uint64_t func_803B99F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B9AA4(CpuContext* ctx);
extern "C" uint32_t func_803B9AA4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801249F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

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
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801249F0u);
    goto loc_801249F0;

loc_801249F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 2258));
}

loc_80124A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80124AA8;
    }
}

loc_80124A20:
{
}

loc_80124A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80124B94;
    }
}

loc_80124A28:
{
}

loc_80124A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80124BCC;
    }
}

loc_80124A30:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_80124A38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80124A48;
    }
}

loc_80124A3C:
{
    r6 = MemoryInline::FlatRead16((r3 + 2324));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = MH3_TickLoad(r6, 2148682300);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2324), static_cast<uint16_t>(r0));
}

loc_80124A48:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124A54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124A64;
    }
}

loc_80124A5C:
{
    r31 = 1;
    goto loc_80124C0C;
}

loc_80124A64:
{
}

loc_80124A68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80124A84;
    }
}

loc_80124A6C:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80124A74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_80124A84;
    }
}

loc_80124A78:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r0 & 65535);
    goto loc_80124A8C;
}

loc_80124A84:
{
    r3 = MemoryInline::FlatRead32((r3 + 2272));
    r6 = MemoryInline::FlatRead16((r3 + 16));
}

loc_80124A8C:
{
    r3 = r30;
    r5 = (r5 & 255);
    ctx->lr = 0x80124A98u;
    if constexpr (KnownRegArgsCpuCall<0x80124604u>(&func_80124604)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80124604_1307 = func_80124604_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80124604_1307);
        r4 = static_cast<uint32_t>(regargs_result_80124604_1307 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80124604u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80124A9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80124C0C;
    }
}

loc_80124AA0:
{
    r31 = 1;
    goto loc_80124C0C;
}

loc_80124AA8:
{
    ctx->lr = 0x80124AACu;
    if constexpr (KnownRegArgsCpuCall<0x80124948u>(&func_80124948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80124948_1AD3 = func_80124948_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80124948_1AD3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80124948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80124AB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80124AF4;
    }
}

loc_80124AB4:
{
    r3 = MemoryInline::FlatRead8((r30 + 485));
    r4 = MemoryInline::FlatRead8((r30 + 486));
    // inline leaf 0x8012E30C (11 guest instruction(s))
}

loc_inl0_0x8012E30C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x8012E314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_inl0_0x8012E330;
    }
}

loc_inl0_0x8012E318:
{
    r3 = (r4 & 255);
    r0 = (r3 + -26);
}

loc_inl0_0x8012E324:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8012E330;
    }
}

loc_inl0_0x8012E328:
{
    r3 = 1;
    goto loc_inl0_cont_8012E30C;
}

loc_inl0_0x8012E330:
{
    r3 = 0;
}

loc_inl0_cont_8012E30C:
{
    // end of inlined leaf 0x8012E30C
}

loc_80124AC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80124AF4;
    }
}

loc_80124AC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 2184));
}

loc_80124AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80124C0C;
    }
}

loc_80124AD4:
{
    ctx->lr = 0x80124AD8u;
    if constexpr (KnownRegArgsCpuCall<0x803B9AA4u>(&func_803B9AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B9AA4_2240 = func_803B9AA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B9AA4_2240;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B9AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80124ADC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80124C0C;
    }
}

loc_80124AE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 2184));
    ctx->lr = 0x80124AE8u;
    if constexpr (KnownRegArgsCpuCall<0x803B99F8u>(&func_803B99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_803B99F8_262A = func_803B99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B99F8_262A);
        r4 = static_cast<uint32_t>(regargs_result_803B99F8_262A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 2184), r0);
    goto loc_80124C0C;
}

loc_80124AF4:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 1);
}

loc_80124B00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124B78;
    }
}

loc_80124B04:
{
    r3 = MemoryInline::FlatRead32((r30 + 2184));
}

loc_80124B0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80124B78;
    }
}

loc_80124B10:
{
    ctx->lr = 0x80124B14u;
    if constexpr (KnownRegArgsCpuCall<0x803B9AA4u>(&func_803B9AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B9AA4_2FAA = func_803B9AA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B9AA4_2FAA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B9AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = 1;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 & 255);
}

loc_80124B28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124B6C;
    }
}

loc_80124B2C:
{
    r29 = (r30 + 1160);
    r28 = 0;
}

loc_80124B34:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
}

loc_80124B3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80124B5C;
    }
}

loc_80124B40:
{
    ctx->lr = 0x80124B44u;
    if constexpr (KnownRegArgsCpuCall<0x803B9AA4u>(&func_803B9AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B9AA4_34CB = func_803B9AA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B9AA4_34CB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B9AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80124B48:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80124B54;
    }
}

loc_80124B4C:
{
    r0 = 1;
    goto loc_80124B5C;
}

loc_80124B54:
{
    r0 = 0;
    goto loc_80124B6C;
}

loc_80124B5C:
{
    r28 = (r28 + 1);
    r29 = (r29 + 132);
}

loc_80124B68:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_80124B34;
    }
}

loc_80124B6C:
{
}

loc_80124B70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80124B78;
    }
}

loc_80124B74:
{
    r31 = 1;
}

loc_80124B78:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MH3_TickLoad(r3, 2148682616);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_80124B88:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80124C0C;
    }
}

loc_80124B8C:
{
    r31 = 1;
    goto loc_80124C0C;
}

loc_80124B94:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124BA0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124BB0;
    }
}

loc_80124BA8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_80124BB0:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MH3_TickLoad(r4, 2148682672);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_80124BC0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80124C0C;
    }
}

loc_80124BC4:
{
    r31 = 1;
    goto loc_80124C0C;
}

loc_80124BCC:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MH3_TickLoad(r4, 2148682700);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_80124BDC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80124BF0;
    }
}

loc_80124BE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    r4 = 0;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl1_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl1_cont_8012FD28;
}

loc_inl1_return:
{
}

loc_inl1_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    r31 = 1;
}

loc_80124BF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124BFC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124C0C;
    }
}

loc_80124C04:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
}

loc_80124C0C:
{
}

loc_80124C10:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80124C48;
    }
}

loc_80124C14:
{
    r0 = MemoryInline::FlatRead8((r30 + 2258));
}

loc_80124C1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124C40;
    }
}

loc_80124C20:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 153);
}

loc_80124C28:
{
    MemoryInline::FlatWrite8((r30 + 2257), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    MemoryInline::FlatWriteFloat32((r30 + 2284), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 2288), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 2292), r0);
}

loc_80124C40:
{
    r3 = 1;
    goto loc_80124CA0;
}

loc_80124C48:
{
    r0 = MemoryInline::FlatRead8((r30 + 2257));
    r0 = (r0 & 1);
}

loc_80124C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124C9C;
    }
}

loc_80124C58:
{
    r3 = r30;
    ctx->lr = 0x80124C60u;
    if constexpr (KnownRegArgsCpuCall<0x8012F9A0u>(&func_8012F9A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F9A0_48A8 = func_8012F9A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F9A0_48A8);
        r4 = static_cast<uint32_t>(regargs_result_8012F9A0_48A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F9A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80124C64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80124C9C;
    }
}

loc_80124C68:
{
    r7 = MemoryInline::FlatRead32((r30 + 2272));
    r3 = r30;
    r4 = MemoryInline::FlatRead16(r7);
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    ctx->lr = 0x80124C84u;
    if constexpr (KnownRegArgsCpuCall<0x8012F568u>(&func_8012F568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F568_513E = func_8012F568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F568_513E);
        r4 = static_cast<uint32_t>(regargs_result_8012F568_513E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2304));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124C90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124C9C;
    }
}

loc_80124C94:
{
    r3 = r30;
    ctx->lr = 0x80124C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F92Cu>(&func_8012F92C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8012F92C_5993 = func_8012F92C_ra68_1fa_18_0(ctx, r3, r5, r6, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F92C_5993);
        r4 = static_cast<uint32_t>(regargs_result_8012F92C_5993 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F92Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80124C9C:
{
    r3 = 0;
}

loc_80124CA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801249F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801249F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801249F0 func_801249F0 preserves=true fpr_mask=0x00000000
