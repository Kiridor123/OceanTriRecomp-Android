#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80220938_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_80220938;

loc_80220938:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r30 = (r4 + 18004);
    r31 = 1;
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 38), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r31));
    r3 = (r3 + 76);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 36), 0, 52u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r29 + 70), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r29 + 60), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r29 + 48), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 36), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r29 + 37), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r29 + 86), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r29 + 87), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead16((r29 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_802209B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802209C0;
    }
}

loc_802209B8:
{
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r29 + 44), static_cast<uint16_t>(r31));
    goto loc_802209C4;
}

loc_802209C0:
{
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r29 + 44), static_cast<uint16_t>(r4));
}

loc_802209C4:
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

extern "C" void func_80220938(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220938_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220938 func_80220938 preserves=true fpr_mask=0x00000000
