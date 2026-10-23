#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE030_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803FE030;

loc_803FE030:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
}

loc_803FE058:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803FE064;
    }
}

loc_803FE05C:
{
    r3 = -1;
    goto loc_803FE0A0;
}

loc_803FE064:
{
    r30 = 0;
    r31 = r28;
    goto loc_803FE08C;
}

loc_803FE070:
{
    r0 = MemoryInline::FlatRead32((r31 + 27712));
}

loc_803FE078:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_803FE084;
    }
}

loc_803FE07C:
{
    r3 = r30;
    goto loc_803FE0A0;
}

loc_803FE084:
{
    r31 = (r31 + 64);
    r30 = (r30 + 1);
}

loc_803FE08C:
{
    r3 = r28;
    // inline leaf 0x803FDFA0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 26120));
    // end of inlined leaf 0x803FDFA0
}

loc_803FE098:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r3))) {
        goto loc_803FE070;
    }
}

loc_803FE09C:
{
    r3 = -1;
}

loc_803FE0A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803FE030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE030_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE030 func_803FE030 preserves=true fpr_mask=0x00000000
