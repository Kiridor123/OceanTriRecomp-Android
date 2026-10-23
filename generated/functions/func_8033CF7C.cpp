#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033CF24(CpuContext* ctx);
extern "C" void func_8033CF24_ra68_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033CF7C_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033CF7C;

loc_8033CF7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r31));
    r3 = (r3 + 8);
    r4 = 255;
    r5 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r31));
    r30 = 0;
    r3 = 0x805E0000u;
    r31 = (r3 + 31200);
}

loc_8033CFC0:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_8033CFC8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_8033CFD8;
    }
}

loc_8033CFCC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033CFD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033CFF4;
    }
}

loc_8033CFD8:
{
    r4 = (r30 & 255);
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
}

loc_8033CFF4:
{
    r31 = (r31 + 2);
    r30 = (r30 + 1);
}

loc_8033D000:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(7))) {
        goto loc_8033CFC0;
    }
}

loc_8033D004:
{
    r3 = (r29 + 112);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 132), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 136), r0);
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8033CF24u>(&func_8033CF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        func_8033CF24_ra68_0_0_0(ctx, r3, r5, r6);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8033CF24u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
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

extern "C" void func_8033CF7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033CF7C_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021DB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033CF7C func_8033CF7C preserves=true fpr_mask=0x00000000
