#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801148C4(CpuContext* ctx);
extern "C" uint64_t func_801148C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80114A80(CpuContext* ctx);
extern "C" uint64_t func_80114A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80112728_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80112728;

loc_80112728:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r31 = r4;
    r30 = r6;
    f31.d = f1.d;
    r4 = (r6 & 255);
    r0 = (r4 + -3);
}

loc_80112758:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8011277C;
    }
}

loc_8011275C:
{
    r0 = (r4 + -21);
}

loc_80112764:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80112790;
    }
}

loc_80112768:
{
}

loc_8011276C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(18))) {
        goto loc_80112790;
    }
}

loc_80112770:
{
}

loc_80112774:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(83))) {
        goto loc_80112790;
    }
}

loc_80112778:
{
    goto loc_801127A0;
}

loc_8011277C:
{
    r4 = (r5 & 255);
    r5 = 11;
    ctx->lr = 0x80112788u;
    if constexpr (KnownRegArgsCpuCall<0x80114A80u>(&func_80114A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114A80_821 = func_80114A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114A80_821);
        r4 = static_cast<uint32_t>(regargs_result_80114A80_821 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r3;
    goto loc_801127A0;
}

loc_80112790:
{
    r4 = (r5 & 255);
    r5 = 17;
    ctx->lr = 0x8011279Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114A80u>(&func_80114A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114A80_BD9 = func_80114A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114A80_BD9);
        r4 = static_cast<uint32_t>(regargs_result_80114A80_BD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r3;
}

loc_801127A0:
{
}

loc_801127A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801127EC;
    }
}

loc_801127A8:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r4 + 40), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r4 + 44), r0);
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r4 + 40), r0);
    r31 = MemoryInline::FlatRead32((r4 + 56));
    MemoryInline::FlatWrite8((r31 + 64), static_cast<uint8_t>(r30));
    r3 = (r4 + 24);
    r4 = MemoryInline::FlatRead8((r4 + 68));
    ctx->lr = 0x801127E4u;
    if constexpr (KnownRegArgsCpuCall<0x801148C4u>(&func_801148C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801148C4_1244 = func_801148C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801148C4_1244);
        r4 = static_cast<uint32_t>(regargs_result_801148C4_1244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801148C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteFloat32((r31 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f31.d);
}

loc_801127EC:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80112728(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80112728_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80112728 func_80112728 preserves=true fpr_mask=0x00000000
