#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_8027EF34;

loc_8027EF34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r5 = 0;
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + -7);
}

loc_8027EF5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027EF78;
    }
}

loc_8027EF60:
{
    r0 = (r4 + -14);
}

loc_8027EF68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027EF78;
    }
}

loc_8027EF6C:
{
}

loc_8027EF70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(11))) {
        goto loc_8027EF88;
    }
}

loc_8027EF74:
{
    goto loc_8027EFFC;
}

loc_8027EF78:
{
    r3 = r4;
    // inline leaf 0x8027E300 (3 guest instruction(s))
    r0 = (r3 + -7);
    r3 = (r0 & 255);
    // end of inlined leaf 0x8027E300
    r5 = r3;
    goto loc_8027EFFC;
}

loc_8027EF88:
{
    ctx->lr = 0x8027EF8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027ED7C_831 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_831);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_831 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8027EF94:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8027EFD0;
    }
}

loc_8027EF98:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8027EFA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8027EFB4;
    }
}

loc_8027EFA4:
{
    r3 = r30;
    ctx->lr = 0x8027EFACu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027ED7C_CB9 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_CB9);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_CB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r31 = (r31 + r0);
}

loc_8027EFB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 12));
}

loc_8027EFBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8027EFD0;
    }
}

loc_8027EFC0:
{
    r3 = (r30 + 12);
    ctx->lr = 0x8027EFC8u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027ED7C_10E8 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_10E8);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_10E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r31 = (r31 + r0);
}

loc_8027EFD0:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8027EFD8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(71))) {
        goto loc_8027EFE4;
    }
}

loc_8027EFDC:
{
    r5 = 4;
    goto loc_8027EFFC;
}

loc_8027EFE4:
{
    r0 = 30;
    r3 = (r0 ^ -2147483648);
    r0 = (r4 + -30);
    r0_addc_left_1 = r0;
    r0 = (r0_addc_left_1 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r0);
    r3 = (r3 + r3_ca_1);
    r5 = (r3 + 6);
}

loc_8027EFFC:
{
    r3 = r5;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027EF34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027EF34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027EF34 func_8027EF34 preserves=true fpr_mask=0x00000000
