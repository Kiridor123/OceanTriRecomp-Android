#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DB2D0(CpuContext* ctx);
extern "C" uint64_t func_802DB2D0_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802A05CC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802A05CC;

loc_802A05CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x806B0000u;
    r3 = (r31 + -4792);
    r4 = 0;
    r5 = 1632;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r31 = (r31 + -4792);
    MemoryInline::FlatWriteRam8((r31 + 17), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 833), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x802DE5B4 (10 guest instruction(s))
    r0 = (r3 & 255);
    r4 = (r0 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + -296);
    r3 = (r0 + r4);
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE5B4
    r3 = 1;
    // inline leaf 0x802DE5B4 (10 guest instruction(s))
    r0 = (r3 & 255);
    r4 = (r0 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + -296);
    r3 = (r0 + r4);
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE5B4
    ctx->lr = 0x802A0624u;
    if constexpr (KnownRegArgsCpuCall<0x802DB2D0u>(&func_802DB2D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DB2D0_A7B = func_802DB2D0_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_802DB2D0_A7B);
        r4 = static_cast<uint32_t>(regargs_result_802DB2D0_A7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DB2D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r30 = 0;
}

loc_802A0628:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_E1A = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_E1A);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_E1A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 804), r3);
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_10D2 = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_10D2);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_10D2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r29 = MemoryInline::FlatRead32((r31 + 804));
}

loc_802A064C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802A0684;
    }
}

loc_802A0650:
{
    r28 = 0;
    goto loc_802A0678;
}

loc_802A0658:
{
    r3 = r29;
    r4 = 0;
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r28 & 255);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    r29 = (r29 + 36);
}

loc_802A0678:
{
    r0 = MemoryInline::FlatRead32((r31 + 808));
}

loc_802A0680:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_802A0658;
    }
}

loc_802A0684:
{
    r31 = (r31 + 816);
    r30 = (r30 + 1);
}

loc_802A0690:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_802A0628;
    }
}

loc_802A0694:
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

extern "C" void func_802A05CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A05CC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A05CC func_802A05CC preserves=true fpr_mask=0x00000000
