#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80055F28_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_80055F28;

loc_80055F28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = 0;
    r5 = 56;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x90C60000u;
    MemoryInline::FlatWrite32((r30 + 16), r3);
    r4 = 0;
    r31 = 131072;
    r5 = (r31 + 12288);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r31 + 12288);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCC90_664 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_664);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_664 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 1), 0, 23u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 1), static_cast<uint8_t>(r3));
    r0 = 128;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 2), static_cast<uint8_t>(r0));
    r0 = 32;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r30 + 23), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 21), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 20), static_cast<uint8_t>(r3));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32392));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 7u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 7u, (r30 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 11u, (r30 + 12), f0.d);
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80055F28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80055F28_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80055F28 func_80055F28 preserves=true fpr_mask=0x00000000
