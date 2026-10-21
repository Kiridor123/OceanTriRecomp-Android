#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F4280(CpuContext* ctx);
extern "C" uint64_t func_801F4280_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801F4394(CpuContext* ctx);
extern "C" uint64_t func_801F4394_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801F4394_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    MKW_GUEST_ENTER(0x801F4394u);
    goto loc_801F4394;

loc_801F4394:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 22), 0, 13u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 34), static_cast<uint8_t>(r0));
    r0 = (r4 & 65535);
}

loc_801F43BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F43EC;
    }
}

loc_801F43C0:
{
}

loc_801F43C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4430;
    }
}

loc_801F43C8:
{
}

loc_801F43CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4444;
    }
}

loc_801F43D0:
{
}

loc_801F43D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F4458;
    }
}

loc_801F43D8:
{
}

loc_801F43DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F446C;
    }
}

loc_801F43E0:
{
}

loc_801F43E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F4480;
    }
}

loc_801F43E8:
{
    goto loc_801F4490;
}

loc_801F43EC:
{
    r31 = 1;
}

loc_801F43F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r31 & 65535);
    ctx->lr = 0x801F43FCu;
    if constexpr (KnownRegArgsCpuCall<0x801F4280u>(&func_801F4280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F4280_B1C = func_801F4280_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4280_B1C);
        r4 = static_cast<uint32_t>(regargs_result_801F4280_B1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        InvokeDirectCpu<0x801F4280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F4400:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4410;
    }
}

loc_801F4404:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctx->lr = 0x801F4410u;
    if constexpr (KnownRegArgsCpuCall<0x801F4394u>(&func_801F4394)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F4394_FD8 = func_801F4394_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4394_FD8);
        r4 = static_cast<uint32_t>(regargs_result_801F4394_FD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        InvokeDirectCpu<0x801F4394u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F4410:
{
    r31 = (r31 + 1);
}

loc_801F4418:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(6))) {
        goto loc_801F43F0;
    }
}

loc_801F441C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r0));
    goto loc_801F4490;
}

loc_801F4430:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 372));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 32), static_cast<uint16_t>(r0));
    goto loc_801F4490;
}

loc_801F4444:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 324));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 32), static_cast<uint16_t>(r0));
    goto loc_801F4490;
}

loc_801F4458:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 336));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 32), static_cast<uint16_t>(r0));
    goto loc_801F4490;
}

loc_801F446C:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 348));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 32), static_cast<uint16_t>(r0));
    goto loc_801F4490;
}

loc_801F4480:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 360));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 30), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 32), r0);
    }
}

loc_801F4490:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F4394(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F4394_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F4394 func_801F4394 preserves=true fpr_mask=0x00000000
