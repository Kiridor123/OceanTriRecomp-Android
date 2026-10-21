#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B4CC8(CpuContext* ctx);
extern "C" uint32_t func_803B4CC8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B4980_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803B4980u);
    goto loc_803B4980;

loc_803B4980:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
}

loc_803B499C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B49B8;
    }
}

loc_803B49A0:
{
    // inline leaf 0x803B33F8 (7 guest instruction(s))
}

loc_inl0_0x803B33F8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl0_0x803B3408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803B340C:
{
    r3 = 0;
    goto loc_inl0_cont_803B33F8;
}

loc_inl0_return:
{
}

loc_inl0_cont_803B33F8:
{
    // end of inlined leaf 0x803B33F8
    r31 = r3;
}

loc_803B49AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B49BC;
    }
}

loc_803B49B0:
{
    r3 = 0;
    goto loc_803B4A88;
}

loc_803B49B8:
{
    r31 = r3;
}

loc_803B49BC:
{
    r0 = (r30 & 255);
}

loc_803B49C4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_803B49D0;
    }
}

loc_803B49C8:
{
    r3 = 0;
    goto loc_803B4A88;
}

loc_803B49D0:
{
    r3 = r31;
    ctx->lr = 0x803B49D8u;
    if constexpr (KnownRegArgsCpuCall<0x803B4CC8u>(&func_803B4CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4CC8_8CB = func_803B4CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4CC8_8CB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B49DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B4A08;
    }
}

loc_803B49E0:
{
    r0 = (r30 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 791));
}

loc_803B49F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B4A00;
    }
}

loc_803B49F8:
{
    r3 = 0;
    goto loc_803B4A88;
}

loc_803B4A00:
{
    r3 = MemoryInline::FlatRead8((r3 + 788));
    goto loc_803B4A88;
}

loc_803B4A08:
{
    r0 = (r30 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    r3 = (r31 + r6);
    r5 = MemoryInline::FlatRead32((r31 + 784));
    r0 = (r5 & 5);
}

loc_803B4A1C:
{
}

loc_803B4A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B4A58;
    }
}

loc_803B4A24:
{
    r4 = MemoryInline::FlatRead32((r3 + 816));
    r0 = (r4 & 1);
}

loc_803B4A30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B4A4C;
    }
}

loc_803B4A34:
{
    r0 = (r4 & 1024);
}

loc_803B4A3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B4A4C;
    }
}

loc_803B4A40:
{
    r0 = (r4 & 16384);
}

loc_803B4A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B4A58;
    }
}

loc_803B4A4C:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r3 = (r0 & 255);
    goto loc_803B4A88;
}

loc_803B4A58:
{
    r0 = (r5 & 2097152);
}

loc_803B4A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B4A84;
    }
}

loc_803B4A64:
{
    r3 = (r31 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 791));
}

loc_803B4A70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B4A7C;
    }
}

loc_803B4A74:
{
    r3 = 0;
    goto loc_803B4A88;
}

loc_803B4A7C:
{
    r3 = MemoryInline::FlatRead8((r3 + 788));
    goto loc_803B4A88;
}

loc_803B4A84:
{
    r3 = 0;
}

loc_803B4A88:
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

extern "C" void func_803B4980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B4980_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B4980 func_803B4980 preserves=true fpr_mask=0x00000000
