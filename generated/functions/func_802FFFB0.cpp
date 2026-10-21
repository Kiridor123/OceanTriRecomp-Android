#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802FFFB0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802FFFB0u);
    goto loc_802FFFB0;

loc_802FFFB0:
{
    r9 = -1;
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FFFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FFFCC;
    }
}

loc_802FFFC0:
{
    r0 = (r6 & 255);
}

loc_802FFFC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80300018;
    }
}

loc_802FFFCC:
{
    r7 = r4;
    r8 = 0;
    r3 = (r5 & 65535);
    r0 = 10;
    ctr = r0;
}

loc_802FFFE0:
{
    r0 = MemoryInline::FlatRead16(r7);
}

loc_802FFFE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8030000C;
    }
}

loc_802FFFEC:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
}

loc_802FFFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030000C;
    }
}

loc_802FFFF8:
{
    r0 = (r6 & 255);
}

loc_80300000:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803000DC;
    }
}

loc_80300004:
{
    r9 = r8;
    goto loc_803000DC;
}

loc_8030000C:
{
    r7 = (r7 + 8);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802FFFE0;
    }
}

loc_80300018:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 74u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
}

loc_80300020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8030002C;
    }
}

loc_80300024:
{
    r9 = 0;
    goto loc_803000DC;
}

loc_8030002C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 12));
}

loc_80300034:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300040;
    }
}

loc_80300038:
{
    r9 = 1;
    goto loc_803000DC;
}

loc_80300040:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 20));
}

loc_80300048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300054;
    }
}

loc_8030004C:
{
    r9 = 2;
    goto loc_803000DC;
}

loc_80300054:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r4 + 28));
}

loc_8030005C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300068;
    }
}

loc_80300060:
{
    r9 = 3;
    goto loc_803000DC;
}

loc_80300068:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r4 + 36));
}

loc_80300070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8030007C;
    }
}

loc_80300074:
{
    r9 = 4;
    goto loc_803000DC;
}

loc_8030007C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r4 + 44));
}

loc_80300084:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300090;
    }
}

loc_80300088:
{
    r9 = 5;
    goto loc_803000DC;
}

loc_80300090:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r4 + 52));
}

loc_80300098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803000A4;
    }
}

loc_8030009C:
{
    r9 = 6;
    goto loc_803000DC;
}

loc_803000A4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r4 + 60));
}

loc_803000AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803000B8;
    }
}

loc_803000B0:
{
    r9 = 7;
    goto loc_803000DC;
}

loc_803000B8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r4 + 68));
}

loc_803000C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803000CC;
    }
}

loc_803000C4:
{
    r9 = 8;
    goto loc_803000DC;
}

loc_803000CC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r4 + 76));
}

loc_803000D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803000DC;
    }
}

loc_803000D8:
{
    r9 = 9;
}

loc_803000DC:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_802FFFB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802FFFB0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000389 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FFFB0 func_802FFFB0 preserves=true fpr_mask=0x00000000
