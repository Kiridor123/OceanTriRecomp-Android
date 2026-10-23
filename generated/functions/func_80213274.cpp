#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802131E0(CpuContext* ctx);
extern "C" uint64_t func_802131E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80213274_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r8_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80213274;

loc_80213274:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = 0x805C0000u;
    r8 = (r8 + -24640);
    r8_addr_0 = (r8 + r0);
    r31 = MemoryInline::FlatRead32(r8_addr_0);
    r0 = 1;
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r0 = (r5 & r8);
}

loc_802132A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802132B0;
    }
}

loc_802132AC:
{
    r31 = (r31 | 536870912);
}

loc_802132B0:
{
    r0 = (r6 & r8);
}

loc_802132B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802132C0;
    }
}

loc_802132BC:
{
    r31 = (r31 | 268435456);
}

loc_802132C0:
{
    r3 = (r3 & 255);
    r4 = (r4 & 65535);
    r5 = (r7 & 255);
    ctx->lr = 0x802132D0u;
    if constexpr (KnownRegArgsCpuCall<0x802131E0u>(&func_802131E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802131E0_7C2 = func_802131E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802131E0_7C2);
        r4 = static_cast<uint32_t>(regargs_result_802131E0_7C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802131E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802132D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802132DC;
    }
}

loc_802132D8:
{
    r31 = (r31 | 1073741824);
}

loc_802132DC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80213274(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80213274_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x0000033B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213274 func_80213274 preserves=true fpr_mask=0x00000000
