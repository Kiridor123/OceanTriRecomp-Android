#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041C870(CpuContext* ctx);
extern "C" void func_8041C870_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8041C870_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8041C870_statefree_v1(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8041C2A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8041C2A4u);
    goto loc_8041C2A4;

loc_8041C2A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = r4;
    r6 = 2;
    MemoryInline::FlatWrite32((r3 + 108), r6);
}

loc_8041C2C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8041C2F0;
    }
}

loc_8041C2CC:
{
    MemoryInline::FlatWrite32((r3 + 48), r5);
    r0 = MemoryInline::FlatRead8((r3 + 290));
}

loc_8041C2D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8041C2E4;
    }
}

loc_8041C2DC:
{
    MemoryInline::FlatWrite32((r3 + 44), r6);
    goto loc_8041C314;
}

loc_8041C2E4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_8041C314;
}

loc_8041C2F0:
{
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 95;
    r6 = (0 - r0);
    // inline leaf 0x8041D678 (10 guest instruction(s))
}

loc_inl0_0x8041D678:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x8041D680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8041D690;
    }
}

loc_inl0_0x8041D684:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl0_0x8041D68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8041D690:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl0_cont_8041D678;
}

loc_inl0_return:
{
}

loc_inl0_cont_8041D678:
{
    // end of inlined leaf 0x8041D678
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8041C870u) && KnownTranslatedCpuCall<0x8041C870u>::kAvailable && !KnownTranslatedCpuCall<0x8041C870u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8041C870u>()) {
        const auto state_free_result_8041C870_AB2 = func_8041C870_statefree_v1(r3, cr, xer);
        cr = static_cast<uint32_t>(state_free_result_8041C870_AB2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8041C870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = -2;
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_8041C314:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8041C2A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041C2A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041C2A4 func_8041C2A4 preserves=true fpr_mask=0x00000000
