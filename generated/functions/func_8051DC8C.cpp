#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051DC8C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r6_addr_dcbz_0 = 0;
    uint32_t r6_addr_dcbz_1 = 0;
    uint32_t r6_addr_dcbz_2 = 0;
    uint32_t r6_addr_dcbz_3 = 0;
    uint32_t r6_addr_dcbz_4 = 0;
    uint32_t r6_addr_dcbz_5 = 0;
    uint32_t r6_addr_dcbz_6 = 0;
    uint32_t r6_addr_dcbz_al_0 = 0;
    uint32_t r6_addr_dcbz_al_1 = 0;
    uint32_t r6_addr_dcbz_al_2 = 0;
    uint32_t r6_addr_dcbz_al_3 = 0;
    uint32_t r6_addr_dcbz_al_4 = 0;
    uint32_t r6_addr_dcbz_al_5 = 0;
    uint32_t r6_addr_dcbz_al_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r8_subfic_ra_0 = 0;
    uint32_t r8_subfic_ra_1 = 0;
    uint32_t r8_subfic_ra_2 = 0;
    uint32_t r8_subfic_ra_3 = 0;
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

    goto loc_8051DC8C;

loc_8051DC8C:
{
}

loc_8051DC90:
{
    r9 = r3;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8051DC98:
{
}

loc_8051DC9C:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4_mrot_0 = (r4_rot_0 & 65280);
    r4_mdest_0 = (r4 & -65281);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4_mrot_1 = (r4_rot_1 & -65536);
    r4_mdest_1 = (r4 & 65535);
    r4 = (r4_mdest_1 | r4_mrot_1);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(64))) {
        goto loc_8051DD54;
    }
}

loc_8051DCA8:
{
    r8 = (r3 & 31);
}

loc_8051DCAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8051DCF4;
    }
}

loc_8051DCB0:
{
    r8_subfic_ra_1 = r8;
    r8 = (32 - r8_subfic_ra_1);
    r7 = r3;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
}

loc_8051DCBC:
{
    r0 = (r8 & 3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051DCD4;
    }
}

loc_8051DCC4:
{
    ctr = r6;
}

loc_8051DCC8:
{
    MemoryInline::FlatWrite32(r7, r4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DCC8;
    }
}

loc_8051DCD4:
{
}

loc_8051DCD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051DCEC;
    }
}

loc_8051DCDC:
{
    ctr = r0;
}

loc_8051DCE0:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r4));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DCE0;
    }
}

loc_8051DCEC:
{
    r3 = (r3 + r8);
    r5 = (r5 - r8);
}

loc_8051DCF4:
{
}

loc_8051DCF8:
{
    r6 = r3;
    r7 = (r5 & -32);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8051DD1C;
    }
}

loc_8051DD08:
{
    ctr = r0;
}

loc_8051DD0C:
{
    r6_addr_dcbz_2 = r6;
    r6_addr_dcbz_al_2 = (r6_addr_dcbz_2 & -32);
    memset_zero_32(r6_addr_dcbz_al_2);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DD0C;
    }
}

loc_8051DD18:
{
    goto loc_8051DD4C;
}

loc_8051DD1C:
{
    ctr = r0;
}

loc_8051DD20:
{
    r6_addr_dcbz_4 = r6;
    r6_addr_dcbz_al_4 = (r6_addr_dcbz_4 & -32);
    memset_zero_32(r6_addr_dcbz_al_4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 28), r4);
    }
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DD20;
    }
}

loc_8051DD4C:
{
    r3 = (r3 + r7);
    r5 = (r5 - r7);
}

loc_8051DD54:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_4 & 1073741823);
}

loc_8051DD58:
{
    r0 = (r5 & 3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051DD70;
    }
}

loc_8051DD60:
{
    ctr = r6;
}

loc_8051DD64:
{
    MemoryInline::FlatWrite32(r3, r4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DD64;
    }
}

loc_8051DD70:
{
}

loc_8051DD74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051DD88;
    }
}

loc_8051DD78:
{
    ctr = r0;
}

loc_8051DD7C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DD7C;
    }
}

loc_8051DD88:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051DC8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051DC8C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051DC8C func_8051DC8C preserves=true fpr_mask=0x00000000
