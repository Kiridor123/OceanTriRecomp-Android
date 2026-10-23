#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135B04(CpuContext* ctx);
extern "C" uint64_t func_80135B04_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80299780(CpuContext* ctx);
extern "C" uint32_t func_80299780_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80299254_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80299254;

loc_80299254:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r28 = r3;
    r31 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    ctx->lr = 0x80299298u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80135B04_6A1 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_6A1);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_6A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_802992A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802992D4;
    }
}

loc_802992A4:
{
    r3 = (r1 + 32);
    r4 = (r29 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 32);
    r4 = r30;
    ctx->lr = 0x802992BCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2240), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = (r1 + 32);
    // inline leaf 0x80299848 (15 guest instruction(s))
}

loc_inl2_0x80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_inl2_0x80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl2_0x80299870;
    }
}

loc_inl2_0x80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_inl2_0x80299878;
}

loc_inl2_0x80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_inl2_0x80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
}

loc_inl2_cont_80299848:
{
    // end of inlined leaf 0x80299848
    goto loc_8029937C;
}

loc_802992D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80299350;
    }
}

loc_802992D8:
{
    r3 = (r1 + 44);
    r4 = (r28 + 1396);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 44);
    r4 = (r1 + 20);
    ctx->lr = 0x80299300u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r31 = 1;
    MemoryInline::FlatWrite8((r28 + 1410), static_cast<uint8_t>(r31));
    r3 = r28;
    r4 = (r1 + 44);
    ctx->lr = 0x80299314u;
    if constexpr (KnownRegArgsCpuCall<0x80299780u>(&func_80299780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80299780_13BA = func_80299780_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80299780_13BA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r1 + 32);
    r4 = (r29 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x8029933Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    MemoryInline::FlatWrite8((r29 + 2240), static_cast<uint8_t>(r31));
    r3 = r29;
    r4 = (r1 + 32);
    // inline leaf 0x80299848 (15 guest instruction(s))
}

loc_inl3_0x80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_inl3_0x80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl3_0x80299870;
    }
}

loc_inl3_0x80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_inl3_0x80299878;
}

loc_inl3_0x80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_inl3_0x80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
}

loc_inl3_cont_80299848:
{
    // end of inlined leaf 0x80299848
    goto loc_8029937C;
}

loc_80299350:
{
    r3 = (r1 + 44);
    r4 = (r28 + 1396);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 44);
    r4 = r31;
    ctx->lr = 0x80299368u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1410), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = (r1 + 44);
    ctx->lr = 0x8029937Cu;
    if constexpr (KnownRegArgsCpuCall<0x80299780u>(&func_80299780)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80299780_1F0D = func_80299780_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80299780_1F0D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299780u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_8029937C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80299254(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80299254_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80299254 func_80299254 preserves=true fpr_mask=0x00000000
