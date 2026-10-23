#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80398B58_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80398B58;

loc_80398B58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r31 = r3;
    r6 = (r3 + 772);
    r0 = 40;
    ctr = r0;
}

loc_80398B84:
{
    r5 = MemoryInline::FlatRead16(r6);
}

loc_80398B8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80398BC0;
    }
}

loc_80398B90:
{
    r4 = MemoryInline::FlatRead16((r6 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80398B98:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80398BC0;
    }
}

loc_80398B9C:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_80398BA4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80398BD8;
    }
}

loc_80398BA8:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 932), static_cast<uint8_t>(r0));
    goto loc_80398BE0;
}

loc_80398BC0:
{
    r3 = r6;
    r4 = r30;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 932), static_cast<uint8_t>(r0));
    goto loc_80398BE0;
}

loc_80398BD8:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80398B84;
    }
}

loc_80398BE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80398B58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80398B58_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80398B58 func_80398B58 preserves=true fpr_mask=0x00000000
