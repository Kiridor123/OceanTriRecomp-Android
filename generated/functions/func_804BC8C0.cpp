#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BC150(CpuContext* ctx);
extern "C" uint64_t func_804BC150_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BDA20(CpuContext* ctx);
extern "C" uint64_t func_804BDA20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804BC8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804BC8C0;

loc_804BC8C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r1 + 8);
}

loc_804BC8D0:
{
    r31 = 0;
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BC8EC;
    }
}

loc_804BC8E4:
{
    r31 = -4;
    goto loc_804BC934;
}

loc_804BC8EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -20332));
    r4 = 64;
    r5 = 32;
    ctx->lr = 0x804BC8FCu;
    if constexpr (KnownRegArgsCpuCall<0x804BDA20u>(&func_804BDA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804BDA20_6DA = func_804BDA20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA20_6DA);
        r4 = static_cast<uint32_t>(regargs_result_804BDA20_6DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804BDA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804BC900:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804BC910;
    }
}

loc_804BC908:
{
    r31 = -22;
    goto loc_804BC934;
}

loc_804BC910:
{
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r4 + 40), r5);
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 8), r30);
}

loc_804BC934:
{
}

loc_804BC938:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804BC948;
    }
}

loc_804BC93C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x804BC944u;
    if constexpr (KnownRegArgsCpuCall<0x804BC150u>(&func_804BC150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804BC150_D31 = func_804BC150_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BC150_D31);
        r4 = static_cast<uint32_t>(regargs_result_804BC150_D31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x804BC150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = r3;
}

loc_804BC948:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BC8C0 func_804BC8C0 preserves=true fpr_mask=0x00000000
