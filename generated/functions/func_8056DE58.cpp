#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056DE58_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8056DE58u);
    goto loc_8056DE58;

loc_8056DE58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 7u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r0 = -1;
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = 0;
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
}

loc_8056DE84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056DE88:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r6 = 1;
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r5));
    goto loc_8056DF60;
}

loc_8056DE98:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r8 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8056DEA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DEF0;
    }
}

loc_8056DEA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DEBC;
    }
}

loc_8056DEAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8056DEB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DEC8;
    }
}

loc_8056DEB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DEDC;
    }
}

loc_8056DEB8:
{
    goto loc_8056DF14;
}

loc_8056DEBC:
{
}

loc_8056DEC0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(4))) {
        goto loc_8056DF14;
    }
}

loc_8056DEC4:
{
    goto loc_8056DF04;
}

loc_8056DEC8:
{
    r5 = (r7 * 108);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = (r7 + r5);
    r8 = MemoryInline::FlatRead32((r5 + 24));
    goto loc_8056DF14;
}

loc_8056DEDC:
{
    r5 = (r7 * 108);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = (r7 + r5);
    r8 = MemoryInline::FlatRead32((r5 + 28));
    goto loc_8056DF14;
}

loc_8056DEF0:
{
    r5 = (r7 * 108);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = (r7 + r5);
    r8 = MemoryInline::FlatRead32((r5 + 32));
    goto loc_8056DF14;
}

loc_8056DF04:
{
    r5 = (r7 * 108);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = (r7 + r5);
    r8 = MemoryInline::FlatRead32((r5 + 36));
}

loc_8056DF14:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    goto loc_8056DF40;
}

loc_8056DF24:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r5 = (r8 & r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056DF34:
{
    r5 = MemoryInline::FlatRead8((r3 + 5));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
}

loc_8056DF40:
{
    r7 = MemoryInline::FlatRead8((r3 + 5));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_8056DF4C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(8))) {
        goto loc_8056DF24;
    }
}

loc_8056DF50:
{
    r5 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r5));
}

loc_8056DF60:
{
    r7 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8056DF68:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(1))) {
        goto loc_8056DE98;
    }
}

loc_8056DF6C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_8056DE58(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8056DE58_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056DE58 func_8056DE58 preserves=true fpr_mask=0x00000000
