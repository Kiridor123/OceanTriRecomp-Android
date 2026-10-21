#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804D70B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804D70B0u);
    goto loc_804D70B0;

loc_804D70B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r12 = MemoryInline::FlatRead32((r3 + 1168));
}

loc_804D70D4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804D70E0;
    }
}

loc_804D70D8:
{
    ctr = r12;
    ctx->lr = 0x804D70E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_804D70E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_804D70EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D7100;
    }
}

loc_804D70F0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046DBC0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = (r3 + -2147483648);
    MemoryInline::FlatWrite32((r4 + 1156), r0);
}

loc_804D7100:
{
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_804D710C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804D7144;
    }
}

loc_804D7110:
{
    r3 = MemoryInline::FlatRead32((r3 + 1156));
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_D12 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_D12);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_D12 >> 32);
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r4 = MemoryInline::FlatRead32((r13 + -14896));
    r3 = MemoryInline::FlatRead32((r4 + 1156));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 2);
    MemoryInline::FlatWrite16((r4 + 1164), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r4 + 1156), r3);
    r4 = MemoryInline::FlatRead32((r13 + -14896));
    r3 = MemoryInline::FlatRead32((r4 + 1156));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r4 + 1166), static_cast<uint16_t>(r0));
}

loc_804D7144:
{
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_804D7150:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804D7240;
    }
}

loc_804D7154:
{
    r0 = MemoryInline::FlatRead32((r3 + 1152));
    r0 = (r0 * 576);
    r31 = (r3 + r0);
    r30 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046DBE0u>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1920));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1912));
    r5 = r29;
    r4 = 1127219200;
    goto loc_804D7200;
}

loc_804D7180:
{
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r5 = (r5 + -4);
    stackword5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryInline::FlatRead16((r3 + 1164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    stackword6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r0 = MemoryInline::FlatRead16((r3 + 1166));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r30 = (r30 + 4);
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead16((r3 + 1164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r3 + 1164), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead16((r3 + 1166));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r3 + 1166), static_cast<uint16_t>(r0));
}

loc_804D7200:
{
}

loc_804D7204:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D7180;
    }
}

loc_804D7208:
{
    r3 = r31;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_1D91 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1D91);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1D91 >> 32);
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046DAF0u>(ctx);
    r4 = MemoryInline::FlatRead32((r13 + -14896));
    r3 = MemoryInline::FlatRead32((r4 + 1152));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1152), r0);
    r3 = MemoryInline::FlatRead32((r13 + -14896));
    r0 = MemoryInline::FlatRead32((r3 + 1152));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r3 + 1152), r0);
}

loc_804D7240:
{
    r4 = MemoryInline::FlatRead32((r13 + -14896));
    r3 = MemoryInline::FlatRead32((r4 + 1160));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D70B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D70B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D70B0 func_804D70B0 preserves=true fpr_mask=0x00000000
