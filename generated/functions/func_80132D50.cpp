#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80107868(CpuContext* ctx);
extern "C" uint64_t func_80107868_ra98_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012E13C(CpuContext* ctx);
extern "C" uint32_t func_8012E13C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80135A54(CpuContext* ctx);
extern "C" uint64_t func_80135A54_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_80132D50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_80132D50;

loc_80132D50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 485));
    r4 = MemoryInline::FlatRead8((r31 + 486));
    if constexpr (KnownRegArgsCpuCall<0x8012E13Cu>(&func_8012E13C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E13C_602 = func_8012E13C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8012E13C_602;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E13Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80132D74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80132DA4;
    }
}

loc_80132D78:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 31);
}

loc_80132D8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80132DA4;
    }
}

loc_80132D90:
{
    r3 = r31;
    ctx->lr = 0x80132D98u;
    if constexpr (KnownRegArgsCpuCall<0x80135A54u>(&func_80135A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80135A54_9C8 = func_80135A54_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135A54_9C8);
        r4 = static_cast<uint32_t>(regargs_result_80135A54_9C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80135A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 516));
    ctx->lr = 0x80132DA4u;
    if constexpr (KnownRegArgsCpuCall<0x80107868u>(&func_80107868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80107868_D05 = func_80107868_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80107868_D05);
        r4 = static_cast<uint32_t>(regargs_result_80107868_D05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x80107868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80132DA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F9F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFC fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80132D50 func_80132D50 preserves=true fpr_mask=0x00000000
