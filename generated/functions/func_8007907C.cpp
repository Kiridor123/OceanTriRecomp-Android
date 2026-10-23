#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800640C0(CpuContext* ctx);
extern "C" uint64_t func_800640C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80077ED4(CpuContext* ctx);
extern "C" uint64_t func_80077ED4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
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
extern "C" void func_80078E24(CpuContext* ctx);
extern "C" uint64_t func_80078E24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800788DC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800789EC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8007907C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r21 = ctx->gpr[21];
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

    goto loc_8007907C;

loc_8007907C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r21 = r7;
    r3 = (r1 + 52);
    r4 = 0;
    ctx->lr = 0x800790B0u;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_BEF = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_BEF);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_BEF >> 32);
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
    ctx->lr = 0x800790BCu;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_F32 = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_F32);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_F32 >> 32);
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
    ctx->lr = 0x800790C8u;
    if constexpr (KnownRegArgsCpuCall<0x80078A28u>(&func_80078A28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A28_1275 = func_80078A28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A28_1275);
        r4 = static_cast<uint32_t>(regargs_result_80078A28_1275 >> 32);
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
    r3 = (r1 + 56);
    ctx->lr = 0x800790DCu;
    if constexpr (KnownRegArgsCpuCall<0x80078E24u>(&func_80078E24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078E24_163D = func_80078E24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078E24_163D);
        r4 = static_cast<uint32_t>(regargs_result_80078E24_163D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078E24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = 1;
    r0 = (r21 & 8);
}

loc_800790E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800790F0;
    }
}

loc_800790EC:
{
    r31 = (r31 | 8);
}

loc_800790F0:
{
    r0 = (r21 & 4);
}

loc_800790F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80079100;
    }
}

loc_800790FC:
{
    r31 = (r31 | 16);
}

loc_80079100:
{
    r21 = 0;
    r22 = (r31 | 16);
    r25 = (r1 + 8);
    r24 = (r1 + 12);
    r23 = (r1 + 16);
    goto loc_8007921C;
}

loc_80079118:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r28 + 10));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098914u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 36);
    ctx->lr = 0x80079134u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800789ECu) && KnownTranslatedCpuCall<0x800789ECu>::kAvailable && !KnownTranslatedCpuCall<0x800789ECu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800789ECu>()) {
        const auto state_free_result_800789EC_1D45 = func_800789EC_statefree(r1, r3, r4, 0x80079134u);
        r0 = static_cast<uint32_t>(state_free_result_800789EC_1D45[0]);
        r1 = static_cast<uint32_t>(state_free_result_800789EC_1D45[1]);
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

loc_80079140:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079214;
    }
}

loc_80079144:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r28 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800987FCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 32);
    ctx->lr = 0x80079160u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_236C = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_236C;
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
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r28 + 6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 28);
    ctx->lr = 0x8007917Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_26DD = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_26DD);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_26DD >> 32);
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
    r3 = (r1 + 52);
    ctx->lr = 0x80079184u;
    if constexpr (KnownRegArgsCpuCall<0x800640C0u>(&func_800640C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800640C0_29F7 = func_800640C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800640C0_29F7);
        r4 = static_cast<uint32_t>(regargs_result_800640C0_29F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800640C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r5 = r3;
    r3 = (r1 + 56);
    r4 = r30;
    ctx->lr = 0x80079194u;
    if constexpr (KnownRegArgsCpuCall<0x80077ED4u>(&func_80077ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80077ED4_2E78 = func_80077ED4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80077ED4_2E78);
        r4 = static_cast<uint32_t>(regargs_result_80077ED4_2E78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80077ED4u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 52);
    r4 = (r1 + 48);
    ctx->lr = 0x800791B8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800788DCu) && KnownTranslatedCpuCall<0x800788DCu>::kAvailable && !KnownTranslatedCpuCall<0x800788DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800788DCu>()) {
        const auto state_free_result_800788DC_34FE = func_800788DC_statefree(r1, r3, r4, 0x800791B8u);
        r1 = static_cast<uint32_t>(state_free_result_800788DC_34FE[0]);
        r3 = static_cast<uint32_t>(state_free_result_800788DC_34FE[1]);
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

loc_800791BC:
{
    r26 = r31;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800791C8;
    }
}

loc_800791C4:
{
    r26 = r22;
}

loc_800791C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = r23;
    r4 = r24;
    r5 = r25;
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
    r7 = r26;
    r8 = (r1 + 56);
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
    ctx->lr = 0x80079214u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_3CC6 = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_3CC6;
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

loc_80079214:
{
    r28 = (r28 + 12);
    r21 = (r21 + 1);
}

loc_8007921C:
{
}

loc_80079220:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r29))) {
        goto loc_80079118;
    }
}

loc_80079224:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007907C func_8007907C preserves=true fpr_mask=0x00000000
