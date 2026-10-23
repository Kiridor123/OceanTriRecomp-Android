#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80447314_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80447314;

loc_80447314:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 0x80610000u;
    r0 = (r4 + -32280);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r13 + -16608), r3);
    // inline leaf 0x80447DEC (22 guest instruction(s))
}

loc_inl0_0x80447DEC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_inl0_0x80447E10:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_inl0_0x80447E18:
{
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80447E24;
    }
}

loc_inl0_0x80447E20:
{
    r0 = -100;
}

loc_inl0_0x80447E24:
{
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 216), r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 226), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80447DEC:
{
    // end of inlined leaf 0x80447DEC
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80447314(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80447314_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80447314 func_80447314 preserves=true fpr_mask=0x00000000
