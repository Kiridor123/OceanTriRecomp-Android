#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FC274(CpuContext* ctx);
extern "C" uint64_t func_803FC274_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8040ED70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8040ED70;

loc_8040ED70:
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
}

loc_8040ED90:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8040ED9C;
    }
}

loc_8040ED94:
{
    r30 = MemoryInline::FlatRead8(r4);
    goto loc_8040EDA0;
}

loc_8040ED9C:
{
    r30 = 0;
}

loc_8040EDA0:
{
    r3 = r27;
    r4 = r30;
    // inline leaf 0x803FC274 (12 guest instruction(s))
}

loc_inl1_0x803FC274:
{
    r0 = MemoryInline::FlatRead8((r3 + 152));
}

loc_inl1_0x803FC27C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x803FC288;
    }
}

loc_inl1_0x803FC280:
{
    r3 = 0;
    goto loc_inl1_cont_803FC274;
}

loc_inl1_0x803FC288:
{
    r5 = MemoryInline::FlatRead32((r3 + 24768));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 24768));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24768), r0);
    r3 = r5;
}

loc_inl1_cont_803FC274:
{
    // end of inlined leaf 0x803FC274
    r29 = 0;
    goto loc_8040EDDC;
}

loc_8040EDB4:
{
    r0 = (r29 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r31 = (r28 + r0);
    r3 = r27;
    r4 = MemoryInline::FlatRead8((r31 + 4));
    if constexpr (KnownRegArgsCpuCall<0x803FC274u>(&func_803FC274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FC274_A36 = func_803FC274_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803FC274_A36);
        r4 = static_cast<uint32_t>(regargs_result_803FC274_A36 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FC274u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = MemoryInline::FlatRead8((r31 + 5));
    if constexpr (KnownRegArgsCpuCall<0x803FC274u>(&func_803FC274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FC274_D59 = func_803FC274_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803FC274_D59);
        r4 = static_cast<uint32_t>(regargs_result_803FC274_D59 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FC274u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = (r29 + 1);
}

loc_8040EDDC:
{
    r0 = (r29 & 255);
}

loc_8040EDE4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_8040EDB4;
    }
}

loc_8040EDE8:
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

extern "C" void func_8040ED70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8040ED70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8040ED70 func_8040ED70 preserves=true fpr_mask=0x00000000
