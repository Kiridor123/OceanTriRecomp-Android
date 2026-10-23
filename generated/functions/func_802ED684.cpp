#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D7E84(CpuContext* ctx);
extern "C" uint64_t func_802D7E84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7ECC(CpuContext* ctx);
extern "C" uint64_t func_802D7ECC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802ED684_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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

    goto loc_802ED684;

loc_802ED684:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r6 = 1;
    r0 = (r4 & 255);
}

loc_802ED6AC:
{
    r5 = 0x805D0000u;
    r5 = (r5 + 27568);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802ED6C0;
    }
}

loc_802ED6B8:
{
    r5 = 0x805D0000u;
    r5 = (r5 + 27552);
}

loc_802ED6C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 524));
}

loc_802ED6C4:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_802ED6CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED6EC;
    }
}

loc_802ED6D0:
{
    r0 = (r3 & r0);
}

loc_802ED6D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED6E0;
    }
}

loc_802ED6DC:
{
    r31 = (r31 | r6);
}

loc_802ED6E0:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r5 = (r5 + 4);
    goto loc_802ED6C4;
}

loc_802ED6EC:
{
    r0 = (r4 & 255);
}

loc_802ED6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802ED73C;
    }
}

loc_802ED6F8:
{
    r3 = r30;
    // inline leaf 0x802D7E5C (10 guest instruction(s))
}

loc_inl0_0x802D7E5C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x802D7E64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802D7E70;
    }
}

loc_inl0_0x802D7E68:
{
    r3 = 0;
    goto loc_inl0_cont_802D7E5C;
}

loc_inl0_0x802D7E70:
{
    r3 = MemoryInline::FlatRead16((r3 + 884));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_802D7E5C:
{
    // end of inlined leaf 0x802D7E5C
}

loc_802ED704:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802ED710;
    }
}

loc_802ED708:
{
    r31 = (r31 | 8);
    goto loc_802ED73C;
}

loc_802ED710:
{
    r3 = r30;
    ctx->lr = 0x802ED718u;
    if constexpr (KnownRegArgsCpuCall<0x802D7ECCu>(&func_802D7ECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7ECC_D9B = func_802D7ECC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7ECC_D9B);
        r4 = static_cast<uint32_t>(regargs_result_802D7ECC_D9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7ECCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802ED71C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802ED728;
    }
}

loc_802ED720:
{
    r31 = (r31 | 16);
    goto loc_802ED73C;
}

loc_802ED728:
{
    r3 = r30;
    ctx->lr = 0x802ED730u;
    if constexpr (KnownRegArgsCpuCall<0x802D7E84u>(&func_802D7E84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D7E84_1212 = func_802D7E84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7E84_1212);
        r4 = static_cast<uint32_t>(regargs_result_802D7E84_1212 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D7E84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802ED734:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802ED73C;
    }
}

loc_802ED738:
{
    r31 = (r31 | 32);
}

loc_802ED73C:
{
    r3 = r31;
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

extern "C" void func_802ED684(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ED684_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802ED684 func_802ED684 preserves=true fpr_mask=0x00000000
