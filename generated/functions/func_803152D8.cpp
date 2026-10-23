#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272590(CpuContext* ctx);
extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031A2A8(CpuContext* ctx);
extern "C" uint64_t func_8031A2A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031A474(CpuContext* ctx);
extern "C" uint64_t func_8031A474_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803152D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_803152D8;

loc_803152D8:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r0 = (r5 & 255);
    r0 = (r0 & 2);
}

loc_80315308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031543C;
    }
}

loc_8031530C:
{
    r5 = (r1 + 40);
    ctx->lr = 0x80315314u;
    if constexpr (KnownRegArgsCpuCall<0x8031A2A8u>(&func_8031A2A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8031A2A8_7DB = func_8031A2A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031A2A8_7DB);
        r4 = static_cast<uint32_t>(regargs_result_8031A2A8_7DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031A2A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = r29;
    r4 = r30;
    r5 = (r1 + 40);
    ctx->lr = 0x80315324u;
    if constexpr (KnownRegArgsCpuCall<0x8031A474u>(&func_8031A474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8031A474_BB0 = func_8031A474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031A474_BB0);
        r4 = static_cast<uint32_t>(regargs_result_8031A474_BB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8031A474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r1 + 40);
    r4 = (r1 + 24);
    r5 = (r1 + 16);
    r6 = (r1 + 8);
    ctx->lr = 0x80315338u;
    if constexpr (KnownRegArgsCpuCall<0x80272590u>(&func_80272590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80272590_1030 = func_80272590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272590_1030);
        r4 = static_cast<uint32_t>(regargs_result_80272590_1030 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80272590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r8 = 0;
    r5 = (r1 + 24);
    r6 = (r1 + 8);
    r0 = 2;
    ctr = r0;
}

loc_8031534C:
{
    r7 = MemoryInline::FlatRead16(r5);
}

loc_80315354:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80315384;
    }
}

loc_80315358:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80315360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315384;
    }
}

loc_80315364:
{
    r4 = (r31 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 1562), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r29 + r4);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_80315384:
{
    r7 = MemoryInline::FlatRead16((r5 + 2));
}

loc_8031538C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803153BC;
    }
}

loc_80315390:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
}

loc_80315398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803153BC;
    }
}

loc_8031539C:
{
    r4 = (r31 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 1562), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r29 + r4);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_803153BC:
{
    r7 = MemoryInline::FlatRead16((r5 + 4));
}

loc_803153C4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803153F4;
    }
}

loc_803153C8:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
}

loc_803153D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803153F4;
    }
}

loc_803153D4:
{
    r4 = (r31 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 1562), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r3 = (r29 + r4);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_803153F4:
{
    r7 = MemoryInline::FlatRead16((r5 + 6));
}

loc_803153FC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8031542C;
    }
}

loc_80315400:
{
    r0 = MemoryInline::FlatRead8((r6 + 3));
}

loc_80315408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031542C;
    }
}

loc_8031540C:
{
    r4 = (r31 & 255);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite16((r3 + 1562), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r3 = (r29 + r4);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_8031542C:
{
    r5 = (r5 + 8);
    r6 = (r6 + 4);
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8031534C;
    }
}

loc_8031543C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803152D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803152D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803152D8 func_803152D8 preserves=true fpr_mask=0x00000000
