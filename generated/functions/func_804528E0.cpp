#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804528E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804528E0;

loc_804528E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r26 = r3;
    r27 = r4;
    r23 = r5;
    r22 = r6;
    r28 = 0;
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A5E4 (8 guest instruction(s))
}

loc_inl2_0x8041A5E4:
{
}

loc_inl2_0x8041A5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8041A5FC;
    }
}

loc_inl2_0x8041A5EC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_inl2_cont_8041A5E4;
}

loc_inl2_0x8041A5FC:
{
    r3 = 0;
}

loc_inl2_cont_8041A5E4:
{
    // end of inlined leaf 0x8041A5E4
    r3 = (r3 + 1344);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80452920:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8045292C;
    }
}

loc_80452924:
{
    r3 = 0;
    goto loc_80452A68;
}

loc_8045292C:
{
    r29 = (r27 + r23);
}

loc_80452934:
{
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(r0))) {
        goto loc_8045293C;
    }
}

loc_80452938:
{
    r29 = r0;
}

loc_8045293C:
{
    r0 = (r27 * 124);
    r3 = (r3 + r0);
    r30 = (r3 + 4);
    r25 = 0;
    r31 = (r22 & 255);
    r23 = 2;
    r24 = 3;
    r22 = 1;
    goto loc_80452A5C;
}

loc_80452960:
{
}

loc_80452964:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80452978;
    }
}

loc_80452968:
{
    r0 = MemoryInline::FlatRead32((r30 + 72));
    MemoryInline::FlatWrite32(r26, r0);
    r0 = MemoryInline::FlatRead32((r30 + 76));
    MemoryInline::FlatWrite32((r26 + 4), r0);
}

loc_80452978:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r26 + 12), r25);
    r0 = MemoryInline::FlatRead8((r30 + 120));
}

loc_8045299C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804529A8;
    }
}

loc_804529A0:
{
    MemoryInline::FlatWrite32((r26 + 12), r22);
    goto loc_804529D8;
}

loc_804529A8:
{
    MemoryInline::FlatWrite32((r26 + 12), r23);
    r0 = MemoryInline::FlatRead8((r30 + 121));
}

loc_804529B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804529C0;
    }
}

loc_804529B8:
{
    MemoryInline::FlatWrite32((r26 + 12), r25);
    goto loc_804529D8;
}

loc_804529C0:
{
    MemoryInline::FlatWrite32((r26 + 12), r23);
    r3 = MemoryInline::FlatRead32((r30 + 72));
    r0 = MemoryInline::FlatRead32((r30 + 76));
}

loc_804529D0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804529D8;
    }
}

loc_804529D4:
{
    MemoryInline::FlatWrite32((r26 + 12), r24);
}

loc_804529D8:
{
    r3 = (r26 + 16);
    r4 = (r30 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_1377 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1377;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r26 + 32), r25);
    r5 = MemoryInline::FlatRead32((r30 + 92));
    r0 = (r5 + 65536);
}

loc_804529F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_804529FC;
    }
}

loc_804529F8:
{
    MemoryInline::FlatWrite32((r26 + 32), r5);
}

loc_804529FC:
{
    MemoryInline::FlatWrite32((r26 + 36), r25);
    r5 = MemoryInline::FlatRead32((r30 + 100));
    r0 = (r5 + 65536);
}

loc_80452A0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80452A14;
    }
}

loc_80452A10:
{
    MemoryInline::FlatWrite32((r26 + 36), r5);
}

loc_80452A14:
{
    r3 = (r26 + 8);
    r4 = (r30 + 16);
    MemoryInline::FlatWrite32((r3 + 32), r25);
    r5 = MemoryInline::FlatRead32((r4 + 92));
    r0 = (r5 + 65536);
}

loc_80452A2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80452A34;
    }
}

loc_80452A30:
{
    MemoryInline::FlatWrite32((r3 + 32), r5);
}

loc_80452A34:
{
    MemoryInline::FlatWrite32((r3 + 36), r25);
    r5 = MemoryInline::FlatRead32((r4 + 100));
    r0 = (r5 + 65536);
}

loc_80452A44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80452A4C;
    }
}

loc_80452A48:
{
    MemoryInline::FlatWrite32((r3 + 36), r5);
}

loc_80452A4C:
{
    r28 = (r28 + 1);
    r26 = (r26 + 48);
    r30 = (r30 + 124);
    r27 = (r27 + 1);
}

loc_80452A5C:
{
}

loc_80452A60:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r29))) {
        goto loc_80452960;
    }
}

loc_80452A64:
{
    r3 = r28;
}

loc_80452A68:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804528E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804528E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804528E0 func_804528E0 preserves=true fpr_mask=0x00000000
