#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80318268_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80318268u);
    goto loc_80318268;

loc_80318268:
{
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 1u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    r0 = (r3 & 255);
}

loc_8031827C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803182B4;
    }
}

loc_80318280:
{
}

loc_80318284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803182BC;
    }
}

loc_80318288:
{
}

loc_8031828C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803182CC;
    }
}

loc_80318290:
{
}

loc_80318294:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803182E0;
    }
}

loc_80318298:
{
}

loc_8031829C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803182F4;
    }
}

loc_803182A0:
{
}

loc_803182A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80318304;
    }
}

loc_803182A8:
{
}

loc_803182AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80318318;
    }
}

loc_803182B0:
{
    goto loc_8031832C;
}

loc_803182B4:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r6));
    goto loc_80318334;
}

loc_803182BC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_803182CC:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_803182E0:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_803182F4:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_80318304:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_80318318:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80318334;
}

loc_8031832C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_80318334:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80318268(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80318268_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80318268 func_80318268 preserves=true fpr_mask=0x00000000
