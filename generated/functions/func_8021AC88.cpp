#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021AC88_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8021AC88u);
    goto loc_8021AC88;

loc_8021AC88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + -7);
}

loc_8021ACA0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8021ACBC;
    }
}

loc_8021ACA4:
{
    r0 = (r3 + -11);
}

loc_8021ACAC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8021ACCC;
    }
}

loc_8021ACB0:
{
    r0 = (r3 + -14);
}

loc_8021ACB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8021ACD8;
    }
}

loc_8021ACBC:
{
    // inline leaf 0x8027E300 (3 guest instruction(s))
    r0 = (r3 + -7);
    r3 = (r0 & 255);
    // end of inlined leaf 0x8027E300
    r3 = (r3 & 255);
    // inline leaf 0x800D07B8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2182), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D07B8
    goto loc_8021ACE0;
}

loc_8021ACCC:
{
    r3 = 4;
    // inline leaf 0x800D07B8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2182), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D07B8
    goto loc_8021ACE0;
}

loc_8021ACD8:
{
    r3 = 0;
    // inline leaf 0x800D07B8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2182), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D07B8
}

loc_8021ACE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8021AC88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021AC88_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021AC88 func_8021AC88 preserves=true fpr_mask=0x00000000
