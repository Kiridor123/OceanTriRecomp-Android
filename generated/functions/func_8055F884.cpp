#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046429C(CpuContext* ctx);
extern "C" uint32_t func_8046429C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8055F420(CpuContext* ctx);
extern "C" uint64_t func_8055F420_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8055F884_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_8055F884;

loc_8055F884:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8055F890:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(12288))) {
        goto loc_8055F8B0;
    }
}

loc_8055F8AC:
{
    goto loc_8055F9D0;
}

loc_8055F8B0:
{
    r3 = (r13 + -13224);
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_9DE = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_9DE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F8C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F960;
    }
}

loc_8055F8C8:
{
    r3 = r31;
    ctx->lr = 0x8055F8D0u;
    if constexpr (KnownRegArgsCpuCall<0x8055F420u>(&func_8055F420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8055F420_C9B = func_8055F420_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055F420_C9B);
        r4 = static_cast<uint32_t>(regargs_result_8055F420_C9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
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
        InvokeDirectCpu<0x8055F420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r30 = 0;
    r29 = (r13 + -13216);
}

loc_8055F8DC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r28 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_113B = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_113B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F8EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F930;
    }
}

loc_8055F8F0:
{
    r4 = (r13 + -13216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = (1 - r30);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r3 - r0);
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_3 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_8055F920:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(12288))) {
        goto loc_8055F928;
    }
}

loc_8055F924:
{
    goto loc_8055F944;
}

loc_8055F928:
{
    r4 = r28;
    goto loc_8055F944;
}

loc_8055F930:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
}

loc_8055F93C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_8055F8DC;
    }
}

loc_8055F940:
{
    r4 = r28;
}

loc_8055F944:
{
    r3 = (r4 & 65535);
    r0 = (r28 & 65535);
}

loc_8055F950:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055F958;
    }
}

loc_8055F954:
{
    r31 = r4;
}

loc_8055F958:
{
    r3 = r31;
    goto loc_8055F9D0;
}

loc_8055F960:
{
    r30 = 0;
    r29 = (r13 + -13216);
}

loc_8055F968:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_19FF = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_19FF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F978:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F9BC;
    }
}

loc_8055F97C:
{
    r4 = (r13 + -13216);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_5);
    r5 = (1 - r30);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r3 = (r3 - r0);
    r4_addr_6 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_6);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_7 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_7);
}

loc_8055F9AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12288))) {
        goto loc_8055F9B4;
    }
}

loc_8055F9B0:
{
    goto loc_8055F9D0;
}

loc_8055F9B4:
{
    r3 = r31;
    goto loc_8055F9D0;
}

loc_8055F9BC:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
}

loc_8055F9C8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_8055F968;
    }
}

loc_8055F9CC:
{
    r3 = r31;
}

loc_8055F9D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055F884(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055F884_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055F884 func_8055F884 preserves=true fpr_mask=0x00000000
