#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8052A0E0_ra108_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r8)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[8] = arg_r8;

    MKW_GUEST_ENTER(0x8052A0E0u);
    goto loc_8052A0E0;

loc_8052A0E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = (r3 * 680);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 32;
    r0 = MemoryInline::FlatRead32((r13 + -13336));
    r7 = (r0 + r6);
    r0 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 12), 0, 607u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r7 + 76), static_cast<uint8_t>(r5));
    r3 = (r7 + 624);
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r7 + 78), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r7 + 79), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r7 + 80), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 69u, (r7 + 81), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 70u, (r7 + 82), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 71u, (r7 + 83), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 585u, (r7 + 597), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r4 = (r4 + r6);
    MemoryInline::FlatWrite32((r4 + 604), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r7 + 16), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 596u, (r7 + 608), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 597u, (r7 + 609), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 598u, (r7 + 610), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 599u, (r7 + 611), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 600u, (r7 + 612), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 601u, (r7 + 613), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 606u, (r7 + 618), static_cast<uint8_t>(r5));
    ctx->lr = 0x8052A15Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_C40 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_C40);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_C40 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 0;
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052A0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052A0E0_ra108_0_18_0(ctx, ctx->gpr[3], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000210A gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052A0E0 func_8052A0E0 preserves=true fpr_mask=0x00000000
