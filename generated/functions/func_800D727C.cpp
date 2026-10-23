#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80075E30(CpuContext* ctx);
extern "C" double func_80075E30_ra38_e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_800D727C_ra38_c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_800D727C;

loc_800D727C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80075E30_588 = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_588;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = PpcFmulsInline(f5.d, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f3.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30420));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D727C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D727C_ra38_c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000C fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D727C func_800D727C preserves=true fpr_mask=0x00000000
