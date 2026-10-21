#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021DF60(CpuContext* ctx);
extern "C" uint64_t func_8021DF60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8021DFB4_ra18_8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x8021DFB4u);
    goto loc_8021DFB4;

loc_8021DFB4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 12;
    ctx->lr = 0x8021DFE8u;
    if constexpr (KnownRegArgsCpuCall<0x8021DF60u>(&func_8021DF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021DF60_5EB = func_8021DF60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8021DF60_5EB);
        r4 = static_cast<uint32_t>(regargs_result_8021DF60_5EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8021DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8021DFEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021E178;
    }
}

loc_8021DFF0:
{
    r3 = 4;
    ctx->lr = 0x8021DFF8u;
    if constexpr (KnownRegArgsCpuCall<0x8021DF60u>(&func_8021DF60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021DF60_937 = func_8021DF60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8021DF60_937);
        r4 = static_cast<uint32_t>(regargs_result_8021DF60_937 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8021DF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8021DFFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021E0BC;
    }
}

loc_8021E000:
{
}

loc_8021E004:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r31))) {
        goto loc_8021E048;
    }
}

loc_8021E008:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    goto loc_8021E200;
}

loc_8021E048:
{
    r0 = (-1 - r30);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15944));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15956));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    goto loc_8021E200;
}

loc_8021E0BC:
{
}

loc_8021E0C0:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r31))) {
        goto loc_8021E134;
    }
}

loc_8021E0C4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15944));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15956));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword4;
    goto loc_8021E200;
}

loc_8021E134:
{
    r0 = (-1 - r30);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword5;
    goto loc_8021E200;
}

loc_8021E178:
{
}

loc_8021E17C:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r31))) {
        goto loc_8021E1C0;
    }
}

loc_8021E180:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword6;
    goto loc_8021E200;
}

loc_8021E1C0:
{
    r0 = (-1 - r30);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15952));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15960));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword7;
}

loc_8021E200:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021DFB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021DFB4_ra18_8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000008 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021DFB4 func_8021DFB4 preserves=true fpr_mask=0x00000000
