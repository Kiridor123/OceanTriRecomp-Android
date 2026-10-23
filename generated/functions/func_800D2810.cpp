#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2154(CpuContext* ctx);
extern "C" uint32_t func_800D2154_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800E4B70(CpuContext* ctx);
extern "C" uint64_t func_800E4B70_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8378(CpuContext* ctx);
extern "C" uint64_t func_800E8378_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8554(CpuContext* ctx);
extern "C" uint64_t func_800E8554_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E85BC(CpuContext* ctx);
extern "C" uint64_t func_800E85BC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E8698(CpuContext* ctx);
extern "C" uint64_t func_800E8698_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E874C(CpuContext* ctx);
extern "C" uint64_t func_800E874C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_803BEC54(CpuContext* ctx);
extern "C" uint64_t func_803BEC54_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800D2810_ra58_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
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
    uint32_t xer = ctx->xer;

    goto loc_800D2810;

loc_800D2810:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80690000u;
    r31 = (r3 + 30952);
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_800D2838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D2848;
    }
}

loc_800D283C:
{
}

loc_800D2840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800D28FC;
    }
}

loc_800D2844:
{
    goto loc_800D2940;
}

loc_800D2848:
{
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r29 = MemoryInline::FlatRead32((r30 + 2392));
    r3 = 0;
    r4 = (r29 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + -26711));
    ctx->lr = 0x800D2864u;
    if constexpr (KnownRegArgsCpuCall<0x800E8698u>(&func_800E8698)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E8698_DA1 = func_800E8698_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8698_DA1);
        r4 = static_cast<uint32_t>(regargs_result_800E8698_DA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E8698u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 0;
    r4 = (r29 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + -26710));
    ctx->lr = 0x800D2874u;
    if constexpr (KnownRegArgsCpuCall<0x800E8698u>(&func_800E8698)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E8698_1438 = func_800E8698_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8698_1438);
        r4 = static_cast<uint32_t>(regargs_result_800E8698_1438 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E8698u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 127;
    ctx->lr = 0x800D287Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E85BCu>(&func_800E85BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E85BC_1A89 = func_800E85BC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E85BC_1A89);
        r4 = static_cast<uint32_t>(regargs_result_800E85BC_1A89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E85BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r30 + 2224));
}

loc_800D2884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D28B0;
    }
}

loc_800D2888:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x80790000u;
    r3 = (r3 + 15056);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    ctx->lr = 0x800D28ACu;
    if constexpr (KnownRegArgsCpuCall<0x800E8554u>(&func_800E8554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E8554_1F97 = func_800E8554_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8554_1F97);
        r4 = static_cast<uint32_t>(regargs_result_800E8554_1F97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E8554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_800D28D4;
}

loc_800D28B0:
{
    r3 = 0;
    r4 = 18;
    ctx->lr = 0x800D28BCu;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803BEC54_22DD = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_22DD);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_22DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r3 = 0x80790000u;
    r3 = (r3 + 15056);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x800D28D4u;
    if constexpr (KnownRegArgsCpuCall<0x800E8554u>(&func_800E8554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E8554_26A9 = func_800E8554_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8554_26A9);
        r4 = static_cast<uint32_t>(regargs_result_800E8554_26A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E8554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800D28D4:
{
    r3 = 1;
    ctx->lr = 0x800D28DCu;
    if constexpr (KnownRegArgsCpuCall<0x800D2154u>(&func_800D2154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        const auto regargs_result_800D2154_29E4 = func_800D2154_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2154_29E4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800D2154u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x800D28E0u;
    if constexpr (KnownRegArgsCpuCall<0x800E8378u>(&func_800E8378)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E8378_2C9A = func_800E8378_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E8378_2C9A);
        r4 = static_cast<uint32_t>(regargs_result_800E8378_2C9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E8378u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x800D28E4u;
    if constexpr (KnownRegArgsCpuCall<0x800E4B70u>(&func_800E4B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E4B70_2F92 = func_800E4B70_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B70_2F92);
        r4 = static_cast<uint32_t>(regargs_result_800E4B70_2F92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E4B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_800D2940;
}

loc_800D28FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 6), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800D2910:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4))) {
        goto loc_800D292C;
    }
}

loc_800D2914:
{
    r3 = 65536;
    r3 = (r3 + -32768);
    r3 = (r3 & 65535);
    ctx->lr = 0x800D2924u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E874C_3577 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_3577);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_3577 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 1;
    goto loc_800D2944;
}

loc_800D292C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r0 = (r0_rot_1 & -32768);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r3 = (r0 & 65535);
    ctx->lr = 0x800D2940u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_800E874C_3BC5 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_3BC5);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_3BC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800D2940:
{
    r3 = 0;
}

loc_800D2944:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D2810(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D2810_ra58_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FDF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D2810 func_800D2810 preserves=true fpr_mask=0x00000000
