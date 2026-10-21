#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D68EC_ra28_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802D68ECu);
    goto loc_802D68EC;

loc_802D68EC:
{
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 369), 0, 204u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 171u, (r3 + 540));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D68F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D6900;
    }
}

loc_802D68FC:
{
    r5 = (r5 | 1);
}

loc_802D6900:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 203u, (r3 + 572));
}

loc_802D6908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D6914;
    }
}

loc_802D690C:
{
    r0 = (r5 | 8192);
    r5 = (r0 & 65535);
}

loc_802D6914:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 195u, (r3 + 564));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 196u, (r3 + 565));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D6930:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D693C;
    }
}

loc_802D6934:
{
    r0 = (r5 | 16);
    r5 = (r0 & 65535);
}

loc_802D693C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 199u, (r3 + 568));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 200u, (r3 + 569));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D6958:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D6964;
    }
}

loc_802D695C:
{
    r0 = (r5 | 64);
    r5 = (r0 & 65535);
}

loc_802D6964:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 369));
}

loc_802D696C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802D69BC;
    }
}

loc_802D6970:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r3 + 370));
}

loc_802D6978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802D69A8;
    }
}

loc_802D697C:
{
}

loc_802D6980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_802D69A8;
    }
}

loc_802D6984:
{
}

loc_802D6988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802D69B0;
    }
}

loc_802D698C:
{
}

loc_802D6990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_802D69B0;
    }
}

loc_802D6994:
{
}

loc_802D6998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_802D69B8;
    }
}

loc_802D699C:
{
}

loc_802D69A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_802D69B8;
    }
}

loc_802D69A4:
{
    goto loc_802D69BC;
}

loc_802D69A8:
{
    r5 = (r5 | 4);
    goto loc_802D69BC;
}

loc_802D69B0:
{
    r5 = (r5 | 8);
    goto loc_802D69BC;
}

loc_802D69B8:
{
    r5 = (r5 | 2);
}

loc_802D69BC:
{
    r0 = (r5 & 65535);
    MemoryInline::FlatWrite32((r3 + 524), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_802D68EC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D68EC_ra28_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D68EC func_802D68EC preserves=true fpr_mask=0x00000000
