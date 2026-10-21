#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80412944_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80412944u);
    goto loc_80412944;

loc_80412944:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
    r4 = r31;
    // inline leaf 0x80412EB8 (15 guest instruction(s))
}

loc_inl1_0x80412EB8:
{
}

loc_inl1_0x80412EBC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80412EE8;
    }
}

loc_inl1_0x80412EC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 320));
}

loc_inl1_0x80412EC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80412EDC;
    }
}

loc_inl1_0x80412ECC:
{
    r4 = MemoryInline::FlatRead8((r3 + 104));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80412EB8;
}

loc_inl1_0x80412EDC:
{
    r0 = 11;
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80412EB8;
}

loc_inl1_0x80412EE8:
{
    r0 = 13;
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80412EB8:
{
    // end of inlined leaf 0x80412EB8
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80412944(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80412944_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80412944 func_80412944 preserves=true fpr_mask=0x00000000
