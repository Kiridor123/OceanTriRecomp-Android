#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B404(CpuContext* ctx);
extern "C" uint64_t func_8004B404_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004BA64(CpuContext* ctx);
extern "C" uint64_t func_8004BA64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004B4C4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004B4C4;

loc_8004B4C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    r3 = (r4 & 65535);
}

loc_8004B4F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004B57C;
    }
}

loc_8004B4FC:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
}

loc_8004B504:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004B57C;
    }
}

loc_8004B508:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8004B510:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004B55C;
    }
}

loc_8004B514:
{
    r4 = (r30 & 255);
}

loc_8004B51C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8004B55C;
    }
}

loc_8004B520:
{
    r3 = r28;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl1_0x8004AFC4:
{
}

loc_inl1_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8004AFD4;
    }
}

loc_inl1_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl1_cont_8004AFC4;
}

loc_inl1_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl1_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = (r29 & 65535);
    r5 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004BA64_B77 = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_B77);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_B77 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004B53C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8004B55C;
    }
}

loc_8004B540:
{
    r3 = (r29 & 65535);
    r4 = (r28 + 352);
    r5 = 8;
    ctx->lr = 0x8004B550u;
    if constexpr (KnownRegArgsCpuCall<0x8004B404u>(&func_8004B404)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004B404_EFD = func_8004B404_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B404_EFD);
        r4 = static_cast<uint32_t>(regargs_result_8004B404_EFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B404u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_8004B558:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8004B57C;
    }
}

loc_8004B55C:
{
    r3 = r28;
    r4 = (r30 & 255);
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl2_0x8004AFC4:
{
}

loc_inl2_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8004AFD4;
    }
}

loc_inl2_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl2_cont_8004AFC4;
}

loc_inl2_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl2_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = (r29 & 65535);
    r5 = 24;
    ctx->lr = 0x8004B578u;
    if constexpr (KnownRegArgsCpuCall<0x8004B404u>(&func_8004B404)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004B404_14CD = func_8004B404_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B404_14CD);
        r4 = static_cast<uint32_t>(regargs_result_8004B404_14CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B404u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_8004B57C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004B4C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004B4C4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B4C4 func_8004B4C4 preserves=true fpr_mask=0x00000000
