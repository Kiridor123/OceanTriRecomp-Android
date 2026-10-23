#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80401358(CpuContext* ctx);
extern "C" uint64_t func_80401358_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803F7044_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803F7044;

loc_803F7044:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 28));
}

loc_803F7060:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803F7080;
    }
}

loc_803F7064:
{
}

loc_803F7068:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_803F70C8;
    }
}

loc_803F706C:
{
}

loc_803F7070:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_803F713C;
    }
}

loc_803F7074:
{
}

loc_803F7078:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_803F7158;
    }
}

loc_803F707C:
{
    goto loc_803F716C;
}

loc_803F7080:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = MemoryInline::FlatRead8((r3 + 40));
}

loc_803F7090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803F70A0;
    }
}

loc_803F7094:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F716C;
}

loc_803F70A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = MemoryInline::FlatRead8((r31 + 40));
    ctx->lr = 0x803F70B4u;
    if constexpr (KnownRegArgsCpuCall<0x80401358u>(&func_80401358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80401358_AFE = func_80401358_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401358_AFE);
        r4 = static_cast<uint32_t>(regargs_result_80401358_AFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80401358u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = MemoryInline::FlatRead8((r31 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F716C;
}

loc_803F70C8:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r5 & 1);
}

loc_803F70D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F70F8;
    }
}

loc_803F70D8:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 17);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl1_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_803F656C;
}

loc_inl1_return:
{
}

loc_inl1_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F716C;
}

loc_803F70F8:
{
    r0 = (r5 & 2);
}

loc_803F7100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F7124;
    }
}

loc_803F7104:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 18);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl2_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl2_cont_803F656C;
}

loc_inl2_return:
{
}

loc_inl2_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F716C;
}

loc_803F7124:
{
    r0 = (r5 & 512);
}

loc_803F712C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F716C;
    }
}

loc_803F7130:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F716C;
}

loc_803F713C:
{
    r0 = 100;
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_803F7170;
}

loc_803F7158:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_803F7170;
}

loc_803F716C:
{
    r3 = 1;
}

loc_803F7170:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_803F7044(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F7044_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803F7044 func_803F7044 preserves=true fpr_mask=0x00000000
