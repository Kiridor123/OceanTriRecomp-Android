#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800626F0(CpuContext* ctx);
extern "C" uint32_t func_800626F0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800912C0(CpuContext* ctx);
extern "C" uint64_t func_800912C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80091338(CpuContext* ctx);
extern "C" uint64_t func_80091338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80091DDC(CpuContext* ctx);
extern "C" uint64_t func_80091DDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80092084_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80092084;

loc_80092084:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r3 = r29;
    ctx->lr = 0x800920B0u;
    if constexpr (KnownRegArgsCpuCall<0x80091338u>(&func_80091338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091338_6E6 = func_80091338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80091338_6E6);
        r4 = static_cast<uint32_t>(regargs_result_80091338_6E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80091338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r3 = r29;
    ctx->lr = 0x800920BCu;
    if constexpr (KnownRegArgsCpuCall<0x800912C0u>(&func_800912C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800912C0_A25 = func_800912C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800912C0_A25);
        r4 = static_cast<uint32_t>(regargs_result_800912C0_A25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800912C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800628A4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    r6 = (r3 + 8);
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
    goto loc_80092134;
}

loc_800920E4:
{
    r6 = r28;
    r0 = (static_cast<int32_t>(r4) >> 3);
    r4 = (r4 & 7);
}

loc_800920F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r30))) {
        goto loc_80092124;
    }
}

loc_800920F8:
{
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 1);
}

loc_8009210C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80092124;
    }
}

loc_80092110:
{
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
    goto loc_80092134;
}

loc_80092124:
{
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
}

loc_80092134:
{
    r4 = MemoryInline::FlatRead16(r28);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_80092140:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_800920E4;
    }
}

loc_80092144:
{
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (r5 + r0);
    r4 = (r4 + -4);
    ctx->lr = 0x80092158u;
    if constexpr (KnownRegArgsCpuCall<0x800626F0u>(&func_800626F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800626F0_1479 = func_800626F0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800626F0_1479;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800626F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r29;
    r4 = (r1 + 12);
    ctx->lr = 0x8009216Cu;
    if constexpr (KnownRegArgsCpuCall<0x80091DDCu>(&func_80091DDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80091DDC_1765 = func_80091DDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80091DDC_1765);
        r4 = static_cast<uint32_t>(regargs_result_80091DDC_1765 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80091DDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80092170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009217C;
    }
}

loc_80092174:
{
    r3 = r28;
    goto loc_80092180;
}

loc_8009217C:
{
    r3 = 0;
}

loc_80092180:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80092084(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80092084_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80092084 func_80092084 preserves=true fpr_mask=0x00000000
