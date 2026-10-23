#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021CCD8(CpuContext* ctx);
extern "C" uint64_t func_8021CCD8_rac8_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8021D60C(CpuContext* ctx);
extern "C" uint64_t func_8021D60C_ra188_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8021CC14_rac8_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r30_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8021CC14;

loc_8021CC14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 0x806B0000u;
    r31 = (r3 + -13296);
    r3 = (r31 + 36);
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r30 = (r30_rot_0 & -8);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead16((r3 + 6));
    ctx->lr = 0x8021CC60u;
    if constexpr (KnownRegArgsCpuCall<0x8021CCD8u>(&func_8021CCD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021CCD8_943 = func_8021CCD8_rac8_1e_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8021CCD8_943);
        r4 = static_cast<uint32_t>(regargs_result_8021CCD8_943 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8021CCD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 9), 0, 35u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r31 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 9), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 19u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r31 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 23u, (r31 + 32), r0);
    }
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r31 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r31 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 33u, (r31 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 31u, (r31 + 40), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->lr = 0x8021CCC0u;
    if constexpr (KnownRegArgsCpuCall<0x8021D60Cu>(&func_8021D60C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021D60C_148D = func_8021D60C_ra188_1fe_18_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021D60C_148D);
        r4 = static_cast<uint32_t>(regargs_result_8021D60C_148D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021D60Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8021CC14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021CC14_rac8_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FCE gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021CC14 func_8021CC14 preserves=true fpr_mask=0x00000000
