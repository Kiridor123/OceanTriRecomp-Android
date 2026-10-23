#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8022315C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8022315C;

loc_8022315C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = (r4 * 356);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->lr = 0x8022318Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E05C4_45A = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_45A);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_45A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 * 144);
    r0 = 0;
    r3 = (r29 + r3);
    MemoryInline::FlatWrite32((r3 + 3656), r0);
    MemoryInline::FlatWrite32((r3 + 3660), r30);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r31 = 255;
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 2509), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 2510), static_cast<uint8_t>(r31));
    r3 = (r29 + r30);
    MemoryInline::FlatWrite8((r3 + 2523), static_cast<uint8_t>(r31));
}

loc_802231C0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(5))) {
        goto loc_802231DC;
    }
}

loc_802231C4:
{
    r3 = (r29 + 2531);
    r4 = 255;
    r5 = 22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r29 + 2530), static_cast<uint8_t>(r31));
    goto loc_802231F4;
}

loc_802231DC:
{
}

loc_802231E0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(4))) {
        goto loc_802231F4;
    }
}

loc_802231E4:
{
    r3 = (r29 + 2553);
    r4 = 255;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802231F4:
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

extern "C" void func_8022315C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8022315C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022315C func_8022315C preserves=true fpr_mask=0x00000000
