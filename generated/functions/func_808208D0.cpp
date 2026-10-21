#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80475330(CpuContext* ctx);
extern "C" uint64_t func_80475330_ra68_100_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804DD280(CpuContext* ctx);
extern "C" double func_804DD280_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8081E8C0_statefree(uint32_t);

extern "C" void func_808208D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808208D0u);
    goto loc_808208D0;

loc_808208D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80840000u;
    r31 = (r31 + 17656);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808208FC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80820910;
    }
}

loc_80820900:
{
    r3 = 0;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x80820910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80820910:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470420u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r30 + 1572), static_cast<uint16_t>(r3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470430u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r30 + 1574), static_cast<uint16_t>(r3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470440u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r30 + 1576), static_cast<uint16_t>(r3));
    r3 = (r30 + 1580);
    r4 = (r30 + 1584);
    // inline leaf 0x80477740 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20728));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -20724));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x80477740
    r3 = (r30 + 1940);
    r4 = (r30 + 1944);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046F970u>(ctx);
    r3 = 0x80820000u;
    r4 = 0x80820000u;
    r3 = (r3 + -5936);
    r4 = (r4 + -5920);
    // inline leaf 0x80477730 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -20728), r3);
    MemoryInline::FlatWrite32((r13 + -20724), r4);
    // end of inlined leaf 0x80477730
    f3.d = MemoryInline::FlatReadFloat32((r31 + 736));
    r3 = (r30 + 1588);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 792));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 796));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 740));
    MemoryInline::FlatWriteFloat32((r30 + 1932), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 1924), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 1916), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 1928), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 1936), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 1920), f0.d);
    ctx->lr = 0x80820984u;
    if constexpr (KnownRegArgsCpuCall<0x80475330u>(&func_80475330)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        const auto regargs_result_80475330_116A = func_80475330_ra68_100_18_0(ctx, r3, r5, r6, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80475330_116A);
        r4 = static_cast<uint32_t>(regargs_result_80475330_116A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80475330u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = 0x80470000u;
    r4 = (r30 + 1588);
    r3 = (r3 + 21568);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046F820u>(ctx);
    r3 = 65536;
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470480u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470490u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808209C0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808209D4;
    }
}

loc_808209C4:
{
    r3 = 1;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x808209D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_808209D4:
{
    ctx->lr = 0x808209D8u;
    if constexpr (KnownRegArgsCpuCall<0x804DD280u>(&func_804DD280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804DD280_1CDA = func_804DD280_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD280_1CDA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DD280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8081E8C0u) && KnownTranslatedCpuCall<0x8081E8C0u>::kAvailable && !KnownTranslatedCpuCall<0x8081E8C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8081E8C0u>()) {
        const auto state_free_result_8081E8C0_223A = func_8081E8C0_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_8081E8C0_223A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8081E8C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 151), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808208D0 func_808208D0 preserves=true fpr_mask=0x00000000
