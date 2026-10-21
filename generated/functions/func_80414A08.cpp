#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80414A08_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80414A08u);
    goto loc_80414A08;

loc_80414A08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_80414A24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80414A78;
    }
}

loc_80414A28:
{
    r30 = 0;
    r31 = 0;
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
}

loc_80414A38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80414A4C;
    }
}

loc_80414A3C:
{
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
    // inline leaf 0x80414A98 (4 guest instruction(s))
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 14864));
    r4 = MemoryInline::FlatRead32((r4 + 14868));
    // end of inlined leaf 0x80414A98
    r30 = r4;
    r31 = r3;
}

loc_80414A4C:
{
    r0 = (r30 | r31);
}

loc_80414A54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80414A64;
    }
}

loc_80414A58:
{
    r4 = r30;
    r3 = r31;
    goto loc_80414A80;
}

loc_80414A64:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x803FE228 (5 guest instruction(s))
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -32076));
    r0 = MemoryInline::FlatRead32((r4 + -32072));
    r3 = (r3 + r0);
    // end of inlined leaf 0x803FE228
    r4 = r3;
    r3 = 0;
    goto loc_80414A80;
}

loc_80414A78:
{
    r4 = 0;
    r3 = 0;
}

loc_80414A80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80414A08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80414A08_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80414A08 func_80414A08 preserves=true fpr_mask=0x00000000
