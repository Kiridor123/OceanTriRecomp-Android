#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80331204(CpuContext* ctx);
extern "C" uint32_t func_80331204_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80331390_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80331390;

loc_80331390:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803313AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_803313B8;
    }
}

loc_803313B0:
{
    r3 = 0;
    goto loc_80331420;
}

loc_803313B8:
{
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl0_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl0_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl0_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331180:
{
    r3 = 1;
    goto loc_inl0_cont_80331168;
}

loc_inl0_0x80331188:
{
    r3 = 0;
}

loc_inl0_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_803313C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803313D8;
    }
}

loc_803313C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 24));
}

loc_803313CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803313D8;
    }
}

loc_803313D0:
{
    r3 = 0;
    goto loc_80331420;
}

loc_803313D8:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_803313E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803313FC;
    }
}

loc_803313E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + -70);
}

loc_803313F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803313FC;
    }
}

loc_803313F4:
{
    r3 = 1;
    goto loc_80331420;
}

loc_803313FC:
{
    r3 = r31;
    ctx->lr = 0x80331404u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331204_A73 = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_A73;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    r0 = (r3 + -2);
}

loc_80331410:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8033141C;
    }
}

loc_80331414:
{
    r3 = 1;
    goto loc_80331420;
}

loc_8033141C:
{
    r3 = 0;
}

loc_80331420:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80331390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80331390_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80331390 func_80331390 preserves=true fpr_mask=0x00000000
