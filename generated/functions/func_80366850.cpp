#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80366850_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80366850;

loc_80366850:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r4, r0);
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    r0 = (r3 + -6);
}

loc_80366888:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_803669E8;
    }
}

loc_8036688C:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -6400);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803668A4u:
        goto loc_803668A4;
        break;
    case 0x80366928u:
        goto loc_80366928;
        break;
    case 0x80366950u:
        goto loc_80366950;
        break;
    case 0x80366978u:
        goto loc_80366978;
        break;
    case 0x803669E8u:
        goto loc_803669E8;
        break;
    case 0x803669C0u:
        goto loc_803669C0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803668A4:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_803668B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803668C0;
    }
}

loc_803668B4:
{
}

loc_803668B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803668F4;
    }
}

loc_803668BC:
{
    goto loc_803669E8;
}

loc_803668C0:
{
    r3 = 0;
    ctx->lr = 0x803668C8u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B510C_D52 = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_D52;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803668CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803668DC;
    }
}

loc_803668D0:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_803668E4;
}

loc_803668DC:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_803668E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803668F4:
{
    r3 = 0;
    ctx->lr = 0x803668FCu;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B510C_11C8 = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_11C8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80366900:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80366910;
    }
}

loc_80366904:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80366918;
}

loc_80366910:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80366918:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_80366928:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_80366934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_803669E8;
    }
}

loc_80366938:
{
    r0 = 7;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_80366950:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_8036695C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803669E8;
    }
}

loc_80366960:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_80366978:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_80366984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366994;
    }
}

loc_80366988:
{
}

loc_8036698C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803669A8;
    }
}

loc_80366990:
{
    goto loc_803669E8;
}

loc_80366994:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803669A8:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 5;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803669C0:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_803669CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803669E8;
    }
}

loc_803669D0:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 6;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803669E8:
{
    r3 = 0;
}

loc_803669EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80366850(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80366850_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80366850 func_80366850 preserves=true fpr_mask=0x00000000
