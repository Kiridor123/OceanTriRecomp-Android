#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9DDC(CpuContext* ctx);
extern "C" uint64_t func_802A9DDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802A649C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802A649C;

loc_802A649C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = MemoryInline::FlatRead8((r3 + 486));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl0_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl0_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A9E70;
    }
}

loc_inl0_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl0_0x802A9E70;
    }
}

loc_inl0_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    goto loc_inl0_cont_802A9E44;
}

loc_inl0_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
}

loc_inl0_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r4 = r3;
    r3 = r30;
    r4 = MemoryInline::FlatRead16(r4);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    ctx->lr = 0x802A64D8u;
    if constexpr (KnownRegArgsCpuCall<0x802A9DDCu>(&func_802A9DDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A9DDC_989 = func_802A9DDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A9DDC_989);
        r4 = static_cast<uint32_t>(regargs_result_802A9DDC_989 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A9DDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802A64DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A64F0;
    }
}

loc_802A64E0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 487), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802A64FC;
}

loc_802A64F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 487), static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_802A64FC:
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

extern "C" void func_802A649C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A649C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A649C func_802A649C preserves=true fpr_mask=0x00000000
