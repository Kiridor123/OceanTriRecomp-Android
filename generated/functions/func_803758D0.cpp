#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045616C(CpuContext* ctx);
extern "C" uint64_t func_8045616C_rae0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804561C4(CpuContext* ctx);
extern "C" uint32_t func_804561C4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803758D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x803758D0u);
    goto loc_803758D0;

loc_803758D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806C0000u;
    r30 = (r3 + 6576);
    // inline leaf 0x804517B4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -15374));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x804517B4
}

loc_803758F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80375924;
    }
}

loc_803758FC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2225));
}

loc_8037590C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80375924;
    }
}

loc_80375910:
{
    r3 = r30;
    r4 = 0;
    r5 = 11960;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803759FC;
}

loc_80375924:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = (r30 + 4);
    r4 = 0;
    r5 = 1156;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 1160);
    r4 = 0;
    r5 = 3404;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 4564);
    r4 = 0;
    r5 = 530;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0;
    r31 = (r30 + 5094);
}

loc_80375970:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (r31 + 31);
    r29 = (r29 + 1);
}

loc_8037598C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(12))) {
        goto loc_80375970;
    }
}

loc_80375990:
{
    r31 = 0;
    MemoryInline::FlatWriteRam16((r30 + 5466), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r30 + 5468), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r30 + 5469), static_cast<uint8_t>(r31));
    r3 = (r30 + 5472);
    r4 = 0;
    r5 = 292;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 5764), 0, 44u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 5764), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 5768), r31);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r30 + 5772), r31);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r30 + 5774), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r30 + 5776), r31);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r30 + 5778), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 5780), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 5781), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 5782), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r30 + 5784), r31);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r30 + 5786), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r30 + 5788), r31);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r30 + 5790), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r30 + 5792), r31);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r30 + 5794), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r30 + 5796), r31);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r30 + 5798), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r30 + 5800), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 5804), r31);
}

loc_803759FC:
{
    ctx->lr = 0x80375A00u;
    if constexpr (KnownRegArgsCpuCall<0x8045616Cu>(&func_8045616C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045616C_1BF0 = func_8045616C_rae0_1fe_18_0(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045616C_1BF0);
        r4 = static_cast<uint32_t>(regargs_result_8045616C_1BF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8045616Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x80375A04u;
    if constexpr (KnownRegArgsCpuCall<0x804561C4u>(&func_804561C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        const auto regargs_result_804561C4_223B = func_804561C4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804561C4_223B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x804561C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_803758D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803758D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803758D0 func_803758D0 preserves=true fpr_mask=0x00000000
