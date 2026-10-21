#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008617C(CpuContext* ctx);
extern "C" void func_8008617C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008619C(CpuContext* ctx);
extern "C" void func_8008619C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80094D1C(CpuContext* ctx);
extern "C" uint64_t func_80094D1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80094EB4(CpuContext* ctx);
extern "C" uint64_t func_80094EB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8008617C_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8008619C_statefree(uint32_t, uint32_t);

extern "C" void func_800860A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800860A8u);
    goto loc_800860A8;

loc_800860A8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r27 = 0;
    r31 = 0;
    r29 = 1;
    r30 = 0x80680000u;
}

loc_800860D4:
{
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x800860E0u;
    if constexpr (KnownRegArgsCpuCall<0x80094EB4u>(&func_80094EB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80094EB4_837 = func_80094EB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094EB4_837);
        r4 = static_cast<uint32_t>(regargs_result_80094EB4_837 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80094EB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800860E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80086154;
    }
}

loc_800860E8:
{
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x800860F4u;
    if constexpr (KnownRegArgsCpuCall<0x80094D1Cu>(&func_80094D1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80094D1C_BE5 = func_80094D1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094D1C_BE5);
        r4 = static_cast<uint32_t>(regargs_result_80094D1C_BE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80094D1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r27));
    r26 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r24 + 96));
    r0 = (r0 & r26);
}

loc_8008610C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80086120;
    }
}

loc_80086110:
{
    r4 = (r24 + r31);
    // inline leaf 0x800861B8 (16 guest instruction(s))
}

loc_inl1_0x800861B8:
{
    r6 = 0;
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl1_0x800861C8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x800861F0;
    }
}

loc_inl1_0x800861CC:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_inl1_0x800861D8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x800861F0;
    }
}

loc_inl1_0x800861DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl1_0x800861E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x800861F0;
    }
}

loc_inl1_0x800861EC:
{
    r6 = 1;
}

loc_inl1_0x800861F0:
{
    r3 = r6;
}

loc_inl1_cont_800861B8:
{
    // end of inlined leaf 0x800861B8
}

loc_8008611C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80086154;
    }
}

loc_80086120:
{
    r0 = MemoryInline::FlatRead16((r24 + 96));
    r0 = (r0 | r26);
    MemoryInline::FlatWrite16((r24 + 96), static_cast<uint16_t>(r0));
    r0 = (r27 * 12);
    r3 = (r24 + r0);
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008619Cu) && KnownTranslatedCpuCall<0x8008619Cu>::kAvailable && !KnownTranslatedCpuCall<0x8008619Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008619Cu>()) {
        const auto state_free_result_8008619C_15A2 = func_8008619C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8008619C_15A2[0]);
        r5 = static_cast<uint32_t>(state_free_result_8008619C_15A2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8008619Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = r28;
    r4 = r27;
    ctx->lr = 0x80086148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804B8E30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = (r30 + 21376);
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008617Cu) && KnownTranslatedCpuCall<0x8008617Cu>::kAvailable && !KnownTranslatedCpuCall<0x8008617Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008617Cu>()) {
        const auto state_free_result_8008617C_1AD2 = func_8008617C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8008617C_1AD2[0]);
        r5 = static_cast<uint32_t>(state_free_result_8008617C_1AD2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8008617Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
}

loc_80086154:
{
    r27 = (r27 + 1);
    r31 = (r31 + 12);
}

loc_80086160:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(8))) {
        goto loc_800860D4;
    }
}

loc_80086164:
{
    r11 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800860A8 func_800860A8 preserves=true fpr_mask=0x00000000
