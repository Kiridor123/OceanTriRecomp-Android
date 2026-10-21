#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8082C580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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

    MKW_GUEST_ENTER(0x8082C580u);
    goto loc_8082C580;

loc_8082C580:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80840000u;
    r4 = 0x80830000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 0x80830000u;
    r0 = (r3 + 28);
    r6 = (r6 + 25912);
    r31 = 0;
    r4 = (r4 + -14736);
    r5 = (r5 + -25344);
    r30 = r3;
    r7 = 4;
    MemoryInline::FlatWrite32(r3, r6);
    r6 = 4;
    MemoryInline::FlatWrite32((r3 + 24), r31);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r3 = (r3 + 60);
    ctx->lr = 0x8082C5D8u;
    if constexpr (KnownRegArgsCpuCall<0x80457198u>(&func_80457198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_80457198_771 = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_771);
        r4 = static_cast<uint32_t>(regargs_result_80457198_771 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x80457198u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = 0x80840000u;
    r7 = 255;
    r4 = (r5 + 18584);
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r3 = MemoryInline::FlatRead32((r30 + 76));
    r5 = MemoryInline::FlatRead16((r5 + 18584));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r0 & 31);
    r6 = (r3 & 31);
    r10 = MemoryInline::FlatRead16((r4 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = MemoryInline::FlatRead16((r4 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r3 = (r30 + 4);
    r8 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r4 = 0;
    MemoryInline::FlatWrite16((r30 + 36), static_cast<uint16_t>(r5));
    r5 = 20;
    MemoryInline::FlatWrite16((r30 + 38), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r30 + 40), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r30 + 42), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r30 + 58), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r30 + 76), r6);
    MemoryInline::FlatWrite32((r30 + 80), r0);
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r30 + 88), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F0E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082C580 func_8082C580 preserves=true fpr_mask=0x00000000
