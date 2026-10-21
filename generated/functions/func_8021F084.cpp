#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80453A20(CpuContext* ctx);
extern "C" uint64_t func_80453A20_ra38_1c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8021F084_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8021F084u);
    goto loc_8021F084;

loc_8021F084:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r5 = 0x806B0000u;
    r30 = (r5 + -12536);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -15904));
    stackword4 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r4);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 60u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 20), f0.d);
    stackword6 = r4;
    stackword7 = r0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    }
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15912));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r30 + 52), f1.d);
    }
    MemoryInline::FlatWrite32((r13 + -17848), r3);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 4), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15908));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021F0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021F108;
    }
}

loc_8021F0FC:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 56), r0);
    goto loc_8021F110;
}

loc_8021F108:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 56), r0);
}

loc_8021F110:
{
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 60), r31);
    ctx->lr = 0x8021F11Cu;
    if constexpr (KnownRegArgsCpuCall<0x80453A20u>(&func_80453A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80453A20_10A9 = func_80453A20_ra38_1c_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80453A20_10A9);
        r4 = static_cast<uint32_t>(regargs_result_80453A20_10A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        InvokeDirectCpu<0x80453A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r30 + 72), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32(r30, r31);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021F084(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021F084_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021F084 func_8021F084 preserves=true fpr_mask=0x00000000
