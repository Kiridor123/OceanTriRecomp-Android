#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8013AB30_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8013AB30u);
    goto loc_8013AB30;

loc_8013AB30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_8013AB58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013AB64;
    }
}

loc_8013AB5C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 505), static_cast<uint8_t>(r0));
}

loc_8013AB64:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r29 + 2399), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r29 + 2544), r31);
    r0 = (r30 & 255);
}

loc_8013AB78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8013AB8C;
    }
}

loc_8013AB7C:
{
    r3 = r29;
    // inline leaf 0x8013AA64 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2555), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2556), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2558), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2557), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2560), r0);
    // end of inlined leaf 0x8013AA64
    MemoryInline::FlatWrite8((r29 + 509), static_cast<uint8_t>(r31));
    goto loc_8013ABAC;
}

loc_8013AB8C:
{
    r0 = MemoryInline::FlatRead32((r29 + 2560));
}

loc_8013AB94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ABAC;
    }
}

loc_8013AB98:
{
    r0 = MemoryInline::FlatRead8((r29 + 2559));
}

loc_8013ABA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013ABAC;
    }
}

loc_8013ABA4:
{
    r3 = r29;
    // inline leaf 0x8013AA64 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2555), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2556), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2558), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2557), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2560), r0);
    // end of inlined leaf 0x8013AA64
}

loc_8013ABAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 2559), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8013AB30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8013AB30_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013AB30 func_8013AB30 preserves=true fpr_mask=0x00000000
