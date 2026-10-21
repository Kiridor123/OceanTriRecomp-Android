#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A25C(CpuContext* ctx);
extern "C" void func_8004A25C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004A25C_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_802A99DC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802A99DCu);
    goto loc_802A99DC;

loc_802A99DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = r4;
    r30 = 0;
    r0 = 8;
    ctr = r0;
}

loc_802A9A08:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_802A9A10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A9A30;
    }
}

loc_802A9A14:
{
    r3 = r31;
    r4 = r29;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
    goto loc_802A9AEC;
}

loc_802A9A30:
{
    r4 = MemoryInline::FlatRead16(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_802A9A38:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802A9AE0;
    }
}

loc_802A9A3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802A9A50;
    }
}

loc_802A9A40:
{
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802A9A4C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_802A9AE0;
    }
}

loc_802A9A50:
{
    r3 = (r1 + 12);
    r4 = r31;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r3 = r31;
    r4 = r29;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    goto loc_802A9AC8;
}

loc_802A9A74:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_802A9A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A9A9C;
    }
}

loc_802A9A80:
{
    r3 = r31;
    r4 = (r1 + 12);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
    goto loc_802A9AEC;
}

loc_802A9A9C:
{
    r3 = (r1 + 8);
    r4 = r31;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r3 = r31;
    r4 = (r1 + 12);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r30 = (r30 + 1);
    r31 = (r31 + 4);
}

loc_802A9AC8:
{
}

loc_802A9ACC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_802A9A74;
    }
}

loc_802A9AD0:
{
    r3 = r29;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A25Cu) && KnownTranslatedCpuCall<0x8004A25Cu>::kAvailable && !KnownTranslatedCpuCall<0x8004A25Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A25Cu>()) {
        const auto state_free_result_8004A25C_16DA = func_8004A25C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A25C_16DA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004A25Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_802A9AEC;
}

loc_802A9AE0:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802A9A08;
    }
}

loc_802A9AEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A99DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A99DC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A99DC func_802A99DC preserves=true fpr_mask=0x00000000
