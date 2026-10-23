#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_809FEEBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_809FEEBC;

loc_809FEEBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 256));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_809FEEE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809FEF0C;
    }
}

loc_809FEEEC:
{
    ctx->lr = 0x809FEEF0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809FEEF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809FEF0C;
    }
}

loc_809FEEF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x809FEF08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809FF404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_809FF0A0;
}

loc_809FEF0C:
{
    r3 = r29;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl0_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl0_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D080:
{
    r3 = 0;
    goto loc_inl0_cont_8012D068;
}

loc_inl0_0x8012D088:
{
    r3 = 1;
}

loc_inl0_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_809FEF18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809FEF3C;
    }
}

loc_809FEF1C:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 16), r3);
    MemoryInline::FlatWrite32((r31 + 20), r3);
    goto loc_809FF0A0;
}

loc_809FEF3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_809FEF44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FEF5C;
    }
}

loc_809FEF48:
{
}

loc_809FEF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FEFC4;
    }
}

loc_809FEF50:
{
}

loc_809FEF54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_809FF02C;
    }
}

loc_809FEF58:
{
    goto loc_809FF094;
}

loc_809FEF5C:
{
    r3 = r29;
    r4 = 0;
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -5884));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -5900));
    ctx->lr = 0x809FEF78u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_108B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_108B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_108B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_809FEF7C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_809FEF98;
    }
}

loc_809FEF80:
{
    r3 = r29;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_809FEF94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_809FF094;
    }
}

loc_809FEF98:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x809FEFC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809FF0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_809FF0A0;
}

loc_809FEFC4:
{
    r3 = r29;
    r4 = 0;
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -5880));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -5900));
    ctx->lr = 0x809FEFE0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_1AC6 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1AC6);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1AC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_809FEFE4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_809FF000;
    }
}

loc_809FEFE8:
{
    r3 = r29;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_809FEFFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_809FF02C;
    }
}

loc_809FF000:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x809FF028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809FF0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_809FF0A0;
}

loc_809FF02C:
{
    r3 = r29;
    r4 = 0;
    r5 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -5876));
    r5 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -5900));
    ctx->lr = 0x809FF048u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_2501 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2501);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2501 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_809FF04C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_809FF068;
    }
}

loc_809FF050:
{
    r3 = r29;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_809FF064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_809FF094;
    }
}

loc_809FF068:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x809FF090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809FF0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_809FF0A0;
}

loc_809FF094:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x809FF0A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809FF0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
}

loc_809FF0A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FEEBC func_809FEEBC preserves=true fpr_mask=0x00000000
