#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F15C0(CpuContext* ctx);
extern "C" uint32_t func_804F15C0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80827F20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80827F20;

loc_80827F20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = (r4 ^ -2147483648);
    r4 = 0x80840000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 18440));
    stackword2 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18468));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r3 = fctiwzword0;
    r3 = (r3 & 255);
    ctx->lr = 0x80827F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x804F15C0u>(&func_804F15C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804F15C0_6D3 = func_804F15C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804F15C0_6D3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804F15C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002012 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827F20 func_80827F20 preserves=true fpr_mask=0x00000000
