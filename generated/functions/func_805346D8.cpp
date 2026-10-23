#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80533B04(CpuContext* ctx);
extern "C" uint64_t func_80533B04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80535AE4(CpuContext* ctx);
extern "C" uint64_t func_80535AE4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805346D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_805346D8;

loc_805346D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r31 = 0;
    r29 = 0;
    r30 = (r6 + r0);
    goto loc_805347C0;
}

loc_80534710:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 21));
}

loc_80534724:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805347BC;
    }
}

loc_80534728:
{
    r3 = (r27 + 68);
    ctx->lr = 0x80534730u;
    if constexpr (KnownRegArgsCpuCall<0x80535AE4u>(&func_80535AE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80535AE4_A4E = func_80535AE4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80535AE4_A4E);
        r4 = static_cast<uint32_t>(regargs_result_80535AE4_A4E >> 32);
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
        InvokeDirectCpu<0x80535AE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80534734:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805347BC;
    }
}

loc_80534738:
{
}

loc_8053473C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80534744;
    }
}

loc_80534740:
{
    r31 = MemoryInline::FlatRead32((r26 + 24));
}

loc_80534744:
{
    r0 = MemoryInline::FlatRead16((r26 + 28));
    r3 = MemoryInline::FlatRead32((r26 + 24));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r0 = (r3 + 15);
    r0 = (r0 - r31);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & 268435455);
    ctr = r0;
}

loc_80534768:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r3))) {
        goto loc_80534784;
    }
}

loc_8053476C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80534774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053477C;
    }
}

loc_80534778:
{
    goto loc_80534788;
}

loc_8053477C:
{
    r31 = (r31 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053476C;
    }
}

loc_80534784:
{
    r31 = 0;
}

loc_80534788:
{
}

loc_8053478C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80534798;
    }
}

loc_80534790:
{
    r31 = 0;
    goto loc_805347B4;
}

loc_80534798:
{
    MemoryInline::FlatWrite32((r31 + 8), r26);
    r3 = r27;
    r4 = r31;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r28));
    ctx->lr = 0x805347B0u;
    if constexpr (KnownRegArgsCpuCall<0x80533B04u>(&func_80533B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80533B04_14D8 = func_80533B04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80533B04_14D8);
        r4 = static_cast<uint32_t>(regargs_result_80533B04_14D8 >> 32);
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
        InvokeDirectCpu<0x80533B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = (r31 + 16);
}

loc_805347B4:
{
}

loc_805347B8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_805347D4;
    }
}

loc_805347BC:
{
    r29 = (r29 + 1);
}

loc_805347C0:
{
    r4 = MemoryInline::FlatRead32((r26 + 12));
    r3 = (r29 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 14));
}

loc_805347D0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80534710;
    }
}

loc_805347D4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805346D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805346D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805346D8 func_805346D8 preserves=true fpr_mask=0x00000000
