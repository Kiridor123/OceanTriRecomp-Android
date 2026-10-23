#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80521DB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80521DB0;

loc_80521DB0:
{
    r5 = MemoryInline::FlatRead8(r3);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(160));
}

loc_80521DBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521E50;
    }
}

loc_80521DC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80521DE8;
    }
}

loc_80521DC4:
{
}

loc_80521DC8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(133))) {
        goto loc_80521DDC;
    }
}

loc_80521DCC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(128));
}

loc_80521DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521E50;
    }
}

loc_80521DD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80521E38;
    }
}

loc_80521DD8:
{
    goto loc_80521E10;
}

loc_80521DDC:
{
}

loc_80521DE0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(135))) {
        goto loc_80521E38;
    }
}

loc_80521DE4:
{
    goto loc_80521E50;
}

loc_80521DE8:
{
}

loc_80521DEC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(237))) {
        goto loc_80521E04;
    }
}

loc_80521DF0:
{
}

loc_80521DF4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(235))) {
        goto loc_80521E50;
    }
}

loc_80521DF8:
{
}

loc_80521DFC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(224))) {
        goto loc_80521E38;
    }
}

loc_80521E00:
{
    goto loc_80521E20;
}

loc_80521E04:
{
}

loc_80521E08:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(256))) {
        goto loc_80521E10;
    }
}

loc_80521E0C:
{
    goto loc_80521E38;
}

loc_80521E10:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521E20:
{
    r5 = (r5 + 65536);
    r3 = 1;
    r0 = (r5 + -320);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521E38:
{
    r0 = (r5 + 17);
    r0 = (r0 & 255);
}

loc_80521E44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_80521E50;
    }
}

loc_80521E48:
{
}

loc_80521E4C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_80521E64;
    }
}

loc_80521E50:
{
    r0 = 95;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521E64:
{
}

loc_80521E68:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(253))) {
        goto loc_80521E80;
    }
}

loc_80521E6C:
{
    r0 = 95;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521E80:
{
    r0 = (r5 + 127);
    r0 = (r0 & 255);
}

loc_80521E8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80521E98;
    }
}

loc_80521E90:
{
    r0 = (r5 + -129);
    goto loc_80521F0C;
}

loc_80521E98:
{
    r0 = (r5 + 121);
    r0 = (r0 & 255);
}

loc_80521EA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(24))) {
        goto loc_80521EB0;
    }
}

loc_80521EA8:
{
    r0 = (r5 + -131);
    goto loc_80521F0C;
}

loc_80521EB0:
{
    r0 = (r5 + 32);
    r0 = (r0 & 255);
}

loc_80521EBC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_80521EC8;
    }
}

loc_80521EC0:
{
    r0 = (r5 + -195);
    goto loc_80521F0C;
}

loc_80521EC8:
{
    r0 = (r5 + 19);
    r0 = (r0 & 255);
}

loc_80521ED4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80521EE0;
    }
}

loc_80521ED8:
{
    r0 = (r5 + -197);
    goto loc_80521F0C;
}

loc_80521EE0:
{
    r0 = (r5 + 6);
    r0 = (r0 & 255);
}

loc_80521EEC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80521EF8;
    }
}

loc_80521EF0:
{
    r0 = (r5 + -208);
    goto loc_80521F0C;
}

loc_80521EF8:
{
    r0 = 95;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521F0C:
{
    r3 = (r3 + -64);
}

loc_80521F14:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(188))) {
        goto loc_80521F2C;
    }
}

loc_80521F18:
{
    r0 = 95;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521F2C:
{
    r0 = (r0 * 378);
    r5 = 0x80570000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r5 = (r5 + 21976);
    r0 = (r5 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_80521F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80521F64;
    }
}

loc_80521F50:
{
    r0 = 95;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80521F64:
{
    r3 = 2;
    r4 = 2;
    // inline leaf 0x80521AC0 (3 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80521AC0
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80521DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80521DB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80521DB0 func_80521DB0 preserves=true fpr_mask=0x00000000
