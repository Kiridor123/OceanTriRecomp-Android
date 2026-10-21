#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80223EB8_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80223EB8u);
    goto loc_80223EB8;

loc_80223EB8:
{
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2506), 0, 2u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 2507), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (r4 + -4);
}

loc_80223ED4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80223F24;
    }
}

loc_80223ED8:
{
}

loc_80223EDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80223F0C;
    }
}

loc_80223EE0:
{
}

loc_80223EE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80223F18;
    }
}

loc_80223EE8:
{
}

loc_80223EEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_80223F30;
    }
}

loc_80223EF0:
{
}

loc_80223EF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_80223F3C;
    }
}

loc_80223EF8:
{
}

loc_80223EFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80223F48;
    }
}

loc_80223F00:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F0C:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F18:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F24:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F30:
{
    r0 = 7;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F3C:
{
    r0 = 8;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80223F48:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2506), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80223EB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80223EB8_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223EB8 func_80223EB8 preserves=true fpr_mask=0x00000000
