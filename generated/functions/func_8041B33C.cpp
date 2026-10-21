#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041AA3C(CpuContext* ctx);
extern "C" uint64_t func_8041AA3C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8041B33C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    MKW_GUEST_ENTER(0x8041B33Cu);
    goto loc_8041B33C;

loc_8041B33C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r5 = 65536;
    r0 = (r5 + -32762);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8041B360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8041B454;
    }
}

loc_8041B364:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8041B39C;
    }
}

loc_8041B368:
{
    r0 = (r5 + -32766);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8041B370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8041B41C;
    }
}

loc_8041B374:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8041B388;
    }
}

loc_8041B378:
{
    r0 = (r5 + -32768);
}

loc_8041B380:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8041B3D8;
    }
}

loc_8041B384:
{
    goto loc_8041B610;
}

loc_8041B388:
{
    r0 = (r5 + -32764);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8041B390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8041B42C;
    }
}

loc_8041B394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8041B444;
    }
}

loc_8041B398:
{
    goto loc_8041B610;
}

loc_8041B39C:
{
    r0 = (r5 + -32639);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8041B3A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8041B558;
    }
}

loc_8041B3A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8041B3C8;
    }
}

loc_8041B3AC:
{
    r0 = (r5 + -32640);
}

loc_8041B3B4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8041B464;
    }
}

loc_8041B3B8:
{
    r0 = (r5 + -32760);
}

loc_8041B3C0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8041B610;
    }
}

loc_8041B3C4:
{
    goto loc_8041B3D8;
}

loc_8041B3C8:
{
    r0 = (r5 + -32637);
}

loc_8041B3D0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8041B610;
    }
}

loc_8041B3D4:
{
    goto loc_8041B604;
}

loc_8041B3D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8041B3E0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8041B40C;
    }
}

loc_8041B3E4:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 56);
    // inline leaf 0x803FD818 (10 guest instruction(s))
}

loc_inl2_0x803FD818:
{
}

loc_inl2_0x803FD81C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x803FD838;
    }
}

loc_inl2_0x803FD820:
{
    r0 = MemoryInline::FlatRead32((r3 + 25932));
    MemoryInline::FlatWriteRam32(r4, r0);
    r0 = MemoryInline::FlatRead32((r3 + 25936));
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 25940));
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_inl2_0x803FD838:
{
    r3 = MemoryInline::FlatRead32((r3 + 25932));
}

loc_inl2_cont_803FD818:
{
    // end of inlined leaf 0x803FD818
    r3 = r31;
    r4 = 24577;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r1 + 56));
    r7 = 1;
    r8 = (r1 + 56);
    ctx->lr = 0x8041B40Cu;
    if constexpr (KnownRegArgsCpuCall<0x8041AA3Cu>(&func_8041AA3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8041AA3C_1564 = func_8041AA3C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8041AA3C_1564);
        r4 = static_cast<uint32_t>(regargs_result_8041AA3C_1564 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8041AA3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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

loc_8041B40C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_8041B610;
}

loc_8041B41C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8041B610;
}

loc_8041B42C:
{
}

loc_8041B430:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8041B610;
    }
}

loc_8041B434:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8041B610;
}

loc_8041B444:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8041B610;
}

loc_8041B454:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8041B610;
}

loc_8041B464:
{
    r27 = MemoryInline::FlatRead32((r8 + 16));
    r4 = MemoryInline::FlatRead8(r8);
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8041B474:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8041B4B4;
    }
}

loc_8041B478:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x8041B4B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    goto loc_8041B610;
}

loc_8041B4B4:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead8((r8 + 12));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32736), r0);
}

loc_8041B4CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8041B4D8;
    }
}

loc_8041B4D0:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r4 + -32736), r0);
}

loc_8041B4D8:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r4 = (r3 + 65536);
    MemoryInline::FlatWrite32((r4 + -32412), r0);
}

loc_8041B4E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_8041B4F4;
    }
}

loc_8041B4EC:
{
    r0 = 32767;
    MemoryInline::FlatWrite32((r4 + -32412), r0);
}

loc_8041B4F4:
{
    r26 = 0;
    r28 = (r3 + 65536);
    r28 = (r28 + -32732);
    r29 = 0;
    r30 = (r3 + 65536);
    goto loc_8041B53C;
}

loc_8041B50C:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r3 = (r28 + 8);
    r4 = (r27 + 8);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r28 + 39), static_cast<uint8_t>(r29));
    r27 = (r27 + 40);
    r28 = (r28 + 40);
    r26 = (r26 + 1);
}

loc_8041B53C:
{
    r0 = MemoryInline::FlatRead32((r30 + -32736));
}

loc_8041B544:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8041B50C;
    }
}

loc_8041B548:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_8041B610;
}

loc_8041B558:
{
    r4 = MemoryInline::FlatRead32(r8);
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8041B564:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8041B57C;
    }
}

loc_8041B568:
{
    r4 = (r3 + 65536);
    r5 = MemoryInline::FlatRead32((r4 + -32408));
    r0 = MemoryInline::FlatRead32((r8 + 4));
}

loc_8041B578:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_8041B5B8;
    }
}

loc_8041B57C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 656));
    ctr = r12;
    ctx->lr = 0x8041B5B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    goto loc_8041B610;
}

loc_8041B5B8:
{
    r0 = MemoryInline::FlatRead32((r4 + -32412));
    r0 = (r0 - r5);
    r28 = MemoryInline::FlatRead32((r8 + 8));
}

loc_8041B5C8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r28))) {
        goto loc_8041B5D0;
    }
}

loc_8041B5CC:
{
    r28 = r0;
}

loc_8041B5D0:
{
    r3 = (r3 + r5);
    r3 = (r3 + 32);
    r4 = MemoryInline::FlatRead32((r8 + 12));
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32408));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + -32408), r0);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_8041B610;
}

loc_8041B604:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8041B610:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_8041B33C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041B33C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041B33C func_8041B33C preserves=true fpr_mask=0x00000000
