#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801F0044_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801F0044u);
    goto loc_801F0044;

loc_801F0044:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_801F0074:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801F0090;
    }
}

loc_801F0078:
{
    r0 = MemoryInline::FlatRead8((r3 + 3584));
}

loc_801F0080:
{
    r3 = (r13 + -29120);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F00A4;
    }
}

loc_801F0088:
{
    r3 = (r13 + -29112);
    goto loc_801F00A4;
}

loc_801F0090:
{
    r0 = MemoryInline::FlatRead8((r3 + 3584));
}

loc_801F0098:
{
    r3 = (r13 + -29128);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F00A4;
    }
}

loc_801F00A0:
{
    r3 = (r13 + -29124);
}

loc_801F00A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_801F0044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801F0044_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F0044 func_801F0044 preserves=true fpr_mask=0x00000000
