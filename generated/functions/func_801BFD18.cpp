#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104918(CpuContext* ctx);
extern "C" uint64_t func_80104918_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80104A34(CpuContext* ctx);
extern "C" uint64_t func_80104A34_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801293A0(CpuContext* ctx);
extern "C" uint64_t func_801293A0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_801296CC(CpuContext* ctx);
extern "C" uint64_t func_801296CC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80136A04(CpuContext* ctx);
extern "C" uint64_t func_80136A04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80136BB4(CpuContext* ctx);
extern "C" uint64_t func_80136BB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801BFAE4(CpuContext* ctx);
extern "C" uint64_t func_801BFAE4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801BFB7C(CpuContext* ctx);
extern "C" uint64_t func_801BFB7C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8030456C(CpuContext* ctx);
extern "C" uint64_t func_8030456C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801BFD18_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_801BFD18;

loc_801BFD18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    ctx->lr = 0x801BFD3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFAE4u>(&func_801BFAE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFAE4_DB2 = func_801BFAE4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFAE4_DB2);
        r4 = static_cast<uint32_t>(regargs_result_801BFAE4_DB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFAE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801BFD4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(219))) {
        goto loc_801C2558;
    }
}

loc_801BFD50:
{
    r3 = 0x805B0000u;
    r3 = (r3 + 16332);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801C2558u:
        goto loc_801C2558;
        break;
    case 0x801BFD68u:
        goto loc_801BFD68;
        break;
    case 0x801BFF04u:
        goto loc_801BFF04;
        break;
    case 0x801BFF34u:
        goto loc_801BFF34;
        break;
    case 0x801C0138u:
        goto loc_801C0138;
        break;
    case 0x801C02CCu:
        goto loc_801C02CC;
        break;
    case 0x801C04FCu:
        goto loc_801C04FC;
        break;
    case 0x801C0604u:
        goto loc_801C0604;
        break;
    case 0x801C064Cu:
        goto loc_801C064C;
        break;
    case 0x801C0694u:
        goto loc_801C0694;
        break;
    case 0x801C06FCu:
        goto loc_801C06FC;
        break;
    case 0x801C0748u:
        goto loc_801C0748;
        break;
    case 0x801C0978u:
        goto loc_801C0978;
        break;
    case 0x801C0AB0u:
        goto loc_801C0AB0;
        break;
    case 0x801C0BF8u:
        goto loc_801C0BF8;
        break;
    case 0x801C0C8Cu:
        goto loc_801C0C8C;
        break;
    case 0x801C0D10u:
        goto loc_801C0D10;
        break;
    case 0x801C0EBCu:
        goto loc_801C0EBC;
        break;
    case 0x801C0F3Cu:
        goto loc_801C0F3C;
        break;
    case 0x801C0FC0u:
        goto loc_801C0FC0;
        break;
    case 0x801C10CCu:
        goto loc_801C10CC;
        break;
    case 0x801C1148u:
        goto loc_801C1148;
        break;
    case 0x801C11C4u:
        goto loc_801C11C4;
        break;
    case 0x801C1390u:
        goto loc_801C1390;
        break;
    case 0x801C140Cu:
        goto loc_801C140C;
        break;
    case 0x801C14A4u:
        goto loc_801C14A4;
        break;
    case 0x801C14D4u:
        goto loc_801C14D4;
        break;
    case 0x801C16C0u:
        goto loc_801C16C0;
        break;
    case 0x801C1980u:
        goto loc_801C1980;
        break;
    case 0x801C19ECu:
        goto loc_801C19EC;
        break;
    case 0x801C1AE4u:
        goto loc_801C1AE4;
        break;
    case 0x801C1BD0u:
        goto loc_801C1BD0;
        break;
    case 0x801C1CC8u:
        goto loc_801C1CC8;
        break;
    case 0x801C1D44u:
        goto loc_801C1D44;
        break;
    case 0x801C1DB0u:
        goto loc_801C1DB0;
        break;
    case 0x801C1E2Cu:
        goto loc_801C1E2C;
        break;
    case 0x801C1EE0u:
        goto loc_801C1EE0;
        break;
    case 0x801C1F94u:
        goto loc_801C1F94;
        break;
    case 0x801C2060u:
        goto loc_801C2060;
        break;
    case 0x801C21B4u:
        goto loc_801C21B4;
        break;
    case 0x801C2278u:
        goto loc_801C2278;
        break;
    case 0x801C232Cu:
        goto loc_801C232C;
        break;
    case 0x801C2398u:
        goto loc_801C2398;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801BFD68:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFD7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2558 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2558);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2558 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFD80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BFDF0;
    }
}

loc_801BFD84:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801BFD90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BFDD4;
    }
}

loc_801BFD94:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801BFDB4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2C75 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2C75);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2C75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19292));
    ctx->lr = 0x801BFDD0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_31AB = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_31AB);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_31AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801BFDF0;
}

loc_801BFDD4:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19288));
    ctx->lr = 0x801BFDF0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3733 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3733);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3733 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801BFDF0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19424));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFE04u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3C76 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3C76);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3C76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFE08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BFE78;
    }
}

loc_801BFE0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801BFE18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BFE5C;
    }
}

loc_801BFE1C:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19440));
    ctx->lr = 0x801BFE3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4393 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4393);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4393 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19284));
    ctx->lr = 0x801BFE58u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_48C9 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_48C9);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_48C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801BFE78;
}

loc_801BFE5C:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19292));
    ctx->lr = 0x801BFE78u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4E51 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4E51);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4E51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801BFE78:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19388));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFE8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5394 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5394);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5394 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFE90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801BFE94:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801BFEA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BFEE4;
    }
}

loc_801BFEA4:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19280));
    ctx->lr = 0x801BFEC4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5AB1 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5AB1);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5AB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19276));
    ctx->lr = 0x801BFEE0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5FE7 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5FE7);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5FE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801BFEE4:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801BFF00u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_656F = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_656F);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_656F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801BFF04:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19520));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFF18u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6ACA = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6ACA);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6ACA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFF1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801BFF20:
{
    r3 = r31;
    r4 = 34;
    r5 = 7;
    ctx->lr = 0x801BFF30u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_7084 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_7084);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_7084 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801BFF34:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_801BFF3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_801C2558;
    }
}

loc_801BFF40:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19272));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFF54u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_7602 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_7602);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_7602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFF58:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801BFF78;
    }
}

loc_801BFF5C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19408));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFF70u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_7C20 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_7C20);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_7C20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFF74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BFF88;
    }
}

loc_801BFF78:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    ctx->lr = 0x801BFF88u;
    if constexpr (KnownRegArgsCpuCall<0x801296CCu>(&func_801296CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801296CC_81DA = func_801296CC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801296CC_81DA);
        r4 = static_cast<uint32_t>(regargs_result_801296CC_81DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801296CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801BFF88:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19268));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801BFF9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_8780 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_8780);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_8780 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801BFFA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0000;
    }
}

loc_801BFFA4:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801BFFB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BFFD4;
    }
}

loc_801BFFB4:
{
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801BFFD0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_8E80 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_8E80);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_8E80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801BFFF0;
}

loc_801BFFD4:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19264));
    ctx->lr = 0x801BFFF0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_93E4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_93E4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_93E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801BFFF0:
{
    r3 = r31;
    r4 = 34;
    r5 = 7;
    ctx->lr = 0x801C0000u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_98C3 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_98C3);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_98C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C0000:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C000C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0048;
    }
}

loc_801C0010:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19368));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0024u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_9E3C = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_9E3C);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_9E3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0028:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0048;
    }
}

loc_801C002C:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0048u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_A464 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_A464);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_A464 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0048:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19260));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C005Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_A9A7 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_A9A7);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_A9A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0060:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0074;
    }
}

loc_801C0064:
{
    r3 = r31;
    r4 = 1;
    r5 = 14;
    ctx->lr = 0x801C0074u;
    if constexpr (KnownRegArgsCpuCall<0x801296CCu>(&func_801296CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801296CC_AF61 = func_801296CC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801296CC_AF61);
        r4 = static_cast<uint32_t>(regargs_result_801296CC_AF61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801296CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801C0074:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19256));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0088u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_B507 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_B507);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_B507 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C008C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C00EC;
    }
}

loc_801C0090:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C009C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C00C0;
    }
}

loc_801C00A0:
{
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C00BCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_BC07 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_BC07);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_BC07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C00DC;
}

loc_801C00C0:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19264));
    ctx->lr = 0x801C00DCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_C16B = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_C16B);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_C16B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C00DC:
{
    r3 = r31;
    r4 = 42;
    r5 = 7;
    ctx->lr = 0x801C00ECu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_C64A = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_C64A);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_C64A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C00EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C00F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C00FC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19420));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0110u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_CBC3 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_CBC3);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_CBC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0114:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0118:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0134u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_D1EB = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_D1EB);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_D1EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0138:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19456));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C014Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_D746 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_D746);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_D746 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C01B0;
    }
}

loc_801C0154:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0184;
    }
}

loc_801C0164:
{
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19264));
    ctx->lr = 0x801C0180u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_DE46 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_DE46);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_DE46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C01A0;
}

loc_801C0184:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19264));
    ctx->lr = 0x801C01A0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_E3AA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_E3AA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_E3AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C01A0:
{
    r3 = r31;
    r4 = 42;
    r5 = 7;
    ctx->lr = 0x801C01B0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_E889 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_E889);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_E889 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C01B0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19252));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C01C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_ED2A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_ED2A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_ED2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C01C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0218;
    }
}

loc_801C01CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C01D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C01FC;
    }
}

loc_801C01DC:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C01F8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_F42A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_F42A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_F42A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0218;
}

loc_801C01FC:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0218u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_F98E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_F98E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_F98E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0218:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19376));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C022Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_FED1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_FED1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_FED1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0230:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0280;
    }
}

loc_801C0234:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0264;
    }
}

loc_801C0244:
{
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0260u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_105D1 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_105D1);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_105D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0280;
}

loc_801C0264:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0280u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_10B38 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_10B38);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_10B38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0280:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19248));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0294u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1107E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1107E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1107E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C029C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C02A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C02AC:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C02C8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_11781 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_11781);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_11781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C02CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_801C02D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801C0378;
    }
}

loc_801C02D8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149319392);
    r0 = (r0 & 3);
}

loc_801C02EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C034C;
    }
}

loc_801C02F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C02FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0330;
    }
}

loc_801C0300:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 87;
    r5 = 3;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C032Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_120F9 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_120F9);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_120F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C034C;
}

loc_801C0330:
{
    r3 = r31;
    r4 = 0;
    r5 = 148;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C034Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_12711 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_12711);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_12711 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C034C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149319508);
    r0 = (r0 & 15);
}

loc_801C0360:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C0364:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x801C0374u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_12CFB = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_12CFB);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_12CFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0378:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19272));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C038Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_131B7 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_131B7);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_131B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0390:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C03E0;
    }
}

loc_801C0394:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C03A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C03C4;
    }
}

loc_801C03A4:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C03C0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_138BA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_138BA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_138BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C03E0;
}

loc_801C03C4:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C03E0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_13E21 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_13E21);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_13E21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C03E0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19244));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C03F4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_14367 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_14367);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_14367 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C03F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0438;
    }
}

loc_801C03FC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0428;
    }
}

loc_801C040C:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0428u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_14A6A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_14A6A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_14A6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0428:
{
    r3 = r31;
    r4 = 34;
    r5 = 0;
    ctx->lr = 0x801C0438u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_14F4C = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_14F4C);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_14F4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C0438:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C044Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_153F0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_153F0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_153F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0450:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C04A0;
    }
}

loc_801C0454:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0484;
    }
}

loc_801C0464:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0480u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_15AF3 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_15AF3);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_15AF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C04A0;
}

loc_801C0484:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C04A0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_1605A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_1605A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_1605A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C04A0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19236));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C04B4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_165A0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_165A0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_165A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C04B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C04BC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C04C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C04E8;
    }
}

loc_801C04CC:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C04E8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_16CA3 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_16CA3);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_16CA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C04E8:
{
    r3 = r31;
    r4 = 42;
    r5 = 0;
    ctx->lr = 0x801C04F8u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_17185 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_17185);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_17185 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C04FC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19476));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0510u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_17641 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_17641);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_17641 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0514:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0564;
    }
}

loc_801C0518:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0548;
    }
}

loc_801C0528:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0544u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_17D44 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_17D44);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_17D44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0564;
}

loc_801C0548:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19280));
    ctx->lr = 0x801C0564u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_182AB = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_182AB);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_182AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0564:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C0574:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19404));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0588u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_188C9 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_188C9);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_188C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C058C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C05C8;
    }
}

loc_801C0590:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C05ACu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_18EF4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_18EF4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_18EF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C05C8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_1942D = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_1942D);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_1942D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C05C8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19232));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C05DCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_19973 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_19973);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_19973 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C05E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C05E4:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0600u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_19F9E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_19F9E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_19F9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0604:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0618u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1A4FC = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1A4FC);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1A4FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C061C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0620:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 8;
    ctx->lr = 0x801C0634u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801293A0_1AAC6 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_1AAC6);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_1AAC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    r4 = 1;
    r5 = 16;
    r6 = 16;
    ctx->lr = 0x801C0648u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801293A0_1B002 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_1B002);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_1B002 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_801C2558;
}

loc_801C064C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0660u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1B5C3 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1B5C3);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1B5C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0668:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 8;
    ctx->lr = 0x801C067Cu;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801293A0_1BB8D = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_1BB8D);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_1BB8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    r4 = 1;
    r5 = 18;
    r6 = 16;
    ctx->lr = 0x801C0690u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801293A0_1C0C9 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_1C0C9);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_1C0C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_801C2558;
}

loc_801C0694:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19252));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C06A8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1C68A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1C68A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1C68A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C06AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C06CC;
    }
}

loc_801C06B0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19248));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C06C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1CCAB = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1CCAB);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1CCAB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C06C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C06CC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 2;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r6 = (r1 + 8);
    ctx->lr = 0x801C06F8u;
    if constexpr (KnownRegArgsCpuCall<0x80136A04u>(&func_80136A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80136A04_1D469 = func_80136A04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136A04_1D469);
        r4 = static_cast<uint32_t>(regargs_result_80136A04_1D469 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C06FC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0710u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1DC2A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1DC2A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1DC2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0714:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0718:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 2;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r6 = (r1 + 8);
    ctx->lr = 0x801C0744u;
    if constexpr (KnownRegArgsCpuCall<0x80136A04u>(&func_80136A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80136A04_1E3E8 = func_80136A04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136A04_1E3E8);
        r4 = static_cast<uint32_t>(regargs_result_80136A04_1E3E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0748:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0890;
    }
}

loc_801C0758:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C076Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1EC81 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1EC81);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1EC81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0770:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C0790;
    }
}

loc_801C0774:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0788u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1F2A2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1F2A2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1F2A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C078C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C07AC;
    }
}

loc_801C0790:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C07ACu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_1F8CD = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_1F8CD);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_1F8CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C07AC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19224));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C07C0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1FE13 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1FE13);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1FE13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C07C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C07E4;
    }
}

loc_801C07C8:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C07E4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2043E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2043E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2043E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C07E4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19268));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C07F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_20984 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_20984);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_20984 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C07FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C081C;
    }
}

loc_801C0800:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C081Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_20FAF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_20FAF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_20FAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C081C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19492));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0830u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_214F5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_214F5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_214F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0834:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0854;
    }
}

loc_801C0838:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0854u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_21B20 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_21B20);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_21B20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0854:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19220));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0868u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_22066 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_22066);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_22066 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C086C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0900;
    }
}

loc_801C0870:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C088Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_22691 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_22691);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_22691 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0900;
}

loc_801C0890:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19372));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C08A4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_22BEF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_22BEF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_22BEF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C08A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C08C8;
    }
}

loc_801C08AC:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19264));
    ctx->lr = 0x801C08C8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_23219 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_23219);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_23219 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C08C8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19236));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C08DCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2375F = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2375F);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2375F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C08E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0900;
    }
}

loc_801C08E4:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0900u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_23D89 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_23D89);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_23D89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0900:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0914u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_242CF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_242CF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_242CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0918:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C0938;
    }
}

loc_801C091C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0930u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_248F0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_248F0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_248F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0934:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0948;
    }
}

loc_801C0938:
{
    r3 = r31;
    r4 = 42;
    r5 = 7;
    ctx->lr = 0x801C0948u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_24EAD = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_24EAD);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_24EAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C0948:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19492));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C095Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_25351 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_25351);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_25351 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0960:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0964:
{
    r3 = r31;
    r4 = 34;
    r5 = 7;
    ctx->lr = 0x801C0974u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_2590E = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2590E);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2590E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0978:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0A30;
    }
}

loc_801C0988:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C099Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_25EA2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_25EA2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_25EA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C09A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C09C0;
    }
}

loc_801C09A4:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C09C0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_264CD = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_264CD);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_264CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C09C0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19224));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C09D4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_26A13 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_26A13);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_26A13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C09D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C09F8;
    }
}

loc_801C09DC:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C09F8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2703E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2703E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2703E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C09F8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19368));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0A0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_27584 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_27584);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_27584 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0A10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0A30;
    }
}

loc_801C0A14:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 33;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0A30u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_27BAF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_27BAF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_27BAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0A30:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0A44u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_280F5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_280F5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_280F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0A48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0A4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0A7C;
    }
}

loc_801C0A5C:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0A78u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_287F8 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_287F8);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_287F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0A9C;
}

loc_801C0A7C:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 34;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_28D7C = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_28D7C);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_28D7C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0A9C:
{
    r3 = r31;
    r4 = 34;
    r5 = 7;
    ctx->lr = 0x801C0AACu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_2925E = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2925E);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2925E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0AB0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0B30;
    }
}

loc_801C0AC0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0AD4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_297F2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_297F2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_297F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0AD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0AF8;
    }
}

loc_801C0ADC:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0AF8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_29E1D = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_29E1D);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_29E1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0AF8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19224));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0B0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2A363 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2A363);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2A363 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0B10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0B30;
    }
}

loc_801C0B14:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0B30u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2A98E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2A98E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2A98E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0B30:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0B44u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2AED4 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2AED4);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2AED4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0B48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0BAC;
    }
}

loc_801C0B4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0B58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0B7C;
    }
}

loc_801C0B5C:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0B78u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2B5D7 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2B5D7);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2B5D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0B9C;
}

loc_801C0B7C:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2BB5B = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2BB5B);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2BB5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0B9C:
{
    r3 = r31;
    r4 = 42;
    r5 = 7;
    ctx->lr = 0x801C0BACu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_2C03D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2C03D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2C03D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C0BAC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0BB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C0BBC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19368));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0BD0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2C5B9 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2C5B9);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2C5B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0BD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0BD8:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 41;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0BF4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2CBE4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2CBE4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2CBE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0BF8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0C0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2D142 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2D142);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2D142 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0C10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0C14:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0C44;
    }
}

loc_801C0C24:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C0C40u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2D844 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2D844);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2D844 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0C60;
}

loc_801C0C44:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0C60u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2DDCE = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2DDCE);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2DDCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0C60:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r6 = 0;
    ctx->lr = 0x801C0C78u;
    if constexpr (KnownRegArgsCpuCall<0x80136A04u>(&func_80136A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80136A04_2E30F = func_80136A04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136A04_2E30F);
        r4 = static_cast<uint32_t>(regargs_result_80136A04_2E30F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C0C88u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_2EA3D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2EA3D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2EA3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0C8C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0CA0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2EEF9 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2EEF9);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2EEF9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0CA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0CA8:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0CB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0CD8;
    }
}

loc_801C0CB8:
{
    r3 = r31;
    r4 = 0;
    r5 = 18;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19212));
    ctx->lr = 0x801C0CD4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2F5FB = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2F5FB);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2F5FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0CF4;
}

loc_801C0CD8:
{
    r3 = r31;
    r4 = 0;
    r5 = 5;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0CF4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_2FB61 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_2FB61);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_2FB61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0CF4:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r6 = 0;
    ctx->lr = 0x801C0D0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136A04u>(&func_80136A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80136A04_300A2 = func_80136A04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136A04_300A2);
        r4 = static_cast<uint32_t>(regargs_result_80136A04_300A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0D10:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C0D58;
    }
}

loc_801C0D20:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19456));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0D34u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3093B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3093B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3093B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0D38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0D58;
    }
}

loc_801C0D3C:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19284));
    ctx->lr = 0x801C0D58u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_30F89 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_30F89);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_30F89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0D58:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19232));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_314CF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_314CF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_314CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0D70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0DC0;
    }
}

loc_801C0D74:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0DA4;
    }
}

loc_801C0D84:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0DA0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_31BD2 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_31BD2);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_31BD2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0DC0;
}

loc_801C0DA4:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C0DC0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3215D = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3215D);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3215D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0DC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0E08;
    }
}

loc_801C0DD0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19492));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0DE4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3277B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3277B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3277B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0DE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0E08;
    }
}

loc_801C0DEC:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0E08u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_32DA6 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_32DA6);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_32DA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0E08:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0E1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_332EC = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_332EC);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_332EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0E20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C0E70;
    }
}

loc_801C0E24:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0E54;
    }
}

loc_801C0E34:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0E50u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_339EF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_339EF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_339EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0E70;
}

loc_801C0E54:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 34;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C0E70u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_33F7A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_33F7A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_33F7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0E70:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C0E80:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19236));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0E94u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_34598 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_34598);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_34598 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0E98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0E9C:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0EB8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_34BC3 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_34BC3);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_34BC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C0EBC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19268));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0ED0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_35121 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_35121);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_35121 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0ED4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0ED8:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0F08;
    }
}

loc_801C0EE8:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0F04u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_35823 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_35823);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_35823 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0F28;
}

loc_801C0F08:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    r7 = (r7 + 16384);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0F28u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_35DC5 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_35DC5);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_35DC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0F28:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C0F38u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_362A7 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_362A7);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_362A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0F3C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19268));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0F50u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_36763 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_36763);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_36763 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0F54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C0F58:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C0F88;
    }
}

loc_801C0F68:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C0F84u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_36E65 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_36E65);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_36E65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C0FAC;
}

loc_801C0F88:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    r7 = (r7 + 65536);
    r7 = (r7 + -16384);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C0FACu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_37420 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_37420);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_37420 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C0FAC:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C0FBCu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_37902 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_37902);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_37902 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C0FC0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19244));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C0FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_37DBE = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_37DBE);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_37DBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C0FD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1044;
    }
}

loc_801C0FDC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C0FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1028;
    }
}

loc_801C0FEC:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C1008u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_384C1 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_384C1);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_384C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1024u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_389FA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_389FA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_389FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1044;
}

loc_801C1028:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19284));
    ctx->lr = 0x801C1044u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_38F61 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_38F61);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_38F61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1044:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1058u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_394A7 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_394A7);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_394A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C105C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1060:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C106C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C10AC;
    }
}

loc_801C1070:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C108Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_39BAA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_39BAA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_39BAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C10A8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3A0E3 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3A0E3);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3A0E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C10AC:
{
    r3 = r31;
    r4 = 1;
    r5 = 6;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C10C8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3A64A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3A64A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3A64A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C10CC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C10E0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3ABA8 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3ABA8);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3ABA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C10E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C10E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C10F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1118;
    }
}

loc_801C10F8:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1114u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3B2AA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3B2AA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3B2AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1134;
}

loc_801C1118:
{
    r3 = r31;
    r4 = 1;
    r5 = 5;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1134u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3B834 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3B834);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3B834 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1134:
{
    r3 = r31;
    r4 = -1;
    r5 = 1;
    ctx->lr = 0x801C1144u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_3BD16 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_3BD16);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_3BD16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C1148:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19208));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C115Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3C1D2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3C1D2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3C1D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1160:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1164:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1194;
    }
}

loc_801C1174:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1190u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3C8D4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3C8D4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3C8D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C11B0;
}

loc_801C1194:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19292));
    ctx->lr = 0x801C11B0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3CE5E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3CE5E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3CE5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C11B0:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C11C0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_3D340 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_3D340);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_3D340 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C11C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C11D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C12B8;
    }
}

loc_801C11D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19480));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C11E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3D8D4 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3D8D4);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3D8D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C11EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C120C;
    }
}

loc_801C11F0:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C120Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3DEFF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3DEFF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3DEFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C120C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1220u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3E445 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3E445);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3E445 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1224:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1244;
    }
}

loc_801C1228:
{
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1244u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3EA70 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3EA70);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3EA70 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1244:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19236));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1258u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3EFB6 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3EFB6);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3EFB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C125C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C127C;
    }
}

loc_801C1260:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C127Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_3F5E1 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_3F5E1);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_3F5E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C127C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19432));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1290u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3FB27 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3FB27);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3FB27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1294:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1360;
    }
}

loc_801C1298:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 20;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C12B4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_40152 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_40152);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_40152 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1360;
}

loc_801C12B8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19532));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C12CCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_406B0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_406B0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_406B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C12D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C12F0;
    }
}

loc_801C12D4:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C12F0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_40CDA = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_40CDA);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_40CDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C12F0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1304u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_41220 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_41220);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_41220 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1308:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1328;
    }
}

loc_801C130C:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1328u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4184A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4184A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4184A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1328:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19204));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C133Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_41D90 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_41D90);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_41D90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1340:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1360;
    }
}

loc_801C1344:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1360u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_423DD = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_423DD);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_423DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1360:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19268));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1374u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_42923 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_42923);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_42923 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1378:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C137C:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C138Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_42EE0 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_42EE0);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_42EE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C1390:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19200));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C13A4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4339C = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4339C);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4339C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C13A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C13AC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C13B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C13DC;
    }
}

loc_801C13BC:
{
    r3 = r31;
    r4 = 0;
    r5 = 16;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C13D8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_43A9E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_43A9E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_43A9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C13F8;
}

loc_801C13DC:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C13F8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_44028 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_44028);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_44028 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C13F8:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C1408u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_4450A = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_4450A);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_4450A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C140C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1420u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_449C6 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_449C6);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_449C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1424:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1474;
    }
}

loc_801C1428:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1458;
    }
}

loc_801C1438:
{
    r3 = r31;
    r4 = 0;
    r5 = 20;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19460));
    ctx->lr = 0x801C1454u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_450C8 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_450C8);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_450C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1474;
}

loc_801C1458:
{
    r3 = r31;
    r4 = 1;
    r5 = 2;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1474u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_45652 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_45652);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_45652 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1474:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19196));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1488u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_45B98 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_45B98);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_45B98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C148C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1490:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C14A0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_46155 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_46155);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_46155 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C14A4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19192));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C14B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_46611 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_46611);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_46611 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C14BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C14C0:
{
    r3 = r31;
    r4 = 24;
    r5 = 7;
    ctx->lr = 0x801C14D0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_46BCE = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_46BCE);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_46BCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801C2558;
}

loc_801C14D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19412));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C14E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4708A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4708A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4708A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C14EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1500;
    }
}

loc_801C14F0:
{
    r3 = r31;
    r4 = 34;
    r5 = 0;
    ctx->lr = 0x801C1500u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_47647 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_47647);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_47647 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1500:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19188));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1514u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_47AEB = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_47AEB);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_47AEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1518:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C152C;
    }
}

loc_801C151C:
{
    r3 = r31;
    r4 = 42;
    r5 = 0;
    ctx->lr = 0x801C152Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_480A8 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_480A8);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_480A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C152C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19412));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1540u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4854C = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4854C);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4854C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1544:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1564;
    }
}

loc_801C1548:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19184));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C155Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_48B6D = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_48B6D);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_48B6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1560:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C15EC;
    }
}

loc_801C1564:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C15D0;
    }
}

loc_801C1574:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1594u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4928D = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4928D);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4928D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C15B0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_497C6 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_497C6);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_497C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C15CCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_49CFF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_49CFF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_49CFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C15EC;
}

loc_801C15D0:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C15ECu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4A266 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4A266);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4A266 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C15EC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19188));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1600u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4A7AC = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4A7AC);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4A7AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1604:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1650;
    }
}

loc_801C1608:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1650;
    }
}

loc_801C1618:
{
    r3 = r31;
    r4 = 0;
    r5 = 13;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1634u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4AEAF = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4AEAF);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4AEAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 15;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1650u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4B3E8 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4B3E8);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4B3E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1650:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19324));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1664u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4B92E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4B92E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4B92E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1668:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C166C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C16A0;
    }
}

loc_801C167C:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 34;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C169Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4C04E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4C04E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4C04E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C16A0:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C16BCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_4C5B5 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_4C5B5);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_4C5B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C16C0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19272));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C16D4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4CB13 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4CB13);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4CB13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C16D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1768;
    }
}

loc_801C16DC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19476));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C16F0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4D134 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4D134);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4D134 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C16F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1768;
    }
}

loc_801C16F8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19296));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C170Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4D755 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4D755);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4D755 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1710:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1768;
    }
}

loc_801C1714:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19180));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1728u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4DD76 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4DD76);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4DD76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C172C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1768;
    }
}

loc_801C1730:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19176));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1744u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4E397 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4E397);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4E397 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1748:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1768;
    }
}

loc_801C174C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19204));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1760u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4E9B8 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4E9B8);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4E9B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1764:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C17D4;
    }
}

loc_801C1768:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C17A8;
    }
}

loc_801C1778:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 118;
    r5 = 36;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C17A4u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_4F251 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_4F251);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_4F251 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C17D4;
}

loc_801C17A8:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 117;
    r5 = 36;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C17D4u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_4F9FD = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_4F9FD);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_4F9FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C17D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19532));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C17E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4FFF1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4FFF1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4FFF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C17EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C187C;
    }
}

loc_801C17F0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19376));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1804u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_50612 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_50612);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_50612 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1808:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C187C;
    }
}

loc_801C180C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19368));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1820u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_50C33 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_50C33);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_50C33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1824:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C187C;
    }
}

loc_801C1828:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C183Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_51254 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_51254);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_51254 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1840:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C187C;
    }
}

loc_801C1844:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19488));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1858u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_51875 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_51875);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_51875 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C185C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C187C;
    }
}

loc_801C1860:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19172));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1874u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_51E96 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_51E96);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_51E96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1878:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C18E8;
    }
}

loc_801C187C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C18BC;
    }
}

loc_801C188C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 118;
    r5 = 44;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C18B8u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_5272F = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_5272F);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_5272F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C18E8;
}

loc_801C18BC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 117;
    r5 = 44;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C18E8u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_52EDB = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_52EDB);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_52EDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C18E8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19532));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C18FCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_534CF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_534CF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_534CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1900:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1914;
    }
}

loc_801C1904:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x801C1914u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_53A8C = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_53A8C);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_53A8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1914:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19532));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1928u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_53F30 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_53F30);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_53F30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C192C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1930:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C193C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1960;
    }
}

loc_801C1940:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C195Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_54631 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_54631);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_54631 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1960:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C197Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_54BBB = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_54BBB);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_54BBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1980:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1994u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_55119 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_55119);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_55119 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1998:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C199C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C19A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C19CC;
    }
}

loc_801C19AC:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C19C8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5581A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5581A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5581A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C19CC:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C19E8u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_55D80 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_55D80);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_55D80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C19EC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19180));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1A00u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_562DE = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_562DE);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_562DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1A04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1A18;
    }
}

loc_801C1A08:
{
    r3 = r31;
    r4 = 42;
    r5 = 7;
    ctx->lr = 0x801C1A18u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_5689B = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_5689B);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_5689B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1A18:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801357AC
}

loc_801C1A28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801C1A74;
    }
}

loc_801C1A2C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19168));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1A40u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_56F44 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_56F44);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_56F44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1A44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1A74;
    }
}

loc_801C1A48:
{
    r3 = r31;
    r4 = 0;
    r5 = 55;
    r6 = 50;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1A64u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5756F = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5756F);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5756F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 50;
    r5 = 7;
    ctx->lr = 0x801C1A74u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_57A3A = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_57A3A);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_57A3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1A74:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1A88u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_57EDE = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_57EDE);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_57EDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1A8C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1A90:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1A9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1AC4;
    }
}

loc_801C1AA0:
{
    r3 = r31;
    r4 = 0;
    r5 = 19;
    r6 = 42;
    r7 = 65536;
    r7 = (r7 + -32768);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1AC0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_585FE = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_585FE);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_585FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1AC4:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1AE0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_58B65 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_58B65);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_58B65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1AE4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19224));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1AF8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_590C3 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_590C3);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_590C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1AFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1B3C;
    }
}

loc_801C1B00:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 34;
    r5 = 8;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1B2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_5985A = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_5985A);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_5985A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 2;
    ctx->lr = 0x801C1B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_59DD3 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_59DD3);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_59DD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1B3C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19244));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1B50u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5A277 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5A277);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5A277 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1B54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1B84;
    }
}

loc_801C1B58:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 34;
    r5 = 24;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1B84u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_5AA37 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_5AA37);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_5AA37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C1B84:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19164));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1B98u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5B02B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5B02B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5B02B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1B9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1BA0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 34;
    r5 = 15;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1BCCu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_5B7C3 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_5B7C3);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_5B7C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1BD0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19252));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1BE4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5BDCF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5BDCF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5BDCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1BE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1C5C;
    }
}

loc_801C1BEC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19160));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1C30;
    }
}

loc_801C1C10:
{
    r3 = r31;
    r4 = 24;
    r5 = 82;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r7 = (r1 + 8);
    ctx->lr = 0x801C1C2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80104A34_5C674 = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_5C674);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_5C674 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1C4C;
}

loc_801C1C30:
{
    r3 = r31;
    r4 = 24;
    r5 = 40;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r7 = (r1 + 8);
    ctx->lr = 0x801C1C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80104A34_5CBE3 = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_5CBE3);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_5CBE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1C4C:
{
    r3 = r31;
    r4 = -1;
    r5 = 5;
    ctx->lr = 0x801C1C5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_5D0C5 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_5D0C5);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_5D0C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1C5C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19236));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1C70u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5D569 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5D569);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5D569 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1C74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1C78:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1C84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1CA8;
    }
}

loc_801C1C88:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C1CA4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5DC6A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5DC6A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5DC6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1CA8:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C1CC4u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5E1F4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5E1F4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5E1F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1CC8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19252));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1CDCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5E752 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5E752);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5E752 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1CE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1CE4:
{
    r3 = r31;
    r4 = -1;
    r5 = 5;
    ctx->lr = 0x801C1CF4u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_5ED0F = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_5ED0F);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_5ED0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1D24;
    }
}

loc_801C1D04:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C1D20u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5F27C = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5F27C);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5F27C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1D24:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19328));
    ctx->lr = 0x801C1D40u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_5F7E2 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_5F7E2);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_5F7E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1D44:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19396));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1D58u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5FD40 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5FD40);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5FD40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1D5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1D60:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1D90;
    }
}

loc_801C1D70:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C1D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_60441 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_60441);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_60441 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1D90:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C1DACu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_609A7 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_609A7);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_609A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1DB0:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x801357AC
}

loc_801C1DC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C1DC4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1DD8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6110A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6110A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6110A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1DDC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C1DFC;
    }
}

loc_801C1DE0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19256));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1DF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6172B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6172B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6172B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1DF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1DFC:
{
    r3 = r31;
    r4 = 50;
    r5 = 1;
    ctx->lr = 0x801C1E0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_61CE8 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_61CE8);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_61CE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r31;
    r4 = 0;
    r5 = 55;
    r6 = 50;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1E28u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6217F = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6217F);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6217F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1E2C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19180));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1E40u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_626DD = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_626DD);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_626DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1E44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1E58;
    }
}

loc_801C1E48:
{
    r3 = r31;
    r4 = -1;
    r5 = 1;
    ctx->lr = 0x801C1E58u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_62C9A = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_62C9A);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_62C9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1E58:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6313E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6313E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6313E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1E70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1E74:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1EC0;
    }
}

loc_801C1E84:
{
    r3 = r31;
    r4 = 0;
    r5 = 23;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19156));
    ctx->lr = 0x801C1EA0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_63841 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_63841);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_63841 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 25;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19156));
    ctx->lr = 0x801C1EBCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_63D7A = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_63D7A);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_63D7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1EC0:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19152));
    ctx->lr = 0x801C1EDCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_642E1 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_642E1);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_642E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1EE0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19148));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1EF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6483F = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6483F);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6483F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1EF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1F0C;
    }
}

loc_801C1EFC:
{
    r3 = r31;
    r4 = 42;
    r5 = 1;
    ctx->lr = 0x801C1F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_64DFC = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_64DFC);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_64DFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C1F0C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19544));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1F20u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_652A0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_652A0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_652A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1F24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C1F28:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1F34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1F74;
    }
}

loc_801C1F38:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C1F54u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_659A3 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_659A3);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_659A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C1F70u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_65EDC = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_65EDC);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_65EDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1F74:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C1F90u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_66443 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_66443);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_66443 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C1F94:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19376));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C1FA8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_669A1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_669A1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_669A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C1FAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C1FFC;
    }
}

loc_801C1FB0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C1FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1FE0;
    }
}

loc_801C1FC0:
{
    r3 = r31;
    r4 = 0;
    r5 = 18;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C1FDCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_670A4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_670A4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_670A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C1FFC;
}

loc_801C1FE0:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C1FFCu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6760B = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6760B);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6760B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C1FFC:
{
    r3 = r31;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2010u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_67B51 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_67B51);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_67B51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2014:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C2018:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149326880);
    r0 = (r0 & 15);
}

loc_801C202C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C2558;
    }
}

loc_801C2030:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19424));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19144));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 181;
    r5 = 24;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C205Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_68442 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_68442);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_68442 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2060:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19488));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2074u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_68A4E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_68A4E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_68A4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2078:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C20A8;
    }
}

loc_801C207C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19424));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19144));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 181;
    r5 = 24;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C20A8u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_69237 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_69237);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_69237 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C20A8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19140));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C20BCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6982B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6982B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6982B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C20C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C212C;
    }
}

loc_801C20C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C20D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2110;
    }
}

loc_801C20D4:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C20F0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_69F2E = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_69F2E);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_69F2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C210Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6A467 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6A467);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6A467 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C212C;
}

loc_801C2110:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 42;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C212Cu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6A9CE = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6A9CE);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6A9CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C212C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19544));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2140u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6AF14 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6AF14);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6AF14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2144:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C2148:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C2154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2194;
    }
}

loc_801C2158:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C2174u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6B617 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6B617);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6B617 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C2190u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6BB50 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6BB50);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6BB50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2194:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19216));
    ctx->lr = 0x801C21B0u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6C0B7 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6C0B7);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6C0B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C21B4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19404));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C21C8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6C615 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6C615);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6C615 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C21CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C21E0;
    }
}

loc_801C21D0:
{
    r3 = r31;
    r4 = -1;
    r5 = 5;
    ctx->lr = 0x801C21E0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_6CBD2 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_6CBD2);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_6CBD2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C21E0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C21F4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6D076 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6D076);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6D076 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C21F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C220C;
    }
}

loc_801C21FC:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x801C220Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_6D633 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_6D633);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_6D633 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C220C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19388));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2220u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6DAD7 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6DAD7);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6DAD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2224:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C2228:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C2234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2258;
    }
}

loc_801C2238:
{
    r3 = r31;
    r4 = 2;
    r5 = 2;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C2254u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6E1D8 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6E1D8);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6E1D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2258:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = MemoryInline::FlatRead32((r31 + 448));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19524));
    ctx->lr = 0x801C2274u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6E762 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6E762);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6E762 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2278:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C228Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6ECC0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6ECC0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6ECC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2290:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C22A4;
    }
}

loc_801C2294:
{
    r3 = r31;
    r4 = 34;
    r5 = 1;
    ctx->lr = 0x801C22A4u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_6F27D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_6F27D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_6F27D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C22A4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C22B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_6F721 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6F721);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6F721 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C22BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C22C0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C22CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C230C;
    }
}

loc_801C22D0:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C22ECu;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_6FE24 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_6FE24);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_6FE24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C2308u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_7035D = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_7035D);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_7035D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C230C:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C2328u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_708C4 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_708C4);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_708C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C232C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19404));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2340u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_70E22 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_70E22);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_70E22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C2344:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C2348:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C2354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C2378;
    }
}

loc_801C2358:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C2374u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_71525 = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_71525);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_71525 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2378:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 34;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19472));
    ctx->lr = 0x801C2394u;
    if constexpr (KnownRegArgsCpuCall<0x801BFB7Cu>(&func_801BFB7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801BFB7C_71A8C = func_801BFB7C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801BFB7C_71A8C);
        r4 = static_cast<uint32_t>(regargs_result_801BFB7C_71A8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801BFB7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801C2558;
}

loc_801C2398:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19404));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C23ACu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_71FEA = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_71FEA);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_71FEA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C23B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C23E0;
    }
}

loc_801C23B4:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 34;
    r5 = 8;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C23E0u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_72781 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_72781);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_72781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C23E0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19476));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C23F4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_72D75 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_72D75);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_72D75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C23F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2454;
    }
}

loc_801C23FC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C2408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C243C;
    }
}

loc_801C240C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 89;
    r5 = 3;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C2438u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_735E4 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_735E4);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_735E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C2454;
}

loc_801C243C:
{
    r3 = r31;
    r4 = 3;
    r5 = 106;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C2454u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_73BED = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_73BED);
        r4 = static_cast<uint32_t>(regargs_result_80104918_73BED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C2454:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19376));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2468u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_74133 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_74133);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_74133 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C246C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2488;
    }
}

loc_801C2470:
{
    r3 = r31;
    r4 = 34;
    r5 = 15;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C2488u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_74751 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_74751);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_74751 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_801C2488:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19436));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19324));
    ctx->lr = 0x801C249Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_74D45 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_74D45);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_74D45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C24A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2514;
    }
}

loc_801C24A4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149328044);
    r0 = (r0 & 15);
}

loc_801C24B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C2514;
    }
}

loc_801C24BC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C24C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C24FC;
    }
}

loc_801C24CC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 89;
    r5 = 3;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C24F8u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_756BC = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_756BC);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_756BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    goto loc_801C2514;
}

loc_801C24FC:
{
    r3 = r31;
    r4 = 3;
    r5 = 106;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    ctx->lr = 0x801C2514u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_75CC5 = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_75CC5);
        r4 = static_cast<uint32_t>(regargs_result_80104918_75CC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801C2514:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19240));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19552));
    ctx->lr = 0x801C2528u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_7620B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_7620B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_7620B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
}

loc_801C252C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C2558;
    }
}

loc_801C2530:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19528));
    r6 = 0;
    ctx->lr = 0x801C2548u;
    if constexpr (KnownRegArgsCpuCall<0x80136A04u>(&func_80136A04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80136A04_76827 = func_80136A04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80136A04_76827);
        r4 = static_cast<uint32_t>(regargs_result_80136A04_76827 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80136A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 4;
    ctx->lr = 0x801C2558u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80136BB4_76F55 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_76F55);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_76F55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801C2558:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801BFD18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801BFD18_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BFD18 func_801BFD18 preserves=true fpr_mask=0x00000000
