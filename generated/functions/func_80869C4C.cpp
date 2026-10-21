#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BEA4(CpuContext* ctx);
extern "C" uint32_t func_8005BEA4_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80869C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    MKW_GUEST_ENTER(0x80869C4Cu);
    goto loc_80869C4C;

loc_80869C4C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r3 = (r1 + 24);
    r4 = 0x808B0000u;
    r4 = (r4 + -17112);
    ctx->lr = 0x80869C70u;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800413D0_8DB = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_8DB);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_8DB >> 32);
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
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 24);
    r29 = 0x81650000u;
    r4 = (r29 + 26112);
    r5 = 327680;
    r5 = (r5 + 20480);
    ctx->lr = 0x80869C88u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CECC8_D28 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_D28);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_D28 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r29 + 26120));
    r3 = (r3 + -2124087296);
    r4 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26128));
    r3 = (r3 + -2124087296);
    r30 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26136));
    r3 = (r3 + -2124087296);
    r31 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26144));
    r3 = (r3 + -2124087296);
    r26 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26152));
    r3 = (r3 + -2124087296);
    r27 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26160));
    r3 = (r3 + -2124087296);
    r28 = (r3 + 26112);
    r3 = MemoryInline::FlatRead32((r29 + 26168));
    r3 = (r3 + -2124087296);
    r29 = (r3 + 26112);
    r3 = 0x808B0000u;
    r3 = (r3 + -18632);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808694D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = 0x808B0000u;
    r3 = (r3 + -18620);
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808694D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = 0x808B0000u;
    r3 = (r3 + -18568);
    r4 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808694D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = 0x808B0000u;
    r3 = (r3 + -18540);
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808694D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808695E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80869868u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80869B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = 0x816B0000u;
    r0 = (r3 + -18944);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam32((r3 + 2636), r0);
    // inline leaf 0x8029F680 (3 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -4808);
    // end of inlined leaf 0x8029F680
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27792));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27796));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // inline leaf 0x8027E2E8 (3 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -9072);
    // end of inlined leaf 0x8027E2E8
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27800));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27804));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27808));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27812));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27816));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27820));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27824));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27828));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27832));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27836));
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27840));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27844));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27848));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27852));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27856));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27860));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27864));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r4 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 27868));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 32), r0);
    r4 = 0x808C0000u;
    r4 = (r4 + 27920);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27872));
    MemoryInline::FlatWriteRam32(r4, r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27876));
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27880));
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27884));
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27888));
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27892));
    MemoryInline::FlatWriteRam32((r4 + 20), r0);
    r5 = 0x808C0000u;
    r6 = (r5 + 27944);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27896));
    MemoryInline::FlatWriteRam32(r6, r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27900));
    MemoryInline::FlatWriteRam32((r6 + 4), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27904));
    MemoryInline::FlatWriteRam32((r6 + 8), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27908));
    MemoryInline::FlatWriteRam32((r6 + 12), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27912));
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
    r5 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 27916));
    MemoryInline::FlatWriteRam32((r6 + 20), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    r3 = (r1 + 24);
    r4 = 0x808B0000u;
    r4 = (r4 + -17096);
    ctx->lr = 0x80869EFCu;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800413D0_33C7 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_33C7);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_33C7 >> 32);
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
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 24);
    r30 = 0x90010000u;
    r4 = (r30 + 16224);
    r5 = 16128;
    ctx->lr = 0x80869F10u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CECC8_37FF = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_37FF);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_37FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = r3;
    r26 = (r30 + 32352);
    r28 = (r30 + 16224);
    r27 = 0;
}

loc_80869F20:
{
    MemoryInline::FlatWrite32(r26, r28);
    r26 = (r26 + 4);
    r30 = 1;
    r27 = (r27 + 1);
}

loc_80869F30:
{
    r3 = (r28 + 1878982656);
    r0 = (r3 + -16224);
}

loc_80869F3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r29))) {
        goto loc_80869FAC;
    }
}

loc_80869F40:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    r4 = r28;
    r5 = 9;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    ctx->lr = 0x80869F68u;
    if constexpr (KnownRegArgsCpuCall<0x8005BEA4u>(&func_8005BEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8005BEA4_41BE = func_8005BEA4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8005BEA4_41BE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8005BEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80869F6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80869F9C;
    }
}

loc_80869F70:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80869F7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80869F9C;
    }
}

loc_80869F80:
{
}

loc_80869F84:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_80869F94;
    }
}

loc_80869F88:
{
    r30 = 2;
    r28 = (r28 + 1);
    goto loc_80869F30;
}

loc_80869F94:
{
    r28 = (r28 + 1);
    goto loc_80869F30;
}

loc_80869F9C:
{
}

loc_80869FA0:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(2))) {
        goto loc_80869F20;
    }
}

loc_80869FA4:
{
    r28 = (r28 + r3);
    goto loc_80869F30;
}

loc_80869FAC:
{
    r0 = (r27 & 65535);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam16((r3 + 29360), static_cast<uint16_t>(r0));
    r11 = (r1 + 176);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80869C4C func_80869C4C preserves=true fpr_mask=0x00000000
