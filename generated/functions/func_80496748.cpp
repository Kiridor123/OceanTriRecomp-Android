#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80496748_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80496748;

loc_80496748:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 2024;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80740000u;
    r3 = (r31 + -5120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    r0 = 2;
    r3 = (r4 * 124);
    r11 = (r31 + -5120);
    r7 = 3;
    r4 = 4;
    r8 = (r11 + r3);
    r5 = (r11 + 376);
    r6 = (r7 * 124);
    r7 = 6;
    r10 = (r8 + 376);
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 1), 0, 1979u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 383u, (r11 + 384), r10);
    r9 = (r0 * 124);
    r0 = 5;
    r6 = (r11 + r6);
    r8 = (r11 + r9);
    r6 = (r6 + 376);
    r3 = (r4 * 124);
    r4 = 7;
    r8 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 507u, (r11 + 508), r8);
    r8 = (r11 + r3);
    r9 = (r0 * 124);
    MemoryInline::WriteResolved32(guest_range_0, 631u, (r11 + 632), r6);
    r10 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 755u, (r11 + 756), r10);
    r0 = 8;
    r6 = (r7 * 124);
    r8 = (r11 + r9);
    r7 = 9;
    r8 = (r8 + 376);
    r3 = (r4 * 124);
    r6 = (r11 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 879u, (r11 + 880), r8);
    r4 = (r11 + 1492);
    r6 = (r6 + 376);
    r8 = (r11 + r3);
    r9 = (r0 * 124);
    MemoryInline::WriteResolved32(guest_range_0, 1003u, (r11 + 1004), r6);
    r10 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 1127u, (r11 + 1128), r10);
    r3 = 0;
    r6 = (r7 * 124);
    r8 = (r11 + r9);
    r0 = 2;
    r8 = (r8 + 376);
    r6 = (r11 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 1251u, (r11 + 1252), r8);
    r6 = (r6 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 1375u, (r11 + 1376), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1967u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1967u, (r11 + 1968), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1971u, (r11 + 1972), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r11 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 1977u, (r11 + 1978), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + -5120), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80496748(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80496748_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80496748 func_80496748 preserves=true fpr_mask=0x00000000
