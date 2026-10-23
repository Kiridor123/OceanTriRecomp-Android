#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074AB8(CpuContext* ctx);
extern "C" uint64_t func_80074AB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804C6F80(CpuContext* ctx);
extern "C" double func_804C6F80_ra8_7e_0_2(CpuContext*, uint32_t, double, double, double, double, double, double);
extern "C" void func_804C7020(CpuContext* ctx);
extern "C" uint64_t func_804C7020_ra38_1de_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_804C7110(CpuContext* ctx);
extern "C" double func_804C7110_ra8_7e_0_2(CpuContext*, uint32_t, double, double, double, double, double, double);

extern "C" void func_80075E3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_80075E3C;

loc_80075E3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80075E50u;
    if constexpr (KnownRegArgsCpuCall<0x80074AB8u>(&func_80074AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074AB8_686 = func_80074AB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074AB8_686);
        r4 = static_cast<uint32_t>(regargs_result_80074AB8_686 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80074AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r4 & 64);
}

loc_80075E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075E8C;
    }
}

loc_80075E64:
{
    r3 = (r3 + 48);
    // inline leaf 0x80075EFC (1 guest instruction(s))
    // end of inlined leaf 0x80075EFC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 192));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 184));
    if constexpr (KnownRegArgsCpuCall<0x804C7110u>(&func_804C7110)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804C7110_C00 = func_804C7110_ra8_7e_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        f1.d = regargs_result_804C7110_C00;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x804C7110u>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80075EDC;
}

loc_80075E8C:
{
    r0 = (r4 & 16);
}

loc_80075E94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075EC0;
    }
}

loc_80075E98:
{
    r3 = (r3 + 48);
    // inline leaf 0x80075EFC (1 guest instruction(s))
    // end of inlined leaf 0x80075EFC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 192));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 184));
    if constexpr (KnownRegArgsCpuCall<0x804C6F80u>(&func_804C6F80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804C6F80_1251 = func_804C6F80_ra8_7e_0_2(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        f1.d = regargs_result_804C6F80_1251;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x804C6F80u>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80075EDC;
}

loc_80075EC0:
{
    r3 = (r3 + 48);
    // inline leaf 0x80075EFC (1 guest instruction(s))
    // end of inlined leaf 0x80075EFC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 184));
    ctx->lr = 0x80075EDCu;
    if constexpr (KnownRegArgsCpuCall<0x804C7020u>(&func_804C7020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[5] = f5;
        const auto regargs_result_804C7020_17A8 = func_804C7020_ra38_1de_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C7020_17A8);
        r4 = static_cast<uint32_t>(regargs_result_804C7020_17A8 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x804C7020u>(ctx);
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
    }
}

loc_80075EDC:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FC0 fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80075E3C func_80075E3C preserves=true fpr_mask=0x00000000
