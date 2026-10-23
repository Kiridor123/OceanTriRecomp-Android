#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804FEF60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804FEF60;

loc_804FEF60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = 0x80760000u;
    r27 = r3;
    r30 = (r30 + 3936);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    r28 = r30;
    r31 = 0;
}

loc_804FEF90:
{
    r3 = MemoryInline::FlatRead32((r28 + 108));
    r4 = (r27 + 64);
    r5 = 6;
    r3 = (r3 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_726 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_726);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_726 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_804FEFA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FF044;
    }
}

loc_804FEFAC:
{
    r28 = (r31 * 12);
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r5 = 6;
    r3 = MemoryInline::FlatRead32(r3);
    r31 = (r30 + r28);
    r31 = (r31 + 108);
    r4 = MemoryInline::FlatRead32(r31);
    r3 = (r3 + 64);
    r4 = (r4 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_BBE = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_BBE);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_BBE >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_804FEFD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804FF054;
    }
}

loc_804FEFD8:
{
    r28 = (r30 + r28);
    r5 = 6;
    r3 = MemoryInline::FlatRead32((r28 + 112));
    r0 = MemoryInline::FlatRead32((r28 + 116));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r4 = MemoryInline::FlatRead32((r30 + 104));
    r3 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead32(r4);
    r4 = (r3 + 64);
    r3 = (r6 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_10B7 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_10B7);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_10B7 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_804FF008:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FF018;
    }
}

loc_804FF00C:
{
    r0 = MemoryInline::FlatRead32((r28 + 112));
    MemoryInline::FlatWriteRam32((r30 + 104), r0);
    goto loc_804FF024;
}

loc_804FF018:
{
    r3 = MemoryInline::FlatRead32((r28 + 116));
    r0 = MemoryInline::FlatRead32((r28 + 112));
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_804FF024:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 116), r3);
    r3 = MemoryInline::FlatRead32((r30 + 100));
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWriteRam32((r30 + 100), r31);
    MemoryInline::FlatWrite32((r28 + 112), r0);
    goto loc_804FF054;
}

loc_804FF044:
{
    r31 = (r31 + 1);
    r28 = (r28 + 12);
}

loc_804FF050:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(10))) {
        goto loc_804FEF90;
    }
}

loc_804FF054:
{
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FEF60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FEF60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FEF60 func_804FEF60 preserves=true fpr_mask=0x00000000
