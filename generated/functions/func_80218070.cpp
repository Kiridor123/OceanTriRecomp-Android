#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80211E80(CpuContext* ctx);
extern "C" uint64_t func_80211E80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80218070_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80218070u);
    goto loc_80218070;

loc_80218070:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r3 & 65535);
}

loc_8021808C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_802180BC;
    }
}

loc_80218090:
{
}

loc_80218094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_802180BC;
    }
}

loc_80218098:
{
}

loc_8021809C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_802180CC;
    }
}

loc_802180A0:
{
}

loc_802180A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_802180DC;
    }
}

loc_802180A8:
{
}

loc_802180AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_802180EC;
    }
}

loc_802180B0:
{
}

loc_802180B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802180FC;
    }
}

loc_802180B8:
{
    goto loc_8021811C;
}

loc_802180BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 18490));
    // inline leaf 0x80211E6C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17180));
    r0 = (r3 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
    // end of inlined leaf 0x80211E6C
    goto loc_80218128;
}

loc_802180CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 16277));
    // inline leaf 0x80211E58 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17184));
    r0 = (r3 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    // end of inlined leaf 0x80211E58
    goto loc_80218128;
}

loc_802180DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 16278));
    // inline leaf 0x80211E58 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17184));
    r0 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    // end of inlined leaf 0x80211E58
    goto loc_80218128;
}

loc_802180EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 16279));
    // inline leaf 0x80211E58 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17184));
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    // end of inlined leaf 0x80211E58
    goto loc_80218128;
}

loc_802180FC:
{
    r3 = 116;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80218108:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021811C;
    }
}

loc_8021810C:
{
    r3 = 2;
    r4 = 23;
    if constexpr (KnownRegArgsCpuCall<0x80211E80u>(&func_80211E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80211E80_113D = func_80211E80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80211E80_113D);
        r4 = static_cast<uint32_t>(regargs_result_80211E80_113D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80211E80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80218128;
}

loc_8021811C:
{
    r3 = 2;
    r4 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80211E80u>(&func_80211E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80211E80_1449 = func_80211E80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80211E80_1449);
        r4 = static_cast<uint32_t>(regargs_result_80211E80_1449 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80211E80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80218128:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80218070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80218070_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000202B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80218070 func_80218070 preserves=true fpr_mask=0x00000000
