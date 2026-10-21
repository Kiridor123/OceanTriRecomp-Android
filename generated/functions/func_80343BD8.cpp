#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80343820(CpuContext* ctx);
extern "C" uint32_t func_80343820_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80343AEC(CpuContext* ctx);
extern "C" uint32_t func_80343AEC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80343E58(CpuContext* ctx);
extern "C" uint64_t func_80343E58_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8034551C(CpuContext* ctx);
extern "C" uint64_t func_8034551C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80343820_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_80343BD8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80343BD8u);
    goto loc_80343BD8;

loc_80343BD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r28 = r4;
    r31 = r5;
    r3 = (r4 & 255);
    r4 = (r30 & 255);
    ctx->lr = 0x80343C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
}

loc_80343C14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80343D24;
    }
}

loc_80343C18:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80343820u) && KnownTranslatedCpuCall<0x80343820u>::kAvailable && !KnownTranslatedCpuCall<0x80343820u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80343820u>()) {
        const auto state_free_result_80343820_CDD = func_80343820_statefree(cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80343820_CDD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80343820u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80343C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80343D20;
    }
}

loc_80343C28:
{
    r4 = (r0 * 60);
    r3 = 0x806C0000u;
    r0 = (r3 + 5408);
    r29 = (r0 + r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 1), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 1), static_cast<uint8_t>(r30));
    r30 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r29 + 8), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r29 + 10), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r29 + 11), static_cast<uint8_t>(r30));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r29 + 19), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r29 + 20), static_cast<uint8_t>(r31));
    r31 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r29 + 17), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r29 + 18), static_cast<uint8_t>(r31));
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80343C74u;
    if constexpr (KnownRegArgsCpuCall<0x8034551Cu>(&func_8034551C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8034551C_1748 = func_8034551C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034551C_1748);
        r4 = static_cast<uint32_t>(regargs_result_8034551C_1748 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8034551Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 60u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r29 + 28), static_cast<uint16_t>(r30));
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 30u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r29 + 30), r0);
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r29 + 32), r30);
    }
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r29 + 34), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r29 + 52), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r29 + 13), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r29 + 14), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r29 + 56), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 57u, (r29 + 57), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r29 + 23), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r29 + 24), r30);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10064));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r29 + 40), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r29 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r29 + 48), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r29 + 54), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r29 + 21), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 58u, (r29 + 58), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 59u, (r29 + 59), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r29 + 22), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 0u, r29, static_cast<uint8_t>(r28));
    r3 = r29;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80343AECu>(&func_80343AEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80343AEC_2844 = func_80343AEC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80343AEC_2844;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80343AECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r12 = r3;
}

loc_80343CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80343CF4;
    }
}

loc_80343CE8:
{
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x80343CF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80343CF4:
{
    r3 = MemoryInline::FlatRead8((r29 + 57));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r29 + 55), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r31));
    r3 = r29;
    ctx->lr = 0x80343D14u;
    if constexpr (KnownRegArgsCpuCall<0x80343E58u>(&func_80343E58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80343E58_2F4B = func_80343E58_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80343E58_2F4B);
        r4 = static_cast<uint32_t>(regargs_result_80343E58_2F4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80343E58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r31));
    goto loc_80343D24;
}

loc_80343D20:
{
    r29 = 0;
}

loc_80343D24:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80343BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80343BD8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80343BD8 func_80343BD8 preserves=true fpr_mask=0x00000000
