#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B5990(CpuContext* ctx);
extern "C" uint64_t func_802B5990_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE158(CpuContext* ctx);
extern "C" uint64_t func_802BE158_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_802BB17C_ra28_10_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, double arg_f4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x802BB17Cu);
    goto loc_802BB17C;

loc_802BB17C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = (r3 + 1020);
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13564));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13568));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13568));
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    r3 = 5;
    r4 = 2;
    ctx->lr = 0x802BB1F0u;
    if constexpr (KnownRegArgsCpuCall<0x802B5990u>(&func_802B5990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B5990_A8A = func_802B5990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B5990_A8A);
        r4 = static_cast<uint32_t>(regargs_result_802B5990_A8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B5990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 5;
    r4 = r30;
    r5 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    ctx->lr = 0x802BB208u;
    if constexpr (KnownRegArgsCpuCall<0x802BE158u>(&func_802BE158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE158_E49 = func_802BE158_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE158_E49);
        r4 = static_cast<uint32_t>(regargs_result_802BE158_E49 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BE158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 64), 0, 67u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 64), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 65), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 67), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 66), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r30 + 70), r31);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 68), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r30 + 100), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r30 + 101), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 126), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r30 + 127), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 64u, (r30 + 128), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r30 + 130), static_cast<uint8_t>(r31));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r30 + 136);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWrite32((r30 + 104), r31);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BB17C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BB17C_ra28_10_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000202E gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF0000010 fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BB17C func_802BB17C preserves=true fpr_mask=0x00000000
