#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126120(CpuContext* ctx);
extern "C" uint64_t func_80126120_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80126144(CpuContext* ctx);
extern "C" uint64_t func_80126144_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8019E8A4(CpuContext* ctx);
extern "C" uint64_t func_8019E8A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B0940(CpuContext* ctx);
extern "C" uint32_t func_802B0940_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint32_t func_8019F0E0_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8019F0E0u);
    goto loc_8019F0E0;

loc_8019F0E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 481));
}

loc_8019F0FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8019F118;
    }
}

loc_8019F100:
{
    ctx->lr = 0x8019F104u;
    if constexpr (KnownRegArgsCpuCall<0x80126120u>(&func_80126120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126120_655 = func_80126120_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126120_655);
        r4 = static_cast<uint32_t>(regargs_result_80126120_655 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r31 + 2248), r3);
    r3 = r31;
    ctx->lr = 0x8019F110u;
    if constexpr (KnownRegArgsCpuCall<0x80126144u>(&func_80126144)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126144_9AF = func_80126144_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126144_9AF);
        r4 = static_cast<uint32_t>(regargs_result_80126144_9AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126144u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r31 + 2252), r3);
    goto loc_8019F158;
}

loc_8019F118:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8019F120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8019F140;
    }
}

loc_8019F124:
{
    r4 = 0x805B0000u;
    r0 = (r4 + 396);
    MemoryInline::FlatWrite32((r3 + 2248), r0);
    r4 = 0x805B0000u;
    r0 = (r4 + 968);
    MemoryInline::FlatWrite32((r3 + 2252), r0);
    goto loc_8019F158;
}

loc_8019F140:
{
    r4 = 0x805B0000u;
    r0 = (r4 + -4224);
    MemoryInline::FlatWrite32((r3 + 2248), r0);
    r4 = 0x805B0000u;
    r0 = (r4 + -1496);
    MemoryInline::FlatWrite32((r3 + 2252), r0);
}

loc_8019F158:
{
    r3 = r31;
    ctx->lr = 0x8019F160u;
    if constexpr (KnownRegArgsCpuCall<0x8019E8A4u>(&func_8019E8A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8019E8A4_F7F = func_8019E8A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8019E8A4_F7F);
        r4 = static_cast<uint32_t>(regargs_result_8019E8A4_F7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8019E8A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8019F164:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019F174;
    }
}

loc_8019F168:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21876));
    // inline leaf 0x802B0940 (12 guest instruction(s))
}

loc_inl0_0x802B0940:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3013));
}

loc_inl0_0x802B0950:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_inl0_0x802B095C;
    }
}

loc_inl0_0x802B0954:
{
}

loc_inl0_0x802B0958:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B095C:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_inl0_0x802B0964:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B0968:
{
    MemoryInline::FlatWriteRamFloat32((r3 + 10264), f1.d);
    goto loc_inl0_cont_802B0940;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B0940:
{
    // end of inlined leaf 0x802B0940
    goto loc_8019F17C;
}

loc_8019F174:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21880));
    if constexpr (KnownRegArgsCpuCall<0x802B0940u>(&func_802B0940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B0940_16FD = func_802B0940_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_802B0940_16FD;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802B0940u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8019F17C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_8019F0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8019F0E0_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000006F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019F0E0 func_8019F0E0 preserves=true fpr_mask=0x00000000
