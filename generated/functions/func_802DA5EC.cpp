#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DA55C(CpuContext* ctx);
extern "C" uint64_t func_802DA55C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E0CE4(CpuContext* ctx);
extern "C" uint64_t func_802E0CE4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802DA5EC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802DA5EC;

loc_802DA5EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x802DA7B8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x802DA7B8
    r0 = (r3 & 255);
}

loc_802DA614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DA624;
    }
}

loc_802DA618:
{
}

loc_802DA61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DA64C;
    }
}

loc_802DA620:
{
    goto loc_802DA750;
}

loc_802DA624:
{
    r3 = r29;
    ctx->lr = 0x802DA62Cu;
    if constexpr (KnownRegArgsCpuCall<0x802DA55Cu>(&func_802DA55C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA55C_7EE = func_802DA55C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802DA55C_7EE);
        r4 = static_cast<uint32_t>(regargs_result_802DA55C_7EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DA55Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DA630:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DA640;
    }
}

loc_802DA634:
{
    r3 = r29;
    // inline leaf 0x802DA264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA264
    goto loc_802DA750;
}

loc_802DA640:
{
    r3 = r29;
    // inline leaf 0x802DA7A8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA7A8
    goto loc_802DA750;
}

loc_802DA64C:
{
    r3 = r29;
    ctx->lr = 0x802DA654u;
    if constexpr (KnownRegArgsCpuCall<0x802DA55Cu>(&func_802DA55C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA55C_D64 = func_802DA55C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802DA55C_D64);
        r4 = static_cast<uint32_t>(regargs_result_802DA55C_D64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DA55Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DA658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DA668;
    }
}

loc_802DA65C:
{
    r3 = r29;
    // inline leaf 0x802DA264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA264
    goto loc_802DA750;
}

loc_802DA668:
{
    r3 = r29;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
}

loc_802DA678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DA6D4;
    }
}

loc_802DA67C:
{
    r3 = 0x806C0000u;
    r31 = MemoryInline::FlatRead32((r3 + 328));
    r3 = r31;
    ctx->lr = 0x802DA68Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_1345 = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_1345);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_1345 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DA690:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802DA6B8;
    }
}

loc_802DA694:
{
    r0 = MemoryInline::FlatRead8((r31 + 1468));
}

loc_802DA69C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DA6B8;
    }
}

loc_802DA6A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1470));
}

loc_802DA6A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DA6B8;
    }
}

loc_802DA6AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1469));
}

loc_802DA6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DA6C8;
    }
}

loc_802DA6B8:
{
    r3 = r29;
    r4 = 0;
    // inline leaf 0x802DA1D4 (3 guest instruction(s))
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA1D4
    goto loc_802DA6D4;
}

loc_802DA6C8:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x802DA1D4 (3 guest instruction(s))
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA1D4
}

loc_802DA6D4:
{
    r3 = r29;
    // inline leaf 0x802DA794 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802DA794
}

loc_802DA6E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DA750;
    }
}

loc_802DA6E4:
{
    r3 = r29;
    // inline leaf 0x802DA314 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x802DA314
    r0 = (r3 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r3 = 0x805D0000u;
    r0 = (r3 + 23688);
    r30 = (r0 + r4);
    r3 = r29;
    r4 = 1;
    // inline leaf 0x802DA774 (8 guest instruction(s))
}

loc_inl9_0x802DA774:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl9_0x802DA77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x802DA78C;
    }
}

loc_inl9_0x802DA780:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_inl9_0x802DA78C:
{
    r3 = MemoryInline::FlatRead8((r3 + 7));
}

loc_inl9_cont_802DA774:
{
    // end of inlined leaf 0x802DA774
    r3 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x802DA714u;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0CE4_2099 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_2099);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_2099 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r31 = (r3 & 65535);
    r3 = r29;
    // inline leaf 0x802DA76C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 7));
    // end of inlined leaf 0x802DA76C
    r0 = (r3 & 255);
}

loc_802DA728:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r31))) {
        goto loc_802DA750;
    }
}

loc_802DA72C:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_802DA734:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DA748;
    }
}

loc_802DA738:
{
    r3 = r29;
    r4 = 0;
    // inline leaf 0x802DA1E0 (3 guest instruction(s))
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA1E0
    goto loc_802DA750;
}

loc_802DA748:
{
    r3 = r29;
    // inline leaf 0x802DA264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA264
}

loc_802DA750:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DA5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DA5EC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DA5EC func_802DA5EC preserves=true fpr_mask=0x00000000
