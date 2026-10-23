#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804469B8(CpuContext* ctx);
extern "C" uint32_t func_804469B8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_803AD264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803AD264;

loc_803AD264:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r31 = 393216;
    r3 = (r31 + 17408);
    ctx->lr = 0x803AD280u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_A21 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_A21);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_A21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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
    MemoryInline::FlatWrite32((r13 + -16896), r3);
    r4 = (r3 + 416);
    MemoryInline::FlatWrite32((r13 + -16892), r4);
    r0 = (r4 + 224);
    MemoryInline::FlatWrite32((r13 + -16900), r0);
    r4 = 0;
    r5 = (r31 + 17408);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x803AD2A4u;
    if constexpr (KnownRegArgsCpuCall<0x804469B8u>(&func_804469B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_804469B8_1376 = func_804469B8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804469B8_1376;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x804469B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803AD2A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AD2DC;
    }
}

loc_803AD2AC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 2008));
}

loc_803AD2BC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_803AD2D0;
    }
}

loc_803AD2C0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -18552);
    r31 = (r3 + 8);
    goto loc_803AD310;
}

loc_803AD2D0:
{
    r3 = 0x80590000u;
    r31 = (r3 + -18552);
    goto loc_803AD310;
}

loc_803AD2DC:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_803AD2E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_803AD2F8;
    }
}

loc_803AD2EC:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803AD2F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AD308;
    }
}

loc_803AD2F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -18552);
    r31 = (r3 + 8);
    goto loc_803AD310;
}

loc_803AD308:
{
    r3 = 0x80590000u;
    r31 = (r3 + -18552);
}

loc_803AD310:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x803AD31Cu;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800413D0_1DA4 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_1DA4);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_1DA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16900));
    r5 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x803AD32Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_23A7 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_23A7);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_23A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r13 + -16900));
    r4 = MemoryInline::FlatRead32((r13 + -16896));
    r5 = MemoryInline::FlatRead32((r13 + -16892));
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 8);
    MemoryInline::FlatWrite32((r13 + -16860), r7);
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_803AD34C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803AD4C4;
    }
}

loc_803AD350:
{
    r9 = (r7 + -8);
}

loc_803AD358:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_803AD488;
    }
}

loc_803AD35C:
{
    r10 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803AD378;
    }
}

loc_803AD364:
{
    r8 = 0x80000000u;
    r0 = (r8 + -2);
}

loc_803AD370:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_803AD378;
    }
}

loc_803AD374:
{
    r10 = 1;
}

loc_803AD378:
{
}

loc_803AD37C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_803AD488;
    }
}

loc_803AD380:
{
    r0 = (r9 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_803AD390:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(0))) {
        goto loc_803AD488;
    }
}

loc_803AD394:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r13 + -16900), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r0 = (r0 & 65535);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r5, static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r5 + 2), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r5 + 4), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r5 + 6), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r5 + 8), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r5 + 10), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r5 + 12), static_cast<uint16_t>(r0));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r13 + -16900));
    r0 = (r8 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r5 + 14), static_cast<uint16_t>(r0));
    r4 = (r4 + 32);
    r5 = (r5 + 16);
    r3 = (r3 + 64);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AD394;
    }
}

loc_803AD488:
{
    r0 = (r7 - r6);
    ctr = r0;
}

loc_803AD494:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_803AD4C4;
    }
}

loc_803AD498:
{
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r13 + -16900));
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = (r4 + 4);
    r5 = (r5 + 2);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AD498;
    }
}

loc_803AD4C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -16896));
    MemoryInline::FlatWrite32((r13 + -16868), r0);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AD264 func_803AD264 preserves=true fpr_mask=0x00000000
