#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800AA23C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800AA23Cu);
    goto loc_800AA23C;

loc_800AA23C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 + 16);
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r3 = (r29 + 24);
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r3 = (r29 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = (r29 + 44);
    r31 = (r29 + 68);
}

loc_800AA278:
{
    r3 = r30;
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r30 = (r30 + 8);
}

loc_800AA288:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_800AA278;
    }
}

loc_800AA28C:
{
    r30 = (r29 + 80);
    r31 = (r29 + 104);
}

loc_800AA294:
{
    r3 = r30;
    // inline leaf 0x80083554 (1 guest instruction(s))
    // end of inlined leaf 0x80083554
    r30 = (r30 + 8);
}

loc_800AA2A4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_800AA294;
    }
}

loc_800AA2A8:
{
    r3 = (r29 + 128);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r29 + 140);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r29 + 152);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_800AA23C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800AA23C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AA23C func_800AA23C preserves=true fpr_mask=0x00000000
