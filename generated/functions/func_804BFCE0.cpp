#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BFCE0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_804BFCE0;

loc_804BFCE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804BFCEC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    r31 = r3;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804BFD7C;
    }
}

loc_804BFD08:
{
    r0 = (0 - r4);
}

loc_804BFD10:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_804BFD20;
    }
}

loc_804BFD14:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_804BFD6C;
}

loc_804BFD20:
{
}

loc_804BFD24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_804BFD34;
    }
}

loc_804BFD28:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_804BFD6C;
}

loc_804BFD34:
{
    r4 = (r4 + r6);
    r0 = (r7 - r6);
    r4 = (0 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r4 = (r4 ^ -2147483648);
    stackword5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword5));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_804BFD6C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_804BFDD8;
}

loc_804BFD7C:
{
}

loc_804BFD80:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_804BFD90;
    }
}

loc_804BFD84:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_804BFDD8;
}

loc_804BFD90:
{
}

loc_804BFD94:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r7))) {
        goto loc_804BFDA4;
    }
}

loc_804BFD98:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_804BFDD8;
}

loc_804BFDA4:
{
    r4 = (r4 - r6);
    r0 = (r7 - r6);
    r4 = (r4 ^ -2147483648);
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword7));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_804BFDD8:
{
}

loc_804BFDDC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804BFE54;
    }
}

loc_804BFDE0:
{
    r0 = (0 - r5);
}

loc_804BFDE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_804BFDF8;
    }
}

loc_804BFDEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_804BFE44;
}

loc_804BFDF8:
{
}

loc_804BFDFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_804BFE0C;
    }
}

loc_804BFE00:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_804BFE44;
}

loc_804BFE0C:
{
    r4 = (r5 + r6);
    r0 = (r7 - r6);
    r4 = (0 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r4 = (r4 ^ -2147483648);
    stackword9 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword9));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_804BFE44:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_804BFEB0;
}

loc_804BFE54:
{
}

loc_804BFE58:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_804BFE68;
    }
}

loc_804BFE5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_804BFEB0;
}

loc_804BFE68:
{
}

loc_804BFE6C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r7))) {
        goto loc_804BFE7C;
    }
}

loc_804BFE70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_804BFEB0;
}

loc_804BFE7C:
{
    r4 = (r5 - r6);
    r0 = (r7 - r6);
    r4 = (r4 ^ -2147483648);
    stackword11 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword11));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_804BFEB0:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BFECC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BFEF0;
    }
}

loc_804BFED0:
{
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_2169 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_2169);
        r4 = static_cast<uint32_t>(regargs_result_80468848_2169 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
}

loc_804BFEF0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BFCE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BFCE0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BFCE0 func_804BFCE0 preserves=true fpr_mask=0x00000000
