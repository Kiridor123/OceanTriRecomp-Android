#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056DD40_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8056DD40u);
    goto loc_8056DD40;

loc_8056DD40:
{
    r6 = MemoryInline::FlatRead32(r3);
}

loc_8056DD48:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8056DD54;
    }
}

loc_8056DD4C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DD54:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8056DD68;
    }
}

loc_8056DD60:
{
}

loc_8056DD64:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(8))) {
        goto loc_8056DD70;
    }
}

loc_8056DD68:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DD70:
{
    r5 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8056DD78:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(1))) {
        goto loc_8056DD84;
    }
}

loc_8056DD7C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DD84:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8056DD8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DE00;
    }
}

loc_8056DD90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DDA4;
    }
}

loc_8056DD94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056DD98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056DDB0;
    }
}

loc_8056DD9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056DDD8;
    }
}

loc_8056DDA0:
{
    goto loc_8056DE50;
}

loc_8056DDA4:
{
}

loc_8056DDA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_8056DE50;
    }
}

loc_8056DDAC:
{
    goto loc_8056DE28;
}

loc_8056DDB0:
{
    r0 = (r5 * 108);
    r3 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = (r4 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DDD8:
{
    r0 = (r5 * 108);
    r3 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r4 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DE00:
{
    r0 = (r5 * 108);
    r3 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DE28:
{
    r0 = (r5 * 108);
    r3 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r3 = (r4 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056DE50:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056DD40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056DD40_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056DD40 func_8056DD40 preserves=true fpr_mask=0x00000000
