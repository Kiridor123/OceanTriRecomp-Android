#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074AB8(CpuContext* ctx);
extern "C" uint64_t func_80074AB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804C6CE0(CpuContext* ctx);
extern "C" double func_804C6CE0_ra8_1fe_0_2(CpuContext*, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C6E90(CpuContext* ctx);
extern "C" double func_804C6E90_ra8_1fe_0_2(CpuContext*, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80075550_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80075550u);
    goto loc_80075550;

loc_80075550:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = r4;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80075574:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80075594;
    }
}

loc_80075578:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 665;
    r5 = 0x80590000u;
    r5 = (r5 + -5080);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80075594u;
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

loc_80075594:
{
}

loc_80075598:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8007566C;
    }
}

loc_8007559C:
{
    r3 = r31;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_800755A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007566C;
    }
}

loc_800755AC:
{
    r3 = r31;
    ctx->lr = 0x800755B4u;
    if constexpr (KnownRegArgsCpuCall<0x80074AB8u>(&func_80074AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074AB8_E7D = func_80074AB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074AB8_E7D);
        r4 = static_cast<uint32_t>(regargs_result_80074AB8_E7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r3 & 64);
}

loc_800755C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800755FC;
    }
}

loc_800755C8:
{
    r3 = r30;
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 188), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 188));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 192));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 196));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r31 + 200));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 204));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 208));
        }
    }
    f6.d = (-(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 212));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 216));
        }
    }
    if constexpr (KnownRegArgsCpuCall<0x804C6E90u>(&func_804C6E90)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_804C6E90_1AA9 = func_804C6E90_ra8_1fe_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        f1.d = regargs_result_804C6E90_1AA9;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804C6E90u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_8007566C;
}

loc_800755FC:
{
    r0 = (r3 & 16);
}

loc_80075604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075644;
    }
}

loc_80075608:
{
    r3 = r30;
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 180), 0, 40u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 216));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 188));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 192));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 196));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 200));
        }
    }
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 204));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 208));
        }
    }
    f7.d = (-(f0.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 212));
    if constexpr (KnownRegArgsCpuCall<0x804C6CE0u>(&func_804C6CE0)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_804C6CE0_2656 = func_804C6CE0_ra8_1fe_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        f1.d = regargs_result_804C6CE0_2656;
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804C6CE0u>(ctx);
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    goto loc_8007566C;
}

loc_80075644:
{
    r3 = r30;
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    f1.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f4.d = (-(f0.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 212));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 216));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x804C6D90u>(ctx);
}

loc_8007566C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80075550(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80075550_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x800001FF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80075550 func_80075550 preserves=true fpr_mask=0x00000000
