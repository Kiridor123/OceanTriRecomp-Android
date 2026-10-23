#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A51F0(CpuContext* ctx);
extern "C" void func_804A51F0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDE60(CpuContext* ctx);
extern "C" uint64_t func_804CDE60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804CD280_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_804CD280;

loc_804CD280:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80620000u;
    r31 = (r31 + -13800);
    // inline leaf 0x80477780 (2 guest instruction(s))
    r3 = ctx->hid0;
    // end of inlined leaf 0x80477780
    r0 = (r3 & 32768);
}

loc_804CD2A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CD2B8;
    }
}

loc_804CD2A8:
{
    // inline leaf 0x804CCE00 (5 guest instruction(s))
    // isync @ 0x804CCE00 (no-op)
    r3 = ctx->hid0;
    r3 = (r3 | 32768);
    ctx->hid0 = r3;
    // end of inlined leaf 0x804CCE00
    r3 = (r31 + 436);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A51F0u>(&func_804A51F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A51F0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A51F0u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804CD2B8:
{
    // inline leaf 0x80477780 (2 guest instruction(s))
    r3 = ctx->hid0;
    // end of inlined leaf 0x80477780
    r0 = (r3 & 16384);
}

loc_804CD2C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CD2D4;
    }
}

loc_804CD2C4:
{
    // inline leaf 0x804CCC70 (5 guest instruction(s))
    // sync @ 0x804CCC70 (no-op)
    r3 = ctx->hid0;
    r3 = (r3 | 16384);
    ctx->hid0 = r3;
    // end of inlined leaf 0x804CCC70
    r3 = (r31 + 464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A51F0u>(&func_804A51F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A51F0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A51F0u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804CD2D4:
{
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r0 = (r3 & -2147483648);
}

loc_804CD2DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CD384;
    }
}

loc_804CD2E0:
{
    // inline leaf 0x80477760 (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x80477760
    r30 = r3;
    // sync @ 0x804CD2E8 (no-op)
    r3 = 48;
    // inline leaf 0x80477770 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x80477770
    // sync @ 0x804CD2F4 (no-op)
    // sync @ 0x804CD2F8 (no-op)
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r3 = (r3 & 2147483647);
    // inline leaf 0x804777B0 (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x804777B0
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x804777B0
    // sync @ 0x804CD308 (no-op)
    // sync @ 0x804CD30C (no-op)
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r3 = (r3 & 2147483647);
    // inline leaf 0x804777B0 (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x804777B0
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x804777B0
    // sync @ 0x804CD31C (no-op)
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r3 = (r3 | 2097152);
    // inline leaf 0x804777B0 (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x804777B0
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x804777B0
}

loc_804CD32C:
{
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r0 = (r3 & 1);
}

loc_804CD334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CD32C;
    }
}

loc_804CD338:
{
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r3 = (r3 & -2097153);
    // inline leaf 0x804777B0 (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x804777B0
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x804777B0
    goto loc_804CD354;
}

loc_804CD348:
{
    r3 = (r31 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A51F0u>(&func_804A51F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A51F0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A51F0u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804CD354:
{
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r0 = (r3 & 1);
}

loc_804CD35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CD348;
    }
}

loc_804CD360:
{
    r3 = r30;
    // inline leaf 0x80477770 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x80477770
    // inline leaf 0x804777A0 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x804777A0
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x804777A0
    r0 = (r3 | -2147483648);
    r3 = (r0 & -2097153);
    // inline leaf 0x804777B0 (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x804777B0
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x804777B0
    r3 = (r31 + 492);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A51F0u>(&func_804A51F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A51F0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A51F0u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804CD384:
{
    r4 = 0x804D0000u;
    r3 = 1;
    r4 = (r4 + -11984);
    ctx->lr = 0x804CD394u;
    if constexpr (KnownRegArgsCpuCall<0x804CDE60u>(&func_804CDE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804CDE60_2630 = func_804CDE60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CDE60_2630);
        r4 = static_cast<uint32_t>(regargs_result_804CDE60_2630 >> 32);
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
        InvokeDirectCpu<0x804CDE60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r31 + 516);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804A51F0u>(&func_804A51F0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        func_804A51F0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804A51F0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CD280(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CD280_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x800001FE fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD280 func_804CD280 preserves=true fpr_mask=0x00000000
