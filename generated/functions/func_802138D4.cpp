#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C300(CpuContext* ctx);
extern "C" uint64_t func_8004C300_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80213658(CpuContext* ctx);
extern "C" uint64_t func_80213658_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802137A4(CpuContext* ctx);
extern "C" uint64_t func_802137A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217E04(CpuContext* ctx);
extern "C" uint64_t func_80217E04_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E30C(CpuContext* ctx);
extern "C" uint64_t func_8027E30C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EDD0(CpuContext* ctx);
extern "C" uint64_t func_8027EDD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" void func_802138D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_802138D4;

loc_802138D4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r5;
    r30 = MemoryInline::FlatRead32((r13 + -17824));
    r28 = 0;
    r5 = (r3 & 65535);
    r31 = (r5 + -11);
}

loc_80213904:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(2))) {
        goto loc_80213930;
    }
}

loc_80213908:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x806C0000u;
    r3 = (r3 + 6208);
    r3_addr_0 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = (r4 & 65535);
    r0 = (r0 * 36);
    r29 = (r29 + r0);
    r24 = MemoryInline::FlatRead8(r29);
    r27 = MemoryInline::FlatRead16((r29 + 2));
    goto loc_802139B4;
}

loc_80213930:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 0x806C0000u;
    r5 = (r5 + 6208);
    r5_addr_1 = (r5 + r0);
    r29 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = (r4 & 65535);
    r0 = (r0 * 24);
    r29 = (r29 + r0);
    r24 = MemoryInline::FlatRead8(r29);
    r27 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_FA8 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_FA8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80213964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802139B4;
    }
}

loc_80213968:
{
    r3 = (r25 & 255);
    r4 = r27;
    ctx->lr = 0x80213974u;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_13A4 = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_13A4);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_13A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80213978:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802139B4;
    }
}

loc_8021397C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80213984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802139A0;
    }
}

loc_80213988:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 1);
}

loc_80213994:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802139B4;
    }
}

loc_80213998:
{
    r28 = (r28 | 16);
    goto loc_802139B4;
}

loc_802139A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 2);
}

loc_802139AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802139B4;
    }
}

loc_802139B0:
{
    r28 = (r28 | 16);
}

loc_802139B4:
{
}

loc_802139B8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802139C4;
    }
}

loc_802139BC:
{
    r0 = (r28 | 16);
    r28 = (r0 & 65535);
}

loc_802139C4:
{
}

loc_802139C8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80213A34;
    }
}

loc_802139CC:
{
    r3 = (r25 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_1C16 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_1C16);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_802139E0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80213A34;
    }
}

loc_802139E4:
{
    r3 = (r25 & 255);
    r4 = r27;
    r5 = (r1 + 8);
    r6 = (r1 + 12);
    ctx->lr = 0x802139F8u;
    if constexpr (KnownRegArgsCpuCall<0x8027EDD0u>(&func_8027EDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027EDD0_206E = func_8027EDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EDD0_206E);
        r4 = static_cast<uint32_t>(regargs_result_8027EDD0_206E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027EDD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r30;
}

loc_80213A04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80213A10;
    }
}

loc_80213A08:
{
    r0 = MemoryInline::FlatRead8((r4 + 20));
    goto loc_80213A18;
}

loc_80213A10:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_80213A18:
{
    r4 = (r0 & 255);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x80213A24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80213548u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_80213A28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80213A34;
    }
}

loc_80213A2C:
{
    r0 = (r28 | 16);
    r28 = (r0 & 65535);
}

loc_80213A34:
{
}

loc_80213A38:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(2))) {
        goto loc_80213A58;
    }
}

loc_80213A3C:
{
    r3 = r30;
    r4 = r29;
    r5 = (r26 & 255);
    ctx->lr = 0x80213A4Cu;
    if constexpr (KnownRegArgsCpuCall<0x802137A4u>(&func_802137A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802137A4_2903 = func_802137A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802137A4_2903);
        r4 = static_cast<uint32_t>(regargs_result_802137A4_2903 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802137A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r0 = (r28 | r3);
    r28 = (r0 & 65535);
    goto loc_80213A70;
}

loc_80213A58:
{
    r3 = r30;
    r4 = r29;
    r5 = (r26 & 255);
    ctx->lr = 0x80213A68u;
    if constexpr (KnownRegArgsCpuCall<0x80213658u>(&func_80213658)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80213658_2DCC = func_80213658_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80213658_2DCC);
        r4 = static_cast<uint32_t>(regargs_result_80213658_2DCC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80213658u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r0 = (r28 | r3);
    r28 = (r0 & 65535);
}

loc_80213A70:
{
    r0 = (r26 & 255);
}

loc_80213A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80213A84;
    }
}

loc_80213A7C:
{
    r3 = r28;
    goto loc_80213ABC;
}

loc_80213A84:
{
    r3 = (r25 & 255);
    r4 = r27;
    ctx->lr = 0x80213A90u;
    if constexpr (KnownRegArgsCpuCall<0x80217E04u>(&func_80217E04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E04_3339 = func_80217E04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E04_3339);
        r4 = static_cast<uint32_t>(regargs_result_80217E04_3339 >> 32);
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
        InvokeDirectCpu<0x80217E04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r30 + 24));
}

loc_80213A98:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_80213AA0;
    }
}

loc_80213A9C:
{
    r28 = (r28 | 4);
}

loc_80213AA0:
{
    ctx->lr = 0x80213AA4u;
    if constexpr (KnownRegArgsCpuCall<0x8004C300u>(&func_8004C300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C300_379F = func_8004C300_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C300_379F);
        r4 = static_cast<uint32_t>(regargs_result_8004C300_379F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
}

loc_80213AAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80213AB8;
    }
}

loc_80213AB0:
{
    r0 = (r28 | 2);
    r28 = (r0 & 65535);
}

loc_80213AB8:
{
    r3 = r28;
}

loc_80213ABC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802138D4 func_802138D4 preserves=true fpr_mask=0x00000000
