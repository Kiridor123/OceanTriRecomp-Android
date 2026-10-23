#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DF498(CpuContext* ctx);
extern "C" uint32_t func_803DF498_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803DF66C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803DF66C;

loc_803DF66C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 105u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r3 + 96), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 16), r0);
    MemoryInline::WriteResolved8(guest_range_0, 85u, (r3 + 97), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 86u, (r3 + 98), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 24), r0);
    MemoryInline::WriteResolved8(guest_range_0, 87u, (r3 + 99), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r3 + 100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 89u, (r3 + 101), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 36), r0);
    MemoryInline::WriteResolved8(guest_range_0, 90u, (r3 + 102), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 40), r0);
    MemoryInline::WriteResolved8(guest_range_0, 91u, (r3 + 103), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 48), r0);
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r3 + 105), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 52), r0);
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r3 + 106), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_0, 95u, (r3 + 107), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 60), r0);
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r3 + 108), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 64), r0);
    MemoryInline::WriteResolved8(guest_range_0, 97u, (r3 + 109), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 68), r0);
    MemoryInline::WriteResolved8(guest_range_0, 98u, (r3 + 110), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 72), r0);
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r3 + 111), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 76), r0);
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r3 + 112), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 80), r0);
    MemoryInline::WriteResolved8(guest_range_0, 101u, (r3 + 113), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 84), r0);
    MemoryInline::WriteResolved8(guest_range_0, 102u, (r3 + 114), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 88), r0);
    MemoryInline::WriteResolved8(guest_range_0, 103u, (r3 + 115), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 92), r0);
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r3 + 116), static_cast<uint8_t>(r0));
    r30 = 0;
    r31 = (r3 + 120);
}

loc_803DF734:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x803DF498u>(&func_803DF498)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803DF498_11B0 = func_803DF498_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_803DF498_11B0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803DF498u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r31 = (r31 + 164);
    r30 = (r30 + 1);
}

loc_803DF748:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_803DF734;
    }
}

loc_803DF74C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_803DF66C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803DF66C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803DF66C func_803DF66C preserves=true fpr_mask=0x00000000
