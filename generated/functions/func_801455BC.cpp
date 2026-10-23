#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801455BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    goto loc_801455BC;

loc_801455BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -17288));
}

loc_801455D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80145618;
    }
}

loc_801455D8:
{
    r31 = (r13 + -17288);
    r4 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 & 255);
}

loc_801455E8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80145618;
    }
}

loc_801455EC:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r4 = MemoryInline::FlatRead8((r31 + 3));
    ctx->lr = 0x801455F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 4));
    ctx->lr = 0x80145604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_80145608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80145614;
    }
}

loc_8014560C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
}

loc_80145614:
{
    // inline leaf 0x801453F4 (9 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite8((r13 + -17288), static_cast<uint8_t>(r4));
    r0 = 255;
    r3 = (r13 + -17288);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801453F4
}

loc_80145618:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801455BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801455BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801455BC func_801455BC preserves=true fpr_mask=0x00000000
