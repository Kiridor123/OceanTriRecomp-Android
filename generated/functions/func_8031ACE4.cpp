#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9E44(CpuContext* ctx);
extern "C" uint32_t func_802A9E44_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033ACDC(CpuContext* ctx);
extern "C" uint64_t func_8033ACDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031ACE4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8031ACE4;

loc_8031ACE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r5;
    r6 = (r4 & 65535);
}

loc_8031AD0C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(65535))) {
        goto loc_8031AD18;
    }
}

loc_8031AD10:
{
    r3 = 0;
    goto loc_8031AD78;
}

loc_8031AD18:
{
    r0 = (r5 & 65535);
}

loc_8031AD20:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8031AD2C;
    }
}

loc_8031AD24:
{
    r3 = 0;
    goto loc_8031AD78;
}

loc_8031AD2C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    goto loc_inl0_cont_802A9E44;
}

loc_inl0_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
}

loc_inl0_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031AD40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031AD4C;
    }
}

loc_8031AD44:
{
    r3 = 0;
    goto loc_8031AD78;
}

loc_8031AD4C:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    if constexpr (KnownRegArgsCpuCall<0x802A9E44u>(&func_802A9E44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A9E44_D87 = func_802A9E44_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802A9E44_D87;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A9E44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead16(r3);
    r4 = MemoryInline::FlatRead16(r31);
    r5 = 0;
    ctx->lr = 0x8031AD68u;
    if constexpr (KnownRegArgsCpuCall<0x8033ACDCu>(&func_8033ACDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033ACDC_1055 = func_8033ACDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033ACDC_1055);
        r4 = static_cast<uint32_t>(regargs_result_8033ACDC_1055 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033ACDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r29 + 492), r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_8031AD78:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031ACE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031ACE4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031ACE4 func_8031ACE4 preserves=true fpr_mask=0x00000000
