#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803591A4(CpuContext* ctx);
extern "C" uint64_t func_803591A4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C61A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803C61A4;

loc_803C61A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r8 = 0;
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r5 = MemoryInline::FlatRead16((r4 + 62));
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r0 = (r5 - r0);
    r5 = (r0 & 65535);
    r4 = (r2 + -5144);
    r0 = MemoryInline::FlatRead16(r4);
    r7 = r0;
    r0 = (r0 & 65535);
}

loc_803C6204:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803C6210;
    }
}

loc_803C6208:
{
    r8 = 0;
    goto loc_803C6260;
}

loc_803C6210:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r7 = (r7 + r0);
    r0 = (r7 & 65535);
}

loc_803C6220:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803C622C;
    }
}

loc_803C6224:
{
    r8 = 1;
    goto loc_803C6260;
}

loc_803C622C:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r7 = (r7 + r0);
    r0 = (r7 & 65535);
}

loc_803C623C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803C6248;
    }
}

loc_803C6240:
{
    r8 = 2;
    goto loc_803C6260;
}

loc_803C6248:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r7 = (r7 + r0);
    r0 = (r7 & 65535);
}

loc_803C6258:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803C6260;
    }
}

loc_803C625C:
{
    r8 = 3;
}

loc_803C6260:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 108));
    MemoryInline::FlatWrite16((r6 + 18390), static_cast<uint16_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r6 + 18392), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r6 + 18393), static_cast<uint8_t>(r0));
    r30 = 0;
    r31 = r3;
}

loc_803C628C:
{
    r3 = MemoryInline::FlatRead16((r31 + 148));
    r4 = 1;
    ctx->lr = 0x803C6298u;
    if constexpr (KnownRegArgsCpuCall<0x803591A4u>(&func_803591A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_803591A4_E86 = func_803591A4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803591A4_E86);
        r4 = static_cast<uint32_t>(regargs_result_803591A4_E86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x803591A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r31 = (r31 + 2);
    r30 = (r30 + 1);
}

loc_803C62A4:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_803C628C;
    }
}

loc_803C62A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C61A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C61A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C61A4 func_803C61A4 preserves=true fpr_mask=0x00000000
