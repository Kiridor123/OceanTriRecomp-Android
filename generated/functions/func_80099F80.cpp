#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009A0A0(CpuContext* ctx);
extern "C" uint32_t func_8009A0A0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8009A0A0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80099F80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80099F80u);
    goto loc_80099F80;

loc_80099F80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r31 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80099604u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x80099FB0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009A0A0u) && KnownTranslatedCpuCall<0x8009A0A0u>::kAvailable && !KnownTranslatedCpuCall<0x8009A0A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009A0A0u>()) {
        const auto state_free_result_8009A0A0_583 = func_8009A0A0_statefree(r1, r3, r4, 0x80099FB0u);
        r0 = static_cast<uint32_t>(state_free_result_8009A0A0_583[0]);
        r1 = static_cast<uint32_t>(state_free_result_8009A0A0_583[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009A0A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80099FB4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8009A008;
    }
}

loc_80099FB8:
{
}

loc_80099FBC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80099FE4;
    }
}

loc_80099FC0:
{
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009A07Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009974Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 + 32);
    r4 = (r31 + -32);
    ctx->lr = 0x80099FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804BA830u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_8009A04C;
}

loc_80099FE4:
{
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009A07Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009974Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 + 32);
    r4 = (r31 + -32);
    // inline leaf 0x8009A064 (6 guest instruction(s))
    r0 = 64;
    r5 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    // end of inlined leaf 0x8009A064
    goto loc_8009A04C;
}

loc_8009A008:
{
}

loc_8009A00C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8009A030;
    }
}

loc_8009A010:
{
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009A07Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009974Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->lr = 0x8009A02Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804BA830u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_8009A04C;
}

loc_8009A030:
{
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009A07Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009974Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    // inline leaf 0x8009A064 (6 guest instruction(s))
    r0 = 64;
    r5 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    // end of inlined leaf 0x8009A064
}

loc_8009A04C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80099F80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80099F80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80099F80 func_80099F80 preserves=true fpr_mask=0x00000000
