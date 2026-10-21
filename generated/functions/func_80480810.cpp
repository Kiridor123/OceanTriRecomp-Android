#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047AC10(CpuContext* ctx);
extern "C" uint64_t func_8047AC10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80480CB0(CpuContext* ctx);
extern "C" uint64_t func_80480CB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80480810_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80480810u);
    goto loc_80480810;

loc_80480810:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0x80610000u;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = (r31 + 16000);
    r3 = (r1 + 8);
    r30 = 0;
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80480850:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804809A8;
    }
}

loc_80480854:
{
    r3 = 0x80740000u;
    r3 = (r3 + -18168);
    r0 = MemoryInline::FlatRead32((r3 + 548));
}

loc_80480864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80480B4C;
    }
}

loc_80480868:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5896));
}

loc_8048086C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804808FC;
    }
}

loc_80480870:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8048088C;
    }
}

loc_80480874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5889));
}

loc_80480878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80480950;
    }
}

loc_8048087C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80480968;
    }
}

loc_80480880:
{
}

loc_80480884:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(5888))) {
        goto loc_80480898;
    }
}

loc_80480888:
{
    goto loc_80480968;
}

loc_8048088C:
{
}

loc_80480890:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(5898))) {
        goto loc_804808BC;
    }
}

loc_80480894:
{
    goto loc_80480968;
}

loc_80480898:
{
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    r30 = 2;
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = 9;
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_804808BC:
{
    r30 = MemoryInline::FlatRead16((r29 + 16));
}

loc_804808C4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(11))) {
        goto loc_804808E8;
    }
}

loc_804808C8:
{
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = 9;
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_804808E8:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_804808FC:
{
    r30 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80480904:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(7))) {
        goto loc_80480918;
    }
}

loc_80480908:
{
}

loc_8048090C:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(5))) {
        goto loc_80480918;
    }
}

loc_80480910:
{
}

loc_80480914:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(9))) {
        goto loc_8048092C;
    }
}

loc_80480918:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_8048092C:
{
}

loc_80480930:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(10))) {
        goto loc_80480984;
    }
}

loc_80480934:
{
}

loc_80480938:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(1))) {
        goto loc_80480984;
    }
}

loc_8048093C:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_80480950:
{
    r0 = 13;
    r30 = 3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_80480984;
}

loc_80480968:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
}

loc_80480970:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80480984;
    }
}

loc_80480974:
{
    r5 = MemoryInline::FlatRead16((r29 + 6));
    r4 = (r31 + 0);
    r3 = 1280;
    ctx->lr = 0x80480984u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_2521 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_2521);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_2521 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80480984:
{
    r3 = (r30 & 65535);
}

loc_80480988:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80480B4C;
    }
}

loc_8048098C:
{
    r5 = 0x80740000u;
    r4 = (r1 + 8);
    r5 = (r5 + -18168);
    r12 = MemoryInline::FlatRead32((r5 + 548));
    ctr = r12;
    ctx->lr = 0x804809A4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80480B4C;
}

loc_804809A8:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
    r30 = MemoryInline::FlatRead8((r27 + 28));
}

loc_804809B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80480A24;
    }
}

loc_804809B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_804809BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804809F0;
    }
}

loc_804809C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804809D4;
    }
}

loc_804809C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_804809C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804809E0;
    }
}

loc_804809CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804809E8;
    }
}

loc_804809D0:
{
    goto loc_80480A00;
}

loc_804809D4:
{
}

loc_804809D8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_80480A00;
    }
}

loc_804809DC:
{
    goto loc_804809F8;
}

loc_804809E0:
{
    r26 = (r31 + 28);
    goto loc_80480A04;
}

loc_804809E8:
{
    r26 = (r31 + 44);
    goto loc_80480A04;
}

loc_804809F0:
{
    r26 = (r31 + 60);
    goto loc_80480A04;
}

loc_804809F8:
{
    r26 = (r31 + 80);
    goto loc_80480A04;
}

loc_80480A00:
{
    r26 = (r31 + 96);
}

loc_80480A04:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80480CB0u>(&func_80480CB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80480CB0_37DA = func_80480CB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80480CB0_37DA);
        r4 = static_cast<uint32_t>(regargs_result_80480CB0_37DA >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80480CB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r7 = r3;
    r5 = r30;
    r6 = r26;
    r4 = (r31 + 120);
    r3 = 1283;
    ctx->lr = 0x80480A24u;
    if constexpr (KnownRegArgsCpuCall<0x8047AC10u>(&func_8047AC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047AC10_3C07 = func_8047AC10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC10_3C07);
        r4 = static_cast<uint32_t>(regargs_result_8047AC10_3C07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047AC10u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80480A24:
{
    r4 = MemoryInline::FlatRead8((r27 + 28));
    r3 = 0x80570000u;
    r3 = (r3 + 16376);
    r28 = (r28 & 255);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r27 + 28), static_cast<uint8_t>(r0));
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_80480A58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80480A7C;
    }
}

loc_80480A5C:
{
    r4 = 0x80570000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = (r4 + 16256);
    r3 = r27;
    r4_addr_1 = (r4 + r0);
    r12 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x80480A7Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80480A7C:
{
    r3 = MemoryInline::FlatRead8((r27 + 28));
}

loc_80480A84:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r3))) {
        goto loc_80480B4C;
    }
}

loc_80480A88:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
}

loc_80480A90:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(5))) {
        goto loc_80480B4C;
    }
}

loc_80480A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80480A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80480ACC;
    }
}

loc_80480A9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80480AB0;
    }
}

loc_80480AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80480AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80480ABC;
    }
}

loc_80480AA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80480AC4;
    }
}

loc_80480AAC:
{
    goto loc_80480ADC;
}

loc_80480AB0:
{
}

loc_80480AB4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_80480ADC;
    }
}

loc_80480AB8:
{
    goto loc_80480AD4;
}

loc_80480ABC:
{
    r26 = (r31 + 28);
    goto loc_80480AE0;
}

loc_80480AC4:
{
    r26 = (r31 + 44);
    goto loc_80480AE0;
}

loc_80480ACC:
{
    r26 = (r31 + 60);
    goto loc_80480AE0;
}

loc_80480AD4:
{
    r26 = (r31 + 80);
    goto loc_80480AE0;
}

loc_80480ADC:
{
    r26 = (r31 + 96);
}

loc_80480AE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80480AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80480B18;
    }
}

loc_80480AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80480AFC;
    }
}

loc_80480AEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80480AF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80480B08;
    }
}

loc_80480AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80480B10;
    }
}

loc_80480AF8:
{
    goto loc_80480B28;
}

loc_80480AFC:
{
}

loc_80480B00:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_80480B28;
    }
}

loc_80480B04:
{
    goto loc_80480B20;
}

loc_80480B08:
{
    r27 = (r31 + 28);
    goto loc_80480B2C;
}

loc_80480B10:
{
    r27 = (r31 + 44);
    goto loc_80480B2C;
}

loc_80480B18:
{
    r27 = (r31 + 60);
    goto loc_80480B2C;
}

loc_80480B20:
{
    r27 = (r31 + 80);
    goto loc_80480B2C;
}

loc_80480B28:
{
    r27 = (r31 + 96);
}

loc_80480B2C:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80480CB0u>(&func_80480CB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80480CB0_565F = func_80480CB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80480CB0_565F);
        r4 = static_cast<uint32_t>(regargs_result_80480CB0_565F >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80480CB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r7 = r3;
    r5 = r26;
    r6 = r27;
    r4 = (r31 + 172);
    r3 = 1284;
    ctx->lr = 0x80480B4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047AC10u>(&func_8047AC10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047AC10_5A8C = func_8047AC10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC10_5A8C);
        r4 = static_cast<uint32_t>(regargs_result_8047AC10_5A8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047AC10u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80480B4C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80480810(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80480810_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80480810 func_80480810 preserves=true fpr_mask=0x00000000
