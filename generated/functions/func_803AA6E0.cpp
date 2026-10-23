#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AA6E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803AA6E0;

loc_803AA6E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r31 = r5;
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r3 = (r4 & 65535);
}

loc_803AA718:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_803AA7B8;
    }
}

loc_803AA71C:
{
    r30 = 0;
}

loc_803AA724:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(100))) {
        goto loc_803AA740;
    }
}

loc_803AA728:
{
    r0 = (r3 + -100);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + 27908);
    r3_addr_1 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_803AA768;
}

loc_803AA740:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805E0000u;
    r3 = (r3 + 27696);
    r3_addr_2 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = 0;
    ctx->lr = 0x803AA758u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B421C_969 = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_969;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B421Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803AA760:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803AA768;
    }
}

loc_803AA764:
{
    r30 = 1;
}

loc_803AA768:
{
    r0 = (r31 & 255);
}

loc_803AA770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803AA778;
    }
}

loc_803AA774:
{
    r30 = 1;
}

loc_803AA778:
{
}

loc_803AA77C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803AA7B8;
    }
}

loc_803AA780:
{
}

loc_803AA784:
{
    r31 = 16;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803AA790;
    }
}

loc_803AA78C:
{
    r31 = 24;
}

loc_803AA790:
{
    r30 = 0;
    goto loc_803AA7B0;
}

loc_803AA798:
{
    r3 = r28;
    r28 = (r28 + 4);
    r4 = r29;
    r29 = (r29 + 4);
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r30 = (r30 + 1);
}

loc_803AA7B0:
{
}

loc_803AA7B4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r31))) {
        goto loc_803AA798;
    }
}

loc_803AA7B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AA6E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AA6E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AA6E0 func_803AA6E0 preserves=true fpr_mask=0x00000000
