#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802C0A10_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x802C0A10u);
    goto loc_802C0A10;

loc_802C0A10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r7 = 255;
    r0 = 0;
    r0 = (r0 * 44);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 4009));
}

loc_802C0A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0A5C;
    }
}

loc_802C0A44:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 4014));
}

loc_802C0A50:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_802C0A5C;
    }
}

loc_802C0A54:
{
    r7 = 0;
    goto loc_802C0A88;
}

loc_802C0A5C:
{
    r0 = 1;
    r0 = (r0 * 44);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 4009));
}

loc_802C0A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0A88;
    }
}

loc_802C0A74:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 4014));
}

loc_802C0A80:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_802C0A88;
    }
}

loc_802C0A84:
{
    r7 = 1;
}

loc_802C0A88:
{
}

loc_802C0A8C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(255))) {
        goto loc_802C0AFC;
    }
}

loc_802C0A90:
{
    r0 = 0;
    r0 = (r0 * 44);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 4009));
}

loc_802C0AA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C0AB0;
    }
}

loc_802C0AA8:
{
    r7 = 0;
    goto loc_802C0ACC;
}

loc_802C0AB0:
{
    r0 = 1;
    r0 = (r0 * 44);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 4009));
}

loc_802C0AC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C0ACC;
    }
}

loc_802C0AC8:
{
    r7 = 1;
}

loc_802C0ACC:
{
}

loc_802C0AD0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_802C0AFC;
    }
}

loc_802C0AD4:
{
    r31 = (r7 * 44);
    r0 = 1;
    r3 = (r3 + r31);
    MemoryInline::FlatWrite8((r3 + 4009), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 4008), static_cast<uint8_t>(r0));
    r3 = (r3 + 4012);
    // inline leaf 0x802C0B14 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f0.d);
    // end of inlined leaf 0x802C0B14
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    r3 = (r30 + r31);
    MemoryInline::FlatWriteFloat32((r3 + 4048), f0.d);
}

loc_802C0AFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_802C0A10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C0A10_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000EB gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0A10 func_802C0A10 preserves=true fpr_mask=0x00000000
