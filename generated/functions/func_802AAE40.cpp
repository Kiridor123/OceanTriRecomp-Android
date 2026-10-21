#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F070(CpuContext* ctx);
extern "C" uint64_t func_8029F070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_802AAE40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802AAE40u);
    goto loc_802AAE40;

loc_802AAE40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x806B0000u;
    r30 = (r4 + -1256);
    r28 = MemoryInline::FlatRead32((r30 + 8));
    r29 = 0;
    r31 = (r3 & 255);
    goto loc_802AAEB4;
}

loc_802AAE74:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_802AAE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AAEAC;
    }
}

loc_802AAE80:
{
    r0 = MemoryInline::FlatRead8((r28 + 264));
}

loc_802AAE88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_802AAEAC;
    }
}

loc_802AAE8C:
{
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r28 + 248));
    ctr = r12;
    ctx->lr = 0x802AAE9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = (r28 + 92);
    // inline leaf 0x8029F040 (12 guest instruction(s))
}

loc_inl0_0x8029F040:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4824);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl0_0x8029F050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8029F054:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r4, r3);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead16((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_8029F040;
}

loc_inl0_return:
{
}

loc_inl0_cont_8029F040:
{
    // end of inlined leaf 0x8029F040
    r3 = (r28 + 184);
    if constexpr (KnownRegArgsCpuCall<0x8029F070u>(&func_8029F070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F070_A55 = func_8029F070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F070_A55);
        r4 = static_cast<uint32_t>(regargs_result_8029F070_A55 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F070u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802AAEAC:
{
    r29 = (r29 + 1);
    r28 = (r28 + 268);
}

loc_802AAEB4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_802AAEBC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_802AAE74;
    }
}

loc_802AAEC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AAE40 func_802AAE40 preserves=true fpr_mask=0x00000000
