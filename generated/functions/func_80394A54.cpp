#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B71B8(CpuContext* ctx);
extern "C" uint32_t func_803B71B8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80394A54_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80394A54;

loc_80394A54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r31 = MemoryInline::FlatRead32((r3 + 172));
    r3 = MemoryInline::FlatRead8((r31 + 585));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x8042A700 (11 guest instruction(s))
}

loc_inl0_0x8042A700:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = MemoryInline::FlatRead32((r4 + 360));
    r0 = (r3 * 692);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x8042A718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8042A724;
    }
}

loc_inl0_0x8042A71C:
{
    r3 = 0;
    goto loc_inl0_cont_8042A700;
}

loc_inl0_0x8042A724:
{
    r3 = (r4 + 400);
}

loc_inl0_cont_8042A700:
{
    // end of inlined leaf 0x8042A700
    r3 = MemoryInline::FlatRead16(r3);
    ctx->lr = 0x80394A84u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803B1F10_84A = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_84A);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_84A >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80394A88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80394A94;
    }
}

loc_80394A8C:
{
    r3 = 1;
    goto loc_80394AB4;
}

loc_80394A94:
{
    r6 = MemoryInline::FlatRead32((r31 + 612));
    r4 = MemoryInline::FlatRead16((r31 + 908));
    r5 = MemoryInline::FlatRead8((r6 + 20));
    if constexpr (KnownRegArgsCpuCall<0x803B71B8u>(&func_803B71B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803B71B8_D1A = func_803B71B8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803B71B8_D1A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803B71B8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80394AB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80394A54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80394A54_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80394A54 func_80394A54 preserves=true fpr_mask=0x00000000
