#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8029AE5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8029AE5C;

loc_8029AE5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8029AE78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029AF0C;
    }
}

loc_8029AE7C:
{
    r4 = 8;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029AE88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029AF0C;
    }
}

loc_8029AE8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
}

loc_8029AE94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029AF0C;
    }
}

loc_8029AE98:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 930), 0, 2u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 930), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 931), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r31 + 88));
    r4 = MemoryInline::FlatRead8((r31 + 14));
}

loc_8029AEB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8029AED8;
    }
}

loc_8029AEB4:
{
}

loc_8029AEB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8029AED8;
    }
}

loc_8029AEBC:
{
}

loc_8029AEC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_8029AED8;
    }
}

loc_8029AEC4:
{
}

loc_8029AEC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8029AEE8;
    }
}

loc_8029AECC:
{
}

loc_8029AED0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8029AEF8;
    }
}

loc_8029AED4:
{
    goto loc_8029AF0C;
}

loc_8029AED8:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 930), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 931), static_cast<uint8_t>(r0));
    goto loc_8029AF0C;
}

loc_8029AEE8:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 930), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 931), static_cast<uint8_t>(r0));
    goto loc_8029AF0C;
}

loc_8029AEF8:
{
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 931), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 930), static_cast<uint8_t>(r0));
}

loc_8029AF0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029AE5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029AE5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029AE5C func_8029AE5C preserves=true fpr_mask=0x00000000
