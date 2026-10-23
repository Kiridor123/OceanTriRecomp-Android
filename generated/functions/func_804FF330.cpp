#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804FF330_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804FF330;

loc_804FF330:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r29 = 0x80760000u;
    r25 = r3;
    r29 = (r29 + 3936);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r27 = r3;
    r31 = r29;
    r30 = (r29 + 108);
    r28 = 0;
    r24 = 0;
}

loc_804FF368:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = (r25 + 64);
    r5 = 6;
    r22 = (r3 + 64);
    r3 = r22;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_893 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_893);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_893 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804FF384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FF494;
    }
}

loc_804FF388:
{
    r21 = MemoryInline::FlatRead32((r29 + 100));
    r26 = r21;
    goto loc_804FF48C;
}

loc_804FF394:
{
    r23 = MemoryInline::FlatRead32(r26);
    r4 = (r25 + 64);
    r5 = 6;
    r3 = (r23 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_C93 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_C93);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_C93 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804FF3AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804FF488;
    }
}

loc_804FF3B0:
{
    r0 = MemoryInline::FlatRead8((r23 + 89));
}

loc_804FF3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FF3C8;
    }
}

loc_804FF3BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 104));
}

loc_804FF3C4:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_804FF488;
    }
}

loc_804FF3C8:
{
    r3 = MemoryInline::FlatRead32(r21);
    r4 = r22;
    r5 = 6;
    r3 = (r3 + 64);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_11A3 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_11A3);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_11A3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804FF3E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804FF3FC;
    }
}

loc_804FF3E4:
{
    r0 = MemoryInline::FlatRead32((r21 + 8));
}

loc_804FF3EC:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_804FF494;
    }
}

loc_804FF3F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    MemoryInline::FlatWriteRam32((r29 + 100), r0);
    goto loc_804FF408;
}

loc_804FF3FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 112));
    r0 = MemoryInline::FlatRead32((r31 + 116));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_804FF408:
{
    r3 = MemoryInline::FlatRead32((r31 + 116));
    r0 = MemoryInline::FlatRead32((r31 + 112));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r29 + 104));
}

loc_804FF41C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_804FF444;
    }
}

loc_804FF420:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_804FF42C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FF444;
    }
}

loc_804FF430:
{
    MemoryInline::FlatWrite32((r31 + 112), r26);
    MemoryInline::FlatWrite32((r31 + 116), r24);
    MemoryInline::FlatWrite32((r26 + 8), r30);
    MemoryInline::FlatWriteRam32((r29 + 104), r30);
    goto loc_804FF494;
}

loc_804FF444:
{
    r0 = MemoryInline::FlatRead32((r29 + 100));
}

loc_804FF44C:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_804FF46C;
    }
}

loc_804FF450:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r31 + 112), r0);
    MemoryInline::FlatWrite32((r31 + 116), r26);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWrite32((r26 + 4), r30);
    goto loc_804FF494;
}

loc_804FF46C:
{
    MemoryInline::FlatWrite32((r31 + 112), r26);
    r0 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r31 + 116), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32((r26 + 8), r30);
    goto loc_804FF494;
}

loc_804FF488:
{
    r26 = MemoryInline::FlatRead32((r26 + 8));
}

loc_804FF48C:
{
}

loc_804FF490:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804FF394;
    }
}

loc_804FF494:
{
    r28 = (r28 + 1);
    r30 = (r30 + 12);
}

loc_804FF4A0:
{
    r31 = (r31 + 12);
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(10))) {
        goto loc_804FF368;
    }
}

loc_804FF4A8:
{
    r3 = r27;
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
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FF330(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FF330_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FF330 func_804FF330 preserves=true fpr_mask=0x00000000
