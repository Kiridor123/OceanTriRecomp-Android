#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80415760_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80415760;

loc_80415760:
{
}

loc_80415764:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(1))) {
        goto loc_804157C8;
    }
}

loc_80415768:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80415770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(195))) {
        goto loc_804157C8;
    }
}

loc_80415774:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_8041577C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(160))) {
        goto loc_804157C8;
    }
}

loc_80415780:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(191));
}

loc_80415784:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804157C8;
    }
}

loc_80415788:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804157A4;
    }
}

loc_8041578C:
{
    r0 = -59;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = -72;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_804157A4:
{
}

loc_804157A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(183))) {
        goto loc_804157C8;
    }
}

loc_804157AC:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (r3 + -32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_804157C8:
{
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 + -97);
    r0 = (r0 & 255);
}

loc_804157D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_804157EC;
    }
}

loc_804157DC:
{
    r0 = (r5 + -32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_804157EC:
{
}

loc_804157F0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80415890;
    }
}

loc_804157F4:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = (r3 + -33);
}

loc_80415800:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80415888;
    }
}

loc_80415804:
{
    r3 = 0x80600000u;
    r3 = (r3 + 12388);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80415858u:
        goto loc_80415858;
        break;
    case 0x80415888u:
        goto loc_80415888;
        break;
    case 0x80415828u:
        goto loc_80415828;
        break;
    case 0x8041584Cu:
        goto loc_8041584C;
        break;
    case 0x8041587Cu:
        goto loc_8041587C;
        break;
    case 0x80415864u:
        goto loc_80415864;
        break;
    case 0x80415870u:
        goto loc_80415870;
        break;
    case 0x80415834u:
        goto loc_80415834;
        break;
    case 0x80415840u:
        goto loc_80415840;
        break;
    case 0x8041581Cu:
        goto loc_8041581C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_8041581C:
{
    r0 = 65;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415828:
{
    r0 = 83;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415834:
{
    r0 = 83;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415840:
{
    r0 = 67;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_8041584C:
{
    r0 = 67;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415858:
{
    r0 = 73;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415864:
{
    r0 = 73;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415870:
{
    r0 = 90;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_8041587C:
{
    r0 = 79;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_80415894;
}

loc_80415888:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    goto loc_80415894;
}

loc_80415890:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
}

loc_80415894:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80415760(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80415760_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001B9 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80415760 func_80415760 preserves=true fpr_mask=0x00000000
