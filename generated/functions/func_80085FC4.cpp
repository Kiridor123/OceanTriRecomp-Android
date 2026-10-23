#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80085FC4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80085FC4;

loc_80085FC4:
{
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
}

loc_80085FD4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80085FD8:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
}

loc_80085FE4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80085FE8:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
}

loc_80085FF4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80085FF8:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
}

loc_80086004:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80086008:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
}

loc_80086014:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80086018:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
}

loc_80086024:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80086028:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
}

loc_80086034:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80086038:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
}

loc_80086044:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8008604C;
    }
}

loc_80086048:
{
    r6 = 1;
}

loc_8008604C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80085FC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80085FC4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085FC4 func_80085FC4 preserves=true fpr_mask=0x00000000
