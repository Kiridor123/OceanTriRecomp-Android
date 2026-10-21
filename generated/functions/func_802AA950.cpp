#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802AA950_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802AA950u);
    goto loc_802AA950;

loc_802AA950:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r4 = (r3 + -1256);
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_802AA974:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_802AA980;
    }
}

loc_802AA978:
{
    r3 = 0;
    goto loc_802AA9CC;
}

loc_802AA980:
{
    r31 = MemoryInline::FlatRead32((r4 + 20));
    ctr = r0;
}

loc_802AA98C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802AA9C8;
    }
}

loc_802AA990:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802AA998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AA9C0;
    }
}

loc_802AA99C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 24), r0);
    r3 = (r31 + 4);
    ctx->lr = 0x802AA9B8u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E05C4_70F = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_70F);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_70F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r31 + 4);
    goto loc_802AA9CC;
}

loc_802AA9C0:
{
    r31 = (r31 + 360);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AA990;
    }
}

loc_802AA9C8:
{
    r3 = 0;
}

loc_802AA9CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_802AA950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AA950_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002017 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AA950 func_802AA950 preserves=true fpr_mask=0x00000000
