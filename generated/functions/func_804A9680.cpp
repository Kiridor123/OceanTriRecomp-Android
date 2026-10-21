#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A8D00(CpuContext* ctx);
extern "C" uint64_t func_804A8D00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804AED80(CpuContext* ctx);
extern "C" uint64_t func_804AED80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A9680_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x804A9680u);
    goto loc_804A9680;

loc_804A9680:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
    MemoryInline::FlatWrite32((r13 + -15692), r31);
    r0 = MemoryInline::FlatRead32((r13 + -15704));
}

loc_804A96A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A9728;
    }
}

loc_804A96A4:
{
    // inline leaf 0x804AE8D0 (4 guest instruction(s))
    r3 = 0x80750000u;
    r3 = (r3 + -28960);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x804AE8D0
    r0 = (r3 & 1);
}

loc_804A96AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A97F4;
    }
}

loc_804A96B0:
{
    r3 = 0x80750000u;
    r3 = (r3 + -30080);
    ctx->lr = 0x804A96BCu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_95C = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_95C);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_95C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r13 + -15704), r31);
    MemoryInline::FlatWrite32((r13 + -15704), r31);
    r0 = MemoryInline::FlatRead32((r13 + -15612));
}

loc_804A96CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804A96D8;
    }
}

loc_804A96D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15696), r0);
}

loc_804A96D8:
{
    r0 = MemoryInline::FlatRead32((r13 + -15632));
}

loc_804A96E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A96FC;
    }
}

loc_804A96E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804A96EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A97F4;
    }
}

loc_804A96F0:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_804A97F4;
}

loc_804A96FC:
{
    // inline leaf 0x804AED70 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x804AED70
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804A9708:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A971C;
    }
}

loc_804A970C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->lr = 0x804A9718u;
    if constexpr (KnownRegArgsCpuCall<0x804A8D00u>(&func_804A8D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A8D00_1118 = func_804A8D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A8D00_1118);
        r4 = static_cast<uint32_t>(regargs_result_804A8D00_1118 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804A8D00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    goto loc_804A97F4;
}

loc_804A971C:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -15724), r0);
    goto loc_804A97F4;
}

loc_804A9728:
{
    // inline leaf 0x804AE8D0 (4 guest instruction(s))
    r3 = 0x80750000u;
    r3 = (r3 + -28960);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x804AE8D0
    r0 = (r3 & 1);
}

loc_804A9730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A976C;
    }
}

loc_804A9734:
{
    r0 = MemoryInline::FlatRead32((r13 + -15632));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -15708), r31);
}

loc_804A9744:
{
    MemoryInline::FlatWrite32((r13 + -15704), r3);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A975C;
    }
}

loc_804A974C:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_804A97F4;
}

loc_804A975C:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_804A97F4;
}

loc_804A976C:
{
    // inline leaf 0x804AE8D0 (4 guest instruction(s))
    r3 = 0x80750000u;
    r3 = (r3 + -28960);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x804AE8D0
    r0 = (r3 & 4);
}

loc_804A9774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A97F4;
    }
}

loc_804A9778:
{
    r3 = 0x80750000u;
    r3 = (r3 + -30080);
    ctx->lr = 0x804A9784u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_1C8D = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_1C8D);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_1C8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r13 + -15708), r31);
    r3 = 0;
    ctx->lr = 0x804A9790u;
    if constexpr (KnownRegArgsCpuCall<0x804AED80u>(&func_804AED80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804AED80_1FDA = func_804AED80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804AED80_1FDA);
        r4 = static_cast<uint32_t>(regargs_result_804AED80_1FDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804AED80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    MemoryInline::FlatWrite32((r13 + -15704), r31);
    r0 = MemoryInline::FlatRead32((r13 + -15612));
}

loc_804A979C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804A97A8;
    }
}

loc_804A97A0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15696), r0);
}

loc_804A97A8:
{
    r0 = MemoryInline::FlatRead32((r13 + -15632));
}

loc_804A97B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A97CC;
    }
}

loc_804A97B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804A97BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A97F4;
    }
}

loc_804A97C0:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_804A97F4;
}

loc_804A97CC:
{
    // inline leaf 0x804AED70 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x804AED70
    r3 = MemoryInline::FlatRead32((r13 + -15600));
}

loc_804A97D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A97EC;
    }
}

loc_804A97DC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->lr = 0x804A97E8u;
    if constexpr (KnownRegArgsCpuCall<0x804A8D00u>(&func_804A8D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A8D00_2A07 = func_804A8D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A8D00_2A07);
        r4 = static_cast<uint32_t>(regargs_result_804A8D00_2A07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804A8D00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    goto loc_804A97F4;
}

loc_804A97EC:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -15724), r0);
}

loc_804A97F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

extern "C" void func_804A9680(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A9680_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A9680 func_804A9680 preserves=true fpr_mask=0x00000000
