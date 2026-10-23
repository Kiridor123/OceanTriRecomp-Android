#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041694C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8041694C;

loc_8041694C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
}

loc_80416960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8041696C;
    }
}

loc_80416964:
{
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
    // inline leaf 0x804130FC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 92), r0);
    MemoryInline::FlatWrite32((r3 + 88), r0);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 107), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x804130FC
}

loc_8041696C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8041694C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041694C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041694C func_8041694C preserves=true fpr_mask=0x00000000
