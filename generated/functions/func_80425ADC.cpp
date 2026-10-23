#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80453864(CpuContext* ctx);
extern "C" uint64_t func_80453864_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80425ADC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80425ADC;

loc_80425ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r7 = (r3 + 65536);
    r6 = MemoryInline::FlatRead16((r7 + -15520));
    r4 = 0x80660000u;
    r5 = (r4 + -18480);
    r0 = MemoryInline::FlatRead16((r5 + 704));
}

loc_80425B08:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80425B2C;
    }
}

loc_80425B0C:
{
    r4 = MemoryInline::FlatRead16((r7 + -15518));
    r0 = MemoryInline::FlatRead16((r5 + 712));
}

loc_80425B18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80425B2C;
    }
}

loc_80425B1C:
{
    r4 = MemoryInline::FlatRead32((r7 + -15516));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r7 + -15516), r0);
    goto loc_80425B38;
}

loc_80425B2C:
{
    r0 = 0;
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -15516), r0);
}

loc_80425B38:
{
    r3 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r3 + -15516));
    r3 = 65536;
    r0 = (r3 + -29536);
}

loc_80425B4C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80425B58;
    }
}

loc_80425B50:
{
    r3 = 23;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80453864_843 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_843);
        r4 = static_cast<uint32_t>(regargs_result_80453864_843 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80425B58:
{
    r3 = 0x80660000u;
    r4 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r4 + 704));
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite16((r3 + -15520), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 712));
    MemoryInline::FlatWrite16((r3 + -15518), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80425ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80425ADC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020BB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80425ADC func_80425ADC preserves=true fpr_mask=0x00000000
