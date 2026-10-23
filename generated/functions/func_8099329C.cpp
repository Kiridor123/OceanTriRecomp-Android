#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E908(CpuContext* ctx);
extern "C" uint32_t func_8004E908_ra0_0_8_0(CpuContext*);
extern "C" void func_800CEFD8(CpuContext* ctx);
extern "C" uint32_t func_800CEFD8_ra0_0_8_0(CpuContext*);
extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D21B0(CpuContext* ctx);
extern "C" uint32_t func_800D21B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D2978(CpuContext* ctx);
extern "C" uint32_t func_800D2978_ra0_0_8_0(CpuContext*);
extern "C" void func_803BE89C(CpuContext* ctx);
extern "C" double func_803BE89C_ra0_2_0_2(CpuContext*, double);
extern "C" void func_803BEDA0(CpuContext* ctx);
extern "C" uint64_t func_803BEDA0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" void func_8004E908_statefree();
extern "C" void func_800CEFD8_statefree();
extern "C" uint64_t func_800D21B0_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_800D2978_statefree();
extern "C" uint64_t func_800D21B0_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8099329C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8099329C;

loc_8099329C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 80;
    ctx->lr = 0x809932B0u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800CF80C_906 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_906);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_906 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = 0x809D0000u;
    MemoryInline::FlatWriteRam32((r4 + 15776), r3);
    r4 = 0;
    r5 = 80;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    // inline leaf 0x800CF29C (7 guest instruction(s))
}

loc_inl0_0x800CF29C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CF2A4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CF2A8:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 36), static_cast<uint8_t>(r3));
    goto loc_inl0_cont_800CF29C;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CF29C:
{
    // end of inlined leaf 0x800CF29C
    r3 = 0;
    // inline leaf 0x800CF2B8 (7 guest instruction(s))
}

loc_inl1_0x800CF2B8:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CF2C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(7))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800CF2C4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 37), static_cast<uint8_t>(r3));
    goto loc_inl1_cont_800CF2B8;
}

loc_inl1_return:
{
}

loc_inl1_cont_800CF2B8:
{
    // end of inlined leaf 0x800CF2B8
    r3 = 1;
    // inline leaf 0x80058660 (16 guest instruction(s))
}

loc_inl2_0x80058660:
{
    r4 = 0x80670000u;
    r4 = (r4 + -11912);
    MemoryInline::FlatWriteRam8((r4 + 284), static_cast<uint8_t>(r3));
    r0 = (r3 & 255);
}

loc_inl2_0x80058674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8005868C;
    }
}

loc_inl2_0x80058678:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r4 + 7), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80058660;
}

loc_inl2_0x8005868C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80058660:
{
    // end of inlined leaf 0x80058660
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CEFD8u) && KnownTranslatedCpuCall<0x800CEFD8u>::kAvailable && !KnownTranslatedCpuCall<0x800CEFD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CEFD8u>()) {
        func_800CEFD8_statefree();
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEFD8u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 40), 0, 2185u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1963u, (r3 + 2003), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1961u, (r3 + 2001), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 40), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 2222));
}

loc_80993300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8099331C;
    }
}

loc_80993304:
{
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 2164u, (r3 + 2204), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2166u, (r3 + 2206), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2165u, (r3 + 2205), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2167u, (r3 + 2207), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2184u, (r3 + 2224), static_cast<uint8_t>(r4));
}

loc_8099331C:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2222));
}

loc_80993334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80993348;
    }
}

loc_80993338:
{
    r0 = MemoryInline::FlatRead8((r3 + 1998));
}

loc_80993340:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80993348;
    }
}

loc_80993344:
{
    ctx->lr = 0x80993348u;
    if constexpr (KnownRegArgsCpuCall<0x803BEDA0u>(&func_803BEDA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BEDA0_2181 = func_803BEDA0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803BEDA0_2181);
        r4 = static_cast<uint32_t>(regargs_result_803BEDA0_2181 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BEDA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_80993348:
{
    ctx->lr = 0x8099334Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BE89Cu>(&func_803BE89C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803BE89C_265A = func_803BE89C_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_803BE89C_265A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BE89Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004E908u) && KnownTranslatedCpuCall<0x8004E908u>::kAvailable && !KnownTranslatedCpuCall<0x8004E908u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004E908u>()) {
        func_8004E908_statefree();
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004E908u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 176), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 355), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 367), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r4 = 0;
    r5 = 156;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D21B0u) && KnownTranslatedCpuCall<0x800D21B0u>::kAvailable && !KnownTranslatedCpuCall<0x800D21B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D21B0u>()) {
        const auto state_free_result_800D21B0_2F78 = func_800D21B0_statefree_v0(cr, xer);
        cr = static_cast<uint32_t>(state_free_result_800D21B0_2F78);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D21B0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D2978u) && KnownTranslatedCpuCall<0x800D2978u>::kAvailable && !KnownTranslatedCpuCall<0x800D2978u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D2978u>()) {
        const auto state_free_result_800D2978_339A = func_800D2978_statefree();
        r3 = static_cast<uint32_t>(state_free_result_800D2978_339A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D2978u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8099329C func_8099329C preserves=true fpr_mask=0x00000000
