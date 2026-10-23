#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80452790_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80452790;

loc_80452790:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
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

loc_804527C8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_804527D4;
    }
}

loc_804527CC:
{
    r3 = 0;
    goto loc_8045283C;
}

loc_804527D4:
{
    r30 = (r28 + r29);
}

loc_804527DC:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(r0))) {
        goto loc_804527E4;
    }
}

loc_804527E0:
{
    r30 = r0;
}

loc_804527E4:
{
    r29 = 0;
    r0 = (r28 * 124);
    r3 = (r3 + r0);
    r31 = (r3 + 4);
    goto loc_80452830;
}

loc_804527F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 72));
    MemoryInline::FlatWrite32(r27, r0);
    r0 = MemoryInline::FlatRead32((r31 + 76));
    MemoryInline::FlatWrite32((r27 + 4), r0);
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r27 + 8), static_cast<uint16_t>(r0));
    r3 = (r27 + 10);
    r4 = (r31 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_C32 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_C32;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
    }
    r29 = (r29 + 1);
    r27 = (r27 + 44);
    r31 = (r31 + 124);
    r28 = (r28 + 1);
}

loc_80452830:
{
}

loc_80452834:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r30))) {
        goto loc_804527F8;
    }
}

loc_80452838:
{
    r3 = r29;
}

loc_8045283C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80452790(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80452790_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80452790 func_80452790 preserves=true fpr_mask=0x00000000
