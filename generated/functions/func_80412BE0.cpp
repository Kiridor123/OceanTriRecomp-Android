#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80412BE0_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
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

    MKW_GUEST_ENTER(0x80412BE0u);
    goto loc_80412BE0;

loc_80412BE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 69), 0, 39u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 19u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 23u, (r3 + 92), r31);
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r3 + 88), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 69), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 70), static_cast<uint8_t>(r31));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4664));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 3u, (r3 + 72), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 27u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 27u, (r3 + 96), r31);
        MemoryInline::WriteResolved32(guest_range_0, 31u, (r3 + 100), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 104), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 105), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 106), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 107), static_cast<uint8_t>(r31));
    r3 = (r3 + 984);
    r4 = 0;
    r5 = 11224;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r30 + 12208), r31);
    MemoryInline::FlatWrite32((r30 + 13016), r31);
    MemoryInline::FlatWrite32((r30 + 14868), r31);
    MemoryInline::FlatWrite32((r30 + 14864), r31);
    MemoryInline::FlatWrite8((r30 + 14872), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 14873), static_cast<uint8_t>(r31));
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

extern "C" void func_80412BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80412BE0_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80412BE0 func_80412BE0 preserves=true fpr_mask=0x00000000
