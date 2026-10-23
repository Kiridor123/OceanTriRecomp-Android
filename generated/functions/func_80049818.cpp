#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80049818_rad0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    goto loc_80049818;

loc_80049818:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    r4 = 0;
    r5 = 24576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80049848:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17824), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14624), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14626), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14628), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14630), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14632), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14634), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14636), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14638), static_cast<uint16_t>(r4));
    r5 = (r5 + 16);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14624), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14626), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14628), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14630), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14632), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14634), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14636), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 14638), static_cast<uint16_t>(r4));
    r5 = (r5 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80049848;
    }
}

loc_80049914:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead16((r4 + 14624));
    MemoryInline::FlatWriteRam16((r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 14626));
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 14628));
    MemoryInline::FlatWriteRam16((r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 14630));
    MemoryInline::FlatWriteRam16((r3 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80049818(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80049818_rad0_0_18_0(ctx, ctx->gpr[4], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002012 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80049818 func_80049818 preserves=true fpr_mask=0x00000000
