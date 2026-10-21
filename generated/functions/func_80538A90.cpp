#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80538A90_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80538A90u);
    goto loc_80538A90;

loc_80538A90:
{
    r5 = MemoryInline::FlatRead32(r3);
    r7 = 0;
    r0 = (r5 & 64);
}

loc_80538A9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80538AA4;
    }
}

loc_80538AA0:
{
    r7 = (r7 | 1);
}

loc_80538AA4:
{
    r0 = (r5 & 128);
}

loc_80538AA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80538AB0;
    }
}

loc_80538AAC:
{
    r7 = (r7 | 2);
}

loc_80538AB0:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r5 = (r4 * 12);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r6 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80538AC8:
{
    r0 = (r6 + r5);
    r4 = (r0 + r4);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80538B30;
    }
}

loc_80538AD8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 15);
}

loc_80538AE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80538B30;
    }
}

loc_80538AE4:
{
}

loc_80538AE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12289))) {
        goto loc_80538AF4;
    }
}

loc_80538AEC:
{
    r4 = 44;
    goto loc_80538B30;
}

loc_80538AF4:
{
}

loc_80538AF8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12290))) {
        goto loc_80538B04;
    }
}

loc_80538AFC:
{
    r4 = 46;
    goto loc_80538B30;
}

loc_80538B04:
{
}

loc_80538B08:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12540))) {
        goto loc_80538B14;
    }
}

loc_80538B0C:
{
    r4 = 45;
    goto loc_80538B30;
}

loc_80538B14:
{
}

loc_80538B18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12300))) {
        goto loc_80538B24;
    }
}

loc_80538B1C:
{
    r4 = 91;
    goto loc_80538B30;
}

loc_80538B24:
{
}

loc_80538B28:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(12301))) {
        goto loc_80538B30;
    }
}

loc_80538B2C:
{
    r4 = 93;
}

loc_80538B30:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80538A90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80538A90_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80538A90 func_80538A90 preserves=true fpr_mask=0x00000000
