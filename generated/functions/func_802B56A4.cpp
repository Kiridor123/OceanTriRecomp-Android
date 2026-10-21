#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082C6C(CpuContext* ctx);
extern "C" uint64_t func_80082C6C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B5A5C(CpuContext* ctx);
extern "C" uint32_t func_802B5A5C_ra68_1f0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802B964C(CpuContext* ctx);
extern "C" uint64_t func_802B964C_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BA2C0(CpuContext* ctx);
extern "C" uint64_t func_802BA2C0_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BB17C(CpuContext* ctx);
extern "C" uint64_t func_802BB17C_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BBF44(CpuContext* ctx);
extern "C" uint64_t func_802BBF44_ra28_10_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802B56A4_ra38_1f0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802B56A4u);
    goto loc_802B56A4;

loc_802B56A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    MemoryInline::FlatWrite8((r3 + 1176), static_cast<uint8_t>(r4));
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 1178), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 1177), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = 0;
    ctx->lr = 0x802B56D8u;
    if constexpr (KnownRegArgsCpuCall<0x80082C6Cu>(&func_80082C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082C6C_90D = func_80082C6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80082C6C_90D);
        r4 = static_cast<uint32_t>(regargs_result_80082C6C_90D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80082C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    // inline leaf 0x802B7070 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1182), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1184), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1186), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1188), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1190), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802B7070
    r3 = r30;
    ctx->lr = 0x802B56E8u;
    if constexpr (KnownRegArgsCpuCall<0x802B5A5Cu>(&func_802B5A5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802B5A5C_E19 = func_802B5A5C_ra68_1f0_8_0(ctx, r3, r5, r6, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_802B5A5C_E19;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802B5A5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r30;
    ctx->lr = 0x802B56F0u;
    if constexpr (KnownRegArgsCpuCall<0x802B964Cu>(&func_802B964C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B964C_12C6 = func_802B964C_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802B964C_12C6);
        r4 = static_cast<uint32_t>(regargs_result_802B964C_12C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802B964Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    r3 = r30;
    ctx->lr = 0x802B56F8u;
    if constexpr (KnownRegArgsCpuCall<0x802BBF44u>(&func_802BBF44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BBF44_1632 = func_802BBF44_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BBF44_1632);
        r4 = static_cast<uint32_t>(regargs_result_802BBF44_1632 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BBF44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    r3 = r30;
    ctx->lr = 0x802B5700u;
    if constexpr (KnownRegArgsCpuCall<0x802BA2C0u>(&func_802BA2C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BA2C0_199E = func_802BA2C0_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BA2C0_199E);
        r4 = static_cast<uint32_t>(regargs_result_802BA2C0_199E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BA2C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    r3 = r30;
    ctx->lr = 0x802B5708u;
    if constexpr (KnownRegArgsCpuCall<0x802BB17Cu>(&func_802BB17C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BB17C_1D0A = func_802BB17C_ra28_10_18_0(ctx, r3, r5, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BB17C_1D0A);
        r4 = static_cast<uint32_t>(regargs_result_802BB17C_1D0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BB17Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 1172), 0, 100u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 1172), r31);
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r30 + 1244), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 1224), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 1204), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 1264), r31);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 1252), r31);
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r30 + 1256), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 96u, (r30 + 1268), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r30 + 1271), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B56A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B56A4_ra38_1f0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FF0 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B56A4 func_802B56A4 preserves=true fpr_mask=0x00000000
