#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80271A7C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80271A7C;

loc_80271A7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r0 = (r31 & 65535);
}

loc_80271AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_80271AE0;
    }
}

loc_80271AB4:
{
}

loc_80271AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_80271AE0;
    }
}

loc_80271ABC:
{
}

loc_80271AC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_80271AF4;
    }
}

loc_80271AC4:
{
}

loc_80271AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(38))) {
        goto loc_80271AF4;
    }
}

loc_80271ACC:
{
}

loc_80271AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(50))) {
        goto loc_80271AF4;
    }
}

loc_80271AD4:
{
}

loc_80271AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(40))) {
        goto loc_80271B08;
    }
}

loc_80271ADC:
{
    goto loc_80271B20;
}

loc_80271AE0:
{
    r0 = (r3 & 65535);
}

loc_80271AE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80271B20;
    }
}

loc_80271AEC:
{
    r3 = 0;
    goto loc_80271B24;
}

loc_80271AF4:
{
    r0 = (r3 & 65535);
}

loc_80271AFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80271B20;
    }
}

loc_80271B00:
{
    r3 = 0;
    goto loc_80271B24;
}

loc_80271B08:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -7);
}

loc_80271B14:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80271B20;
    }
}

loc_80271B18:
{
    r3 = 0;
    goto loc_80271B24;
}

loc_80271B20:
{
    r3 = 1;
}

loc_80271B24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80271A7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80271A7C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80271A7C func_80271A7C preserves=true fpr_mask=0x00000000
