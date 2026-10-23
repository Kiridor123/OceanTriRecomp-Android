#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_803BAEE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803BAEE4;

loc_803BAEE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    goto loc_803BAF10;
}

loc_803BAF04:
{
    r0 = MemoryInline::FlatRead16(r3);
    r31 = (r31 + r0);
    r3 = (r3 + 4);
}

loc_803BAF10:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803BAF18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803BAF04;
    }
}

loc_803BAF1C:
{
    r0 = (r31 & 65535);
}

loc_803BAF24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BAF34;
    }
}

loc_803BAF28:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_803BAF90;
}

loc_803BAF34:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CEF20_619 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_619;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    r4 = (r3 & 65535);
    r3 = (r31 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r4 = (r0 & 65535);
    r3 = 0;
    goto loc_803BAF7C;
}

loc_803BAF5C:
{
    r0 = MemoryInline::FlatRead16(r30);
    r3 = (r3 + r0);
    r0 = (r3 & 65535);
}

loc_803BAF6C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_803BAF78;
    }
}

loc_803BAF70:
{
    r3 = MemoryInline::FlatRead16((r30 + 2));
    goto loc_803BAF90;
}

loc_803BAF78:
{
    r30 = (r30 + 4);
}

loc_803BAF7C:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_803BAF84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803BAF5C;
    }
}

loc_803BAF88:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_803BAF90:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000005B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BAEE4 func_803BAEE4 preserves=true fpr_mask=0x00000000
