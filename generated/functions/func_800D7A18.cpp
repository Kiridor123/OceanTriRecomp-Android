#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80075E30(CpuContext* ctx);
extern "C" double func_80075E30_ra38_e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800D7A18_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_800D7A18;

loc_800D7A18:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800D7A68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7A80;
    }
}

loc_800D7A6C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800D7A78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7A80;
    }
}

loc_800D7A7C:
{
    r10 = 0;
}

loc_800D7A80:
{
}

loc_800D7A84:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800D7A9C;
    }
}

loc_800D7A88:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800D7A94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7A9C;
    }
}

loc_800D7A98:
{
    r9 = 0;
}

loc_800D7A9C:
{
}

loc_800D7AA0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800D7AB4;
    }
}

loc_800D7AA4:
{
    r0 = (r11 + 1073741824);
}

loc_800D7AAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7AB4;
    }
}

loc_800D7AB0:
{
    r8 = 0;
}

loc_800D7AB4:
{
}

loc_800D7AB8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800D7AD0;
    }
}

loc_800D7ABC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800D7AC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7AD0;
    }
}

loc_800D7ACC:
{
    r7 = 0;
}

loc_800D7AD0:
{
}

loc_800D7AD4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800D7AEC;
    }
}

loc_800D7AD8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800D7AE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7AEC;
    }
}

loc_800D7AE8:
{
    r6 = 0;
}

loc_800D7AEC:
{
}

loc_800D7AF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800D7B08;
    }
}

loc_800D7AF4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800D7B00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7B08;
    }
}

loc_800D7B04:
{
    r5 = 0;
}

loc_800D7B08:
{
}

loc_800D7B0C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800D7B30;
    }
}

loc_800D7B10:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24576);
    r4 = 36;
    r5 = 0x80590000u;
    r5 = (r5 + 24592);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7B30u;
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
}

loc_800D7B30:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800D7B54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7B6C;
    }
}

loc_800D7B58:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800D7B64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7B6C;
    }
}

loc_800D7B68:
{
    r9 = 0;
}

loc_800D7B6C:
{
}

loc_800D7B70:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800D7B88;
    }
}

loc_800D7B74:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800D7B80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7B88;
    }
}

loc_800D7B84:
{
    r8 = 0;
}

loc_800D7B88:
{
}

loc_800D7B8C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800D7BA0;
    }
}

loc_800D7B90:
{
    r0 = (r10 + 1073741824);
}

loc_800D7B98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7BA0;
    }
}

loc_800D7B9C:
{
    r7 = 0;
}

loc_800D7BA0:
{
}

loc_800D7BA4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800D7BBC;
    }
}

loc_800D7BA8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800D7BB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7BBC;
    }
}

loc_800D7BB8:
{
    r6 = 0;
}

loc_800D7BBC:
{
}

loc_800D7BC0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800D7BD8;
    }
}

loc_800D7BC4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800D7BD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7BD8;
    }
}

loc_800D7BD4:
{
    r5 = 0;
}

loc_800D7BD8:
{
}

loc_800D7BDC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800D7BF4;
    }
}

loc_800D7BE0:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800D7BEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7BF4;
    }
}

loc_800D7BF0:
{
    r4 = 0;
}

loc_800D7BF4:
{
}

loc_800D7BF8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800D7C1C;
    }
}

loc_800D7BFC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24576);
    r4 = 37;
    r5 = 0x80590000u;
    r5 = (r5 + 24644);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7C1Cu;
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
}

loc_800D7C1C:
{
    r0 = (r31 & 1);
}

loc_800D7C24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D7C44;
    }
}

loc_800D7C28:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24576);
    r4 = 38;
    r5 = 0x80590000u;
    r5 = (r5 + 24696);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7C44u;
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
}

loc_800D7C44:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 7);
}

loc_800D7C4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_800D7C58;
    }
}

loc_800D7C50:
{
    r3 = 0;
    goto loc_800D7D68;
}

loc_800D7C58:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80075E30_258B = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_258B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_800D7C6C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800D7CE8;
    }
}

loc_800D7C70:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r28, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r28 + 4), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30416));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r28 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r28 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r28 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 24), f2.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 32), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 36), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30412));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r28 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r28 + 44), f2.d);
    }
    goto loc_800D7D64;
}

loc_800D7CE8:
{
    r3 = (r1 + 16);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    f5.d = MemoryInline::FlatReadFloat32(r30);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f5.d, f4.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 16), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = (-(f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30416));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 28), f0.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 32), f0.d);
    f0.d = PpcFmulsInline(f3.d, f4.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 40), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 48), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30412));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 60), f1.d);
    }
    r3 = r28;
    r4 = (r1 + 16);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800D7D64:
{
    r3 = 1;
}

loc_800D7D68:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D7A18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D7A18_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D7A18 func_800D7A18 preserves=true fpr_mask=0x00000000
