#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80333AA8_ra58_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80333AA8;

loc_80333AA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -10336), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -10336));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = (r31 + -5);
}

loc_80333AE4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80333AF0;
    }
}

loc_80333AE8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -10284));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_80333AF0:
{
    r3 = r30;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_80333B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1170))) {
        goto loc_80333B18;
    }
}

loc_80333B04:
{
}

loc_80333B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1180))) {
        goto loc_80333B24;
    }
}

loc_80333B0C:
{
}

loc_80333B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1182))) {
        goto loc_80333B30;
    }
}

loc_80333B14:
{
    goto loc_80333B6C;
}

loc_80333B18:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -10328));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -10324));
        }
    }
    goto loc_80333B40;
}

loc_80333B24:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -10320));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -10316));
        }
    }
    goto loc_80333B40;
}

loc_80333B30:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -10312));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -10308));
        }
    }
}

loc_80333B40:
{
    r3 = r30;
    r4 = 3;
    ctx->lr = 0x80333B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80333B50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80333B6C;
    }
}

loc_80333B54:
{
    r3 = (r1 + 8);
    r4 = (r30 + 84);
    ctx->lr = 0x80333B60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80051224u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r30 + 60);
    r4 = (r1 + 8);
    ctx->lr = 0x80333B6Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_80333B6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80333AA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80333AA8_ra58_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80333AA8 func_80333AA8 preserves=true fpr_mask=0x00000000
