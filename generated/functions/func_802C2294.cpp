#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B1C4(CpuContext* ctx);
extern "C" uint64_t func_8007B1C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C2294_ra40_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];

    goto loc_802C2294;

loc_802C2294:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r4 = r3;
    r3 = (r1 + 8);
    r5 = 0;
    // inline leaf 0x80065290 (14 guest instruction(s))
}

loc_inl1_0x80065290:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_inl1_0x80065298:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x8006529C:
{
}

loc_inl1_0x800652A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x800652A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 * 12);
    r5 = (r6 + r0);
    goto loc_inl1_0x800652BC;
}

loc_inl1_0x800652B4:
{
    r5 = 0;
}

loc_inl1_0x800652BC:
{
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
}

loc_inl1_cont_80065290:
{
    // end of inlined leaf 0x80065290
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x802C22C8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_7FC = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_7FC);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_7FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C2294(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C2294_ra40_0_18_0(ctx, ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002042 gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2294 func_802C2294 preserves=true fpr_mask=0x00000000
