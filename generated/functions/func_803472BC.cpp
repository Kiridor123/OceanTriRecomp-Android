#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803472BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803472BC;

loc_803472BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = MemoryInline::FlatRead8((r3 + 19));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803472F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80347300;
    }
}

loc_803472F4:
{
}

loc_803472F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80347350;
    }
}

loc_803472FC:
{
    goto loc_80347398;
}

loc_80347300:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
}

loc_80347308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80347318;
    }
}

loc_8034730C:
{
}

loc_80347310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8034732C;
    }
}

loc_80347314:
{
    goto loc_80347340;
}

loc_80347318:
{
    r0 = 4;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_8034732C:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_80347340:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_80347350:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
}

loc_80347358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80347368;
    }
}

loc_8034735C:
{
}

loc_80347360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80347378;
    }
}

loc_80347364:
{
    goto loc_80347388;
}

loc_80347368:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_80347378:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_80347388:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_803473A4;
}

loc_80347398:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_803473A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803472BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803472BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803472BC func_803472BC preserves=true fpr_mask=0x00000000
