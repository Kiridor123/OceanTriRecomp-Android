#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E30C(CpuContext* ctx);
extern "C" uint64_t func_8027E30C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3B8(CpuContext* ctx);
extern "C" uint64_t func_8027E3B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027FBE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x8027FBE8u);
    goto loc_8027FBE8;

loc_8027FBE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r31 = r4;
    r28 = r5;
    r29 = 0;
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8027FC18:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_8027FCA4;
    }
}

loc_8027FC1C:
{
    r4 = (r4 & 65535);
    ctx->lr = 0x8027FC24u;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_655 = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_655);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_655 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r3 = (r27 & 255);
    r4 = (r31 & 65535);
    ctx->lr = 0x8027FC34u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3B8u>(&func_8027E3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3B8_99B = func_8027E3B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3B8_99B);
        r4 = static_cast<uint32_t>(regargs_result_8027E3B8_99B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004DDD8u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
}

loc_8027FC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027FC5C;
    }
}

loc_8027FC48:
{
}

loc_8027FC4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8027FC64;
    }
}

loc_8027FC50:
{
}

loc_8027FC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027FC6C;
    }
}

loc_8027FC58:
{
    goto loc_8027FCA4;
}

loc_8027FC5C:
{
    r29 = MemoryInline::FlatRead8((r31 + 5));
    goto loc_8027FCA4;
}

loc_8027FC64:
{
    r29 = MemoryInline::FlatRead8((r31 + 5));
    goto loc_8027FCA4;
}

loc_8027FC6C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_8027FC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027FCA0;
    }
}

loc_8027FC78:
{
    r4 = MemoryInline::FlatRead8((r31 + 5));
    r3 = (r28 & 255);
    r0 = (r3 + 1);
}

loc_8027FC88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8027FC98;
    }
}

loc_8027FC8C:
{
    r0 = (r4 + 1);
    r29 = (r0 & 255);
    goto loc_8027FCA4;
}

loc_8027FC98:
{
    r29 = MemoryInline::FlatRead8((r31 + 7));
    goto loc_8027FCA4;
}

loc_8027FCA0:
{
    r29 = MemoryInline::FlatRead8((r31 + 7));
}

loc_8027FCA4:
{
    r0 = (r29 & 255);
}

loc_8027FCAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027FCB8;
    }
}

loc_8027FCB0:
{
    r0 = (r29 + -1);
    r29 = (r0 & 255);
}

loc_8027FCB8:
{
    r3 = r29;
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

extern "C" void func_8027FBE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027FBE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027FBE8 func_8027FBE8 preserves=true fpr_mask=0x00000000
