#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802D9528_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802D9528u);
    goto loc_802D9528;

loc_802D9528:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x802D9540u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AB08C_354 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_354;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802D9544:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802D9594;
    }
}

loc_802D9548:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -2080);
    r0 = (r31 & 255);
}

loc_802D9558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D957C;
    }
}

loc_802D955C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 1156), static_cast<uint8_t>(r0));
    r0 = 90;
    MemoryInline::FlatWriteRam16((r3 + 1158), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1157));
}

loc_802D9574:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D958C;
    }
}

loc_802D9578:
{
    goto loc_802D9594;
}

loc_802D957C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r3 + 1156), static_cast<uint8_t>(r0));
    r0 = 90;
    MemoryInline::FlatWriteRam16((r3 + 1158), static_cast<uint16_t>(r0));
}

loc_802D958C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 1157), static_cast<uint8_t>(r0));
}

loc_802D9594:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802D9528(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D9528_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D9528 func_802D9528 preserves=true fpr_mask=0x00000000
