#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80543230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80543230;

loc_80543230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80543234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054333C;
    }
}

loc_80543238:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054324C;
    }
}

loc_8054323C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80543240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054327C;
    }
}

loc_80543244:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054325C;
    }
}

loc_80543248:
{
    goto loc_8054333C;
}

loc_8054324C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_80543250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805432EC;
    }
}

loc_80543254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054333C;
    }
}

loc_80543258:
{
    goto loc_8054329C;
}

loc_8054325C:
{
}

loc_80543260:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(180))) {
        goto loc_8054326C;
    }
}

loc_80543264:
{
    r3 = 769;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054326C:
{
}

loc_80543270:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(96))) {
        goto loc_8054333C;
    }
}

loc_80543274:
{
    r3 = 768;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054327C:
{
}

loc_80543280:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(94))) {
        goto loc_8054328C;
    }
}

loc_80543284:
{
    r3 = 770;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054328C:
{
}

loc_80543290:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(168))) {
        goto loc_8054333C;
    }
}

loc_80543294:
{
    r3 = 776;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054329C:
{
}

loc_805432A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(96))) {
        goto loc_805432AC;
    }
}

loc_805432A4:
{
    r3 = 768;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432AC:
{
}

loc_805432B0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(180))) {
        goto loc_805432BC;
    }
}

loc_805432B4:
{
    r3 = 769;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432BC:
{
}

loc_805432C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(94))) {
        goto loc_805432CC;
    }
}

loc_805432C4:
{
    r3 = 770;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432CC:
{
}

loc_805432D0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(126))) {
        goto loc_805432DC;
    }
}

loc_805432D4:
{
    r3 = 771;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432DC:
{
}

loc_805432E0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(168))) {
        goto loc_8054333C;
    }
}

loc_805432E4:
{
    r3 = 776;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432EC:
{
}

loc_805432F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(96))) {
        goto loc_805432FC;
    }
}

loc_805432F4:
{
    r3 = 768;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805432FC:
{
}

loc_80543300:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(94))) {
        goto loc_8054330C;
    }
}

loc_80543304:
{
    r3 = 770;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054330C:
{
}

loc_80543310:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(126))) {
        goto loc_8054331C;
    }
}

loc_80543314:
{
    r3 = 771;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054331C:
{
}

loc_80543320:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(39))) {
        goto loc_8054332C;
    }
}

loc_80543324:
{
    r3 = 781;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054332C:
{
}

loc_80543330:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(34))) {
        goto loc_8054333C;
    }
}

loc_80543334:
{
    r3 = 782;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8054333C:
{
    r3 = r4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80543230_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80543230;

loc_80543230:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(5));
}

loc_80543234:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8054333C;
    }
}

loc_80543238:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8054324C;
    }
}

loc_8054323C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(3));
}

loc_80543240:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8054327C;
    }
}

loc_80543244:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8054325C;
    }
}

loc_80543248:
{
    goto loc_8054333C;
}

loc_8054324C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(7));
}

loc_80543250:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805432EC;
    }
}

loc_80543254:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8054333C;
    }
}

loc_80543258:
{
    goto loc_8054329C;
}

loc_8054325C:
{
}

loc_80543260:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(180))) {
        goto loc_8054326C;
    }
}

loc_80543264:
{
    cached_r3 = 769;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054326C:
{
}

loc_80543270:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(96))) {
        goto loc_8054333C;
    }
}

loc_80543274:
{
    cached_r3 = 768;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054327C:
{
}

loc_80543280:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(94))) {
        goto loc_8054328C;
    }
}

loc_80543284:
{
    cached_r3 = 770;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054328C:
{
}

loc_80543290:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(168))) {
        goto loc_8054333C;
    }
}

loc_80543294:
{
    cached_r3 = 776;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054329C:
{
}

loc_805432A0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(96))) {
        goto loc_805432AC;
    }
}

loc_805432A4:
{
    cached_r3 = 768;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432AC:
{
}

loc_805432B0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(180))) {
        goto loc_805432BC;
    }
}

loc_805432B4:
{
    cached_r3 = 769;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432BC:
{
}

loc_805432C0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(94))) {
        goto loc_805432CC;
    }
}

loc_805432C4:
{
    cached_r3 = 770;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432CC:
{
}

loc_805432D0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(126))) {
        goto loc_805432DC;
    }
}

loc_805432D4:
{
    cached_r3 = 771;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432DC:
{
}

loc_805432E0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(168))) {
        goto loc_8054333C;
    }
}

loc_805432E4:
{
    cached_r3 = 776;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432EC:
{
}

loc_805432F0:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(96))) {
        goto loc_805432FC;
    }
}

loc_805432F4:
{
    cached_r3 = 768;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805432FC:
{
}

loc_80543300:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(94))) {
        goto loc_8054330C;
    }
}

loc_80543304:
{
    cached_r3 = 770;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054330C:
{
}

loc_80543310:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(126))) {
        goto loc_8054331C;
    }
}

loc_80543314:
{
    cached_r3 = 771;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054331C:
{
}

loc_80543320:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(39))) {
        goto loc_8054332C;
    }
}

loc_80543324:
{
    cached_r3 = 781;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054332C:
{
}

loc_80543330:
{
    if ((static_cast<uint32_t>(cached_r4) != static_cast<uint32_t>(34))) {
        goto loc_8054333C;
    }
}

loc_80543334:
{
    cached_r3 = 782;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8054333C:
{
    cached_r3 = cached_r4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80543230 symbol=func_80543230_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80543230 func_80543230 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80543230_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80543230(ctx);
    return ctx->gpr[3];
}
