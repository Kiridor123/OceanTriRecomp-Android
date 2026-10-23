#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BE0F0(CpuContext* ctx);
extern "C" uint32_t func_803BE0F0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8035E9E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8035E9E8;

loc_8035E9E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8035EA18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8035EA38;
    }
}

loc_8035EA1C:
{
}

loc_8035EA20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8035EA54;
    }
}

loc_8035EA24:
{
}

loc_8035EA28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8035EA74;
    }
}

loc_8035EA2C:
{
}

loc_8035EA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8035EA98;
    }
}

loc_8035EA34:
{
    goto loc_8035EAB0;
}

loc_8035EA38:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8035EA48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8035EAB8;
    }
}

loc_8035EA4C:
{
    r3 = 0;
    goto loc_8035EAEC;
}

loc_8035EA54:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_8035EA60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8035EAB8;
    }
}

loc_8035EA64:
{
}

loc_8035EA68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8035EAB8;
    }
}

loc_8035EA6C:
{
    r3 = 0;
    goto loc_8035EAEC;
}

loc_8035EA74:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = (r3 + -5);
}

loc_8035EA84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8035EAB8;
    }
}

loc_8035EA88:
{
}

loc_8035EA8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_8035EAB8;
    }
}

loc_8035EA90:
{
    r3 = 0;
    goto loc_8035EAEC;
}

loc_8035EA98:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_8035EAA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8035EAB8;
    }
}

loc_8035EAA8:
{
    r3 = 0;
    goto loc_8035EAEC;
}

loc_8035EAB0:
{
    r3 = 0;
    goto loc_8035EAEC;
}

loc_8035EAB8:
{
    r3 = (r30 & 255);
    r4 = (r31 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803BE0F0u>(&func_803BE0F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BE0F0_11C5 = func_803BE0F0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BE0F0_11C5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BE0F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8035EACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8035EAE0;
    }
}

loc_8035EAD0:
{
}

loc_8035EAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035EAE0;
    }
}

loc_8035EAD8:
{
}

loc_8035EADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8035EAE8;
    }
}

loc_8035EAE0:
{
    r3 = 1;
    goto loc_8035EAEC;
}

loc_8035EAE8:
{
    r3 = 0;
}

loc_8035EAEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035E9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035E9E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035E9E8 func_8035E9E8 preserves=true fpr_mask=0x00000000
