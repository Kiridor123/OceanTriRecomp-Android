#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083B2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8083B2D0;

loc_8083B2D0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r4;
    r30 = MemoryInline::FlatRead32(r4);
    r3 = r30;
    // inline leaf 0x8083DFD0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // end of inlined leaf 0x8083DFD0
}

loc_8083B304:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8083B3A4;
    }
}

loc_8083B30C:
{
    r3 = r30;
    // inline leaf 0x80838670 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 67));
    // end of inlined leaf 0x80838670
}

loc_8083B318:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083B32C;
    }
}

loc_8083B31C:
{
    r3 = r30;
    // inline leaf 0x80838690 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    // end of inlined leaf 0x80838690
    f31.d = f1.d;
    goto loc_8083B338;
}

loc_8083B32C:
{
    r3 = r30;
    ctx->lr = 0x8083B334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80838440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31.d = f1.d;
}

loc_8083B338:
{
    r3 = r30;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    r0 = 1127219200;
    r3 = (r31 ^ -2147483648);
    stackword5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 18808));
    r3 = r30;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0 = (r4 + 1);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
}

loc_8083B3A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083B2D0 func_8083B2D0 preserves=true fpr_mask=0x00000000
