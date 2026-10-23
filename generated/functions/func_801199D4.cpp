#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80119CA8(CpuContext* ctx);
extern "C" uint64_t func_80119CA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801199D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801199D4;

loc_801199D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r5;
    r0 = (r4 & 255);
}

loc_801199FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80119A0C;
    }
}

loc_80119A00:
{
}

loc_80119A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80119A14;
    }
}

loc_80119A08:
{
    goto loc_80119A84;
}

loc_80119A0C:
{
    r0 = 3;
    goto loc_80119A20;
}

loc_80119A14:
{
    r0 = 1;
}

loc_80119A20:
{
    r3 = (r3 & 255);
    r4 = (r5 & 255);
    r5 = r0;
    ctx->lr = 0x80119A30u;
    if constexpr (KnownRegArgsCpuCall<0x80119CA8u>(&func_80119CA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80119CA8_6A0 = func_80119CA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80119CA8_6A0);
        r4 = static_cast<uint32_t>(regargs_result_80119CA8_6A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80119CA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
}

loc_80119A38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80119A84;
    }
}

loc_80119A3C:
{
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 255;
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r31));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80119A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80119A78;
    }
}

loc_80119A60:
{
    r0 = (r28 & 255);
    r3 = 0x805A0000u;
    r3 = (r3 + 3824);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite8((r29 + 23), static_cast<uint8_t>(r0));
    goto loc_80119A7C;
}

loc_80119A78:
{
    MemoryInline::FlatWrite8((r29 + 23), static_cast<uint8_t>(r31));
}

loc_80119A7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80119A84:
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

extern "C" void func_801199D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801199D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801199D4 func_801199D4 preserves=true fpr_mask=0x00000000
