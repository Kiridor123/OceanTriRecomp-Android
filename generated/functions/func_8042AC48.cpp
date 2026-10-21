#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042AC48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8042AC48u);
    goto loc_8042AC48;

loc_8042AC48:
{
    r6 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r6 + 106), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8042AC64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8042AC68:
{
    r0 = MemoryInline::FlatRead32((r6 + 368));
}

loc_8042AC70:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8042ACEC;
    }
}

loc_8042AC74:
{
    r3 = MemoryInline::FlatRead32((r6 + 360));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
}

loc_8042AC84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042ACEC;
    }
}

loc_8042AC88:
{
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 144), 0, 197u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 144), r5);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 148), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 64), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 208), r5);
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 212), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 65), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 272), r5);
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r3 + 276), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 66), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 336), r5);
    MemoryInline::WriteResolved8(guest_range_0, 196u, (r3 + 340), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 67), static_cast<uint8_t>(r5));
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r6 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 144), r4);
    r3 = (r6 + 65536);
    MemoryInline::FlatWrite8((r3 + -15495), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r6 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r6 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
}

loc_8042ACEC:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r6 + 68), r3);
    r0 = 4;
    MemoryInline::FlatWrite8((r6 + 17), static_cast<uint8_t>(r0));
    r0 = 29;
    MemoryInline::FlatWrite8((r6 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 24), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042AC48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042AC48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042AC48 func_8042AC48 preserves=true fpr_mask=0x00000000
