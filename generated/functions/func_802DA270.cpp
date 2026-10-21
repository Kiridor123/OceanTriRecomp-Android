#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802DA270_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802DA270u);
    goto loc_802DA270;

loc_802DA270:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = 0x806C0000u;
    r29 = (r5 + -888);
    r28 = 16;
    r31 = (r4 & 255);
    r30 = (r3 & 255);
}

loc_802DA2A0:
{
    r3 = r29;
    // inline leaf 0x802DA324 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x802DA324
}

loc_802DA2AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DA2E0;
    }
}

loc_802DA2B0:
{
    r3 = r29;
    // inline leaf 0x802DA31C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1));
    // end of inlined leaf 0x802DA31C
    r0 = (r3 & 255);
}

loc_802DA2C0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_802DA2E0;
    }
}

loc_802DA2C4:
{
    r3 = r29;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
}

loc_802DA2D4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_802DA2E0;
    }
}

loc_802DA2D8:
{
    r3 = 1;
    goto loc_802DA2F4;
}

loc_802DA2E0:
{
    r28 = (r28 + -1);
    r29 = (r29 + 32);
}

loc_802DA2EC:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(0))) {
        goto loc_802DA2A0;
    }
}

loc_802DA2F0:
{
    r3 = 0;
}

loc_802DA2F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802DA270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802DA270_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DA270 func_802DA270 preserves=true fpr_mask=0x00000000
