#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DCD5C(CpuContext* ctx);
extern "C" uint64_t func_800DCD5C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802D371C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802D371C;

loc_802D371C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead16((r3 + 532));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D3738:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D3744;
    }
}

loc_802D373C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 532), static_cast<uint16_t>(r0));
}

loc_802D3744:
{
    r4 = MemoryInline::FlatRead16((r3 + 858));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D374C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D3758;
    }
}

loc_802D3750:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 858), static_cast<uint16_t>(r0));
}

loc_802D3758:
{
    r4 = MemoryInline::FlatRead16((r3 + 862));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D3760:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D376C;
    }
}

loc_802D3764:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 862), static_cast<uint16_t>(r0));
}

loc_802D376C:
{
    r4 = MemoryInline::FlatRead16((r3 + 850));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D3774:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D3794;
    }
}

loc_802D3778:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 850), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D3788:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802D3794;
    }
}

loc_802D378C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 852), static_cast<uint8_t>(r0));
}

loc_802D3794:
{
    r4 = MemoryInline::FlatRead8((r3 + 842));
}

loc_802D379C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802D37A8;
    }
}

loc_802D37A0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 842), static_cast<uint8_t>(r0));
}

loc_802D37A8:
{
    r4 = MemoryInline::FlatRead16((r3 + 970));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D37B0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D37BC;
    }
}

loc_802D37B4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 970), static_cast<uint16_t>(r0));
}

loc_802D37BC:
{
    r4 = MemoryInline::FlatRead16((r3 + 976));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D37C4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D37D0;
    }
}

loc_802D37C8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 976), static_cast<uint16_t>(r0));
}

loc_802D37D0:
{
    r4 = MemoryInline::FlatRead16((r3 + 1086));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D37D8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D37E4;
    }
}

loc_802D37DC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1086), static_cast<uint16_t>(r0));
}

loc_802D37E4:
{
    r4 = MemoryInline::FlatRead16((r3 + 1058));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_802D37EC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802D3834;
    }
}

loc_802D37F0:
{
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1058), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 1056));
}

loc_802D3800:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D3834;
    }
}

loc_802D3804:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_802D380C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D381C;
    }
}

loc_802D3810:
{
    r0 = MemoryInline::FlatRead8((r3 + 368));
}

loc_802D3818:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D3834;
    }
}

loc_802D381C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1058), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 1176));
    r4 = (r31 + 376);
    r5 = 1;
    ctx->lr = 0x802D3834u;
    if constexpr (KnownRegArgsCpuCall<0x800DCD5Cu>(&func_800DCD5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DCD5C_14FB = func_800DCD5C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCD5C_14FB);
        r4 = static_cast<uint32_t>(regargs_result_800DCD5C_14FB >> 32);
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
        InvokeDirectCpu<0x800DCD5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_802D3834:
{
    r3 = MemoryInline::FlatRead16((r31 + 1060));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D383C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3848;
    }
}

loc_802D3840:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1060), static_cast<uint16_t>(r0));
}

loc_802D3848:
{
    r3 = MemoryInline::FlatRead16((r31 + 884));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3850:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D385C;
    }
}

loc_802D3854:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 884), static_cast<uint16_t>(r0));
}

loc_802D385C:
{
    r3 = MemoryInline::FlatRead16((r31 + 566));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3864:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3884;
    }
}

loc_802D3868:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 566), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D3878:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D3884;
    }
}

loc_802D387C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 565), static_cast<uint8_t>(r0));
}

loc_802D3884:
{
    r3 = MemoryInline::FlatRead16((r31 + 570));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D388C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D38AC;
    }
}

loc_802D3890:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 570), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D38A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D38AC;
    }
}

loc_802D38A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 569), static_cast<uint8_t>(r0));
}

loc_802D38AC:
{
    r3 = MemoryInline::FlatRead16((r31 + 980));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D38B8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802D38E0;
    }
}

loc_802D38BC:
{
    r3 = MemoryInline::FlatRead16((r31 + 988));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 988), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D38D0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802D38E0;
    }
}

loc_802D38D4:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x802D6B90 (16 guest instruction(s))
}

loc_inl0_0x802D6B90:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 982));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl0_0x802D6BA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_inl0_0x802D6BB0;
    }
}

loc_inl0_0x802D6BAC:
{
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r4));
}

loc_inl0_0x802D6BB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl0_0x802D6BB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x802D6BC4;
    }
}

loc_inl0_0x802D6BBC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
}

loc_inl0_0x802D6BC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 986));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 988), static_cast<uint16_t>(r0));
}

loc_inl0_cont_802D6B90:
{
    // end of inlined leaf 0x802D6B90
}

loc_802D38E0:
{
    r3 = MemoryInline::FlatRead16((r31 + 574));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D38E8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D390C;
    }
}

loc_802D38EC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 574), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D38FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802D390C;
    }
}

loc_802D3900:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 574), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 572), static_cast<uint8_t>(r0));
}

loc_802D390C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1032));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3914:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3920;
    }
}

loc_802D3918:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1032), static_cast<uint16_t>(r0));
}

loc_802D3920:
{
    r3 = MemoryInline::FlatRead16((r31 + 1034));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3928:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3934;
    }
}

loc_802D392C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1034), static_cast<uint16_t>(r0));
}

loc_802D3934:
{
    r3 = MemoryInline::FlatRead16((r31 + 1036));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D393C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3948;
    }
}

loc_802D3940:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1036), static_cast<uint16_t>(r0));
}

loc_802D3948:
{
    r3 = MemoryInline::FlatRead16((r31 + 1038));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3950:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D395C;
    }
}

loc_802D3954:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1038), static_cast<uint16_t>(r0));
}

loc_802D395C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1040));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3964:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3970;
    }
}

loc_802D3968:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1040), static_cast<uint16_t>(r0));
}

loc_802D3970:
{
    r3 = MemoryInline::FlatRead16((r31 + 1042));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D3978:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3984;
    }
}

loc_802D397C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1042), static_cast<uint16_t>(r0));
}

loc_802D3984:
{
    r3 = MemoryInline::FlatRead16((r31 + 1148));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D398C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D3998;
    }
}

loc_802D3990:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1148), static_cast<uint16_t>(r0));
}

loc_802D3998:
{
    r3 = MemoryInline::FlatRead16((r31 + 1130));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D39A0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D39AC;
    }
}

loc_802D39A4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1130), static_cast<uint16_t>(r0));
}

loc_802D39AC:
{
    r3 = MemoryInline::FlatRead16((r31 + 906));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D39B4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D39C0;
    }
}

loc_802D39B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 906), static_cast<uint16_t>(r0));
}

loc_802D39C0:
{
    r3 = MemoryInline::FlatRead16((r31 + 1158));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802D39C8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802D39D4;
    }
}

loc_802D39CC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1158), static_cast<uint16_t>(r0));
}

loc_802D39D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D371C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D371C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D371C func_802D371C preserves=true fpr_mask=0x00000000
