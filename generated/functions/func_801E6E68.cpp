#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E6E34(CpuContext* ctx);
extern "C" uint64_t func_801E6E34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801E6E68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801E6E68;

loc_801E6E68:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead32((r3 + 256));
}

loc_801E6E90:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801E6E98;
    }
}

loc_801E6E94:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D398u>(ctx);
}

loc_801E6E98:
{
    r28 = 0;
    r30 = r29;
    r31 = 0;
}

loc_801E6EA4:
{
    r0 = MemoryInline::FlatRead16((r30 + 18648));
}

loc_801E6EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E6ECC;
    }
}

loc_801E6EB0:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x801E6E34u>(&func_801E6E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E6E34_691 = func_801E6E34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E6E34_691);
        r4 = static_cast<uint32_t>(regargs_result_801E6E34_691 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E6E34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E6EBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E6EC8;
    }
}

loc_801E6EC0:
{
    MemoryInline::FlatWrite16((r30 + 18648), static_cast<uint16_t>(r31));
    goto loc_801E6ECC;
}

loc_801E6EC8:
{
    MemoryInline::FlatWrite16((r30 + 18648), static_cast<uint16_t>(r31));
}

loc_801E6ECC:
{
    r30 = (r30 + 2);
    r28 = (r28 + 1);
}

loc_801E6ED8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(41))) {
        goto loc_801E6EA4;
    }
}

loc_801E6EDC:
{
    r3 = (r29 + 18904);
    r4 = 0;
    r5 = 82;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E6E68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E6E68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E6E68 func_801E6E68 preserves=true fpr_mask=0x00000000
