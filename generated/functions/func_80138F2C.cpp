#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F618(CpuContext* ctx);
extern "C" double func_8029F618_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80138F2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80138F2C;

loc_80138F2C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r5 = (r4 & 255);
    r31 = (r5 * 92);
    r4 = (r3 + r31);
    r0 = MemoryInline::FlatRead8((r4 + 2573));
}

loc_80138F58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138F7C;
    }
}

loc_80138F5C:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 2796));
    r0 = (r0 & 1);
}

loc_80138F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138F7C;
    }
}

loc_80138F70:
{
    r3 = (r4 + 2568);
    r4 = 100;
    if constexpr (KnownRegArgsCpuCall<0x8029F618u>(&func_8029F618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F618_5F0 = func_8029F618_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8029F618_5F0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8029F618u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    }
}

loc_80138F7C:
{
    r3 = (r30 + r31);
    r3 = (r3 + 2568);
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
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80138F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80138F2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80138F2C func_80138F2C preserves=true fpr_mask=0x00000000
