#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABF0(CpuContext* ctx);
extern "C" uint64_t func_8047ABF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049F324(CpuContext* ctx);
extern "C" uint64_t func_8049F324_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8049E754_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8049E754u);
    goto loc_8049E754;

loc_8049E754:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80620000u;
    r31 = (r31 + -31400);
    r30 = r4;
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r8 = MemoryInline::FlatRead16((r5 + 2));
    r6 = (r5 + r0);
    r7 = (r6 + 8);
}

loc_8049E790:
{
    r0 = r7;
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(3))) {
        goto loc_8049E7C4;
    }
}

loc_8049E798:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049E7A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049E7BC;
    }
}

loc_8049E7AC:
{
    r5 = r8;
    r4 = (r31 + 0);
    r3 = 589824;
    ctx->lr = 0x8049E7BCu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABD0_DB3 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_DB3);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_DB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
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
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049E7BC:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049E7C4:
{
    r8 = MemoryInline::FlatRead8(r7);
    r6 = (r8 & 2);
    r9 = (r8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8049E7D0:
{
    r6 = (static_cast<int32_t>(r6) >> 1);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    r8 = (static_cast<int32_t>(r6) >> 2);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8049E804;
    }
}

loc_8049E7EC:
{
    r6 = MemoryInline::FlatRead8(r7);
    r8 = (r8 & 255);
    r7 = (r7 + 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r6 = (r6_rot_1 & -64);
    r6 = (r8 + r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
}

loc_8049E804:
{
    r6 = MemoryInline::FlatRead8(r7);
    r6 = (r6 & -17);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r7);
    r6 = (r6 & 16);
    r6 = (static_cast<int32_t>(r6) >> 4);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r10 = (r6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_8049E82C:
{
    r8 = (static_cast<int32_t>(r6) >> 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8049E848;
    }
}

loc_8049E834:
{
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r6 = (r6_rot_3 & -128);
    r6 = (r8 + r6);
    r8 = (r6 & 65535);
}

loc_8049E848:
{
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r10));
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r9));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r11 = (r11_rot_1 & 134217727);
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r10 = (r10_rot_1 & 134217727);
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r11 = (r10 + r11);
    r10 = (r11 + 4);
    r6 = (r11 + r6);
    r9 = (r9 - r10);
    r6 = (r6 + 3);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead8((r3 + 114));
}

loc_8049E884:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(2))) {
        goto loc_8049E8D4;
    }
}

loc_8049E888:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8049E890:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(239))) {
        goto loc_8049E8D4;
    }
}

loc_8049E894:
{
    r6 = MemoryInline::FlatRead8(r4);
}

loc_8049E89C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049E8D4;
    }
}

loc_8049E8A0:
{
    r6 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8049E8A8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_8049E8D4;
    }
}

loc_8049E8AC:
{
    r6 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r9 = (r9 + -1);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    goto loc_8049E8DC;
}

loc_8049E8D4:
{
    r6 = 0;
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
}

loc_8049E8DC:
{
    r5 = MemoryInline::FlatRead16((r5 + 2));
    r6 = (r8 & 65535);
}

loc_8049E8E8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r6))) {
        goto loc_8049E914;
    }
}

loc_8049E8EC:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049E8FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049E90C;
    }
}

loc_8049E900:
{
    r4 = (r31 + 16);
    r3 = 589824;
    ctx->lr = 0x8049E90Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABF0u>(&func_8047ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABF0_2697 = func_8047ABF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABF0_2697);
        r4 = static_cast<uint32_t>(regargs_result_8047ABF0_2697 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABF0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049E90C:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049E914:
{
    r9 = MemoryInline::FlatRead8((r4 + 1));
    r7_addr_1 = (r7 + r6);
    r5 = MemoryInline::FlatRead8(r7_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(67));
}

loc_8049E920:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8049EB2C;
    }
}

loc_8049E924:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8049E940;
    }
}

loc_8049E928:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(47));
}

loc_8049E92C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8049E958;
    }
}

loc_8049E930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8049ECA8;
    }
}

loc_8049E934:
{
}

loc_8049E938:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(15))) {
        goto loc_8049EA98;
    }
}

loc_8049E93C:
{
    goto loc_8049ECA8;
}

loc_8049E940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(239));
}

loc_8049E944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8049EBCC;
    }
}

loc_8049E948:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8049ECA8;
    }
}

loc_8049E94C:
{
}

loc_8049E950:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(99))) {
        goto loc_8049E9F8;
    }
}

loc_8049E954:
{
    goto loc_8049ECA8;
}

loc_8049E958:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_8049E960:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049E970;
    }
}

loc_8049E964:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049E96C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049E9C8;
    }
}

loc_8049E970:
{
}

loc_8049E974:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049E984;
    }
}

loc_8049E978:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049E980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049E9C8;
    }
}

loc_8049E984:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8049E98C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049E9C8;
    }
}

loc_8049E990:
{
    r3 = (r8 & 65535);
}

loc_8049E994:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049E9C8;
    }
}

loc_8049E998:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8049E9A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049E9B4;
    }
}

loc_8049E9A4:
{
}

loc_8049E9A8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8049E9C8;
    }
}

loc_8049E9AC:
{
}

loc_8049E9B0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61))) {
        goto loc_8049E9C8;
    }
}

loc_8049E9B4:
{
    r4 = r0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8049F324u>(&func_8049F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8049F324_3A07 = func_8049F324_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049F324_3A07);
        r4 = static_cast<uint32_t>(regargs_result_8049F324_3A07 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049F324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8049E9C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049E9F0;
    }
}

loc_8049E9C8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049E9D8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049E9E8;
    }
}

loc_8049E9DC:
{
    r4 = (r31 + 36);
    r3 = 589824;
    ctx->lr = 0x8049E9E8u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_3FE8 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_3FE8);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_3FE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049E9E8:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049E9F0:
{
    r3 = 0;
    goto loc_8049ECAC;
}

loc_8049E9F8:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_8049EA00:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049EA10;
    }
}

loc_8049EA04:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EA0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EA68;
    }
}

loc_8049EA10:
{
}

loc_8049EA14:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049EA24;
    }
}

loc_8049EA18:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EA20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EA68;
    }
}

loc_8049EA24:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8049EA2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EA68;
    }
}

loc_8049EA30:
{
    r3 = (r8 & 65535);
}

loc_8049EA34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EA68;
    }
}

loc_8049EA38:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8049EA40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EA54;
    }
}

loc_8049EA44:
{
}

loc_8049EA48:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8049EA68;
    }
}

loc_8049EA4C:
{
}

loc_8049EA50:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61))) {
        goto loc_8049EA68;
    }
}

loc_8049EA54:
{
    r4 = r0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8049F324u>(&func_8049F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8049F324_4E6B = func_8049F324_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049F324_4E6B);
        r4 = static_cast<uint32_t>(regargs_result_8049F324_4E6B >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049F324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8049EA64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049EA90;
    }
}

loc_8049EA68:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EA78:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EA88;
    }
}

loc_8049EA7C:
{
    r3 = 589824;
    r4 = (r13 + -20576);
    ctx->lr = 0x8049EA88u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_5450 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_5450);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_5450 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EA88:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049EA90:
{
    r3 = 1;
    goto loc_8049ECAC;
}

loc_8049EA98:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_8049EAA0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049EAB0;
    }
}

loc_8049EAA4:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EAAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EAFC;
    }
}

loc_8049EAB0:
{
}

loc_8049EAB4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049EAC4;
    }
}

loc_8049EAB8:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EAC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EAFC;
    }
}

loc_8049EAC4:
{
    r3 = (r8 & 65535);
}

loc_8049EAC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EAFC;
    }
}

loc_8049EACC:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8049EAD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EAE8;
    }
}

loc_8049EAD8:
{
}

loc_8049EADC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8049EAFC;
    }
}

loc_8049EAE0:
{
}

loc_8049EAE4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61))) {
        goto loc_8049EAFC;
    }
}

loc_8049EAE8:
{
    r4 = r0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8049F324u>(&func_8049F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8049F324_621F = func_8049F324_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049F324_621F);
        r4 = static_cast<uint32_t>(regargs_result_8049F324_621F >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049F324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8049EAF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049EB24;
    }
}

loc_8049EAFC:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EB0C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EB1C;
    }
}

loc_8049EB10:
{
    r3 = 589824;
    r4 = (r13 + -20568);
    ctx->lr = 0x8049EB1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_6804 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_6804);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_6804 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EB1C:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049EB24:
{
    r3 = 2;
    goto loc_8049ECAC;
}

loc_8049EB2C:
{
    r6 = MemoryInline::FlatRead8((r3 + 109));
}

loc_8049EB34:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049EB44;
    }
}

loc_8049EB38:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EB40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB44:
{
}

loc_8049EB48:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049EB58;
    }
}

loc_8049EB4C:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8049EB54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB58:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8049EB60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB64:
{
    r3 = (r8 & 65535);
}

loc_8049EB68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB6C:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8049EB74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EB88;
    }
}

loc_8049EB78:
{
}

loc_8049EB7C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB80:
{
}

loc_8049EB84:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61))) {
        goto loc_8049EB9C;
    }
}

loc_8049EB88:
{
    r4 = r0;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8049F324u>(&func_8049F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8049F324_7687 = func_8049F324_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049F324_7687);
        r4 = static_cast<uint32_t>(regargs_result_8049F324_7687 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049F324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8049EB98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049EBC4;
    }
}

loc_8049EB9C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EBAC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EBBC;
    }
}

loc_8049EBB0:
{
    r4 = (r31 + 48);
    r3 = 589824;
    ctx->lr = 0x8049EBBCu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_7C68 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_7C68);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_7C68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EBBC:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049EBC4:
{
    r3 = 3;
    goto loc_8049ECAC;
}

loc_8049EBCC:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_8049EBD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EC10;
    }
}

loc_8049EBD8:
{
}

loc_8049EBDC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8049EBE8;
    }
}

loc_8049EBE0:
{
}

loc_8049EBE4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(61))) {
        goto loc_8049EC10;
    }
}

loc_8049EBE8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EBF8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EC08;
    }
}

loc_8049EBFC:
{
    r4 = (r31 + 60);
    r3 = 589824;
    ctx->lr = 0x8049EC08u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_886C = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_886C);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_886C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EC08:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049EC10:
{
    r4 = r0;
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8049F324u>(&func_8049F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8049F324_90FF = func_8049F324_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049F324_90FF);
        r4 = static_cast<uint32_t>(regargs_result_8049F324_90FF >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049F324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8049EC20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049EC4C;
    }
}

loc_8049EC24:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EC34:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EC44;
    }
}

loc_8049EC38:
{
    r4 = (r31 + 84);
    r3 = 589824;
    ctx->lr = 0x8049EC44u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_96E0 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_96E0);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_96E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EC44:
{
    r3 = 50;
    goto loc_8049ECAC;
}

loc_8049EC4C:
{
    r3 = MemoryInline::FlatRead8((r29 + 109));
}

loc_8049EC54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049EC64;
    }
}

loc_8049EC58:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_8049EC60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049EC78;
    }
}

loc_8049EC64:
{
}

loc_8049EC68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049ECA0;
    }
}

loc_8049EC6C:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_8049EC74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049ECA0;
    }
}

loc_8049EC78:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049EC88:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049EC98;
    }
}

loc_8049EC8C:
{
    r4 = (r31 + 100);
    r3 = 589824;
    ctx->lr = 0x8049EC98u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_A396 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_A396);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_A396 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8049EC98:
{
    r3 = 4;
    goto loc_8049ECAC;
}

loc_8049ECA0:
{
    r3 = 4;
    goto loc_8049ECAC;
}

loc_8049ECA8:
{
    r3 = 50;
}

loc_8049ECAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049E754(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049E754_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049E754 func_8049E754 preserves=true fpr_mask=0x00000000
