#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80116E80(CpuContext* ctx);
extern "C" uint64_t func_80116E80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80117184_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80117184u);
    goto loc_80117184;

loc_80117184:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_801171B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_801171D4;
    }
}

loc_801171B4:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801171BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_801171D4;
    }
}

loc_801171C0:
{
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x801171CCu;
    if constexpr (KnownRegArgsCpuCall<0x80116E80u>(&func_80116E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80116E80_763 = func_80116E80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80116E80_763);
        r4 = static_cast<uint32_t>(regargs_result_80116E80_763 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80116E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_801171D4:
{
    r7 = 0;
    r6 = r31;
    r4 = 0;
    r0 = 16;
    ctr = r0;
}

loc_801171E8:
{
    r3 = MemoryInline::FlatRead32(r6);
}

loc_801171F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80117228;
    }
}

loc_801171F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_801171FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80117228;
    }
}

loc_80117200:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 128));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r5 + 128), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32(r6, r4);
    r3 = MemoryInline::FlatRead16((r31 + 128));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 128), static_cast<uint16_t>(r0));
}

loc_80117228:
{
    r7 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80117234:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8011726C;
    }
}

loc_80117238:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80117240:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8011726C;
    }
}

loc_80117244:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r5 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 128));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r5 + 128), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r6 + 4), r4);
    r3 = MemoryInline::FlatRead16((r31 + 128));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 128), static_cast<uint16_t>(r0));
}

loc_8011726C:
{
    r6 = (r6 + 8);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801171E8;
    }
}

loc_80117278:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80117184(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80117184_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80117184 func_80117184 preserves=true fpr_mask=0x00000000
