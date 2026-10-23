#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FB5B0(CpuContext* ctx);
extern "C" uint32_t func_802FB5B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802FB9AC(CpuContext* ctx);
extern "C" uint64_t func_802FB9AC_ra0_0_18_0(CpuContext*);

extern "C" void func_801FC2CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_801FC2CC;

loc_801FC2CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0;
    ctx->lr = 0x801FC2E0u;
    if constexpr (KnownRegArgsCpuCall<0x802FB5B0u>(&func_802FB5B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802FB5B0_3DD = func_802FB5B0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802FB5B0_3DD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802FB5B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_801FC2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_801FC2F8;
    }
}

loc_801FC2EC:
{
}

loc_801FC2F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FC328;
    }
}

loc_801FC2F4:
{
    goto loc_801FC338;
}

loc_801FC2F8:
{
    ctx->lr = 0x801FC2FCu;
    if constexpr (KnownRegArgsCpuCall<0x802FB9ACu>(&func_802FB9AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FB9AC_7CD = func_802FB9AC_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802FB9AC_7CD);
        r4 = static_cast<uint32_t>(regargs_result_802FB9AC_7CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802FB9ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_801FC304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FC318;
    }
}

loc_801FC308:
{
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    goto loc_801FC344;
}

loc_801FC318:
{
    r0 = 255;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    goto loc_801FC344;
}

loc_801FC328:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    goto loc_801FC344;
}

loc_801FC338:
{
    r0 = 255;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
}

loc_801FC344:
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

// RECOMP_GUEST_ABI gpr_read=0x00002003 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801FC2CC func_801FC2CC preserves=true fpr_mask=0x00000000
