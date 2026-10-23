#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80468940_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80468940;

loc_80468940:
{
    r6 = 0x80610000u;
    r6 = (r6 + -2448);
    r7 = MemoryInline::FlatRead32((r6 + 56));
    ctr = r5;
}

loc_80468954:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_804689D0;
    }
}

loc_80468958:
{
    r6 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
}

loc_80468964:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(256))) {
        goto loc_8046896C;
    }
}

loc_80468968:
{
    goto loc_80468978;
}

loc_8046896C:
{
    r5 = MemoryInline::FlatRead32((r7 + 28));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead16(r5_addr_2);
}

loc_80468978:
{
    r0 = MemoryInline::FlatRead16(r4);
    r6 = (r6 & 65535);
    r4 = (r4 + 2);
}

loc_80468988:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80468990;
    }
}

loc_8046898C:
{
    goto loc_8046899C;
}

loc_80468990:
{
    r5 = MemoryInline::FlatRead32((r7 + 28));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 131070);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_4);
}

loc_8046899C:
{
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_804689A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804689B0;
    }
}

loc_804689A8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804689B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804689BC;
    }
}

loc_804689B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804689BC:
{
}

loc_804689C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804689CC;
    }
}

loc_804689C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804689CC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80468958;
    }
}

loc_804689D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80468940(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80468940_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80468940 func_80468940 preserves=true fpr_mask=0x00000000
