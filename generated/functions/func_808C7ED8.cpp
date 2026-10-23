#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_808C7ED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_808C7ED8;

loc_808C7ED8:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r3 = 0x808E0000u;
    r29 = (r3 + 180);
    goto loc_808C7F08;
}

loc_808C7EFC:
{
    ctr = r12;
    ctx->lr = 0x808C7F04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r29 = (r29 + 4);
}

loc_808C7F08:
{
    r12 = MemoryInline::FlatRead32(r29);
}

loc_808C7F10:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_808C7EFC;
    }
}

loc_808C7F14:
{
    // inline leaf 0x801FC944 (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = (r3 + 192);
    // end of inlined leaf 0x801FC944
    r4 = 0x80920000u;
    r0 = (r4 + 8620);
    MemoryInline::FlatWriteRam32(r3, r0);
    // inline leaf 0x802E04EC (2 guest instruction(s))
    r3 = (r13 + -17052);
    // end of inlined leaf 0x802E04EC
    r4 = 0x808F0000u;
    r0 = (r4 + -25800);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = 0x80920000u;
    r4 = (r3 + 9320);
    r3 = 0x806C0000u;
    r5 = (r3 + 6208);
    r3 = 0x80920000u;
    r6 = (r3 + 9384);
    r3 = 0x806C0000u;
    r3 = (r3 + 6272);
    r0 = 2;
    ctr = r0;
}

loc_808C7F5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r6);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r6 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    r4 = (r4 + 32);
    r5 = (r5 + 32);
    r6 = (r6 + 32);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7F5C;
    }
}

loc_808C7FF0:
{
    r3 = 0x80920000u;
    r0 = (r3 + 13728);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28840), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r31 = MemoryInline::FlatRead32((r3 + 2636));
    r0 = MemoryInline::FlatRead8((r3 + 2003));
}

loc_808C8014:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_808C802C;
    }
}

loc_808C8018:
{
    r3 = (r1 + 8);
    r4 = 0x80920000u;
    r4 = (r4 + 10184);
    ctx->lr = 0x808C8028u;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800413D0_1A15 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_1A15);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_1A15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    goto loc_808C803C;
}

loc_808C802C:
{
    r3 = (r1 + 8);
    r4 = 0x80920000u;
    r4 = (r4 + 10200);
    ctx->lr = 0x808C803Cu;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800413D0_1E7B = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_1E7B);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_1E7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_808C803C:
{
    r3 = (r1 + 8);
    r4 = r31;
    r5 = 327680;
    r5 = (r5 + 18944);
    ctx->lr = 0x808C8050u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_22F0 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_22F0);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_22F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r29 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r30 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r31 = (r0 + r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C785Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C7A48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C7B0Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808C7DCCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 0x80930000u;
    r0 = (r3 + -7836);
    r4 = 0x806B0000u;
    MemoryInline::FlatWriteRam32((r4 + -13408), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -20720);
    r4 = (r4 + -13408);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r4 + 4), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -20528);
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r4 + 8), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -19872);
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r4 + 12), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -18508);
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r4 + 16), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -18256);
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r4 + 20), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14432);
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r4 + 24), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -10736);
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r4 + 28), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -8440);
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r4 + 32), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -7848);
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r4 + 36), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -18936);
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r4 + 40), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -12876);
    MemoryInline::WriteResolved32(guest_range_4, 40u, (r4 + 44), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -12872);
    MemoryInline::WriteResolved32(guest_range_4, 44u, (r4 + 48), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -12868);
    MemoryInline::WriteResolved32(guest_range_4, 48u, (r4 + 52), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -5232);
    r4 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r4 + 28536), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -2664);
    r3 = (r4 + 28536);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14972);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28544), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14952);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28548), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -2080);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28552), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14932);
    r4 = 0x806B0000u;
    MemoryInline::FlatWriteRam32((r4 + -13352), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14872);
    r4 = (r4 + -13352);
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r4 + 4), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14812);
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r4 + 8), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -10144);
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r4 + 12), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -14360);
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r4 + 16), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -13136);
    MemoryInline::WriteResolved32(guest_range_5, 16u, (r4 + 20), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -1616);
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r4 + 24), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -1512);
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r4 + 28), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -1320);
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r4 + 32), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -1232);
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r4 + 36), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -1144);
    MemoryInline::WriteResolved32(guest_range_5, 36u, (r4 + 40), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -952);
    MemoryInline::WriteResolved32(guest_range_5, 40u, (r4 + 44), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -18924);
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r4 + 48), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -19616);
    MemoryInline::WriteResolved32(guest_range_5, 48u, (r4 + 52), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -576);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28560), r0);
    r3 = 0x80930000u;
    r0 = (r3 + -540);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28564), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 1128);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28568), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 1212);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28572), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 1296);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28576), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 1380);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28580), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 1864);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28584), r0);
    r3 = 0x80970000u;
    r0 = (r3 + -17648);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28588), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 10104);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28592), r0);
    r3 = 0x80930000u;
    r0 = (r3 + 9840);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28596), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17616));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28600), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17620));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28604), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17624));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28608), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17628));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28612), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17612));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28616), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17608));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28620), r0);
    r3 = 0x80970000u;
    r0 = MemoryInline::FlatRead32((r3 + -17604));
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28624), r0);
    r3 = 0x80920000u;
    r0 = (r3 + 9448);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28936), r0);
    r3 = 0x808E0000u;
    r0 = (r3 + -1092);
    r4 = 0x806B0000u;
    MemoryInline::FlatWriteRam32((r4 + -13424), r0);
    r3 = 0x808D0000u;
    r0 = (r3 + -30932);
    r4 = (r4 + -13424);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = 0x808D0000u;
    r0 = (r3 + -31260);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808C7ED8 func_808C7ED8 preserves=true fpr_mask=0x00000000
