#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130D40(CpuContext* ctx);
extern "C" uint64_t func_80130D40_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint32_t func_801232F8_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801232F8;

loc_801232F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(148));
}

loc_80123300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80123304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80123398;
    }
}

loc_80123308:
{
}

loc_8012330C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(105))) {
        goto loc_80123358;
    }
}

loc_80123310:
{
}

loc_80123314:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(56))) {
        goto loc_80123338;
    }
}

loc_80123318:
{
}

loc_8012331C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(35))) {
        goto loc_8012332C;
    }
}

loc_80123320:
{
}

loc_80123324:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(23))) {
        goto loc_80123410;
    }
}

loc_80123328:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8012332C:
{
}

loc_80123330:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(40))) {
        goto loc_80123410;
    }
}

loc_80123334:
{
    goto loc_80123418;
}

loc_80123338:
{
}

loc_8012333C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(73))) {
        goto loc_8012334C;
    }
}

loc_80123340:
{
}

loc_80123344:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(68))) {
        goto loc_80123418;
    }
}

loc_80123348:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8012334C:
{
}

loc_80123350:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_80123418;
    }
}

loc_80123354:
{
    goto loc_80123410;
}

loc_80123358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_8012335C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80123360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80123384;
    }
}

loc_80123364:
{
}

loc_80123368:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(122))) {
        goto loc_80123378;
    }
}

loc_8012336C:
{
}

loc_80123370:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(120))) {
        goto loc_80123420;
    }
}

loc_80123374:
{
    goto loc_80123410;
}

loc_80123378:
{
}

loc_8012337C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(128))) {
        goto loc_80123418;
    }
}

loc_80123380:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80123384:
{
}

loc_80123388:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(147))) {
        goto loc_80123418;
    }
}

loc_8012338C:
{
}

loc_80123390:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(137))) {
        goto loc_return;
    }
}

loc_80123394:
{
    goto loc_80123418;
}

loc_80123398:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(176));
}

loc_8012339C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80123418;
    }
}

loc_801233A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801233DC;
    }
}

loc_801233A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(169));
}

loc_801233A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80123418;
    }
}

loc_801233AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801233C8;
    }
}

loc_801233B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(155));
}

loc_801233B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801233B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80123418;
    }
}

loc_801233BC:
{
}

loc_801233C0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(159))) {
        goto loc_return;
    }
}

loc_801233C4:
{
    goto loc_80123418;
}

loc_801233C8:
{
}

loc_801233CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(174))) {
        goto loc_return;
    }
}

loc_801233D0:
{
}

loc_801233D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(172))) {
        goto loc_80123418;
    }
}

loc_801233D8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_801233DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(182));
}

loc_801233E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80123418;
    }
}

loc_801233E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801233FC;
    }
}

loc_801233E8:
{
}

loc_801233EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(181))) {
        goto loc_return;
    }
}

loc_801233F0:
{
}

loc_801233F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(179))) {
        goto loc_80123418;
    }
}

loc_801233F8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_801233FC:
{
}

loc_80123400:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(211))) {
        goto loc_return;
    }
}

loc_80123404:
{
}

loc_80123408:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(195))) {
        goto loc_80123418;
    }
}

loc_8012340C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80123410:
{
    r4 = -15;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_80130D40_19A8 = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_19A8);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_19A8 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80123418:
{
    r4 = -50;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_80130D40_1D62 = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_1D62);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_1D62 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80123420:
{
    r4 = -200;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_80130D40_211D = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_211D);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_211D >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801232F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801232F8_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801232F8 func_801232F8 preserves=true fpr_mask=0x00000000
