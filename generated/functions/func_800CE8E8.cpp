#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE984(CpuContext* ctx);
extern "C" void func_800CE984_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800CE8E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800CE8E8u);
    goto loc_800CE8E8;

loc_800CE8E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80690000u;
    r31 = (r3 + 28904);
    r30 = MemoryInline::FlatRead32((r31 + 72));
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800CE914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CE968;
    }
}

loc_800CE918:
{
}

loc_800CE91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800CE94C;
    }
}

loc_800CE920:
{
    r29 = 0;
    goto loc_800CE93C;
}

loc_800CE928:
{
    r3 = r30;
    r4 = (r30 + 340);
    if constexpr (KnownRegArgsCpuCall<0x800CE984u>(&func_800CE984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_800CE984_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CE984u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    r29 = (r29 + 1);
    r30 = (r30 + 340);
}

loc_800CE93C:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 + -1);
}

loc_800CE948:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_800CE928;
    }
}

loc_800CE94C:
{
    r3 = r30;
    r4 = 0;
    r5 = 340;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
}

loc_800CE968:
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

extern "C" void func_800CE8E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CE8E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CE8E8 func_800CE8E8 preserves=true fpr_mask=0x00000000
