#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BC150(CpuContext* ctx);
extern "C" uint64_t func_804BC150_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BDA20(CpuContext* ctx);
extern "C" uint64_t func_804BDA20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_804BC630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804BC630;

loc_804BC630:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r1 + 8);
}

loc_804BC640:
{
    r30 = 0;
    r29 = r4;
    r28 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BC668;
    }
}

loc_804BC660:
{
    r30 = -4;
    goto loc_804BC6B0;
}

loc_804BC668:
{
    r3 = MemoryInline::FlatRead32((r13 + -20332));
    r4 = 64;
    r5 = 32;
    ctx->lr = 0x804BC678u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA20u>(&func_804BDA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804BDA20_825 = func_804BDA20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA20_825);
        r4 = static_cast<uint32_t>(regargs_result_804BDA20_825 >> 32);
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
        InvokeDirectCpu<0x804BDA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804BC67C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804BC68C;
    }
}

loc_804BC684:
{
    r30 = -22;
    goto loc_804BC6B0;
}

loc_804BC68C:
{
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r4 + 40), r5);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 8), r5);
}

loc_804BC6B0:
{
}

loc_804BC6B4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804BC72C;
    }
}

loc_804BC6B8:
{
    r31 = MemoryInline::FlatRead32((r1 + 8));
    r30 = 0;
}

loc_804BC6C4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804BC6D0;
    }
}

loc_804BC6C8:
{
    r30 = -4;
    goto loc_804BC718;
}

loc_804BC6D0:
{
    r3 = r28;
    r4 = 64;
    goto loc_804BC6E4;
}

loc_804BC6E0:
{
    r3 = (r3 + 1);
}

loc_804BC6E4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804BC6EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BC6FC;
    }
}

loc_804BC6F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804BC6F4:
{
    r4 = (r4 + -1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BC6E0;
    }
}

loc_804BC6FC:
{
    r4 = (r3 - r28);
    r3 = r28;
    r4 = (r4 + 1);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_11E5 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_11E5);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_11E5 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r28 + -2147483648);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 16), r29);
}

loc_804BC718:
{
}

loc_804BC71C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804BC72C;
    }
}

loc_804BC720:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x804BC728u;
    if constexpr (KnownRegArgsCpuCall<0x804BC150u>(&func_804BC150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        const auto regargs_result_804BC150_1650 = func_804BC150_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BC150_1650);
        r4 = static_cast<uint32_t>(regargs_result_804BC150_1650 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BC150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
}

loc_804BC72C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BC630 func_804BC630 preserves=true fpr_mask=0x00000000
