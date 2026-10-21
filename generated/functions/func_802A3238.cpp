#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A31F4(CpuContext* ctx);
extern "C" void func_802A31F4_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A4DFC(CpuContext* ctx);
extern "C" uint64_t func_802A4DFC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802A3238_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x802A3238u);
    goto loc_802A3238;

loc_802A3238:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = 24;
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_802A325C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A3264;
    }
}

loc_802A3260:
{
    r4 = 32;
}

loc_802A3264:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 432), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r3 + 414), static_cast<uint16_t>(r31));
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 419), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r31));
    r3 = r4;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 4;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl0_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A8F8C;
    }
}

loc_inl0_0x802A8F84:
{
    r3 = 1;
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl0_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r30 + 417), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 26), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 418), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 570), static_cast<uint8_t>(r31));
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802A31F4u>(&func_802A31F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802A31F4_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A31F4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    ctx->lr = 0x802A32C4u;
    if constexpr (KnownRegArgsCpuCall<0x802A4DFCu>(&func_802A4DFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A4DFC_EF4 = func_802A4DFC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A4DFC_EF4);
        r4 = static_cast<uint32_t>(regargs_result_802A4DFC_EF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A4DFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A3238(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A3238_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001DA gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A3238 func_802A3238 preserves=true fpr_mask=0x00000000
