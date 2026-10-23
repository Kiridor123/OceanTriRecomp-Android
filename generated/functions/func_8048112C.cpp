#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8048112C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8048112C;

loc_8048112C:
{
    r4 = 0x80740000u;
    r5 = 0;
    r4 = (r4 + -17608);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 52), 0, 1134u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 281u, (r4 + 333));
}

loc_80481140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80481150;
    }
}

loc_80481144:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 52));
}

loc_8048114C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804811A8;
    }
}

loc_80481150:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 565u, (r4 + 617));
    r5 = 1;
}

loc_8048115C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048116C;
    }
}

loc_80481160:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 284u, (r4 + 336));
}

loc_80481168:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804811A8;
    }
}

loc_8048116C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 849u, (r4 + 901));
    r5 = 2;
}

loc_80481178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80481188;
    }
}

loc_8048117C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 568u, (r4 + 620));
}

loc_80481184:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804811A8;
    }
}

loc_80481188:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1133u, (r4 + 1185));
    r5 = 3;
}

loc_80481194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804811A4;
    }
}

loc_80481198:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 852u, (r4 + 904));
}

loc_804811A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804811A8;
    }
}

loc_804811A4:
{
    r5 = 4;
}

loc_804811A8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048112C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048112C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8048112C func_8048112C preserves=true fpr_mask=0x00000000
