#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80366850(CpuContext* ctx);
extern "C" uint64_t func_80366850_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80366EF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80366EF0;

loc_80366EF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    ctx->lr = 0x80366F24u;
    if constexpr (KnownRegArgsCpuCall<0x80366850u>(&func_80366850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80366850_5B8 = func_80366850_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80366850_5B8);
        r4 = static_cast<uint32_t>(regargs_result_80366850_5B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80366850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_80366F28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366F34;
    }
}

loc_80366F2C:
{
    r3 = 0;
    goto loc_80366FA0;
}

loc_80366F34:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -6584);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r7 = 0;
    r5 = r6;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r31 & 255);
    r4 = (r30 & 255);
    ctr = r0;
}

loc_80366F64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80366F9C;
    }
}

loc_80366F68:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80366F70:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80366F90;
    }
}

loc_80366F74:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80366F7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80366F90;
    }
}

loc_80366F80:
{
    r0 = (r7 * 24);
    r3 = (r6 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 18));
    goto loc_80366FA0;
}

loc_80366F90:
{
    r5 = (r5 + 24);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80366F68;
    }
}

loc_80366F9C:
{
    r3 = 0;
}

loc_80366FA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80366EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80366EF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80366EF0 func_80366EF0 preserves=true fpr_mask=0x00000000
