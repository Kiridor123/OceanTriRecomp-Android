#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80449100(CpuContext* ctx);
extern "C" uint64_t func_80449100_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80449B00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80449B00u);
    goto loc_80449B00;

loc_80449B00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -16576));
}

loc_80449B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80449B20;
    }
}

loc_80449B18:
{
    r3 = 0;
    goto loc_80449C48;
}

loc_80449B20:
{
    r5 = MemoryInline::FlatRead32((r13 + -16564));
    r5 = MH3_TickLoad(r5, 2151979808);
}

loc_80449B28:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80449B3C;
    }
}

loc_80449B2C:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r13 + -16564), r0);
    r3 = 0;
    goto loc_80449C48;
}

loc_80449B3C:
{
    r0 = MemoryInline::FlatRead8((r13 + -16589));
}

loc_80449B44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80449B50;
    }
}

loc_80449B48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -16589), static_cast<uint8_t>(r0));
}

loc_80449B50:
{
    r0 = MemoryInline::FlatRead8((r13 + -21008));
}

loc_80449B58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80449B70;
    }
}

loc_80449B5C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16568));
}

loc_80449B64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80449B70;
    }
}

loc_80449B68:
{
    r3 = 1;
    goto loc_80449C48;
}

loc_80449B70:
{
    r0 = (r3 & 255);
    r5 = (r0 & 128);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r13 + -21008), static_cast<uint8_t>(r0));
    r6 = (r3 & 127);
    r5 = 0;
    MemoryInline::FlatWrite32((r13 + -16560), r5);
    MemoryInline::FlatWrite32((r13 + -16556), r5);
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -21004), r0);
    MemoryInline::FlatWrite32((r13 + -16552), r5);
    r0 = 3;
    MemoryInline::FlatWrite32((r13 + -21000), r0);
    MemoryInline::FlatWrite32((r13 + -20996), r0);
    r0 = -1;
    MemoryInline::FlatWrite32((r13 + -20992), r0);
    MemoryInline::FlatWrite32((r13 + -20988), r0);
    MemoryInline::FlatWrite8((r13 + -16548), static_cast<uint8_t>(r5));
    r0 = -20;
    MemoryInline::FlatWrite16((r13 + -20984), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r13 + -16547), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r13 + -20966), static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead32((r13 + -20980));
}

loc_80449BD8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80449C00;
    }
}

loc_80449BDC:
{
}

loc_80449BE0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80449C0C;
    }
}

loc_80449BE4:
{
}

loc_80449BE8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_80449C18;
    }
}

loc_80449BEC:
{
}

loc_80449BF0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_80449C24;
    }
}

loc_80449BF4:
{
}

loc_80449BF8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_80449C30;
    }
}

loc_80449BFC:
{
    goto loc_80449C38;
}

loc_80449C00:
{
    r3 = 2;
    r4 = 16;
    goto loc_80449C38;
}

loc_80449C0C:
{
    r3 = 0;
    r4 = 14;
    goto loc_80449C38;
}

loc_80449C18:
{
    r3 = 0;
    r4 = 6;
    goto loc_80449C38;
}

loc_80449C24:
{
    r3 = 3;
    r4 = 15;
    goto loc_80449C38;
}

loc_80449C30:
{
    r3 = 3;
    r4 = 6;
}

loc_80449C38:
{
    ctx->lr = 0x80449C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80449100u>(&func_80449100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80449100_1364 = func_80449100_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80449100_1364);
        r4 = static_cast<uint32_t>(regargs_result_80449100_1364 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80449100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 15;
    MemoryInline::FlatWrite32((r13 + -16564), r0);
    r3 = 1;
}

loc_80449C48:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80449B00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80449B00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80449B00 func_80449B00 preserves=true fpr_mask=0x00000000
