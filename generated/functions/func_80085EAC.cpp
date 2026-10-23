#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085FA0(CpuContext* ctx);
extern "C" uint32_t func_80085FA0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80085FC4(CpuContext* ctx);
extern "C" uint32_t func_80085FC4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80094808(CpuContext* ctx);
extern "C" uint64_t func_80094808_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800949A0(CpuContext* ctx);
extern "C" uint64_t func_800949A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80085FA0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80085EAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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

    goto loc_80085EAC;

loc_80085EAC:
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
    r28 = 1;
    r30 = 0x80680000u;
}

loc_80085ED8:
{
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x80085EE4u;
    if constexpr (KnownRegArgsCpuCall<0x800949A0u>(&func_800949A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800949A0_921 = func_800949A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800949A0_921);
        r4 = static_cast<uint32_t>(regargs_result_800949A0_921 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800949A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80085EE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085F78;
    }
}

loc_80085EEC:
{
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x80085EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80094808u>(&func_80094808)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80094808_CF3 = func_80094808_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094808_CF3);
        r4 = static_cast<uint32_t>(regargs_result_80094808_CF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80094808u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = r3;
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r27));
    r29 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r24 + 256));
    r0 = (r0 & r29);
}

loc_80085F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80085F24;
    }
}

loc_80085F14:
{
    r4 = (r24 + r31);
    if constexpr (KnownRegArgsCpuCall<0x80085FC4u>(&func_80085FC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80085FC4_1174 = func_80085FC4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80085FC4_1174;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80085FC4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80085F20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80085F78;
    }
}

loc_80085F24:
{
    r0 = MemoryInline::FlatRead8((r24 + 256));
    r0 = (r0 | r29);
    MemoryInline::FlatWrite8((r24 + 256), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r3 = (r24 + r0);
    r4 = r26;
    // inline leaf 0x8005C570 (17 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    }
    // end of inlined leaf 0x8005C570
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x80085F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = r26;
    ctx->lr = 0x80085F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804B8AE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r29 = r3;
    r3 = r26;
    ctx->lr = 0x80085F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804B8AC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r0 = r3;
    r3 = (r30 + 21260);
    r4 = r27;
    r5 = (r0 & 65535);
    r6 = (r29 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80085FA0u) && KnownTranslatedCpuCall<0x80085FA0u>::kAvailable && !KnownTranslatedCpuCall<0x80085FA0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80085FA0u>()) {
        const auto state_free_result_80085FA0_2770 = func_80085FA0_statefree(r3, r4, r5, r6);
        r0 = static_cast<uint32_t>(state_free_result_80085FA0_2770[0]);
        r4 = static_cast<uint32_t>(state_free_result_80085FA0_2770[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80085FA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
}

loc_80085F78:
{
    r27 = (r27 + 1);
    r31 = (r31 + 32);
}

loc_80085F84:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(8))) {
        goto loc_80085ED8;
    }
}

loc_80085F88:
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80085EAC func_80085EAC preserves=true fpr_mask=0x00000000
