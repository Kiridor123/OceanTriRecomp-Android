#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8021DB94(CpuContext* ctx);
extern "C" uint64_t func_8021DB94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021E59C(CpuContext* ctx);
extern "C" uint64_t func_8021E59C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A0330(CpuContext* ctx);
extern "C" uint32_t func_802A0330_ra0_0_8_0(CpuContext*);

extern "C" void func_8021DC88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8021DC88;

loc_8021DC88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r31 = (r3 + -12984);
    r30 = 0;
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_8021DCB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021DCC8;
    }
}

loc_8021DCB8:
{
}

loc_8021DCBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8021DCC8;
    }
}

loc_8021DCC0:
{
}

loc_8021DCC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8021DCCC;
    }
}

loc_8021DCC8:
{
    r30 = 1;
}

loc_8021DCCC:
{
    if constexpr (KnownRegArgsCpuCall<0x802A0330u>(&func_802A0330)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802A0330_9A3 = func_802A0330_ra0_0_8_0(ctx);
        r3 = regargs_result_802A0330_9A3;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0330u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8021DCD4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8021DCF0;
    }
}

loc_8021DCD8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 782));
}

loc_8021DCE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021DCF0;
    }
}

loc_8021DCE8:
{
}

loc_8021DCEC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8021DCFC;
    }
}

loc_8021DCF0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 341), static_cast<uint8_t>(r0));
    goto loc_8021DD04;
}

loc_8021DCFC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 341), static_cast<uint8_t>(r0));
}

loc_8021DD04:
{
    r3 = MemoryInline::FlatRead32((r31 + 336));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r31 + 336), r0);
    ctx->lr = 0x8021DD14u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021DD18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021DDB8;
    }
}

loc_8021DD1C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r4 = MemoryInline::FlatRead8((r3 + 177));
}

loc_8021DD2C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_8021DD3C;
    }
}

loc_8021DD30:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
}

loc_8021DD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DD4C;
    }
}

loc_8021DD3C:
{
}

loc_8021DD40:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8021DD4C;
    }
}

loc_8021DD44:
{
}

loc_8021DD48:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_8021DD74;
    }
}

loc_8021DD4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021DD54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8021DD60;
    }
}

loc_8021DD58:
{
    r3 = 2;
    ctx->lr = 0x8021DD60u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DBCE8_1494 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_1494);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_1494 >> 32);
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
        InvokeDirectCpu<0x800DBCE8u>(ctx);
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
}

loc_8021DD60:
{
    r0 = -2;
    MemoryInline::FlatWriteRam16((r31 + 332), static_cast<uint16_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8021DB94u>(&func_8021DB94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021DB94_1A5B = func_8021DB94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021DB94_1A5B);
        r4 = static_cast<uint32_t>(regargs_result_8021DB94_1A5B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021DB94u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8021DDC8;
}

loc_8021DD74:
{
    if constexpr (KnownRegArgsCpuCall<0x802A0330u>(&func_802A0330)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802A0330_1DC8 = func_802A0330_ra0_0_8_0(ctx);
        r3 = regargs_result_802A0330_1DC8;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0330u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8021DD7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021DDC8;
    }
}

loc_8021DD80:
{
}

loc_8021DD84:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8021DDC8;
    }
}

loc_8021DD88:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 782));
}

loc_8021DD94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DDAC;
    }
}

loc_8021DD98:
{
    r4 = 0;
    r5 = 25;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl0_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl0_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl0_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl0_cont_8026FECC;
}

loc_inl0_0x8026FEF4:
{
    r3 = 0;
}

loc_inl0_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8021DDA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021DDC8;
    }
}

loc_8021DDAC:
{
    r3 = r31;
    ctx->lr = 0x8021DDB4u;
    if constexpr (KnownRegArgsCpuCall<0x8021E59Cu>(&func_8021E59C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021E59C_25DA = func_8021E59C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021E59C_25DA);
        r4 = static_cast<uint32_t>(regargs_result_8021E59C_25DA >> 32);
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
        InvokeDirectCpu<0x8021E59Cu>(ctx);
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
    goto loc_8021DDC8;
}

loc_8021DDB8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 341), static_cast<uint8_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8021DB94u>(&func_8021DB94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021DB94_2BC2 = func_8021DB94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021DB94_2BC2);
        r4 = static_cast<uint32_t>(regargs_result_8021DB94_2BC2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021DB94u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8021DDC8:
{
    r0 = MemoryInline::FlatRead16((r31 + 332));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021DDD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8021DDF4;
    }
}

loc_8021DDD4:
{
    r0 = MemoryInline::FlatRead8((r31 + 341));
}

loc_8021DDDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DDF4;
    }
}

loc_8021DDE0:
{
    r3 = 0x80220000u;
    r3 = (r3 + -4868);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80049240_312A = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_312A);
        r4 = static_cast<uint32_t>(regargs_result_80049240_312A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8021DDF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021DC88 func_8021DC88 preserves=true fpr_mask=0x00000000
