#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ECA0(CpuContext* ctx);
extern "C" uint64_t func_8012ECA0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801CAC68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_801CAC68;

loc_801CAC68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r5;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801CAC8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801CAC9C;
    }
}

loc_801CAC90:
{
}

loc_801CAC94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801CAD5C;
    }
}

loc_801CAC98:
{
    goto loc_801CAEBC;
}

loc_801CAC9C:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_801CACA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801CACD4;
    }
}

loc_801CACA8:
{
}

loc_801CACAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801CACF4;
    }
}

loc_801CACB0:
{
}

loc_801CACB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_801CAD14;
    }
}

loc_801CACB8:
{
}

loc_801CACBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_801CAD14;
    }
}

loc_801CACC0:
{
}

loc_801CACC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_801CAD38;
    }
}

loc_801CACC8:
{
}

loc_801CACCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_801CAD38;
    }
}

loc_801CACD0:
{
    goto loc_801CAEBC;
}

loc_801CACD4:
{
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CACE4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CACE8:
{
    r0 = 11;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CACF4:
{
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAD04:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD08:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAD14:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAD28:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD2C:
{
    r0 = 16;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAD38:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAD4C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD50:
{
    r0 = 17;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAD5C:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_801CAD64:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(46))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD68:
{
    r4 = 0x805B0000u;
    r4 = (r4 + 23272);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801CAD80u:
        goto loc_801CAD80;
        break;
    case 0x801CAD9Cu:
        goto loc_801CAD9C;
        break;
    case 0x801CADB8u:
        goto loc_801CADB8;
        break;
    case 0x801CAEBCu:
        goto loc_801CAEBC;
        break;
    case 0x801CADD0u:
        goto loc_801CADD0;
        break;
    case 0x801CAE08u:
        goto loc_801CAE08;
        break;
    case 0x801CAE40u:
        goto loc_801CAE40;
        break;
    case 0x801CAE58u:
        goto loc_801CAE58;
        break;
    case 0x801CAE90u:
        goto loc_801CAE90;
        break;
    case 0x801CAEA8u:
        goto loc_801CAEA8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801CAD80:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 & 1);
}

loc_801CAD8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD90:
{
    r0 = 33;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAD9C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 & 1);
}

loc_801CADA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CAEBC;
    }
}

loc_801CADAC:
{
    r0 = 34;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CADB8:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_801CADC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CADC4:
{
    r0 = 31;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CADD0:
{
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CADE0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CADE4:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CADF8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CADFC:
{
    r0 = 28;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAE08:
{
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAE18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE1C:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAE30:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE34:
{
    r0 = 29;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAE40:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_801CAE48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE4C:
{
    r0 = 41;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAE58:
{
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAE68:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE6C:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801CAE80:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE84:
{
    r0 = 30;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAE90:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_801CAE98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAE9C:
{
    r0 = 32;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_801CAEBC;
}

loc_801CAEA8:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_2F2E = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_2F2E);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_2F2E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801CAEB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CAEBC;
    }
}

loc_801CAEB4:
{
    r0 = 42;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_801CAEBC:
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

extern "C" void func_801CAC68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801CAC68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CAC68 func_801CAC68 preserves=true fpr_mask=0x00000000
