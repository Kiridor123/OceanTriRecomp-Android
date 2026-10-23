#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805075D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805075D4;

loc_805075D4:
{
    r0 = MemoryInline::FlatRead16((r13 + -19504));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805075DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8050760C;
    }
}

loc_805075E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80507690;
    }
}

loc_805075E4:
{
}

loc_805075E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805075F0;
    }
}

loc_805075EC:
{
    goto loc_80507690;
}

loc_805075F0:
{
}

loc_805075F4:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_return;
    }
}

loc_805075FC:
{
}

loc_80507600:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_return;
    }
}

loc_80507604:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050760C:
{
}

loc_80507610:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(255))) {
        goto loc_8050761C;
    }
}

loc_80507614:
{
    r0 = 0;
    goto loc_80507644;
}

loc_8050761C:
{
}

loc_80507620:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_80507630;
    }
}

loc_80507628:
{
}

loc_8050762C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(126))) {
        goto loc_80507640;
    }
}

loc_80507630:
{
}

loc_80507634:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(161))) {
        goto loc_80507644;
    }
}

loc_80507638:
{
}

loc_8050763C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(223))) {
        goto loc_80507644;
    }
}

loc_80507640:
{
    r0 = 1;
}

loc_80507644:
{
}

loc_80507648:
{
    r3 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80507650:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 255);
    r4 = (r4 & 255);
}

loc_8050765C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(129))) {
        goto loc_80507680;
    }
}

loc_80507664:
{
}

loc_80507668:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(152))) {
        goto loc_80507680;
    }
}

loc_8050766C:
{
}

loc_80507670:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_80507680;
    }
}

loc_80507674:
{
}

loc_80507678:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_80507680;
    }
}

loc_8050767C:
{
    r0 = 1;
}

loc_80507680:
{
}

loc_80507684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80507688:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80507690:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805075D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805075D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805075D4 func_805075D4 preserves=true fpr_mask=0x00000000
