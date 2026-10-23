#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074AB8(CpuContext* ctx);
extern "C" uint64_t func_80074AB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800751D4(CpuContext* ctx);
extern "C" uint64_t func_800751D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800752BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_800752BC;

loc_800752BC:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
}

loc_800752E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800753D8;
    }
}

loc_800752E8:
{
    r3 = (r1 + 128);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 64);
    // inline leaf 0x800753F4 (1 guest instruction(s))
    // end of inlined leaf 0x800753F4
    r3 = r29;
    r4 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800753F8u>(ctx);
    r3 = r29;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800754A4u>(ctx);
    r3 = r29;
    ctx->lr = 0x80075318u;
    if constexpr (KnownRegArgsCpuCall<0x80074AB8u>(&func_80074AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074AB8_8B7 = func_80074AB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074AB8_8B7);
        r4 = static_cast<uint32_t>(regargs_result_80074AB8_8B7 >> 32);
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
        InvokeDirectCpu<0x80074AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r3 + 168));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31920));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31952));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80075364:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007537C;
    }
}

loc_80075368:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    goto loc_8007538C;
}

loc_8007537C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_8007538C:
{
    r3 = r29;
    r4 = (r1 + 40);
    r5 = (r1 + 44);
    r6 = (r1 + 48);
    r7 = (r1 + 52);
    r8 = (r1 + 56);
    r9 = (r1 + 60);
    ctx->lr = 0x800753ACu;
    if constexpr (KnownRegArgsCpuCall<0x800751D4u>(&func_800751D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800751D4_1402 = func_800751D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800751D4_1402);
        r4 = static_cast<uint32_t>(regargs_result_800751D4_1402 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x800751D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r1 + 128);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = (r1 + 8);
    r5 = (r1 + 40);
    r6 = r30;
    r7 = (r30 + 4);
    r8 = (r30 + 8);
    ctx->lr = 0x800753D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA8B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_800753D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800752BC func_800752BC preserves=true fpr_mask=0x00000000
