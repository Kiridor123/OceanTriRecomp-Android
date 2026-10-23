#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F1580(CpuContext* ctx);
extern "C" uint64_t func_804F1580_ra0_0_18_0(CpuContext*);

extern "C" void func_80827F80(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80827F80;

loc_80827F80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x80827F90u;
    if constexpr (KnownRegArgsCpuCall<0x804F1580u>(&func_804F1580)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804F1580_3DB = func_804F1580_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804F1580_3DB);
        r4 = static_cast<uint32_t>(regargs_result_804F1580_3DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804F1580u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 & 255);
    r0 = 1127219200;
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x80840000u;
    f3.d = MemoryInline::FlatReadFloat64((r3 + 18400));
    r4 = 0x80840000u;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 18432));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18428));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827F80 func_80827F80 preserves=true fpr_mask=0x00000000
