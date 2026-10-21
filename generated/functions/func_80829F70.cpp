#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80829F70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8082A01C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80829F70u);
    goto loc_80829F70;

loc_80829F70:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80829F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80829F7C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80829F84:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80829F88:
{
    r8 = 0x80870000u;
    r0 = MemoryInline::FlatRead8((r8 + -32264));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80829FD8;
    }
}

loc_80829F98:
{
    r6 = 0x80840000u;
    r5 = 0x80840000u;
    r7 = 0x80870000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 18552));
    r6 = (r7 + -32256);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18556));
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + -32256), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r7 + -32256), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r6 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r6 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r6 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r6 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r6 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r6 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r6 + 28), f0.d);
    }
    MemoryInline::FlatWriteRam8((r8 + -32264), static_cast<uint8_t>(r0));
}

loc_80829FD8:
{
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r6 = 0x80870000u;
    r5 = (r6 + -32256);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + -32256), 0, 32u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + -32256));
    r0 = (r4 - r7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r6 = (r6_rot_0 & -32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r5 + 12));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r5 + 20));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r5 + 24));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r5 + 28));
    ctr = r0;
}

loc_8082A014:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_8082A060;
    }
}

loc_8082A018:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    addr_stfsx_8082A01C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8082A01C_loc_0, f7.d);
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 4), f6.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r5 + 12), f4.d);
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
        goto loc_8082A018;
    }
}

loc_8082A060:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80829F70 func_80829F70 preserves=true fpr_mask=0x00000000
