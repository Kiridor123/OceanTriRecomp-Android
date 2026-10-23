#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804560AC(CpuContext* ctx);
extern "C" uint64_t func_804560AC_ra30_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_80439DAC_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80439DAC;

loc_80439DAC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -4496));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = 1127219200;
    stackword4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 48), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4536));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    stackword6 = r31;
    MemoryInline::FlatWriteRam32((r1 + 56), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4532));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4528));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4524));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4520));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = 95;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = 85;
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = 75;
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 32);
    r4 = (r1 + 24);
    r5 = (r1 + 16);
    ctx->lr = 0x80439E5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -4516));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4512));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4532));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = MemoryInline::FlatRead32((r13 + -32680));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 32);
    r4 = (r1 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x80439EA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctx->lr = 0x80439EA4u;
    if constexpr (KnownRegArgsCpuCall<0x804560ACu>(&func_804560AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804560AC_1492 = func_804560AC_ra30_0_18_0(ctx, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804560AC_1492);
        r4 = static_cast<uint32_t>(regargs_result_804560AC_1492 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804560ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat64((r2 + -4496));
    r0 = (r3 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    stackword10 = r31;
    MemoryInline::FlatWriteRam32((r1 + 64), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4508));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80439ECC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80439ED8;
    }
}

loc_80439ED0:
{
    f1.d = f0.d;
    goto loc_80439EE8;
}

loc_80439ED8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80439EE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80439EE8;
    }
}

loc_80439EE4:
{
    f1.d = f0.d;
}

loc_80439EE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4512));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = 87;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = 192;
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = 145;
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 32);
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80439F2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80439DAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80439DAC_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FCE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80439DAC func_80439DAC preserves=true fpr_mask=0x00000000
