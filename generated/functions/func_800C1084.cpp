#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C0CC4(CpuContext* ctx);
extern "C" double func_800C0CC4_ra8_2_0_2(CpuContext*, uint32_t, double);
extern "C" void func_800C15C0(CpuContext* ctx);
extern "C" uint64_t func_800C15C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C175C(CpuContext* ctx);
extern "C" uint32_t func_800C175C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800C175C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800C175C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C1084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800C1504_loc_0 = 0;
    uint32_t addr_psqx_800C1510_loc_0 = 0;
    uint32_t addr_psqx_800C151C_loc_0 = 0;
    uint32_t addr_psqx_800C1528_loc_0 = 0;
    uint32_t addr_psqx_800C1534_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800C1084;

loc_800C1084:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -496), 0, 504u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 500u, (r1 + 500), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 480u, (r1 + 480), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 464u, (r1 + 464), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 448u, (r1 + 448), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 432u, (r1 + 432), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 416u, (r1 + 416), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 416);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 344u, (r1 + 344), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 352u, (r1 + 352), r0);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r11 = (r10 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C1114:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C112C;
    }
}

loc_800C1118:
{
    r3 = (r10 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C1124:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C112C;
    }
}

loc_800C1128:
{
    r9 = 0;
}

loc_800C112C:
{
}

loc_800C1130:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C1148;
    }
}

loc_800C1134:
{
    r3 = (r10 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C1140:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1148;
    }
}

loc_800C1144:
{
    r8 = 0;
}

loc_800C1148:
{
}

loc_800C114C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C1160;
    }
}

loc_800C1150:
{
    r0 = (r11 + 1073741824);
}

loc_800C1158:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1160;
    }
}

loc_800C115C:
{
    r7 = 0;
}

loc_800C1160:
{
}

loc_800C1164:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C117C;
    }
}

loc_800C1168:
{
    r3 = (r10 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C1174:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C117C;
    }
}

loc_800C1178:
{
    r6 = 0;
}

loc_800C117C:
{
}

loc_800C1180:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C1198;
    }
}

loc_800C1184:
{
    r3 = (r10 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C1190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1198;
    }
}

loc_800C1194:
{
    r5 = 0;
}

loc_800C1198:
{
}

loc_800C119C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C11B4;
    }
}

loc_800C11A0:
{
    r3 = (r10 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C11AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C11B4;
    }
}

loc_800C11B0:
{
    r4 = 0;
}

loc_800C11B4:
{
}

loc_800C11B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C11DC;
    }
}

loc_800C11BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 334;
    r5 = 0x80590000u;
    r5 = (r5 + 19808);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C11DCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800C11DC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    r0 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f29.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f30.d = f1.d;
    r3 = (r1 + 212);
    r4 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30944));
    if constexpr (KnownRegArgsCpuCall<0x800C0CC4u>(&func_800C0CC4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800C0CC4_2749 = func_800C0CC4_ra8_2_0_2(ctx, r3, f1.d);
        f1.d = regargs_result_800C0CC4_2749;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800C0CC4u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 304);
    ctx->lr = 0x800C122Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C175Cu) && KnownTranslatedCpuCall<0x800C175Cu>::kAvailable && !KnownTranslatedCpuCall<0x800C175Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C175Cu>()) {
        const auto state_free_result_800C175C_2A9C = func_800C175C_statefree_v0(r1, r3, r31, 0x800C122Cu);
        r1 = static_cast<uint32_t>(state_free_result_800C175C_2A9C);
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C175Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 264);
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = (r1 + 212);
    ctx->lr = 0x800C1244u;
    if constexpr (KnownRegArgsCpuCall<0x800C15C0u>(&func_800C15C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_800C15C0_31DD = func_800C15C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C15C0_31DD);
        r4 = static_cast<uint32_t>(regargs_result_800C15C0_31DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800C15C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
    r31 = 1;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r22 = (r3 + 2);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_800C14F8;
}

loc_800C1258:
{
    r3 = (r1 + 304);
    r4 = (r1 + 264);
    // inline leaf 0x800C156C (21 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWriteRam32((r3 + 24), r5);
    MemoryInline::FlatWriteRam32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f0.d);
    // end of inlined leaf 0x800C156C
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f29.d));
    r3 = (r1 + 200);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x800C0CC4u>(&func_800C0CC4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800C0CC4_3DF3 = func_800C0CC4_ra8_2_0_2(ctx, r3, f1.d);
        f1.d = regargs_result_800C0CC4_3DF3;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800C0CC4u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 212);
    r4 = (r1 + 200);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 224);
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = (r1 + 212);
    ctx->lr = 0x800C12A8u;
    if constexpr (KnownRegArgsCpuCall<0x800C15C0u>(&func_800C15C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_800C15C0_4283 = func_800C15C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C15C0_4283);
        r4 = static_cast<uint32_t>(regargs_result_800C15C0_4283 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800C15C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
    r4 = r3;
    r3 = (r1 + 264);
    // inline leaf 0x800C156C (21 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 4), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r3 + 8), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 12u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r4 + 12));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r4 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r3 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r3 + 32), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r3 + 36), f0.d);
    // end of inlined leaf 0x800C156C
    r3 = 152;
    r4 = 0;
    r5 = (r22 & 65535);
    ctx->lr = 0x800C12C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r29;
    // inline leaf 0x800C1558 (5 guest instruction(s))
    r3 = (r3 & 16);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800C1558
}

loc_800C12D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C13E4;
    }
}

loc_800C12D4:
{
    r20 = 0;
    r21 = r30;
    goto loc_800C13D8;
}

loc_800C12E0:
{
    f28.d = MemoryInline::FlatReadFloat32((r21 + 4));
    f27.d = MemoryInline::FlatReadFloat32(r21);
    r3 = (r1 + 152);
    r4 = (r1 + 328);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 164);
    r4 = (r1 + 316);
    f1.d = f27.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 176);
    r4 = (r1 + 164);
    r5 = (r1 + 152);
    ctx->lr = 0x800C1318u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_5B10 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_5B10);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_5B10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 188);
    r4 = (r1 + 176);
    r5 = (r1 + 304);
    ctx->lr = 0x800C1328u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_5F4E = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_5F4E);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_5F4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 188);
    // inline leaf 0x800C0E9C (9 guest instruction(s))
}

loc_inl6_0x800C0E9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x800C0EAC:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl6_cont_800C0E9C:
{
    // end of inlined leaf 0x800C0E9C
    r3 = r29;
    // inline leaf 0x800C0E88 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x800C0E88
}

loc_800C133C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C135C;
    }
}

loc_800C1340:
{
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 340));
    // inline leaf 0x800C0E78 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C0E78
}

loc_800C135C:
{
    r3 = (r1 + 104);
    r4 = (r1 + 288);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 116);
    r4 = (r1 + 276);
    f1.d = f27.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 128);
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    ctx->lr = 0x800C138Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_6B29 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_6B29);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_6B29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 140);
    r4 = (r1 + 128);
    r5 = (r1 + 264);
    ctx->lr = 0x800C139Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_6F67 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_6F67);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_6F67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 140);
    // inline leaf 0x800C0E9C (9 guest instruction(s))
}

loc_inl9_0x800C0E9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x800C0EAC:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl9_cont_800C0E9C:
{
    // end of inlined leaf 0x800C0E9C
    r3 = r29;
    // inline leaf 0x800C0E88 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x800C0E88
}

loc_800C13B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C13D0;
    }
}

loc_800C13B4:
{
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 300));
    // inline leaf 0x800C0E78 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C0E78
}

loc_800C13D0:
{
    r21 = (r21 + 8);
    r20 = (r20 + 1);
}

loc_800C13D8:
{
}

loc_800C13DC:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(r25))) {
        goto loc_800C12E0;
    }
}

loc_800C13E0:
{
    goto loc_800C14F0;
}

loc_800C13E4:
{
    r20 = 0;
    r21 = r30;
    goto loc_800C14E8;
}

loc_800C13F0:
{
    f27.d = MemoryInline::FlatReadFloat32((r21 + 4));
    f28.d = MemoryInline::FlatReadFloat32(r21);
    r3 = (r1 + 56);
    r4 = (r1 + 288);
    f1.d = f27.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 68);
    r4 = (r1 + 276);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    ctx->lr = 0x800C1428u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_7CFA = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_7CFA);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_7CFA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 92);
    r4 = (r1 + 80);
    r5 = (r1 + 264);
    ctx->lr = 0x800C1438u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_8136 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_8136);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_8136 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 92);
    // inline leaf 0x800C0E9C (9 guest instruction(s))
}

loc_inl12_0x800C0E9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl12_0x800C0EAC:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl12_cont_800C0E9C:
{
    // end of inlined leaf 0x800C0E9C
    r3 = r29;
    // inline leaf 0x800C0E88 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x800C0E88
}

loc_800C144C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C146C;
    }
}

loc_800C1450:
{
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 300));
    // inline leaf 0x800C0E78 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C0E78
}

loc_800C146C:
{
    r3 = (r1 + 8);
    r4 = (r1 + 328);
    f1.d = f27.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 316);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    ctx->lr = 0x800C149Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_8D0C = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_8D0C);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_8D0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 44);
    r4 = (r1 + 32);
    r5 = (r1 + 304);
    ctx->lr = 0x800C14ACu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_9148 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_9148);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_9148 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 44);
    // inline leaf 0x800C0E9C (9 guest instruction(s))
}

loc_inl15_0x800C0E9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl15_0x800C0EAC:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl15_cont_800C0E9C:
{
    // end of inlined leaf 0x800C0E9C
    r3 = r29;
    // inline leaf 0x800C0E88 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x800C0E88
}

loc_800C14C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C14E0;
    }
}

loc_800C14C4:
{
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 344));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 340));
    // inline leaf 0x800C0E78 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C0E78
}

loc_800C14E0:
{
    r21 = (r21 + 8);
    r20 = (r20 + 1);
}

loc_800C14E8:
{
}

loc_800C14EC:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(r25))) {
        goto loc_800C13F0;
    }
}

loc_800C14F0:
{
    // inline leaf 0x800C1554 (1 guest instruction(s))
    // end of inlined leaf 0x800C1554
    r31 = (r31 + 1);
}

loc_800C14F8:
{
}

loc_800C14FC:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r24))) {
        goto loc_800C1258;
    }
}

loc_800C1500:
{
    r0 = 488;
    addr_psqx_800C1504_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1504_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 480));
    r0 = 472;
    addr_psqx_800C1510_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1510_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r0 = 456;
    addr_psqx_800C151C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C151C_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 448));
    r0 = 440;
    addr_psqx_800C1528_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1528_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 432));
    r0 = 424;
    addr_psqx_800C1534_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1534_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 416));
    r11 = (r1 + 416);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FCF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C1084 func_800C1084 preserves=true fpr_mask=0x00000000
