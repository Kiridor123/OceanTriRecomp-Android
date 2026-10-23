#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_801357C8(CpuContext* ctx);
extern "C" uint64_t func_801357C8_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80354DE4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_80354F98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80354DE4;

loc_80354DE4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r5 = (r29 & 255);
}

loc_80354E20:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(4))) {
        goto loc_80354FDC;
    }
}

loc_80354E24:
{
    r4 = (r30 & 255);
}

loc_80354E2C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(35))) {
        goto loc_80354FDC;
    }
}

loc_80354E30:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 896));
}

loc_80354E3C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80354E84;
    }
}

loc_80354E40:
{
    r3 = 68485120;
    r0 = (r3 + -31148);
    r0 = (r31 * r0);
    r0 = (r0 & 65535);
}

loc_80354E54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80354E70;
    }
}

loc_80354E58:
{
    r3 = (r4 & 3);
    r0 = (r0 & 3);
}

loc_80354E64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80354E84;
    }
}

loc_80354E68:
{
    r6 = 1;
    goto loc_80354E84;
}

loc_80354E70:
{
    r3 = (r4 & 7);
    r0 = (r0 & 7);
}

loc_80354E7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80354E84;
    }
}

loc_80354E80:
{
    r6 = 1;
}

loc_80354E84:
{
}

loc_80354E88:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_80354EA8;
    }
}

loc_80354E8C:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x80354E98u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_101E = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_101E);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_101E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r3 = (r1 + 8);
    r4 = (r28 + 876);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80354FA8;
}

loc_80354EA8:
{
    r3 = (r1 + 8);
    r0 = (r29 & 255);
    r5 = (r0 * 35);
    r4 = 0x805F0000u;
    r0 = (r4 + -14092);
    r4 = (r30 & 255);
    r0 = (r0 + r5);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -14920);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_17E3 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_17E3;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = (r30 & 255);
    r0 = (r0 & 3);
}

loc_80354EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80354F2C;
    }
}

loc_80354EEC:
{
}

loc_80354EF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80354F5C;
    }
}

loc_80354EF4:
{
}

loc_80354EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80354F70;
    }
}

loc_80354EFC:
{
    r4 = (r31 & 65535);
    r3 = 1245184;
    r0 = (r3 + -10509);
    r0 = (r4 * r0);
    r3 = 1717960704;
    r3 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r6 = (r0 & 65535);
    goto loc_80354F80;
}

loc_80354F2C:
{
    r4 = (r31 & 65535);
    r3 = 7667712;
    r0 = (r3 + -24500);
    r0 = (r4 * r0);
    r3 = 1717960704;
    r3 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r6 = (r0 & 65535);
    goto loc_80354F80;
}

loc_80354F5C:
{
    r3 = 3473408;
    r0 = (r3 + -16619);
    r0 = (r31 * r0);
    r6 = (r0 & 65535);
    goto loc_80354F80;
}

loc_80354F70:
{
    r3 = 5767168;
    r0 = (r3 + 19753);
    r0 = (r31 * r0);
    r6 = (r0 & 65535);
}

loc_80354F80:
{
    r3 = (r1 + 8);
    r4 = r3;
    r0 = (r29 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 0x80570000u;
    r5 = (r5 + 4480);
    addr_lfsx_80354F98_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80354F98_loc_0);
    r5 = 0;
    r6 = (r6 & 65535);
    ctx->lr = 0x80354FA8u;
    if constexpr (KnownRegArgsCpuCall<0x801357C8u>(&func_801357C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_801357C8_2338 = func_801357C8_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801357C8_2338);
        r4 = static_cast<uint32_t>(regargs_result_801357C8_2338 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x801357C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80354FA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9644));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r28;
    r4 = 1;
    r5 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9544));
    r6 = 0;
    r7 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r7 + 132));
    ctr = r12;
    ctx->lr = 0x80354FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
}

loc_80354FDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80354DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80354DE4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80354DE4 func_80354DE4 preserves=true fpr_mask=0x00000000
