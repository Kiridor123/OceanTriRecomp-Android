#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8015DB48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8015DB48;

loc_8015DB48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8015DB64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8015DBB8;
    }
}

loc_8015DB68:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8015DB70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8015DB88;
    }
}

loc_8015DB74:
{
}

loc_8015DB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_8015DB88;
    }
}

loc_8015DB7C:
{
}

loc_8015DB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8015DBA0;
    }
}

loc_8015DB84:
{
    goto loc_8015DBB8;
}

loc_8015DB88:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8015DB90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8015DBB8;
    }
}

loc_8015DB94:
{
    r0 = 16;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_8015DBB8;
}

loc_8015DBA0:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r0 & 1);
}

loc_8015DBAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015DBB8;
    }
}

loc_8015DBB0:
{
    r0 = 17;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_8015DBB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8015DB48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8015DB48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015DB48 func_8015DB48 preserves=true fpr_mask=0x00000000
