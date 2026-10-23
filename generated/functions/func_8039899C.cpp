#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027FB28(CpuContext* ctx);
extern "C" uint64_t func_8027FB28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8039899C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8039899C;

loc_8039899C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r31 = (r3 + 12784);
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r30 = (r3 + 772);
    r29 = 0;
}

loc_803989C4:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_803989CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803989DC;
    }
}

loc_803989D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803989D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803989F0;
    }
}

loc_803989DC:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80398A18;
}

loc_803989F0:
{
    r28 = 0;
    goto loc_80398A0C;
}

loc_803989F8:
{
    r3 = MemoryInline::FlatRead16(r30);
    r4 = r31;
    ctx->lr = 0x80398A04u;
    if constexpr (KnownRegArgsCpuCall<0x8027FB28u>(&func_8027FB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027FB28_8EC = func_8027FB28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027FB28_8EC);
        r4 = static_cast<uint32_t>(regargs_result_8027FB28_8EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027FB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = (r28 + 1);
    r31 = (r31 + 12);
}

loc_80398A0C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398A14:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_803989F8;
    }
}

loc_80398A18:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_80398A24:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(40))) {
        goto loc_803989C4;
    }
}

loc_80398A28:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 12337), static_cast<uint8_t>(r0));
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039899C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039899C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039899C func_8039899C preserves=true fpr_mask=0x00000000
