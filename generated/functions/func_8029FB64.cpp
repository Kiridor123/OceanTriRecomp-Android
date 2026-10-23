#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A00A4(CpuContext* ctx);
extern "C" uint32_t func_802A00A4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8029FB64_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8029FB64;

loc_8029FB64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r3 = (r3 + 300);
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 25));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FB9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029FBAC;
    }
}

loc_8029FBA0:
{
}

loc_8029FBA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029FBF4;
    }
}

loc_8029FBA8:
{
    goto loc_8029FD04;
}

loc_8029FBAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FBB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8029FD04;
    }
}

loc_8029FBBC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    r3 = 7;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r31 = r3;
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 326), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 324), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 350), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 348), static_cast<uint8_t>(r0));
    goto loc_8029FD04;
}

loc_8029FBF4:
{
    r0 = MemoryInline::FlatRead8((r30 + 27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FC00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029FC18;
    }
}

loc_8029FC04:
{
}

loc_8029FC08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029FC58;
    }
}

loc_8029FC0C:
{
}

loc_8029FC10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8029FC98;
    }
}

loc_8029FC14:
{
    goto loc_8029FD04;
}

loc_8029FC18:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    r3 = 8;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r31 = r3;
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r3));
    r0 = 22;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 326), static_cast<uint8_t>(r3));
    r0 = 23;
    MemoryInline::FlatWrite8((r30 + 324), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 350), static_cast<uint8_t>(r3));
    r0 = 24;
    MemoryInline::FlatWrite8((r30 + 348), static_cast<uint8_t>(r0));
    goto loc_8029FD04;
}

loc_8029FC58:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    r3 = 9;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r31 = r3;
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r3));
    r0 = 19;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 326), static_cast<uint8_t>(r3));
    r0 = 20;
    MemoryInline::FlatWrite8((r30 + 324), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 350), static_cast<uint8_t>(r3));
    r0 = 21;
    MemoryInline::FlatWrite8((r30 + 348), static_cast<uint8_t>(r0));
    goto loc_8029FD04;
}

loc_8029FC98:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    r3 = 10;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r30 + 15));
}

loc_8029FCB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029FCCC;
    }
}

loc_8029FCB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 326), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 350), static_cast<uint8_t>(r0));
    goto loc_8029FCDC;
}

loc_8029FCCC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 326), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 350), static_cast<uint8_t>(r0));
}

loc_8029FCDC:
{
    r0 = 14;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::FlatWrite8((r30 + 324), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::FlatWrite8((r30 + 348), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 374), static_cast<uint8_t>(r0));
    r0 = 17;
    MemoryInline::FlatWrite8((r30 + 372), static_cast<uint8_t>(r0));
}

loc_8029FD04:
{
}

loc_8029FD08:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8029FD3C;
    }
}

loc_8029FD0C:
{
    r3 = (r30 + 300);
    r4 = 0;
    goto loc_8029FD2C;
}

loc_8029FD18:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r31 = (r31 + 4);
    r4 = (r4 + 1);
    r3 = (r3 + 24);
}

loc_8029FD2C:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FD38:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8029FD18;
    }
}

loc_8029FD3C:
{
    r3 = MemoryInline::FlatRead8((r30 + 26));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if constexpr (KnownRegArgsCpuCall<0x802A00A4u>(&func_802A00A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A00A4_1F02 = func_802A00A4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A00A4_1F02;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A00A4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029FB64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029FB64_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000017B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029FB64 func_8029FB64 preserves=true fpr_mask=0x00000000
