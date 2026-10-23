#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081A7D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8081A7D0;

loc_8081A7D0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r6 = 0x80660000u;
    r6 = (r6 + -21920);
    r3 = (r3 & 255);
    r0 = (r3 + -1);
    r0 = (r0 * 56);
    r3 = (r6 + r0);
    r6 = (r3 + 2524);
}

loc_8081A7FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081A894;
    }
}

loc_8081A800:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 17536));
    r0 = (r0 ^ -2147483648);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = 1127219200;
    stackword3 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    stackword5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17444));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r0 = 128;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17528));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r6 = (r6 + 4);
    ctx->lr = 0x8081A894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005AC3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8081A894:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081A7D0 func_8081A7D0 preserves=true fpr_mask=0x00000000
