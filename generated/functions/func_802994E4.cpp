#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135B04(CpuContext* ctx);
extern "C" uint64_t func_80135B04_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802994E4_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802994E4;

loc_802994E4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r27;
    ctx->lr = 0x80299520u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80135B04_717 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_717);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_717 >> 32);
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
    r31 = r3;
    r3 = r29;
    ctx->lr = 0x8029952Cu;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80135B04_AC4 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_AC4);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_AC4 >> 32);
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
    r4 = (r31 & 255);
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80299538:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802995A4;
    }
}

loc_8029953C:
{
    r3 = (r1 + 8);
    r4 = (r29 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 482));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_80299568:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8029957C;
    }
}

loc_8029956C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8029957C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2240), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = (r1 + 8);
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
    goto loc_80299700;
}

loc_802995A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029969C;
    }
}

loc_802995A8:
{
    r3 = (r1 + 20);
    r4 = (r27 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = MemoryInline::FlatRead8((r27 + 482));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_802995DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802995F4;
    }
}

loc_802995E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_802995F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 2240), static_cast<uint8_t>(r0));
    r3 = r27;
    r4 = (r1 + 20);
    // inline leaf 0x80299848 (15 guest instruction(s))
}

loc_inl4_0x80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_inl4_0x80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl4_0x80299870;
    }
}

loc_inl4_0x80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_inl4_0x80299878;
}

loc_inl4_0x80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_inl4_0x80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
}

loc_inl4_cont_80299848:
{
    // end of inlined leaf 0x80299848
    r3 = (r1 + 8);
    r4 = (r29 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 482));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_80299654:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8029966C;
    }
}

loc_80299658:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_8029966C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2240), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = (r1 + 8);
    // inline leaf 0x80299848 (15 guest instruction(s))
}

loc_inl5_0x80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_inl5_0x80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl5_0x80299870;
    }
}

loc_inl5_0x80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_inl5_0x80299878;
}

loc_inl5_0x80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_inl5_0x80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
}

loc_inl5_cont_80299848:
{
    // end of inlined leaf 0x80299848
    goto loc_80299700;
}

loc_8029969C:
{
    r3 = (r1 + 20);
    r4 = (r27 + 2228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = MemoryInline::FlatRead8((r27 + 482));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_802996C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802996DC;
    }
}

loc_802996CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_802996DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 2240), static_cast<uint8_t>(r0));
    r3 = r27;
    r4 = (r1 + 20);
    // inline leaf 0x80299848 (15 guest instruction(s))
}

loc_inl6_0x80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_inl6_0x80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl6_0x80299870;
    }
}

loc_inl6_0x80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_inl6_0x80299878;
}

loc_inl6_0x80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_inl6_0x80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
}

loc_inl6_cont_80299848:
{
    // end of inlined leaf 0x80299848
}

loc_80299700:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802994E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802994E4_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802994E4 func_802994E4 preserves=true fpr_mask=0x00000000
