#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3550_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_800F3550;

loc_800F3550:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 94), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 98), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 94), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 99), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 101), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 72));
}

loc_800F3574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F3578:
{
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_800F3580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F3584:
{
    r0 = 97;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 94), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_800F359C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F35AC;
    }
}

loc_800F35A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 69));
}

loc_800F35A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F35AC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 100), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_800F3550(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800F3550_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F3550 func_800F3550 preserves=true fpr_mask=0x00000000
