#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8026A608_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8026A608u);
    goto loc_8026A608;

loc_8026A608:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14988));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f2.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8026A630:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8026A640;
    }
}

loc_8026A634:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026A63C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026A64C;
    }
}

loc_8026A640:
{
    MemoryInline::FlatWriteFloat32((r3 + 136), f2.d);
    r3 = 0;
    goto loc_8026A674;
}

loc_8026A64C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 136), f2.d);
    r3 = 1;
}

loc_8026A674:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026A608(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026A608_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026A608 func_8026A608 preserves=true fpr_mask=0x00000000
