#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9840(CpuContext* ctx);
extern "C" uint64_t func_804E9840_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804EA2A0_ra600_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r9 = arg_r9;
    uint32_t r10 = arg_r10;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804EA2A0;

loc_804EA2A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 8;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead8((r13 + -19593));
    r0 = MemoryInline::FlatRead8((r13 + -19591));
    r5 = (r3 & 15);
    r6 = MemoryInline::FlatRead8((r13 + -19592));
    r3 = MemoryInline::FlatRead8((r13 + -19590));
    r0 = (r0 & 7);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r5_mrot_0 = (r5_rot_0 & 240);
    r5_mdest_0 = (r5 & -241);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0_mrot_0 = (r0_rot_0 & 56);
    r0_mdest_0 = (r0 & -57);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = 224;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    r5 = 3;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EA2F4u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E9840_934 = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_934);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_934 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EA2A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EA2A0_ra600_0_18_0(ctx, ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002602 gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EA2A0 func_804EA2A0 preserves=true fpr_mask=0x00000000
