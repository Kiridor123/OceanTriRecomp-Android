#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B09FC(CpuContext* ctx);
extern "C" uint64_t func_802B09FC_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_802B2108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802B2108u);
    goto loc_802B2108;

loc_802B2108:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802B09FCu>(&func_802B09FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B09FC_34A = func_802B09FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B09FC_34A);
        r4 = static_cast<uint32_t>(regargs_result_802B09FC_34A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B09FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802B2128:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B2130;
    }
}

loc_802B212C:
{
    r31 = 1;
}

loc_802B2130:
{
    r3 = 11;
    if constexpr (KnownRegArgsCpuCall<0x802B09FCu>(&func_802B09FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B09FC_665 = func_802B09FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B09FC_665);
        r4 = static_cast<uint32_t>(regargs_result_802B09FC_665 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B09FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802B213C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B2148;
    }
}

loc_802B2140:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_802B2148:
{
    r3 = 4;
    if constexpr (KnownRegArgsCpuCall<0x802B09FCu>(&func_802B09FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B09FC_99C = func_802B09FC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802B09FC_99C);
        r4 = static_cast<uint32_t>(regargs_result_802B09FC_99C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B09FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802B2154:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B2160;
    }
}

loc_802B2158:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_802B2160:
{
}

loc_802B2164:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(2))) {
        goto loc_802B2170;
    }
}

loc_802B2168:
{
    r3 = 1;
    goto loc_802B2174;
}

loc_802B2170:
{
    r3 = 0;
}

loc_802B2174:
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

// RECOMP_GUEST_ABI gpr_read=0x00000003 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B2108 func_802B2108 preserves=true fpr_mask=0x00000000
