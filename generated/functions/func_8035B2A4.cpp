#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800490D4(CpuContext* ctx);
extern "C" uint64_t func_800490D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035AC7C(CpuContext* ctx);
extern "C" uint64_t func_8035AC7C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035AF48(CpuContext* ctx);
extern "C" uint64_t func_8035AF48_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8035B2A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_8035B2A4;

loc_8035B2A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r4 = (r3 + 3020);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    ctr = r0;
}

loc_8035B2D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8035B2F0;
    }
}

loc_8035B2D4:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_8035B2DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8035B2E8;
    }
}

loc_8035B2E0:
{
    ctx->lr = 0x8035B2E4u;
    if constexpr (KnownRegArgsCpuCall<0x8035AF48u>(&func_8035AF48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8035AF48_914 = func_8035AF48_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035AF48_914);
        r4 = static_cast<uint32_t>(regargs_result_8035AF48_914 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8035AF48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8035B2F0;
}

loc_8035B2E8:
{
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8035B2D4;
    }
}

loc_8035B2F0:
{
    r30 = (r29 + 12);
    r31 = 0;
}

loc_8035B2F8:
{
}

loc_8035B2FC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8035B314;
    }
}

loc_8035B300:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8035B308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8035B314;
    }
}

loc_8035B30C:
{
    r3 = r30;
    ctx->lr = 0x8035B314u;
    if constexpr (KnownRegArgsCpuCall<0x8035AC7Cu>(&func_8035AC7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8035AC7C_1206 = func_8035AC7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035AC7C_1206);
        r4 = static_cast<uint32_t>(regargs_result_8035AC7C_1206 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8035AC7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8035B314:
{
    r30 = (r30 + 188);
    r31 = (r31 + 1);
}

loc_8035B320:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(16))) {
        goto loc_8035B2F8;
    }
}

loc_8035B324:
{
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 3084), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 3084), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r29 + 3085), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r29 + 3086), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r29 + 3087), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r29 + 3088), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r29 + 3089), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r29 + 3090), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r29 + 3091), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r29 + 3092), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r29 + 3093), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r29 + 3094), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r29 + 3095), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r29 + 3096), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r29 + 3097), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r29 + 3098), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r29 + 3099), static_cast<uint8_t>(r0));
    r5 = 0;
    r4 = r29;
    goto loc_8035B3A4;
}

loc_8035B374:
{
    r3 = MemoryInline::FlatRead32((r4 + 3020));
}

loc_8035B37C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8035B39C;
    }
}

loc_8035B380:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8035B388:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8035B39C;
    }
}

loc_8035B38C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r5);
    MemoryInline::FlatWrite8((r3 + 3084), static_cast<uint8_t>(r0));
}

loc_8035B39C:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
}

loc_8035B3A4:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_8035B3AC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8035B374;
    }
}

loc_8035B3B0:
{
    r3 = 8;
    r4 = 0x80360000u;
    r4 = (r4 + -19308);
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800490D4u>(&func_800490D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800490D4_2101 = func_800490D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800490D4_2101);
        r4 = static_cast<uint32_t>(regargs_result_800490D4_2101 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800490D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035B2A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035B2A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8035B2A4 func_8035B2A4 preserves=true fpr_mask=0x00000000
