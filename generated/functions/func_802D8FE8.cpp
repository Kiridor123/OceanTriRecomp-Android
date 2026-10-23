#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D8FE8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D8FE8;

loc_802D8FE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = 0;
    r29 = 1;
    r30 = 1;
    r31 = (r3 & 255);
    goto loc_802D9038;
}

loc_802D9018:
{
    r3 = (r29 & 255);
    // inline leaf 0x802D7C48 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r0 = (r3 + 3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19296);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    // end of inlined leaf 0x802D7C48
    r0 = (r3 & 65535);
}

loc_802D9028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D9034;
    }
}

loc_802D902C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r28 = (r28 | r0);
}

loc_802D9034:
{
    r29 = (r29 + 1);
}

loc_802D9038:
{
    r0 = (r29 & 255);
}

loc_802D9040:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r31))) {
        goto loc_802D9018;
    }
}

loc_802D9044:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802D8FE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D8FE8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D8FE8 func_802D8FE8 preserves=true fpr_mask=0x00000000
