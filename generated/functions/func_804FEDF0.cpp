#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804FEDF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804FEDF0;

loc_804FEDF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r30 = 0x80760000u;
    r26 = r3;
    r30 = (r30 + 3936);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r28 = r3;
    r29 = 0;
    r25 = 0;
}

loc_804FEE20:
{
    r31 = (r30 + r25);
    r31 = (r31 + 28);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = (r26 + 64);
    r5 = 6;
    r3 = (r3 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_879 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_879);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_879 >> 32);
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

loc_804FEE3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FEF28;
    }
}

loc_804FEE40:
{
    r23 = MemoryInline::FlatRead32((r30 + 20));
    r27 = r23;
    goto loc_804FEF20;
}

loc_804FEE4C:
{
    r24 = MemoryInline::FlatRead32(r27);
    r4 = (r26 + 64);
    r5 = 6;
    r3 = (r24 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_CE4 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_CE4);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_CE4 >> 32);
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

loc_804FEE64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804FEF1C;
    }
}

loc_804FEE68:
{
    r0 = MemoryInline::FlatRead8((r24 + 89));
}

loc_804FEE70:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804FEF1C;
    }
}

loc_804FEE74:
{
    r3 = (r30 + r25);
    r6 = MemoryInline::FlatRead32(r23);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r5 = 6;
    r3 = (r6 + 64);
    r4 = (r4 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045BD3C_11E5 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_11E5);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_11E5 >> 32);
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

loc_804FEE94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FEEB4;
    }
}

loc_804FEE98:
{
    r0 = MemoryInline::FlatRead32((r23 + 8));
}

loc_804FEEA0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_804FEF28;
    }
}

loc_804FEEA4:
{
    r5 = (r30 + r25);
    r5 = (r5 + 36);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r30 + 20), r0);
    goto loc_804FEEC8;
}

loc_804FEEB4:
{
    r3 = (r30 + r25);
    r5 = (r3 + 36);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_804FEEC8:
{
    r4 = (r30 + r25);
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_804FEEE0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_804FEF00;
    }
}

loc_804FEEE4:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    MemoryInline::FlatWrite32(r5, r27);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r31);
    MemoryInline::FlatWrite32((r27 + 4), r31);
    goto loc_804FEF28;
}

loc_804FEF00:
{
    MemoryInline::FlatWrite32((r4 + 32), r27);
    r0 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWrite32(r5, r0);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWrite32((r27 + 8), r31);
    goto loc_804FEF28;
}

loc_804FEF1C:
{
    r27 = MemoryInline::FlatRead32((r27 + 8));
}

loc_804FEF20:
{
}

loc_804FEF24:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804FEE4C;
    }
}

loc_804FEF28:
{
    r29 = (r29 + 1);
    r25 = (r25 + 12);
}

loc_804FEF34:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(6))) {
        goto loc_804FEE20;
    }
}

loc_804FEF38:
{
    r3 = r28;
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
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FEDF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FEDF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FEDF0 func_804FEDF0 preserves=true fpr_mask=0x00000000
