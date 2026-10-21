#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027DF9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8027DF9Cu);
    goto loc_8027DF9C;

loc_8027DF9C:
{
}

loc_8027DFA0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027DFB8;
    }
}

loc_8027DFA4:
{
}

loc_8027DFA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8027DFC4;
    }
}

loc_8027DFAC:
{
}

loc_8027DFB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8027DFD0;
    }
}

loc_8027DFB4:
{
    goto loc_8027DFDC;
}

loc_8027DFB8:
{
    r4 = 0x80790000u;
    r7 = (r4 + 17648);
    goto loc_8027E01C;
}

loc_8027DFC4:
{
    r4 = 0x80790000u;
    r7 = (r4 + 17656);
    goto loc_8027E01C;
}

loc_8027DFD0:
{
    r4 = 0x805C0000u;
    r7 = (r4 + 1952);
    goto loc_8027E01C;
}

loc_8027DFDC:
{
    r3 = 65536;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027DFEC:
{
    r5 = MemoryInline::FlatRead16((r3 + 772));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 632));
}

loc_8027E000:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8027E018;
    }
}

loc_8027E004:
{
    r0 = MemoryInline::FlatRead16((r6 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027E00C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027E018;
    }
}

loc_8027E010:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027E018:
{
    r7 = (r7 + 2);
}

loc_8027E01C:
{
    r4 = MemoryInline::FlatRead16(r7);
}

loc_8027E024:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_8027DFEC;
    }
}

loc_8027E028:
{
    r3 = 65536;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027DF9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027DF9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027DF9C func_8027DF9C preserves=true fpr_mask=0x00000000
