#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A52B4(CpuContext* ctx);
extern "C" uint64_t func_800A52B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800B3DB0(CpuContext* ctx);
extern "C" uint64_t func_800B3DB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502274(CpuContext* ctx);
extern "C" uint32_t func_80502274_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B4724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B4724;

loc_800B4724:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B4764:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B477C;
    }
}

loc_800B4768:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B4774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B477C;
    }
}

loc_800B4778:
{
    r10 = 0;
}

loc_800B477C:
{
}

loc_800B4780:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B4798;
    }
}

loc_800B4784:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B4790:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4798;
    }
}

loc_800B4794:
{
    r9 = 0;
}

loc_800B4798:
{
}

loc_800B479C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B47B0;
    }
}

loc_800B47A0:
{
    r0 = (r11 + 1073741824);
}

loc_800B47A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B47B0;
    }
}

loc_800B47AC:
{
    r8 = 0;
}

loc_800B47B0:
{
}

loc_800B47B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B47CC;
    }
}

loc_800B47B8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B47C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B47CC;
    }
}

loc_800B47C8:
{
    r7 = 0;
}

loc_800B47CC:
{
}

loc_800B47D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B47E8;
    }
}

loc_800B47D4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B47E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B47E8;
    }
}

loc_800B47E4:
{
    r6 = 0;
}

loc_800B47E8:
{
}

loc_800B47EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B4804;
    }
}

loc_800B47F0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B47FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B4804;
    }
}

loc_800B4800:
{
    r5 = 0;
}

loc_800B4804:
{
}

loc_800B4808:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B482C;
    }
}

loc_800B480C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 845;
    r5 = 0x80590000u;
    r5 = (r5 + 16752);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B482Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800B482C:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800A52B4u>(&func_800A52B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800A52B4_12D0 = func_800A52B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A52B4_12D0);
        r4 = static_cast<uint32_t>(regargs_result_800A52B4_12D0 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A52B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = r3;
    goto loc_800B487C;
}

loc_800B483C:
{
}

loc_800B4840:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r31))) {
        goto loc_800B4870;
    }
}

loc_800B4844:
{
    r3 = r30;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80502274u>(&func_80502274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80502274_16B1 = func_80502274_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502274_16B1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80502274u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x800B485Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B3DB0u>(&func_800B3DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B3DB0_1A95 = func_800B3DB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800B3DB0_1A95);
        r4 = static_cast<uint32_t>(regargs_result_800B3DB0_1A95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B3DB0u>(ctx);
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
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = 1;
    goto loc_800B4888;
}

loc_800B4870:
{
    r3 = r30;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl0_0x805022E0:
{
}

loc_inl0_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x805022F0;
    }
}

loc_inl0_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_805022E0;
}

loc_inl0_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r4 = r3;
}

loc_800B487C:
{
}

loc_800B4880:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B483C;
    }
}

loc_800B4884:
{
    r3 = 0;
}

loc_800B4888:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B4724 func_800B4724 preserves=true fpr_mask=0x00000000
