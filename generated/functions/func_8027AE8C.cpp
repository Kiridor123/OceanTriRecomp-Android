#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8027AE8C_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8027AE8Cu);
    goto loc_8027AE8C;

loc_8027AE8C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r3 + 60);
    r4 = (r30 + 144);
    ctx->lr = 0x8027AEB4u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050F58_5E2 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_5E2);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_5E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14764));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8027AEBC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027AED0;
    }
}

loc_8027AEC4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8027AECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027AF04;
    }
}

loc_8027AED0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 180), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 144));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 148));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 152));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 160), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
    goto loc_8027AF80;
}

loc_8027AF04:
{
    MemoryInline::FlatWrite16((r30 + 180), static_cast<uint16_t>(r31));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r3 = (r0 ^ -2147483648);
    stackword4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    stackword6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 160), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
}

loc_8027AF80:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027AE8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027AE8C_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027AE8C func_8027AE8C preserves=true fpr_mask=0x00000000
