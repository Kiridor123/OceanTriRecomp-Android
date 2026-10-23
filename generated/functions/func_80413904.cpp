#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80417188(CpuContext* ctx);
extern "C" uint64_t func_80417188_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804171D4(CpuContext* ctx);
extern "C" uint64_t func_804171D4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80447314(CpuContext* ctx);
extern "C" uint64_t func_80447314_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80413904_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80413904;

loc_80413904:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x80413B98 (4 guest instruction(s))
    r4 = 0x80600000u;
    r0 = (r4 + 12856);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80413B98
    r3 = 0x80600000u;
    r0 = (r3 + 12840);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = (r30 + 28120);
    ctx->lr = 0x80413934u;
    if constexpr (KnownRegArgsCpuCall<0x80447314u>(&func_80447314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80447314_689 = func_80447314_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80447314_689);
        r4 = static_cast<uint32_t>(regargs_result_80447314_689 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80447314u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 4);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 8);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 12);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 16);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 20);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 28), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 28), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 29), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 31), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 44), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 48), r31);
    r0 = 22;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 52), r0);
    r0 = 5;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 56), r0);
    r3 = (r30 + 60);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 92);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 124);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 386);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 1675);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 648);
    r4 = 0;
    r5 = 1026;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r30 + 1674), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 1931), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 1932), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 33), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r30 + 36), r31);
    r3 = (r30 + 1933);
    r4 = 0;
    r5 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 2976);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 2977);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 2978);
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 2980);
    r4 = 0;
    r5 = 4096;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 7076);
    r4 = 0;
    r5 = 4096;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 11172);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 + 2976);
    MemoryInline::FlatWrite32((r30 + 2960), r0);
    r0 = (r30 + 2977);
    MemoryInline::FlatWrite32((r30 + 2964), r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 2968), r0);
    MemoryInline::FlatWrite32((r30 + 2972), r0);
    r3 = (r30 + 11548);
    r4 = 0;
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 11584);
    r4 = 0;
    r5 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 11601);
    r4 = 0;
    r5 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 11618);
    r4 = 0;
    r5 = 52;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    ctx->lr = 0x80413B00u;
    if constexpr (KnownRegArgsCpuCall<0x80417188u>(&func_80417188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80417188_21AB = func_80417188_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80417188_21AB);
        r4 = static_cast<uint32_t>(regargs_result_80417188_21AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80417188u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = 0;
}

loc_80413B04:
{
    r3 = r30;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    ctx->lr = 0x80413B10u;
    if constexpr (KnownRegArgsCpuCall<0x804171D4u>(&func_804171D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804171D4_2505 = func_804171D4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_804171D4_2505);
        r4 = static_cast<uint32_t>(regargs_result_804171D4_2505 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804171D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = (r31 + 1);
}

loc_80413B18:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80413B04;
    }
}

loc_80413B1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 28112), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 28113), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 28114), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4656));
    MemoryInline::FlatWriteFloat32((r30 + 28116), f0.d);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80413904(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80413904_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DE gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80413904 func_80413904 preserves=true fpr_mask=0x00000000
