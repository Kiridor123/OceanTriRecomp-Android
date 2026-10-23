#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_802A6AC8_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802A6AC8;

loc_802A6AC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = MemoryInline::FlatRead16(r3);
    r0 = (r5 & 12);
}

loc_802A6AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A6B6C;
    }
}

loc_802A6AEC:
{
    r6 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r5 & 4);
}

loc_802A6AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A6B24;
    }
}

loc_802A6AFC:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r6 = (r6 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_802A6B10:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802A6B48;
    }
}

loc_802A6B14:
{
    r4 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r4 + -1);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_802A6B48;
}

loc_802A6B24:
{
    r0 = 8;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r6 = (r6 + 1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A6B40:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_802A6B48;
    }
}

loc_802A6B44:
{
    r6 = 0;
}

loc_802A6B48:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A6B58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_802A6BBC;
    }
}

loc_802A6B5C:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r6));
    r3 = 3;
    ctx->lr = 0x802A6B68u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800DBC94_D0F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_D0F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_D0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802A6BBC;
}

loc_802A6B6C:
{
    r0 = (r5 & 3);
}

loc_802A6B74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A6B9C;
    }
}

loc_802A6B78:
{
    r3 = MemoryInline::FlatRead8((r3 + 6));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x802A6B90u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802A8F60_14A7 = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_14A7);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_14A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8F60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    goto loc_802A6BBC;
}

loc_802A6B9C:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A6BAC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_802A6BBC;
    }
}

loc_802A6BB0:
{
    r0 = (r4 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
}

loc_802A6BBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A6AC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A6AC8_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003EFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A6AC8 func_802A6AC8 preserves=true fpr_mask=0x00000000
