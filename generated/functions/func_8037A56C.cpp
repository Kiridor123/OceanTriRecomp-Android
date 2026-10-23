#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F690(CpuContext* ctx);
extern "C" uint64_t func_8012F690_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801302AC(CpuContext* ctx);
extern "C" uint64_t func_801302AC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80130404(CpuContext* ctx);
extern "C" uint64_t func_80130404_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_80130628(CpuContext* ctx);
extern "C" uint32_t func_80130628_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80379000(CpuContext* ctx);
extern "C" void func_80379000_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80379510(CpuContext* ctx);
extern "C" uint64_t func_80379510_ra188_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" void func_8037A56C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8037A56C;

loc_8037A56C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x80131ED8 (3 guest instruction(s))
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 2074), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80131ED8
    r3 = r30;
    // inline leaf 0x80136E58 (9 guest instruction(s))
}

loc_inl1_0x80136E58:
{
    r0 = MemoryInline::FlatRead8((r3 + 572));
}

loc_inl1_0x80136E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80136E6C;
    }
}

loc_inl1_0x80136E64:
{
    r3 = 0;
    goto loc_inl1_cont_80136E58;
}

loc_inl1_0x80136E6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 576));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    r3 = 1;
}

loc_inl1_cont_80136E58:
{
    // end of inlined leaf 0x80136E58
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -7688));
    ctx->lr = 0x8037A5A0u;
    if constexpr (KnownRegArgsCpuCall<0x80130404u>(&func_80130404)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80130404_BCD = func_80130404_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130404_BCD);
        r4 = static_cast<uint32_t>(regargs_result_80130404_BCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130404u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    // inline leaf 0x80136D78 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 1948), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80136D78
    r3 = r30;
    // inline leaf 0x803790E8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 856), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803790E8
    r3 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8037A5B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8037A5C8;
    }
}

loc_8037A5BC:
{
}

loc_8037A5C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8037A630;
    }
}

loc_8037A5C4:
{
    goto loc_8037A64C;
}

loc_8037A5C8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8037A5D8u;
    if constexpr (KnownRegArgsCpuCall<0x801302ACu>(&func_801302AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        const auto regargs_result_801302AC_1330 = func_801302AC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801302AC_1330);
        r4 = static_cast<uint32_t>(regargs_result_801302AC_1330 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801302ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    ctx->lr = 0x8037A5E0u;
    if constexpr (KnownRegArgsCpuCall<0x80130628u>(&func_80130628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80130628_16FC = func_80130628_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_80130628_16FC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8037A5F4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F690u>(&func_8012F690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012F690_1B51 = func_8012F690_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F690_1B51);
        r4 = static_cast<uint32_t>(regargs_result_8012F690_1B51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012F690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r31 & 255);
}

loc_8037A5FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8037A60C;
    }
}

loc_8037A600:
{
}

loc_8037A604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8037A618;
    }
}

loc_8037A608:
{
    goto loc_8037A620;
}

loc_8037A60C:
{
    r0 = 90;
    MemoryInline::FlatWrite32((r30 + 32), r0);
    goto loc_8037A620;
}

loc_8037A618:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_8037A620:
{
    r3 = r30;
    r4 = 255;
    if constexpr (KnownRegArgsCpuCall<0x80379000u>(&func_80379000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_80379000_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80379000u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_8037A64C;
}

loc_8037A630:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_8037A640:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8037A64C;
    }
}

loc_8037A644:
{
    r3 = r30;
    ctx->lr = 0x8037A64Cu;
    if constexpr (KnownRegArgsCpuCall<0x80379510u>(&func_80379510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80379510_270E = func_80379510_ra188_1fc_18_0(ctx, r3, r7, r8, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80379510_270E);
        r4 = static_cast<uint32_t>(regargs_result_80379510_270E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80379510u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8037A64C:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFD fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8037A56C func_8037A56C preserves=true fpr_mask=0x00000000
