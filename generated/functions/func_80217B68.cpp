#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3B8(CpuContext* ctx);
extern "C" uint64_t func_8027E3B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EDD0(CpuContext* ctx);
extern "C" uint64_t func_8027EDD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80217B68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80217B68;

loc_80217B68:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_66A = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_66A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_80217BA0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80217BC8;
    }
}

loc_80217BA4:
{
}

loc_80217BA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80217C28;
    }
}

loc_80217BAC:
{
    r3 = (r29 & 255);
    r4 = (r30 & 65535);
    ctx->lr = 0x80217BB8u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3B8u>(&func_8027E3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3B8_AC3 = func_8027E3B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3B8_AC3);
        r4 = static_cast<uint32_t>(regargs_result_8027E3B8_AC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80217BBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80217C28;
    }
}

loc_80217BC0:
{
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80217C28;
}

loc_80217BC8:
{
    r3 = (r29 & 255);
    r4 = (r30 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x80217BDCu;
    if constexpr (KnownRegArgsCpuCall<0x8027EDD0u>(&func_8027EDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027EDD0_F49 = func_8027EDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EDD0_F49);
        r4 = static_cast<uint32_t>(regargs_result_8027EDD0_F49 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027EDD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 & 255);
    r0 = (r3 + -7);
}

loc_80217BE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80217C04;
    }
}

loc_80217BEC:
{
    r0 = (r3 + -11);
}

loc_80217BF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80217C18;
    }
}

loc_80217BF8:
{
    r0 = (r3 + -14);
}

loc_80217C00:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80217C28;
    }
}

loc_80217C04:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80217C0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80217C28;
    }
}

loc_80217C10:
{
    r31 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80217C28;
}

loc_80217C18:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80217C20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80217C28;
    }
}

loc_80217C24:
{
    r31 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80217C28:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80217B68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80217B68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80217B68 func_80217B68 preserves=true fpr_mask=0x00000000
