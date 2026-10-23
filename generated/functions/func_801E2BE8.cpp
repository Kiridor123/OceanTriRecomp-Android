#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E2E80(CpuContext* ctx);
extern "C" uint64_t func_801E2E80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E2BE8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_801E2BE8;

loc_801E2BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r28 = r3;
    r31 = r4;
    r29 = r5;
    r30 = r6;
    f31.d = f1.d;
    r0 = (r4 & 255);
}

loc_801E2C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801E2C30;
    }
}

loc_801E2C28:
{
}

loc_801E2C2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_801E2C40;
    }
}

loc_801E2C30:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801E2C3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E2CA0;
    }
}

loc_801E2C40:
{
    r3 = MemoryInline::FlatRead8((r28 + 22));
    r4 = (r31 & 255);
    ctx->lr = 0x801E2C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E2E80u>(&func_801E2E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E2E80_84D = func_801E2E80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E2E80_84D);
        r4 = static_cast<uint32_t>(regargs_result_801E2E80_84D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E2E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_801E2C54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E2CA0;
    }
}

loc_801E2C58:
{
    MemoryInline::FlatWrite32((r3 + 48), r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805B0000u;
    r3 = (r3 + 32536);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 24), f31.d);
    MemoryInline::FlatWrite32((r3 + 28), r29);
    r3 = (r3 + 12);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_801E2CA0:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E2BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E2BE8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E2BE8 func_801E2BE8 preserves=true fpr_mask=0x00000000
