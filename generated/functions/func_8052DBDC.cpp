#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80504C20(CpuContext* ctx);
extern "C" void func_80504C20_ra68_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8052DBDC_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    MKW_GUEST_ENTER(0x8052DBDCu);
    goto loc_8052DBDC;

loc_8052DBDC:
{
    r11 = MemoryInline::FlatRead8(r4);
    r10 = MemoryInline::FlatRead8((r4 + 1));
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r8 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead8(r5);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 24), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 25), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 26), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 27), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 28), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 30), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 31), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80504C20u>(&func_80504C20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        func_80504C20_ra68_0_0_0(ctx, r3, r5, r6);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x80504C20u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return r4;
}

}

extern "C" void func_8052DBDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8052DBDC_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052DBDC func_8052DBDC preserves=true fpr_mask=0x00000000
