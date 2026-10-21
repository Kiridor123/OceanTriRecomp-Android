#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045A764(CpuContext* ctx);
extern "C" uint64_t func_8045A764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8045A8C8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8045A8C8u);
    goto loc_8045A8C8;

loc_8045A8C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead16((r3 + 2));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r30 = r4;
    r3 = r30;
    ctx->lr = 0x8045A8ECu;
    if constexpr (KnownRegArgsCpuCall<0x8045A764u>(&func_8045A764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045A764_70A = func_8045A764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A764_70A);
        r4 = static_cast<uint32_t>(regargs_result_8045A764_70A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045A764u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8045A8F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_8045AA54;
    }
}

loc_8045A8F8:
{
}

loc_8045A8FC:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(36))) {
        goto loc_8045A904;
    }
}

loc_8045A900:
{
    r31 = 36;
}

loc_8045A904:
{
}

loc_8045A908:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_8045A9F0;
    }
}

loc_8045A90C:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8045A914:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_8045A9F0;
    }
}

loc_8045A918:
{
    r4 = (r30 + 5);
    r4_addr_1 = (r4 + r31);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r3 = (r4 + r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8045A928:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8045A934;
    }
}

loc_8045A92C:
{
    r4 = 1;
    goto loc_8045A990;
}

loc_8045A934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045A940;
    }
}

loc_8045A938:
{
    r4 = -1;
    goto loc_8045A990;
}

loc_8045A940:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
    r3 = (r3 + 1);
    r4 = (r4 + r0);
    r0 = (r4 - r3);
    ctr = r0;
}

loc_8045A958:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8045A978;
    }
}

loc_8045A95C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8045A964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A970;
    }
}

loc_8045A968:
{
    r4 = 1;
    goto loc_8045A990;
}

loc_8045A970:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A95C;
    }
}

loc_8045A978:
{
    r3 = (r31 + r30);
    r4 = -1;
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 1);
}

loc_8045A988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A990;
    }
}

loc_8045A98C:
{
    r4 = 1;
}

loc_8045A990:
{
}

loc_8045A994:
{
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r31));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8045A9F0;
    }
}

loc_8045A99C:
{
    r4 = (r30 + 5);
    r0 = 0;
    r5 = (r4 + r31);
    r5 = (r5 + -1);
}

loc_8045A9AC:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_8045A9B4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(9))) {
        goto loc_8045A9C4;
    }
}

loc_8045A9B8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_8045A9F0;
}

loc_8045A9C4:
{
}

loc_8045A9C8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_8045A9E4;
    }
}

loc_8045A9CC:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_8045A9F0;
}

loc_8045A9E4:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + -1);
    goto loc_8045A9AC;
}

loc_8045A9F0:
{
    r5 = 0;
    goto loc_8045AA0C;
}

loc_8045A9F8:
{
    r4 = MemoryInline::FlatRead8((r30 + 4));
    r3 = (r30 + r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
}

loc_8045AA0C:
{
    r3 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8045AA14:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r31))) {
        goto loc_8045A9F8;
    }
}

loc_8045AA18:
{
    r3 = (r3 + -1);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r5 = 0;
    r0 = (r0 - r3);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_8045AA48;
}

loc_8045AA34:
{
    r4 = (r30 + r5);
    r5 = (r5 + 1);
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (r3 + 48);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
}

loc_8045AA48:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8045AA50:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8045AA34;
    }
}

loc_8045AA54:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045A8C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045A8C8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045A8C8 func_8045A8C8 preserves=true fpr_mask=0x00000000
