#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BF698(CpuContext* ctx);
extern "C" uint64_t func_802BF698_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C078C_rae0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_802C078C;

loc_802C078C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -6272);
    r0 = 0;
    r4 = (r0 * 368);
    r4 = (r3 + r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 328), 0, 1475u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 330), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 328), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 329), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 370u, (r4 + 698), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 368u, (r4 + 696), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 369u, (r4 + 697), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 738u, (r4 + 1066), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 736u, (r4 + 1064), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 737u, (r4 + 1065), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1106u, (r4 + 1434), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1104u, (r4 + 1432), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1105u, (r4 + 1433), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1474u, (r4 + 1802), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1472u, (r4 + 1800), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1473u, (r4 + 1801), static_cast<uint8_t>(r0));
    r4 = 5;
    r4 = (r4 * 368);
    r4 = (r3 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 328), 0, 1475u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 330), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 328), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 329), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 370u, (r4 + 698), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 368u, (r4 + 696), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 369u, (r4 + 697), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 738u, (r4 + 1066), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 736u, (r4 + 1064), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 737u, (r4 + 1065), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1106u, (r4 + 1434), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1104u, (r4 + 1432), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1105u, (r4 + 1433), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1474u, (r4 + 1802), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1472u, (r4 + 1800), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1473u, (r4 + 1801), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 4009), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 4008), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 4053), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 4052), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x802BF698u>(&func_802BF698)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BF698_10A9 = func_802BF698_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BF698_10A9);
        r4 = static_cast<uint32_t>(regargs_result_802BF698_10A9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802BF698u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C078C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C078C_rae0_0_18_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000E2 gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C078C func_802C078C preserves=true fpr_mask=0x00000000
