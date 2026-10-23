#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007BA38(CpuContext* ctx);
extern "C" void func_8007BA38_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80081524_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80081524;

loc_80081524:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80081534:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(9))) {
        goto loc_800815BC;
    }
}

loc_80081538:
{
    r6 = 0x80590000u;
    r6 = (r6 + -1076);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800815BCu:
        goto loc_800815BC;
        break;
    case 0x80081550u:
        goto loc_80081550;
        break;
    case 0x8008155Cu:
        goto loc_8008155C;
        break;
    case 0x80081568u:
        goto loc_80081568;
        break;
    case 0x80081574u:
        goto loc_80081574;
        break;
    case 0x80081580u:
        goto loc_80081580;
        break;
    case 0x8008158Cu:
        goto loc_8008158C;
        break;
    case 0x80081598u:
        goto loc_80081598;
        break;
    case 0x800815A4u:
        goto loc_800815A4;
        break;
    case 0x800815B0u:
        goto loc_800815B0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80081550:
{
    r4 = 16;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl0_0x8007BA38:
{
}

loc_inl0_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8007BA50;
    }
}

loc_inl0_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl0_cont_8007BA38;
}

loc_inl0_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl0_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
    goto loc_800815C4;
}

loc_8008155C:
{
    r4 = 1;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl1_0x8007BA38:
{
}

loc_inl1_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8007BA50;
    }
}

loc_inl1_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl1_cont_8007BA38;
}

loc_inl1_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl1_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
    goto loc_800815C4;
}

loc_80081568:
{
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_80081574:
{
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_80081580:
{
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_8008158C:
{
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_80081598:
{
    r4 = 64;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_800815A4:
{
    r4 = 128;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_800815B0:
{
    r4 = 268435456;
    if constexpr (KnownRegArgsCpuCall<0x8007BA38u>(&func_8007BA38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8007BA38_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007BA38u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_800815C4;
}

loc_800815BC:
{
    r3 = 0;
    goto loc_800815C8;
}

loc_800815C4:
{
    r3 = 1;
}

loc_800815C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80081524(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80081524_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80081524 func_80081524 preserves=true fpr_mask=0x00000000
