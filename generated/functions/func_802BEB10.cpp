#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BE84C(CpuContext* ctx);
extern "C" uint64_t func_802BE84C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802BEB10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802BEB10u);
    goto loc_802BEB10;

loc_802BEB10:
{
    r0 = 0;
    r5 = MemoryInline::FlatRead16((r3 + 1206));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite16((r3 + 1206), static_cast<uint16_t>(r5));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_802BEB28:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_802BEB34;
    }
}

loc_802BEB2C:
{
    MemoryInline::FlatWrite8((r3 + 1204), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1206), static_cast<uint16_t>(r0));
}

loc_802BEB34:
{
    r5 = MemoryInline::FlatRead16((r3 + 1226));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite16((r3 + 1226), static_cast<uint16_t>(r5));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_802BEB48:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_802BEB54;
    }
}

loc_802BEB4C:
{
    MemoryInline::FlatWrite8((r3 + 1224), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1226), static_cast<uint16_t>(r0));
}

loc_802BEB54:
{
    r5 = MemoryInline::FlatRead16((r3 + 1246));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite16((r3 + 1246), static_cast<uint16_t>(r5));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_802BEB68:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_802BEB74;
    }
}

loc_802BEB6C:
{
    MemoryInline::FlatWrite8((r3 + 1244), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1246), static_cast<uint16_t>(r0));
}

loc_802BEB74:
{
    r5 = (r4 & 255);
}

loc_802BEB7C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_802BEB88;
    }
}

loc_802BEB80:
{
    r4 = (r3 + 1232);
    if constexpr (KnownRegArgsCpuCall<0x802BE84Cu>(&func_802BE84C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BE84C_BAE = func_802BE84C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE84C_BAE);
        r4 = static_cast<uint32_t>(regargs_result_802BE84C_BAE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802BE84Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BEB88:
{
}

loc_802BEB8C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_802BEB98;
    }
}

loc_802BEB90:
{
    r4 = (r3 + 1212);
    if constexpr (KnownRegArgsCpuCall<0x802BE84Cu>(&func_802BE84C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BE84C_1299 = func_802BE84C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE84C_1299);
        r4 = static_cast<uint32_t>(regargs_result_802BE84C_1299 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802BE84Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BEB98:
{
    r4 = (r3 + 1192);
    if constexpr (KnownRegArgsCpuCall<0x802BE84Cu>(&func_802BE84C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BE84C_18FD = func_802BE84C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE84C_18FD);
        r4 = static_cast<uint32_t>(regargs_result_802BE84C_18FD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802BE84Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BEB10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BEB10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BEB10 func_802BEB10 preserves=true fpr_mask=0x00000000
