#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80535D1C_ra38_e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_stfsx_80535D50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80535D1Cu);
    goto loc_80535D1C;

loc_80535D1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80535D24:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80535D2C;
    }
}

loc_80535D28:
{
    r0 = r5;
}

loc_80535D2C:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r6 = 0;
    ctr = r5;
}

loc_80535D3C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80535D40:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
        }
    }
    r5 = (r0 + r6);
    addr_stfsx_80535D50_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80535D50_loc_0, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r5 = (r0 + r6);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    r4 = (r4 + 32);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    r6 = (r6 + 32);
    MemoryInline::FlatWriteFloat32((r5 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 28), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80535D40;
    }
}

loc_80535DAC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80535D1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80535D1C_ra38_e_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535D1C func_80535D1C preserves=true fpr_mask=0x00000000
