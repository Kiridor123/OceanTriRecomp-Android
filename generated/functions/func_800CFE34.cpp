#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800CFE34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800CFE34u);
    goto loc_800CFE34;

loc_800CFE34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = 0x80690000u;
    r30 = (r6 + 28984);
    r0 = (r4 & 255);
}

loc_800CFE58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CFEF4;
    }
}

loc_800CFE5C:
{
    r6 = MemoryInline::FlatRead8((r30 + 32));
}

loc_800CFE64:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(64))) {
        goto loc_800CFE70;
    }
}

loc_800CFE68:
{
    r3 = 0;
    goto loc_800CFF24;
}

loc_800CFE70:
{
    r31 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r31 + r3);
    r0 = MemoryInline::FlatRead32((r30 + 24));
}

loc_800CFE80:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_800CFE8C;
    }
}

loc_800CFE84:
{
    r3 = 0;
    goto loc_800CFF24;
}

loc_800CFE8C:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r30 + 16), r0);
    MemoryInline::FlatWriteRam32((r30 + 12), r4);
    r0 = 1;
    r4 = (r30 + r6);
    MemoryInline::FlatWrite8((r4 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r30 + r0);
    MemoryInline::FlatWrite32((r4 + 100), r31);
    r0 = MemoryInline::FlatRead8((r30 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r30 + r0);
    MemoryInline::FlatWrite32((r4 + 356), r3);
    r0 = MemoryInline::FlatRead8((r30 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r30 + r0);
    r3 = (r3 + 612);
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FBD4_B0B = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_B0B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead8((r30 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 32), static_cast<uint8_t>(r0));
    r3 = r31;
    goto loc_800CFF24;
}

loc_800CFEF4:
{
    r5 = MemoryInline::FlatRead32((r30 + 24));
    r4 = (r5 - r3);
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_800CFF04:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_800CFF10;
    }
}

loc_800CFF08:
{
    r3 = 0;
    goto loc_800CFF24;
}

loc_800CFF10:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r30 + 28), r0);
    r3 = (r5 + r3);
    MemoryInline::FlatWriteRam32((r30 + 24), r3);
}

loc_800CFF24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CFE34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CFE34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CFE34 func_800CFE34 preserves=true fpr_mask=0x00000000
