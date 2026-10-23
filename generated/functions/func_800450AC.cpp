#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80044FF4(CpuContext* ctx);
extern "C" uint64_t func_80044FF4_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800451DC(CpuContext* ctx);
extern "C" uint64_t func_800451DC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EDD00(CpuContext* ctx);
extern "C" uint64_t func_804EDD00_ra0_0_18_0(CpuContext*);
extern "C" void func_804F19F0(CpuContext* ctx);
extern "C" uint64_t func_804F19F0_ra0_0_18_0(CpuContext*);

extern "C" uint32_t func_800450AC_ra70_4_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[6] = arg_r6;

    goto loc_800450AC;

loc_800450AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80660000u;
    r3 = (r31 + -11504);
    r4 = 0;
    r5 = 440;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800450D4u;
    if constexpr (KnownRegArgsCpuCall<0x804F19F0u>(&func_804F19F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804F19F0_754 = func_804F19F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804F19F0_754);
        r4 = static_cast<uint32_t>(regargs_result_804F19F0_754 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804F19F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32672));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r13 + -32616), f0.d);
    r31 = (r31 + -11504);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32664));
    MemoryInline::FlatWriteRamFloat32((r31 + 208), f0.d);
    r3 = (r31 + 212);
    r4 = (r13 + -32656);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r3 = (r31 + 220);
    r4 = (r13 + -32648);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    r3 = (r31 + 228);
    r4 = (r13 + -17960);
    // inline leaf 0x800451C8 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x800451C8
    ctx->lr = 0x80045130u;
    if constexpr (KnownRegArgsCpuCall<0x804EDD00u>(&func_804EDD00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EDD00_1196 = func_804EDD00_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDD00_1196);
        r4 = static_cast<uint32_t>(regargs_result_804EDD00_1196 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EDD00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80045138:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80045144;
    }
}

loc_8004513C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32616));
    goto loc_80045148;
}

loc_80045144:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32612));
}

loc_80045148:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    MemoryInline::FlatWriteRamFloat32((r31 + 228), f0.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r31 + 232), f0.d);
    r3 = r31;
    ctx->lr = 0x80045160u;
    if constexpr (KnownRegArgsCpuCall<0x80044FF4u>(&func_80044FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80044FF4_1703 = func_80044FF4_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80044FF4_1703);
        r4 = static_cast<uint32_t>(regargs_result_80044FF4_1703 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80044FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 176), 0, 264u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 200), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 192), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 184), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 204), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 196), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 188), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 180), f0.d);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r31 + 436), r0);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r31 + 432), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r31 + 428), r0);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r31 + 424), r0);
    }
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32640));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32608));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r13 + -17952), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -17948), f0.d);
    ctx->lr = 0x800451B4u;
    if constexpr (KnownRegArgsCpuCall<0x800451DCu>(&func_800451DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800451DC_227F = func_800451DC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800451DC_227F);
        r4 = static_cast<uint32_t>(regargs_result_800451DC_227F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800451DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r4;
}

}

extern "C" void func_800450AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800450AC_ra70_4_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[2].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF6 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0000004 fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800450AC func_800450AC preserves=true fpr_mask=0x00000000
