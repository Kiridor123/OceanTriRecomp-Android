#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B61A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800B6554_loc_0 = 0;
    uint32_t addr_psqx_800B6560_loc_0 = 0;
    uint32_t addr_psqx_800B656C_loc_0 = 0;
    uint32_t addr_psqx_800B6578_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B61A8;

loc_800B61A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r1 + 308), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 288u, (r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r1 + 200), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r0);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r8 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B6224:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B623C;
    }
}

loc_800B6228:
{
    r3 = (r8 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B6234:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B623C;
    }
}

loc_800B6238:
{
    r10 = 0;
}

loc_800B623C:
{
}

loc_800B6240:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B6258;
    }
}

loc_800B6244:
{
    r3 = (r8 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B6250:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6258;
    }
}

loc_800B6254:
{
    r9 = 0;
}

loc_800B6258:
{
}

loc_800B625C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B6270;
    }
}

loc_800B6260:
{
    r0 = (r11 + 1073741824);
}

loc_800B6268:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6270;
    }
}

loc_800B626C:
{
    r7 = 0;
}

loc_800B6270:
{
}

loc_800B6274:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B628C;
    }
}

loc_800B6278:
{
    r3 = (r8 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B6284:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B628C;
    }
}

loc_800B6288:
{
    r6 = 0;
}

loc_800B628C:
{
}

loc_800B6290:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B62A8;
    }
}

loc_800B6294:
{
    r3 = (r8 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B62A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B62A8;
    }
}

loc_800B62A4:
{
    r5 = 0;
}

loc_800B62A8:
{
}

loc_800B62AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B62C4;
    }
}

loc_800B62B0:
{
    r3 = (r8 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B62BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B62C4;
    }
}

loc_800B62C0:
{
    r4 = 0;
}

loc_800B62C4:
{
}

loc_800B62C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B62EC;
    }
}

loc_800B62CC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 441;
    r5 = 0x80590000u;
    r5 = (r5 + 17112);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B62ECu;
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

loc_800B62EC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f30.d = f1.d;
    r3 = 152;
    r4 = 0;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r0 = (r5 + 2);
    r5 = (r0 & 65535);
    ctx->lr = 0x800B6320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    // inline leaf 0x800B6598 (5 guest instruction(s))
    r3 = (r3 & 16);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800B6598
}

loc_800B632C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B6440;
    }
}

loc_800B6330:
{
    r26 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_800B6434;
}

loc_800B633C:
{
    f29.d = MemoryInline::FlatReadFloat32(r31);
    f28.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r1 + 152);
    r4 = (r27 + 24);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 164);
    r4 = (r27 + 12);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 176);
    r4 = (r1 + 164);
    r5 = (r1 + 152);
    ctx->lr = 0x800B6374u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2735 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2735);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2735 >> 32);
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
    r5 = r27;
    ctx->lr = 0x800B6384u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_2B6C = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_2B6C);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_2B6C >> 32);
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
    // inline leaf 0x800B5310 (9 guest instruction(s))
}

loc_inl3_0x800B5310:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x800B5320:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl3_cont_800B5310:
{
    // end of inlined leaf 0x800B5310
    r3 = r29;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B6398:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B63B8;
    }
}

loc_800B639C:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 36));
    // inline leaf 0x800B52EC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800B52EC
}

loc_800B63B8:
{
    r3 = (r1 + 104);
    r4 = (r28 + 24);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 116);
    r4 = (r28 + 12);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 128);
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    ctx->lr = 0x800B63E8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_3747 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_3747);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_3747 >> 32);
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
    r5 = r28;
    ctx->lr = 0x800B63F8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_3B7E = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_3B7E);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_3B7E >> 32);
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
    // inline leaf 0x800B5310 (9 guest instruction(s))
}

loc_inl6_0x800B5310:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x800B5320:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl6_cont_800B5310:
{
    // end of inlined leaf 0x800B5310
    r3 = r29;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B640C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B642C;
    }
}

loc_800B6410:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 36));
    // inline leaf 0x800B52EC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800B52EC
}

loc_800B642C:
{
    r31 = (r31 + 8);
    r26 = (r26 + 1);
}

loc_800B6434:
{
}

loc_800B6438:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(r30))) {
        goto loc_800B633C;
    }
}

loc_800B643C:
{
    goto loc_800B654C;
}

loc_800B6440:
{
    r26 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_800B6544;
}

loc_800B644C:
{
    f28.d = MemoryInline::FlatReadFloat32(r31);
    f29.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r1 + 56);
    r4 = (r28 + 24);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 68);
    r4 = (r28 + 12);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    ctx->lr = 0x800B6484u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_498C = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_498C);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_498C >> 32);
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
    r5 = r28;
    ctx->lr = 0x800B6494u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_4DC1 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_4DC1);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_4DC1 >> 32);
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
    // inline leaf 0x800B5310 (9 guest instruction(s))
}

loc_inl9_0x800B5310:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x800B5320:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl9_cont_800B5310:
{
    // end of inlined leaf 0x800B5310
    r3 = r29;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B64A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B64C8;
    }
}

loc_800B64AC:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 36));
    // inline leaf 0x800B52EC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800B52EC
}

loc_800B64C8:
{
    r3 = (r1 + 8);
    r4 = (r27 + 24);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 20);
    r4 = (r27 + 12);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    ctx->lr = 0x800B64F8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_5994 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_5994);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_5994 >> 32);
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
    r5 = r27;
    ctx->lr = 0x800B6508u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_5DC9 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_5DC9);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_5DC9 >> 32);
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
    // inline leaf 0x800B5310 (9 guest instruction(s))
}

loc_inl12_0x800B5310:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl12_0x800B5320:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl12_cont_800B5310:
{
    // end of inlined leaf 0x800B5310
    r3 = r29;
    // inline leaf 0x800B52FC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x800B52FC
}

loc_800B651C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B653C;
    }
}

loc_800B6520:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 36));
    // inline leaf 0x800B52EC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800B52EC
}

loc_800B653C:
{
    r31 = (r31 + 8);
    r26 = (r26 + 1);
}

loc_800B6544:
{
}

loc_800B6548:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(r30))) {
        goto loc_800B644C;
    }
}

loc_800B654C:
{
    // inline leaf 0x800B5044 (1 guest instruction(s))
    // end of inlined leaf 0x800B5044
    r0 = 296;
    addr_psqx_800B6554_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B6554_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 216), 0, 96u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 288));
    r0 = 280;
    addr_psqx_800B6560_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B6560_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 272));
    r0 = 264;
    addr_psqx_800B656C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B656C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 256));
    r0 = 248;
    addr_psqx_800B6578_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B6578_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B61A8 func_800B61A8 preserves=true fpr_mask=0x00000000
