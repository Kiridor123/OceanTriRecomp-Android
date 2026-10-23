#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AEFC(CpuContext* ctx);
extern "C" uint32_t func_8004AEFC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801EFDD8(CpuContext* ctx);
extern "C" uint64_t func_801EFDD8_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802146B8(CpuContext* ctx);
extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801EFF34_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_801EFF34;

loc_801EFF34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801EFF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AEFCu>(&func_8004AEFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AEFC_8DC = func_8004AEFC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AEFC_8DC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AEFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 100;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl0_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A8F8C;
    }
}

loc_inl0_0x802A8F84:
{
    r3 = 1;
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl0_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (r3 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 3), 0, 41u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r28 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 1u, (r28 + 4), r31);
    MemoryInline::WriteResolved16(guest_range_0, 5u, (r28 + 8), static_cast<uint16_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 11u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 11u, (r28 + 14), r31);
        MemoryInline::WriteResolved16(guest_range_0, 13u, (r28 + 16), r31);
    }
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 15u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 15u, (r28 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_0, 17u, (r28 + 20), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 37u, (r28 + 40), r30);
    r3 = r28;
    r4 = 0;
    r5 = -1;
    r6 = -1;
    // inline leaf 0x801F0034 (4 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r6));
    // end of inlined leaf 0x801F0034
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r28 + 33), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r28 + 44);
    r4 = 4;
    r5 = 0;
    r6 = 0;
    r7 = -1;
    r8 = 0;
    r9 = -1;
    r10 = 3;
    ctx->lr = 0x801EFFF4u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_802146B8_1720 = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_1720);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_1720 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r28;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r5 = 0;
    ctx->lr = 0x801F0004u;
    if constexpr (KnownRegArgsCpuCall<0x801EFDD8u>(&func_801EFDD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_801EFDD8_1C1B = func_801EFDD8_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFDD8_1C1B);
        r4 = static_cast<uint32_t>(regargs_result_801EFDD8_1C1B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x801EFDD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWrite8((r28 + 34), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 35), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 36), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 38), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EFF34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EFF34_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000383A gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EFF34 func_801EFF34 preserves=true fpr_mask=0x00000000
