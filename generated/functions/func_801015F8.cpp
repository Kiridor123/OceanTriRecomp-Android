#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801015F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x801015F8u);
    goto loc_801015F8;

loc_801015F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = 12;
    ctx->lr = 0x8010161Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_411 = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_411);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_411 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
}

loc_80101624:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801016B8;
    }
}

loc_80101628:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = 5;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r3 + 12), r31);
    r0 = 20;
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 48), r29);
    r0 = MemoryInline::FlatRead8((r29 + 22));
    MemoryInline::FlatWriteRam8((r3 + 68), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80101668:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8010168C;
    }
}

loc_8010166C:
{
    r3 = MemoryInline::FlatRead8((r29 + 1621));
    r0 = (r3 & 128);
}

loc_80101678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80101684;
    }
}

loc_8010167C:
{
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r31));
    goto loc_80101690;
}

loc_80101684:
{
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r3));
    goto loc_80101690;
}

loc_8010168C:
{
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r31));
}

loc_80101690:
{
    r3 = r30;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + 6044);
    MemoryInline::FlatWriteRam32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 6104);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_801016B8:
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

extern "C" void func_801015F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801015F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801015F8 func_801015F8 preserves=true fpr_mask=0x00000000
