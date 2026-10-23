#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046429C(CpuContext* ctx);
extern "C" uint32_t func_8046429C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8055FB5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8055FB5C;

loc_8055FB5C:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8055FB68:
{
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(12288))) {
        goto loc_8055FB88;
    }
}

loc_8055FB84:
{
    goto loc_8055FC9C;
}

loc_8055FB88:
{
    r29 = 0x80650000u;
    r31 = 0;
    r29 = (r29 + 18872);
}

loc_8055FB94:
{
    r3 = MemoryAlias::FlatRead32(r29);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_9B0 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_9B0;
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

loc_8055FBA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055FBCC;
    }
}

loc_8055FBA8:
{
    r4 = 0x80650000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 18872);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32(r4_addr_1);
    r3 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r28 = (static_cast<int32_t>(r0) >> 1);
    goto loc_8055FBDC;
}

loc_8055FBCC:
{
    r31 = (r31 + 1);
    r29 = (r29 + 4);
}

loc_8055FBD8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_8055FB94;
    }
}

loc_8055FBDC:
{
}

loc_8055FBE0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(4))) {
        goto loc_8055FC90;
    }
}

loc_8055FBE4:
{
    r3 = (r31 + 1);
    r4 = 0x80650000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & -1073741824);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r4 = (r4 + 18872);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -1);
    r0 = (r0 + r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32(r4_addr_3);
    r5_addr_1 = (r5 + r3);
    r0 = MemoryAlias::FlatRead16(r5_addr_1);
}

loc_8055FC18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12288))) {
        goto loc_8055FC24;
    }
}

loc_8055FC1C:
{
    r3_addr_1 = (r3 + r5);
    r3 = MemoryAlias::FlatRead16(r3_addr_1);
    goto loc_8055FC9C;
}

loc_8055FC24:
{
    r3 = (r31 + 2);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_7 & -1073741824);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 - r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -1);
    r0 = (r0 + r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32(r4_addr_4);
    r5_addr_2 = (r5 + r3);
    r0 = MemoryAlias::FlatRead16(r5_addr_2);
}

loc_8055FC4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12288))) {
        goto loc_8055FC58;
    }
}

loc_8055FC50:
{
    r3_addr_2 = (r3 + r5);
    r3 = MemoryAlias::FlatRead16(r3_addr_2);
    goto loc_8055FC9C;
}

loc_8055FC58:
{
    r3 = (r31 + 3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_10 & -1073741824);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 - r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -1);
    r0 = (r0 + r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4_addr_5 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32(r4_addr_5);
    r5_addr_3 = (r5 + r3);
    r0 = MemoryAlias::FlatRead16(r5_addr_3);
}

loc_8055FC80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12288))) {
        goto loc_8055FC98;
    }
}

loc_8055FC84:
{
    r3_addr_3 = (r3 + r5);
    r3 = MemoryAlias::FlatRead16(r3_addr_3);
    goto loc_8055FC9C;
}

loc_8055FC90:
{
    r3 = r30;
    goto loc_8055FC9C;
}

loc_8055FC98:
{
    r3 = r30;
}

loc_8055FC9C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055FB5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055FB5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055FB5C func_8055FB5C preserves=true fpr_mask=0x00000000
