#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D068(CpuContext* ctx);
extern "C" uint32_t func_8012D068_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801359A4(CpuContext* ctx);
extern "C" double func_801359A4_ra8_0_0_2(CpuContext*, uint32_t);
extern "C" void func_80343AB8(CpuContext* ctx);
extern "C" uint32_t func_80343AB8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8012D068_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801359A4_statefree(uint32_t, PPC_FPR, PPC_FPR);
extern "C" MkwStateFreeResult2 func_80343AB8_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_8012D068_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80345DF0_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80345DF0u);
    goto loc_80345DF0;

loc_80345DF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80343AB8u) && KnownTranslatedCpuCall<0x80343AB8u>::kAvailable && !KnownTranslatedCpuCall<0x80343AB8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80343AB8u>()) {
        const auto state_free_result_80343AB8_1164 = func_80343AB8_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80343AB8_1164[0]);
        r3 = static_cast<uint32_t>(state_free_result_80343AB8_1164[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80343AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r28 = r3;
}

loc_80345E44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80345F2C;
    }
}

loc_80345E48:
{
    r27 = 0;
    r29 = (r29 & 65535);
    goto loc_80345F24;
}

loc_80345E54:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012D068u) && KnownTranslatedCpuCall<0x8012D068u>::kAvailable && !KnownTranslatedCpuCall<0x8012D068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012D068u>()) {
        const auto state_free_result_8012D068_165A = func_8012D068_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8012D068_165A[0]);
        r3 = static_cast<uint32_t>(state_free_result_8012D068_165A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80345E60:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80345F1C;
    }
}

loc_80345E64:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80345E70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80345F1C;
    }
}

loc_80345E74:
{
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_80345E80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80345E9C;
    }
}

loc_80345E84:
{
    r0 = MemoryInline::FlatRead8((r31 + 485));
}

loc_80345E8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80345F2C;
    }
}

loc_80345E90:
{
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r30 + 24), r31);
    goto loc_80345F2C;
}

loc_80345E9C:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80345EA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80345F1C;
    }
}

loc_80345EAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1085));
}

loc_80345EB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80345F1C;
    }
}

loc_80345EB8:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80345EC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80345ECC;
    }
}

loc_80345EC4:
{
}

loc_80345EC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80345F10;
    }
}

loc_80345ECC:
{
    r0 = MemoryInline::FlatRead8((r30 + 23));
}

loc_80345ED4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80345EE4;
    }
}

loc_80345ED8:
{
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r30 + 24), r31);
    goto loc_80345F1C;
}

loc_80345EE4:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f31.d = f1.d;
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801359A4u) && KnownTranslatedCpuCall<0x801359A4u>::kAvailable && !KnownTranslatedCpuCall<0x801359A4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801359A4u>()) {
        const auto state_free_result_801359A4_2387 = func_801359A4_statefree(r3, f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_801359A4_2387[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_801359A4_2387[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_80345EFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80345F1C;
    }
}

loc_80345F00:
{
    r0 = MemoryInline::FlatRead8((r31 + 1132));
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 24), r31);
    goto loc_80345F1C;
}

loc_80345F10:
{
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r30 + 24), r31);
    goto loc_80345F2C;
}

loc_80345F1C:
{
    r27 = (r27 + 1);
    r31 = (r31 + 2840);
}

loc_80345F24:
{
}

loc_80345F28:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r29))) {
        goto loc_80345E54;
    }
}

loc_80345F2C:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r1 + 40);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80345DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80345DF0_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80345DF0 func_80345DF0 preserves=true fpr_mask=0x00000000
