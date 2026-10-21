#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800BA244(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800BA6B4_loc_0 = 0;
    uint32_t addr_psqx_800BA6C0_loc_0 = 0;
    uint32_t addr_psqx_800BA6CC_loc_0 = 0;
    uint32_t addr_psqx_800BA6D8_loc_0 = 0;
    uint32_t addr_psqx_800BA6E4_loc_0 = 0;
    uint32_t addr_psqx_800BA6F0_loc_0 = 0;
    uint32_t addr_psqx_800BA6FC_loc_0 = 0;
    uint32_t addr_psqx_800BA708_loc_0 = 0;
    uint32_t addr_psqx_800BA714_loc_0 = 0;
    uint32_t addr_psqx_800BA720_loc_0 = 0;
    uint32_t addr_psqx_800BA72C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r27_psq_tmp_8 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800BA244u);
    goto loc_800BA244;

loc_800BA244:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -336), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 340u, (r1 + 340), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 320u, (r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 304u, (r1 + 304), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 288u, (r1 + 288), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    f30.d = f1.d;
    f31.d = f2.d;
    f29.d = f4.d;
    f26.d = f5.d;
    f27.d = f6.d;
    f28.d = f7.d;
    r30 = r6;
    r31 = r7;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BA300:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA318;
    }
}

loc_800BA304:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BA310:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA318;
    }
}

loc_800BA314:
{
    r10 = 0;
}

loc_800BA318:
{
}

loc_800BA31C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BA334;
    }
}

loc_800BA320:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BA32C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA334;
    }
}

loc_800BA330:
{
    r9 = 0;
}

loc_800BA334:
{
}

loc_800BA338:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BA34C;
    }
}

loc_800BA33C:
{
    r0 = (r11 + 1073741824);
}

loc_800BA344:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA34C;
    }
}

loc_800BA348:
{
    r8 = 0;
}

loc_800BA34C:
{
}

loc_800BA350:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BA368;
    }
}

loc_800BA354:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BA360:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA368;
    }
}

loc_800BA364:
{
    r7 = 0;
}

loc_800BA368:
{
}

loc_800BA36C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BA384;
    }
}

loc_800BA370:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BA37C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA384;
    }
}

loc_800BA380:
{
    r6 = 0;
}

loc_800BA384:
{
}

loc_800BA388:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BA3A0;
    }
}

loc_800BA38C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BA398:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA3A0;
    }
}

loc_800BA39C:
{
    r5 = 0;
}

loc_800BA3A0:
{
}

loc_800BA3A4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BA3C8;
    }
}

loc_800BA3A8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18448);
    r4 = 136;
    r5 = 0x80590000u;
    r5 = (r5 + 18392);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BA3C8u;
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

loc_800BA3C8:
{
    r3 = (r1 + 64);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r28;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5518u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f13.d = MemoryInline::FlatReadFloat32((r2 + -31052));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 72));
    SetCRFloatResident(cr, 0, f13.d, f7.d);
}

loc_800BA3E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BA540;
    }
}

loc_800BA3EC:
{
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 52);
    r4 = r29;
    r5 = (r28 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f23.d = MemoryInline::FlatReadFloat32(r30);
    f24.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f25.d = PpcFmulsInline(f30.d, f29.d);
    f30.d = PpcFmulsInline(f30.d, f26.d);
    f29.d = PpcFmulsInline(f31.d, f29.d);
    f26.d = PpcFmulsInline(f31.d, f26.d);
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = (-(f7.d));
    ctx->lr = 0x800BA448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    f31.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f7.d = PpcFmulsInline(f31.d, f27.d);
    f22.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f13.d = PpcFmulsInline(f22.d, f27.d);
    f27.d = PpcFmulsInline(f31.d, f28.d);
    f28.d = PpcFmulsInline(f22.d, f28.d);
    f22.d = PpcFmulsInline(f7.d, f23.d);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f22.d));
    f31.d = PpcFmulsInline(f28.d, f24.d);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f31.d));
    f23.d = PpcFmulsInline(f13.d, f23.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f23.d));
    f23.d = PpcFmulsInline(f27.d, f24.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f23.d));
    f24.d = PpcFmulsInline(f25.d, f22.d);
    f23.d = PpcFmulsInline(f26.d, f31.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f23.d));
    f23.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f24.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 40), f23.d);
    f24.d = PpcFmulsInline(f30.d, f22.d);
    f23.d = PpcFmulsInline(f29.d, f31.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f23.d));
    f23.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f24.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 44), f23.d);
    f23.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 48), f23.d);
    f22.d = PpcFmulsInline(f25.d, f7.d);
    f23.d = PpcFmulsInline(f25.d, f28.d);
    f24.d = PpcFmulsInline(f26.d, f13.d);
    f25.d = PpcFmulsInline(f26.d, f27.d);
    f26.d = PpcFmulsInline(f30.d, f7.d);
    f28.d = PpcFmulsInline(f30.d, f28.d);
    f30.d = PpcFmulsInline(f29.d, f13.d);
    f27.d = PpcFmulsInline(f29.d, f27.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f23.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f24.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f25.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 28), f7.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f28.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f7.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 32), f7.d);
    f13.d = MemoryInline::FlatReadFloat32((r2 + -31052));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 36), f13.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f23.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f24.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 16), f7.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f28.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f7.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f27.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 20), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 24), f13.d);
    }
    r3 = r27;
    r4 = (r1 + 40);
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    r7 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800BA798u>(ctx);
    goto loc_800BA6B0;
}

loc_800BA540:
{
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 116);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r27 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 172);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 180);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    PpcSetPairedFprInline(f25, PPC_PsMerge00Inline(f6.d, f12.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f21, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    PpcSetPairedFprInline(f13, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f26.d), PPC_PsFromScalarInline(f29.d)));
    PpcSetPairedFprInline(f24, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f27.d), PPC_PsFromScalarInline(f28.d)));
    PpcSetPairedFprInline(f22, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f30.d)));
    PpcSetPairedFprInline(f22, PPC_PsMerge10Inline(f22.d, f22.d));
    PpcSetPairedFprInline(f23, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f31.d)));
    PpcSetPairedFprInline(f13, PPC_PsNegInline(f23.d));
    PpcSetPairedFprInline(f23, PPC_PsMerge01Inline(f23.d, f13.d));
    PpcSetPairedFprInline(f7, PPC_PsNmsubInline(f24.d, f7.d, f7.d));
    PpcSetPairedFprInline(f13, PPC_PsMadds0Inline(f22.d, f7.d, f25.d));
    PpcSetPairedFprInline(f25, PPC_PsMadds1Inline(f23.d, f7.d, f13.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_1 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_1, f21.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_2 = (r27 + 20);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_2, f21.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_3 = (r27 + 32);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_3, f21.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_4 = (r27 + 44);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_4, f21.d);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f22.d, f24.d));
    PpcSetPairedFprInline(f13, PPC_PsMuls1Inline(f23.d, f24.d));
    PpcSetPairedFprInline(f22, PPC_PsAddInline(f7.d, f13.d));
    PpcSetPairedFprInline(f13, PPC_PsNegInline(f13.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f7.d, f13.d));
    PpcSetPairedFprInline(f13, PPC_PsSubInline(f25.d, f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f13.d);
    PpcSetPairedFprInline(f13, PPC_PsSubInline(f25.d, f22.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_5 = (r27 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r27_psq_tmp_5, f13.d);
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f25.d, f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_6 = (r27 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r27_psq_tmp_6, f13.d);
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f25.d, f22.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_7 = (r27 + 36);
    PPC_PsqStStackInline<0u, 0u>(ctx, r27_psq_tmp_7, f13.d);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800BA62Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = r27;
    ctx->lr = 0x800BA634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA774u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x800BA760 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BA760
}

loc_800BA640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BA64C;
    }
}

loc_800BA644:
{
    r3 = 0;
    ctx->lr = 0x800BA64Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA750u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_800BA64C:
{
    r3 = (r1 + 92);
    ctx->lr = 0x800BA654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA774u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x800BA760 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800BA760
}

loc_800BA660:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BA66C;
    }
}

loc_800BA664:
{
    r3 = 1;
    ctx->lr = 0x800BA66Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA750u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_800BA66C:
{
    r3 = (r1 + 104);
    ctx->lr = 0x800BA674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA774u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x800BA760 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x800BA760
}

loc_800BA680:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BA68C;
    }
}

loc_800BA684:
{
    r3 = 2;
    ctx->lr = 0x800BA68Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA750u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_800BA68C:
{
    r3 = (r1 + 116);
    ctx->lr = 0x800BA694u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA774u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x800BA760 (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x800BA760
}

loc_800BA6A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BA6AC;
    }
}

loc_800BA6A4:
{
    r3 = 3;
    ctx->lr = 0x800BA6ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA750u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_800BA6AC:
{
    // inline leaf 0x800BA74C (1 guest instruction(s))
    // end of inlined leaf 0x800BA74C
}

loc_800BA6B0:
{
    r0 = 328;
    addr_psqx_800BA6B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6B4_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 140), 0, 204u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 180u, (r1 + 320));
    r0 = 312;
    addr_psqx_800BA6C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6C0_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 164u, (r1 + 304));
    r0 = 296;
    addr_psqx_800BA6CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6CC_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 148u, (r1 + 288));
    r0 = 280;
    addr_psqx_800BA6D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6D8_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 132u, (r1 + 272));
    r0 = 264;
    addr_psqx_800BA6E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6E4_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 116u, (r1 + 256));
    r0 = 248;
    addr_psqx_800BA6F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6F0_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 100u, (r1 + 240));
    r0 = 232;
    addr_psqx_800BA6FC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA6FC_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 84u, (r1 + 224));
    r0 = 216;
    addr_psqx_800BA708_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA708_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 68u, (r1 + 208));
    r0 = 200;
    addr_psqx_800BA714_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA714_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 52u, (r1 + 192));
    r0 = 184;
    addr_psqx_800BA720_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA720_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 176));
    r0 = 168;
    addr_psqx_800BA72C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BA72C_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 200u, (r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFE03FFF fpr_write=0xFFE03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BA244 func_800BA244 preserves=true fpr_mask=0x00000000
