#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042F2BC_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8042F2BC;

loc_8042F2BC:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4844), 0, 36u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 4876), static_cast<uint16_t>(r4));
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4844), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 4860), r4);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4848), r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 4864), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 4852), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 4868), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 4856), r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 4872), r4);
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_8042F2F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8042F314;
    }
}

loc_8042F2F4:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4844), r4);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4848), r0);
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 4852), r0);
    r0 = 4;
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 4878), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_8042F314:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4844), r0);
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 4878), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8042F2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042F2BC_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042F2BC func_8042F2BC preserves=true fpr_mask=0x00000000
