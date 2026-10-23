#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FFC68(CpuContext* ctx);
extern "C" uint64_t func_802FFC68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802FFFB0(CpuContext* ctx);
extern "C" uint32_t func_802FFFB0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80300314_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80300314;

loc_80300314:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = MemoryInline::FlatRead16(r5);
    r6 = MemoryInline::FlatRead8((r30 + 9));
    if constexpr (KnownRegArgsCpuCall<0x802FFFB0u>(&func_802FFFB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802FFFB0_5A8 = func_802FFFB0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802FFFB0_5A8;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802FFFB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80300354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803003B4;
    }
}

loc_80300358:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80300368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300384;
    }
}

loc_8030036C:
{
    r0 = MemoryInline::FlatRead16(r30);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 9));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
}

loc_80300384:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r31 & 65535);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8030039C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803003B4;
    }
}

loc_803003A0:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r5 = (0 - r0);
    if constexpr (KnownRegArgsCpuCall<0x802FFC68u>(&func_802FFC68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802FFC68_DA6 = func_802FFC68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802FFC68_DA6);
        r4 = static_cast<uint32_t>(regargs_result_802FFC68_DA6 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802FFC68u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_803003B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80300314(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80300314_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80300314 func_80300314 preserves=true fpr_mask=0x00000000
