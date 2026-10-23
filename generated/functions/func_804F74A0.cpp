#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F62C0(CpuContext* ctx);
extern "C" uint32_t func_804F62C0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F8730(CpuContext* ctx);
extern "C" uint32_t func_804F8730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804F74A0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804F74A0;

loc_804F74A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80760000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r6 = (r6 + -10352);
    r30 = r5;
    r29 = r4;
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r6_addr_0 = (r6 + r0);
    r31 = MemoryInline::FlatRead32(r6_addr_0);
    r0 = MemoryInline::FlatRead32((r31 + 2232));
}

loc_804F74E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_804F74F4;
    }
}

loc_804F74E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_804F74FC;
}

loc_804F74F4:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_804F74FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r3 = 0x80760000u;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r3 = (r3 + 3856);
    r5 = 21;
    r4 = (r4 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r28;
    r4 = (r29 + 1);
    r5 = 21;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F8730u>(&func_804F8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804F8730_B0F = func_804F8730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F8730_B0F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804F8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r31 + 2112));
}

loc_804F7534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F7594;
    }
}

loc_804F7538:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
}

loc_804F7540:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804F7560;
    }
}

loc_804F7544:
{
    r0 = MemoryInline::FlatRead32((r31 + 2232));
    r3 = r28;
    r4 = (r1 + 8);
    r6 = (r29 + 1);
    r5 = (r0 & 255);
    r7 = 21;
    if constexpr (KnownRegArgsCpuCall<0x804F62C0u>(&func_804F62C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804F62C0_1054 = func_804F62C0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F62C0_1054;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804F62C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
}

loc_804F7560:
{
    r3 = 0x80760000u;
    r4 = 0x80570000u;
    r3 = (r3 + 3856);
    r5 = 21;
    r4 = (r4 + 17544);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045BD3C_13CE = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_13CE);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_13CE >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804F757C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804F7594;
    }
}

loc_804F7580:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F7594;
    }
}

loc_804F758C:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_804F7594:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F74A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F74A0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F74A0 func_804F74A0 preserves=true fpr_mask=0x00000000
