#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012ECC4(CpuContext* ctx);
extern "C" uint32_t func_8012ECC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801302A0(CpuContext* ctx);
extern "C" uint32_t func_801302A0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012ECC4_statefree(uint32_t);
extern "C" uint64_t func_801302A0_statefree(uint32_t);

extern "C" uint64_t func_801D7634_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801D7634;

loc_801D7634:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r28 = 0;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r26 = r3;
    r3 = r31;
    ctx->lr = 0x801D7670u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D090_FAF = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_FAF);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_FAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801D7674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801D7714;
    }
}

loc_801D7678:
{
    r27 = 0;
    r30 = (r29 & 65535);
    goto loc_801D7708;
}

loc_801D7684:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_801D768C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D7700;
    }
}

loc_801D7690:
{
    r0 = MemoryInline::FlatRead32((r26 + 456));
    r0 = (r0 & 1);
}

loc_801D769C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D7700;
    }
}

loc_801D76A0:
{
}

loc_801D76A4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r26))) {
        goto loc_801D7700;
    }
}

loc_801D76A8:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r26 + 481));
}

loc_801D76B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801D7700;
    }
}

loc_801D76B8:
{
    r3 = r26;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r29 = (r3 & 255);
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801302A0u) && KnownTranslatedCpuCall<0x801302A0u>::kAvailable && !KnownTranslatedCpuCall<0x801302A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801302A0u>()) {
        const auto state_free_result_801302A0_1813 = func_801302A0_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_801302A0_1813);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801302A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r3 & 255);
}

loc_801D76D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_801D7700;
    }
}

loc_801D76D8:
{
    r0 = MemoryInline::FlatRead8((r26 + 485));
}

loc_801D76E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_801D7700;
    }
}

loc_801D76E4:
{
    r3 = (r31 + 432);
    r4 = (r26 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 837), static_cast<uint8_t>(r0));
    r28 = 1;
    goto loc_801D7714;
}

loc_801D7700:
{
    r27 = (r27 + 1);
    r26 = (r26 + 2840);
}

loc_801D7708:
{
    r0 = (r27 & 65535);
}

loc_801D7710:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_801D7684;
    }
}

loc_801D7714:
{
}

loc_801D7718:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801D7724;
    }
}

loc_801D771C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 837), static_cast<uint8_t>(r0));
}

loc_801D7724:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012ECC4u) && KnownTranslatedCpuCall<0x8012ECC4u>::kAvailable && !KnownTranslatedCpuCall<0x8012ECC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012ECC4u>()) {
        const auto state_free_result_8012ECC4_1FCD = func_8012ECC4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8012ECC4_1FCD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8012ECC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_801D7730:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801D7750;
    }
}

loc_801D7734:
{
    r3 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r3 & 32768);
}

loc_801D7740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D7768;
    }
}

loc_801D7744:
{
    r0 = (r3 & 32767);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801D7768;
}

loc_801D7750:
{
    r3 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r3 & 32768);
}

loc_801D775C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801D7768;
    }
}

loc_801D7760:
{
    r0 = (r3 | 32768);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_801D7768:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801D7634(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801D7634_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D7634 func_801D7634 preserves=true fpr_mask=0x00000000
