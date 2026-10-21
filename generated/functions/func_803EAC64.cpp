#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80417150(CpuContext* ctx);
extern "C" uint32_t func_80417150_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803EAC64_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803EAC64u);
    goto loc_803EAC64;

loc_803EAC64:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
}

loc_803EAC88:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(99))) {
        goto loc_803EAC94;
    }
}

loc_803EAC8C:
{
    r3 = -1;
    goto loc_803EAD2C;
}

loc_803EAC94:
{
    r31 = 0;
    r0 = (r4 * 260);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 22876), r31);
    r5 = (r3 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + -16660), r31);
    r3 = (r5 + r4);
    MemoryInline::FlatWrite8((r3 + -16252), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + -16152), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + -16052), static_cast<uint8_t>(r31));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r5 + r0);
    r3 = (r3 + -15952);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 65536);
    r0 = (r30 * 100);
    r3 = (r3 + r0);
    r3 = (r3 + -14352);
    r4 = 0;
    r5 = 100;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = -1;
    r0 = (r29 + 65536);
    r3 = (r0 + r30);
    MemoryInline::FlatWrite8((r3 + -4352), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + -4252), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + -4152), static_cast<uint8_t>(r31));
    r0 = (r30 * 36);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 19276), r31);
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if constexpr (KnownRegArgsCpuCall<0x80417150u>(&func_80417150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80417150_BE4 = func_80417150_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80417150_BE4;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80417150u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = 1;
}

loc_803EAD2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EAC64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EAC64_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EAC64 func_803EAC64 preserves=true fpr_mask=0x00000000
