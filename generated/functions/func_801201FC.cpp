#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012D934(CpuContext* ctx);
extern "C" uint64_t func_8012D934_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DBA0(CpuContext* ctx);
extern "C" uint64_t func_8012DBA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012DDBC(CpuContext* ctx);
extern "C" uint64_t func_8012DDBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012E3C0(CpuContext* ctx);
extern "C" uint64_t func_8012E3C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F308(CpuContext* ctx);
extern "C" uint64_t func_8012F308_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_801325A8(CpuContext* ctx);
extern "C" uint64_t func_801325A8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80132650(CpuContext* ctx);
extern "C" uint32_t func_80132650_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_8013291C(CpuContext* ctx);
extern "C" uint64_t func_8013291C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80132BF0(CpuContext* ctx);
extern "C" uint64_t func_80132BF0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80132E5C(CpuContext* ctx);
extern "C" uint64_t func_80132E5C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133170(CpuContext* ctx);
extern "C" uint64_t func_80133170_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133318(CpuContext* ctx);
extern "C" uint64_t func_80133318_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801201FC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_801201FC;

loc_801201FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r27 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126098_FD8 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_FD8);
        r4 = static_cast<uint32_t>(regargs_result_80126098_FD8 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r26;
    r4 = 10;
    // inline leaf 0x801204F8 (6 guest instruction(s))
    r4 = (r4 & 255);
    r0 = (r4 + -9);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2050));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x801204F8
    r0 = r3;
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x80120248u;
    if constexpr (KnownRegArgsCpuCall<0x801325A8u>(&func_801325A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_801325A8_14EB = func_801325A8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801325A8_14EB);
        r4 = static_cast<uint32_t>(regargs_result_801325A8_14EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801325A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_8012024C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012026C;
    }
}

loc_80120250:
{
    r3 = r26;
    r4 = 2;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80132330
}

loc_80120260:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012026C;
    }
}

loc_80120264:
{
    r3 = r26;
    ctx->lr = 0x8012026Cu;
    if constexpr (KnownRegArgsCpuCall<0x80132650u>(&func_80132650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80132650_1B23 = func_80132650_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80132650_1B23;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80132650u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8012026C:
{
    r0 = MemoryInline::FlatRead16((r26 + 2074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80120274:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8012034C;
    }
}

loc_80120278:
{
    r3 = r26;
    r4 = 9;
    // inline leaf 0x801204F8 (6 guest instruction(s))
    r4 = (r4 & 255);
    r0 = (r4 + -9);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2050));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x801204F8
    r0 = r3;
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x80120294u;
    if constexpr (KnownRegArgsCpuCall<0x8013291Cu>(&func_8013291C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_8013291C_2110 = func_8013291C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013291C_2110);
        r4 = static_cast<uint32_t>(regargs_result_8013291C_2110 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8013291Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80120298:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801202B0;
    }
}

loc_8012029C:
{
    r3 = r26;
    r4 = 1;
    // inline leaf 0x80132380 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80132380
}

loc_801202AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801202C4;
    }
}

loc_801202B0:
{
    r3 = r26;
    ctx->lr = 0x801202B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012E3C0u>(&func_8012E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E3C0_272F = func_8012E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E3C0_272F);
        r4 = static_cast<uint32_t>(regargs_result_8012E3C0_272F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801202BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801202C4;
    }
}

loc_801202C0:
{
    r31 = 1;
}

loc_801202C4:
{
    r3 = r26;
    r4 = 11;
    // inline leaf 0x801204F8 (6 guest instruction(s))
    r4 = (r4 & 255);
    r0 = (r4 + -9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2050));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x801204F8
    r0 = r3;
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x801202E0u;
    if constexpr (KnownRegArgsCpuCall<0x80132BF0u>(&func_80132BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80132BF0_2D3C = func_80132BF0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80132BF0_2D3C);
        r4 = static_cast<uint32_t>(regargs_result_80132BF0_2D3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80132BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_801202E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801202FC;
    }
}

loc_801202E8:
{
    r3 = r26;
    r4 = 4;
    // inline leaf 0x80132380 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80132380
}

loc_801202F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80120310;
    }
}

loc_801202FC:
{
    r3 = r26;
    ctx->lr = 0x80120304u;
    if constexpr (KnownRegArgsCpuCall<0x8012E3C0u>(&func_8012E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E3C0_335B = func_8012E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E3C0_335B);
        r4 = static_cast<uint32_t>(regargs_result_8012E3C0_335B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80120308:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80120310;
    }
}

loc_8012030C:
{
    r30 = 1;
}

loc_80120310:
{
    r3 = r26;
    r4 = MemoryInline::FlatRead16((r26 + 2058));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x8012031Cu;
    if constexpr (KnownRegArgsCpuCall<0x80132E5Cu>(&func_80132E5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80132E5C_37F2 = func_80132E5C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80132E5C_37F2);
        r4 = static_cast<uint32_t>(regargs_result_80132E5C_37F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80132E5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80120320:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80120338;
    }
}

loc_80120324:
{
    r3 = r26;
    r4 = 16;
    // inline leaf 0x80132380 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x80132380
}

loc_80120334:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012034C;
    }
}

loc_80120338:
{
    r3 = r26;
    ctx->lr = 0x80120340u;
    if constexpr (KnownRegArgsCpuCall<0x8012E3C0u>(&func_8012E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E3C0_3E12 = func_8012E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E3C0_3E12);
        r4 = static_cast<uint32_t>(regargs_result_8012E3C0_3E12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80120344:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012034C;
    }
}

loc_80120348:
{
    r28 = 1;
}

loc_8012034C:
{
    r4 = MemoryInline::FlatRead16((r26 + 2060));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80120354:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8012037C;
    }
}

loc_80120358:
{
    r3 = r26;
    ctx->lr = 0x80120360u;
    if constexpr (KnownRegArgsCpuCall<0x80133170u>(&func_80133170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80133170_433C = func_80133170_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80133170_433C);
        r4 = static_cast<uint32_t>(regargs_result_80133170_433C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80133170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80120364:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012037C;
    }
}

loc_80120368:
{
    r3 = r26;
    ctx->lr = 0x80120370u;
    if constexpr (KnownRegArgsCpuCall<0x8012E3C0u>(&func_8012E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E3C0_4757 = func_8012E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E3C0_4757);
        r4 = static_cast<uint32_t>(regargs_result_8012E3C0_4757 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80120374:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012037C;
    }
}

loc_80120378:
{
    r27 = 1;
}

loc_8012037C:
{
    r0 = MemoryInline::FlatRead16((r26 + 2074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80120384:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801203E4;
    }
}

loc_80120388:
{
    r3 = r26;
    r4 = 12;
    // inline leaf 0x801204F8 (6 guest instruction(s))
    r4 = (r4 & 255);
    r0 = (r4 + -9);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2050));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x801204F8
    r0 = r3;
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x801203A4u;
    if constexpr (KnownRegArgsCpuCall<0x80133318u>(&func_80133318)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80133318_4E32 = func_80133318_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80133318_4E32);
        r4 = static_cast<uint32_t>(regargs_result_80133318_4E32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80133318u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801203A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801203C0;
    }
}

loc_801203AC:
{
    r3 = r26;
    r4 = 8;
    // inline leaf 0x80132380 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x80132380
}

loc_801203BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801203E4;
    }
}

loc_801203C0:
{
    r3 = r26;
    ctx->lr = 0x801203C8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F308u>(&func_8012F308)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F308_53AB = func_8012F308_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F308_53AB);
        r4 = static_cast<uint32_t>(regargs_result_8012F308_53AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F308u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801203CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801203E4;
    }
}

loc_801203D0:
{
    r3 = r26;
    ctx->lr = 0x801203D8u;
    if constexpr (KnownRegArgsCpuCall<0x8012E3C0u>(&func_8012E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E3C0_5878 = func_8012E3C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012E3C0_5878);
        r4 = static_cast<uint32_t>(regargs_result_8012E3C0_5878 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801203DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801203E4;
    }
}

loc_801203E0:
{
    r29 = 1;
}

loc_801203E4:
{
}

loc_801203E8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80120408;
    }
}

loc_801203EC:
{
    r3 = r26;
    r4 = 8;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x80132330
}

loc_801203FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_80120400:
{
    r3 = 3;
    goto loc_801204E0;
}

loc_80120408:
{
}

loc_8012040C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8012042C;
    }
}

loc_80120410:
{
    r3 = r26;
    r4 = 29;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x80132330
}

loc_80120420:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_80120424:
{
    r3 = 1;
    goto loc_801204E0;
}

loc_8012042C:
{
}

loc_80120430:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80120450;
    }
}

loc_80120434:
{
    r3 = r26;
    r4 = 29;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & 1);
    // end of inlined leaf 0x80132330
}

loc_80120444:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_80120448:
{
    r3 = 2;
    goto loc_801204E0;
}

loc_80120450:
{
}

loc_80120454:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80120474;
    }
}

loc_80120458:
{
    r3 = r26;
    r4 = 29;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_18 & 1);
    // end of inlined leaf 0x80132330
}

loc_80120468:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_8012046C:
{
    r3 = 4;
    goto loc_801204E0;
}

loc_80120474:
{
}

loc_80120478:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_8012047C:
{
    r3 = r26;
    r4 = 29;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & 1);
    // end of inlined leaf 0x80132330
}

loc_8012048C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_80120490:
{
    r3 = r26;
    ctx->lr = 0x80120498u;
    if constexpr (KnownRegArgsCpuCall<0x8012D934u>(&func_8012D934)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D934_6A4F = func_8012D934_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D934_6A4F);
        r4 = static_cast<uint32_t>(regargs_result_8012D934_6A4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D934u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8012049C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_801204A0:
{
    r3 = r26;
    ctx->lr = 0x801204A8u;
    if constexpr (KnownRegArgsCpuCall<0x8012DBA0u>(&func_8012DBA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012DBA0_6E15 = func_8012DBA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DBA0_6E15);
        r4 = static_cast<uint32_t>(regargs_result_8012DBA0_6E15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012DBA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801204AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_801204B0:
{
    r3 = r26;
    ctx->lr = 0x801204B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012DDBCu>(&func_8012DDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012DDBC_71DB = func_8012DDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012DDBC_71DB);
        r4 = static_cast<uint32_t>(regargs_result_8012DDBC_71DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012DDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801204BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801204DC;
    }
}

loc_801204C0:
{
    r0 = MemoryInline::FlatRead8((r26 + 482));
}

loc_801204C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801204D4;
    }
}

loc_801204CC:
{
}

loc_801204D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801204DC;
    }
}

loc_801204D4:
{
    r3 = 5;
    goto loc_801204E0;
}

loc_801204DC:
{
    r3 = 0;
}

loc_801204E0:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801201FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801201FC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801201FC func_801201FC preserves=true fpr_mask=0x00000000
