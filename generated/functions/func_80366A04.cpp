#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80051178(CpuContext* ctx);
extern "C" uint64_t func_80051178_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80366850(CpuContext* ctx);
extern "C" uint64_t func_80366850_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80366A04_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_80366E70_loc_0 = 0;
    uint32_t addr_psqx_80366E7C_loc_0 = 0;
    uint32_t addr_psqx_80366E88_loc_0 = 0;
    uint32_t addr_psqx_80366E94_loc_0 = 0;
    uint32_t addr_psqx_80366EA0_loc_0 = 0;
    uint32_t addr_psqx_80366EAC_loc_0 = 0;
    uint32_t addr_psqx_80366EB8_loc_0 = 0;
    uint32_t addr_psqx_80366EC4_loc_0 = 0;
    uint32_t addr_psqx_80366ED0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80366A04;

loc_80366A04:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -9056), 0, 84u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    f30.d = f31.d;
    f29.d = f31.d;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f28.d = PpcBitCastToFloatInline(resolved_pair.first);
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -9000));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -8996));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f26.d = PpcBitCastToFloatInline(resolved_pair.first);
            f25.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r2 + -8992));
            f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r2 + -8988));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            f24.d = PpcBitCastToFloatInline(resolved_pair.first);
            f23.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f24.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r2 + -8984));
            f23.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r2 + -8980));
        }
    }
    r3 = r28;
    f1.d = f31.d;
    f2.d = f31.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r29;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r30;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    ctx->lr = 0x80366AECu;
    if constexpr (KnownRegArgsCpuCall<0x80366850u>(&func_80366850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80366850_248E = func_80366850_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80366850_248E);
        r4 = static_cast<uint32_t>(regargs_result_80366850_248E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80366850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_80366AF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366AFC;
    }
}

loc_80366AF4:
{
    r3 = 0;
    goto loc_80366E6C;
}

loc_80366AFC:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -6584);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
    r4 = 0;
    r6 = r31;
    r7 = MemoryInline::FlatRead32((r1 + 12));
    r5 = 0x805F0000u;
    goto loc_80366E60;
}

loc_80366B24:
{
    r8 = 0;
    r3 = MemoryInline::FlatRead8((r26 + 21));
    r0 = (r3 + -6);
}

loc_80366B34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_80366D88;
    }
}

loc_80366B38:
{
    r3 = (r5 + -6340);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80366B4Cu:
        goto loc_80366B4C;
        break;
    case 0x80366BECu:
        goto loc_80366BEC;
        break;
    case 0x80366C44u:
        goto loc_80366C44;
        break;
    case 0x80366CB4u:
        goto loc_80366CB4;
        break;
    case 0x80366D88u:
        goto loc_80366D88;
        break;
    case 0x80366D20u:
        goto loc_80366D20;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80366B4C:
{
    f29.d = f28.d;
    f30.d = f25.d;
    r0 = MemoryInline::FlatRead8((r26 + 22));
}

loc_80366B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366B6C;
    }
}

loc_80366B60:
{
}

loc_80366B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80366BAC;
    }
}

loc_80366B68:
{
    goto loc_80366D88;
}

loc_80366B6C:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366B74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366B84;
    }
}

loc_80366B78:
{
}

loc_80366B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80366B90;
    }
}

loc_80366B80:
{
    goto loc_80366D88;
}

loc_80366B84:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8972));
    goto loc_80366D88;
}

loc_80366B90:
{
    r3 = r28;
    r0 = (r4 * 24);
    r4 = (r31 + r0);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_357D = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_357D;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = 1;
    goto loc_80366E6C;
}

loc_80366BAC:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366BC4;
    }
}

loc_80366BB8:
{
}

loc_80366BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80366BD0;
    }
}

loc_80366BC0:
{
    goto loc_80366D88;
}

loc_80366BC4:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8972));
    goto loc_80366D88;
}

loc_80366BD0:
{
    r3 = r28;
    r0 = (r4 * 24);
    r4 = (r31 + r0);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_3A89 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_3A89;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = 1;
    goto loc_80366E6C;
}

loc_80366BEC:
{
    f29.d = f27.d;
    f30.d = f24.d;
    r0 = MemoryInline::FlatRead8((r26 + 22));
}

loc_80366BFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80366D88;
    }
}

loc_80366C00:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366C20;
    }
}

loc_80366C0C:
{
}

loc_80366C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80366C2C;
    }
}

loc_80366C14:
{
}

loc_80366C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80366C38;
    }
}

loc_80366C1C:
{
    goto loc_80366D88;
}

loc_80366C20:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8968));
    goto loc_80366D88;
}

loc_80366C2C:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8964));
    goto loc_80366D88;
}

loc_80366C38:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8968));
    goto loc_80366D88;
}

loc_80366C44:
{
    f29.d = f26.d;
    f30.d = f23.d;
    r3 = MemoryInline::FlatRead8((r26 + 22));
    r0 = (r3 + -1);
}

loc_80366C58:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80366D88;
    }
}

loc_80366C5C:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366C84;
    }
}

loc_80366C68:
{
}

loc_80366C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80366C90;
    }
}

loc_80366C70:
{
}

loc_80366C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80366C9C;
    }
}

loc_80366C78:
{
}

loc_80366C7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80366CA8;
    }
}

loc_80366C80:
{
    goto loc_80366D88;
}

loc_80366C84:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8960));
    goto loc_80366D88;
}

loc_80366C90:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
    goto loc_80366D88;
}

loc_80366C9C:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8972));
    goto loc_80366D88;
}

loc_80366CA8:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
    goto loc_80366D88;
}

loc_80366CB4:
{
    f29.d = f26.d;
    f30.d = f23.d;
    r0 = MemoryInline::FlatRead8((r26 + 22));
}

loc_80366CC4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80366D88;
    }
}

loc_80366CC8:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366CD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366CF0;
    }
}

loc_80366CD4:
{
}

loc_80366CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80366CFC;
    }
}

loc_80366CDC:
{
}

loc_80366CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80366D08;
    }
}

loc_80366CE4:
{
}

loc_80366CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80366D14;
    }
}

loc_80366CEC:
{
    goto loc_80366D88;
}

loc_80366CF0:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8960));
    goto loc_80366D88;
}

loc_80366CFC:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
    goto loc_80366D88;
}

loc_80366D08:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8972));
    goto loc_80366D88;
}

loc_80366D14:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
    goto loc_80366D88;
}

loc_80366D20:
{
    f29.d = f26.d;
    f30.d = f23.d;
    r0 = MemoryInline::FlatRead8((r26 + 22));
}

loc_80366D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80366D88;
    }
}

loc_80366D34:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366D5C;
    }
}

loc_80366D40:
{
}

loc_80366D44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80366D68;
    }
}

loc_80366D48:
{
}

loc_80366D4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80366D74;
    }
}

loc_80366D50:
{
}

loc_80366D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80366D80;
    }
}

loc_80366D58:
{
    goto loc_80366D88;
}

loc_80366D5C:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8960));
    goto loc_80366D88;
}

loc_80366D68:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
    goto loc_80366D88;
}

loc_80366D74:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8972));
    goto loc_80366D88;
}

loc_80366D80:
{
    r8 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8956));
}

loc_80366D88:
{
}

loc_80366D8C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(1))) {
        goto loc_80366E58;
    }
}

loc_80366D90:
{
    r3 = (r27 & 255);
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_80366D9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80366E58;
    }
}

loc_80366DA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8952));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r26 = (r4 * 24);
    r3 = r30;
    r4 = (r31 + r26);
    r4 = MemoryInline::FlatRead16((r4 + 20));
    ctx->lr = 0x80366DBCu;
    if constexpr (KnownRegArgsCpuCall<0x80051178u>(&func_80051178)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_80051178_54F4 = func_80051178_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051178_54F4);
        r4 = static_cast<uint32_t>(regargs_result_80051178_54F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80051178u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    r3 = r30;
    r4 = (r31 + r26);
    r4 = MemoryInline::FlatRead16((r4 + 16));
    ctx->lr = 0x80366DCCu;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_8005101C_5B67 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_5B67);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_5B67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    r3 = r30;
    r4 = (r31 + r26);
    r4 = MemoryInline::FlatRead16((r4 + 18));
    ctx->lr = 0x80366DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    r3 = r30;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = r29;
    r4 = (r31 + r26);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_64D5 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_64D5;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 40);
    r4 = r30;
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r29;
    r4 = (r1 + 40);
    ctx->lr = 0x80366E14u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 16);
    r4 = r30;
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 28);
    r4 = r29;
    r5 = (r1 + 16);
    ctx->lr = 0x80366E34u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_69F2 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_69F2);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_69F2 >> 32);
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
    r3 = r28;
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8948));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = 1;
    goto loc_80366E6C;
}

loc_80366E58:
{
    r6 = (r6 + 24);
    r4 = (r4 + 1);
}

loc_80366E60:
{
}

loc_80366E64:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r7))) {
        goto loc_80366B24;
    }
}

loc_80366E68:
{
    r3 = 0;
}

loc_80366E6C:
{
    r0 = 216;
    addr_psqx_80366E70_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366E70_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 176u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 152u, (r1 + 208));
    r0 = 200;
    addr_psqx_80366E7C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366E7C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 136u, (r1 + 192));
    r0 = 184;
    addr_psqx_80366E88_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366E88_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 120u, (r1 + 176));
    r0 = 168;
    addr_psqx_80366E94_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366E94_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 104u, (r1 + 160));
    r0 = 152;
    addr_psqx_80366EA0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366EA0_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 144));
    r0 = 136;
    addr_psqx_80366EAC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366EAC_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 128));
    r0 = 120;
    addr_psqx_80366EB8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366EB8_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 112));
    r0 = 104;
    addr_psqx_80366EC4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366EC4_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 96));
    r0 = 88;
    addr_psqx_80366ED0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80366ED0_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 172u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80366A04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80366A04_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFB fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80366A04 func_80366A04 preserves=true fpr_mask=0x00000000
