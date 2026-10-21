#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800788DC(CpuContext* ctx);
extern "C" uint32_t func_800788DC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007892C(CpuContext* ctx);
extern "C" uint32_t func_8007892C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800789EC(CpuContext* ctx);
extern "C" uint32_t func_800789EC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078A28(CpuContext* ctx);
extern "C" uint64_t func_80078A28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078A94(CpuContext* ctx);
extern "C" uint64_t func_80078A94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800788DC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800789EC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80078EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80078EE0u);
    goto loc_80078EE0;

loc_80078EE0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r23 = r6;
    r3 = (r1 + 52);
    r4 = 0;
    ctx->lr = 0x80078F10u;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_9FC = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_9FC);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_9FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 48);
    r4 = 0;
    ctx->lr = 0x80078F1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_D26 = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_D26);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_D26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 44);
    r4 = 0;
    ctx->lr = 0x80078F28u;
    if constexpr (KnownRegArgsCpuCall<0x80078A28u>(&func_80078A28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A28_1050 = func_80078A28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A28_1050);
        r4 = static_cast<uint32_t>(regargs_result_80078A28_1050 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078A28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 40);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r22 = 1;
    r0 = (r23 & 8);
}

loc_80078F40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078F48;
    }
}

loc_80078F44:
{
    r22 = (r22 | 8);
}

loc_80078F48:
{
    r0 = (r23 & 4);
}

loc_80078F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078F58;
    }
}

loc_80078F54:
{
    r22 = (r22 | 16);
}

loc_80078F58:
{
    r23 = 0;
    r24 = (r22 | 16);
    r27 = (r1 + 8);
    r26 = (r1 + 12);
    r25 = (r1 + 16);
    goto loc_8007905C;
}

loc_80078F70:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r30 + 10));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098914u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 36);
    ctx->lr = 0x80078F8Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800789ECu) && KnownTranslatedCpuCall<0x800789ECu>::kAvailable && !KnownTranslatedCpuCall<0x800789ECu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800789ECu>()) {
        const auto state_free_result_800789EC_1798 = func_800789EC_statefree(r1, r3, r4, 0x80078F8Cu);
        r0 = static_cast<uint32_t>(state_free_result_800789EC_1798[0]);
        r1 = static_cast<uint32_t>(state_free_result_800789EC_1798[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800789ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800776A8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80078F98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079054;
    }
}

loc_80078F9C:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r30 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800987FCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 32);
    ctx->lr = 0x80078FB8u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_1D87 = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_1D87;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r30 + 6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 28);
    ctx->lr = 0x80078FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_20DC = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_20DC);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_20DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 52);
    r4 = (r1 + 48);
    ctx->lr = 0x80078FF8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800788DCu) && KnownTranslatedCpuCall<0x800788DCu>::kAvailable && !KnownTranslatedCpuCall<0x800788DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800788DCu>()) {
        const auto state_free_result_800788DC_2557 = func_800788DC_statefree(r1, r3, r4, 0x80078FF8u);
        r1 = static_cast<uint32_t>(state_free_result_800788DC_2557[0]);
        r3 = static_cast<uint32_t>(state_free_result_800788DC_2557[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800788DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
}

loc_80078FFC:
{
    r28 = r22;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079008;
    }
}

loc_80079004:
{
    r28 = r24;
}

loc_80079008:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = r25;
    r4 = r26;
    r5 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80077814u>(ctx);
    r3 = ctx->gpr[3];
    r9 = r3;
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    r5 = 0;
    r6 = 0;
    r7 = r28;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80076A58u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 52);
    ctx->lr = 0x80079054u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_2CC9 = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_2CC9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80079054:
{
    r30 = (r30 + 12);
    r23 = (r23 + 1);
}

loc_8007905C:
{
}

loc_80079060:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r31))) {
        goto loc_80078F70;
    }
}

loc_80079064:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80078EE0 func_80078EE0 preserves=true fpr_mask=0x00000000
