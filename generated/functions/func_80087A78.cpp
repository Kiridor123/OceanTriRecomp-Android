#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80087AD8(CpuContext* ctx);
extern "C" void func_80087AD8_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80087AD8_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_80087A78_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80087A78u);
    goto loc_80087A78;

loc_80087A78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = r31;
    r4 = r30;
    // inline leaf 0x80087AF4 (16 guest instruction(s))
}

loc_inl0_0x80087AF4:
{
    r6 = 0;
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl0_0x80087B04:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80087B2C;
    }
}

loc_inl0_0x80087B08:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_inl0_0x80087B14:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80087B2C;
    }
}

loc_inl0_0x80087B18:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl0_0x80087B24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80087B2C;
    }
}

loc_inl0_0x80087B28:
{
    r6 = 1;
}

loc_inl0_0x80087B2C:
{
    r3 = r6;
}

loc_inl0_cont_80087AF4:
{
    // end of inlined leaf 0x80087AF4
}

loc_80087AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80087AB0;
    }
}

loc_80087AA8:
{
    r3 = 1;
    goto loc_80087AC0;
}

loc_80087AB0:
{
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80087AD8u) && KnownTranslatedCpuCall<0x80087AD8u>::kAvailable && !KnownTranslatedCpuCall<0x80087AD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80087AD8u>()) {
        const auto state_free_result_80087AD8_944 = func_80087AD8_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_80087AD8_944);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80087AD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0;
}

loc_80087AC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80087A78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80087A78_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80087A78 func_80087A78 preserves=true fpr_mask=0x00000000
