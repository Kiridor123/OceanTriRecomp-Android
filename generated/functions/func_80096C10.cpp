#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091E60(CpuContext* ctx);
extern "C" uint64_t func_80091E60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80094348(CpuContext* ctx);
extern "C" uint64_t func_80094348_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80096C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80096C10;

loc_80096C10:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r30 = r4;
    r28 = r5;
    r29 = r6;
    ctx->lr = 0x80096C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80094348u>(&func_80094348)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80094348_861 = func_80094348_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094348_861);
        r4 = static_cast<uint32_t>(regargs_result_80094348_861 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80094348u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80096C40:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_80096C58;
    }
}

loc_80096C44:
{
}

loc_80096C48:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_80096C64;
    }
}

loc_80096C4C:
{
}

loc_80096C50:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_80096C70;
    }
}

loc_80096C54:
{
    goto loc_80096C7C;
}

loc_80096C58:
{
    r30 = (r3 + 10);
    r31 = 0;
    goto loc_80096C9C;
}

loc_80096C64:
{
    r30 = (r3 + 32);
    r31 = 3;
    goto loc_80096C9C;
}

loc_80096C70:
{
    r30 = (r3 + 47);
    r31 = 6;
    goto loc_80096C9C;
}

loc_80096C7C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 5432);
    r4 = 2109;
    r5 = 0x80590000u;
    r5 = (r5 + 5992);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80096C98u;
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
    goto loc_80096DC0;
}

loc_80096C9C:
{
    r29 = (r29 + 17);
    r3 = r30;
    r0 = (r31 + 6);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0 = (r0 & 3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r4 = (r4_rot_1 & -4194304);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31584));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 2047);
    r4 = (r4 | r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 2047);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_1 & -2048);
    r0 = (r4 | r0);
    r4 = (r5 | r0);
    ctx->lr = 0x80096D00u;
    if constexpr (KnownRegArgsCpuCall<0x80091E60u>(&func_80091E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091E60_15EF = func_80091E60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80091E60_15EF);
        r4 = static_cast<uint32_t>(regargs_result_80091E60_15EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 5);
    r0 = (r31 + 7);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_3 & -4194304);
    r5 = (r4 | r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31584));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    r4 = (r0 & 2047);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword3;
    r0 = (r0 & 2047);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_4 & -2048);
    r0 = (r4 | r0);
    r4 = (r5 | r0);
    ctx->lr = 0x80096D60u;
    if constexpr (KnownRegArgsCpuCall<0x80091E60u>(&func_80091E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091E60_1D99 = func_80091E60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80091E60_1D99);
        r4 = static_cast<uint32_t>(regargs_result_80091E60_1D99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 10);
    r0 = (r31 + 8);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_3 & -16777216);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_6 & -4194304);
    r5 = (r4 | r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31584));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword4;
    r4 = (r0 & 2047);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword5;
    r0 = (r0 & 2047);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_7 & -2048);
    r0 = (r4 | r0);
    r4 = (r5 | r0);
    ctx->lr = 0x80096DC0u;
    if constexpr (KnownRegArgsCpuCall<0x80091E60u>(&func_80091E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091E60_2544 = func_80091E60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80091E60_2544);
        r4 = static_cast<uint32_t>(regargs_result_80091E60_2544 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80096DC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096C10 func_80096C10 preserves=true fpr_mask=0x00000000
