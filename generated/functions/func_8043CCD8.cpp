#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A2A4(CpuContext* ctx);
extern "C" uint64_t func_8004A2A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043CAA4(CpuContext* ctx);
extern "C" uint64_t func_8043CAA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043CBDC(CpuContext* ctx);
extern "C" uint64_t func_8043CBDC_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8043CCD8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8043CCD8u);
    goto loc_8043CCD8;

loc_8043CCD8:
{
    MemoryAlias::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 276), r0);
    r28 = r3;
    r4 = 0x806E0000u;
    r30 = (r4 + -31568);
    r4 = 0x806E0000u;
    r29 = (r4 + -32080);
    r0 = MemoryAlias::FlatRead8((r30 + 4));
}

loc_8043CD10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8043CE50;
    }
}

loc_8043CD14:
{
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryAlias::FlatRead32((r3 + 2396));
    MemoryAlias::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r31 = r3;
    r0 = MemoryAlias::FlatRead8(r3);
    guest_range_0 = MemoryAlias::ResolveRangeHost(r29, 0, 20u, false, true);
    MemoryAlias::WriteResolved8(guest_range_0, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 1));
    MemoryAlias::WriteResolved8(guest_range_0, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 159));
    MemoryAlias::WriteResolved8(guest_range_0, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 2));
    MemoryAlias::WriteResolved8(guest_range_0, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead32((r3 + 20));
    MemoryAlias::WriteResolved32(guest_range_0, 4u, (r29 + 4), r0);
    r0 = MemoryAlias::FlatRead8((r3 + 158));
    MemoryAlias::WriteResolved8(guest_range_0, 8u, (r29 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 14752));
    MemoryAlias::WriteResolved8(guest_range_0, 9u, (r29 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 14753));
    MemoryAlias::WriteResolved8(guest_range_0, 10u, (r29 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 14778));
    MemoryAlias::WriteResolved8(guest_range_0, 11u, (r29 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead32((r3 + 14780));
    MemoryAlias::WriteResolved32(guest_range_0, 16u, (r29 + 16), r0);
    r0 = MemoryAlias::FlatRead8((r3 + 15846));
    MemoryAlias::WriteResolved8(guest_range_0, 12u, (r29 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead8((r3 + 15847));
    MemoryAlias::WriteResolved8(guest_range_0, 13u, (r29 + 13), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = MemoryAlias::FlatRead8((r28 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & -1073741824);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -1);
    r0 = (r0 + r4);
    r4 = (r0 & 255);
    ctx->lr = 0x8043CDA0u;
    if constexpr (KnownRegArgsCpuCall<0x8043CBDCu>(&func_8043CBDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8043CBDC_13CA = func_8043CBDC_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043CBDC_13CA);
        r4 = static_cast<uint32_t>(regargs_result_8043CBDC_13CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043CBDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r29 + 20);
    r4 = (r1 + 8);
    r5 = 236;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x8043CDBCu;
    if constexpr (KnownRegArgsCpuCall<0x8004A2A4u>(&func_8004A2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004A2A4_19CB = func_8004A2A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004A2A4_19CB);
        r4 = static_cast<uint32_t>(regargs_result_8004A2A4_19CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004A2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r28;
    ctx->lr = 0x8043CDC4u;
    if constexpr (KnownRegArgsCpuCall<0x8043CAA4u>(&func_8043CAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8043CAA4_1DA2 = func_8043CAA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8043CAA4_1DA2);
        r4 = static_cast<uint32_t>(regargs_result_8043CAA4_1DA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043CAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    guest_range_2 = MemoryAlias::ResolveRangeHost((r31 + 3), 0, 17u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 0u, (r31 + 3));
    guest_range_3 = MemoryAlias::ResolveRangeHost((r28 + 1482), 0, 17u, false, true);
    MemoryAlias::WriteResolved8(guest_range_3, 0u, (r28 + 1482), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 1u, (r31 + 4));
    MemoryAlias::WriteResolved8(guest_range_3, 1u, (r28 + 1483), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 2u, (r31 + 5));
    MemoryAlias::WriteResolved8(guest_range_3, 2u, (r28 + 1484), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 3u, (r31 + 6));
    MemoryAlias::WriteResolved8(guest_range_3, 3u, (r28 + 1485), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 4u, (r31 + 7));
    MemoryAlias::WriteResolved8(guest_range_3, 4u, (r28 + 1486), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 5u, (r31 + 8));
    MemoryAlias::WriteResolved8(guest_range_3, 5u, (r28 + 1487), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 6u, (r31 + 9));
    MemoryAlias::WriteResolved8(guest_range_3, 6u, (r28 + 1488), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 7u, (r31 + 10));
    MemoryAlias::WriteResolved8(guest_range_3, 7u, (r28 + 1489), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 8u, (r31 + 11));
    MemoryAlias::WriteResolved8(guest_range_3, 8u, (r28 + 1490), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 9u, (r31 + 12));
    MemoryAlias::WriteResolved8(guest_range_3, 9u, (r28 + 1491), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 10u, (r31 + 13));
    MemoryAlias::WriteResolved8(guest_range_3, 10u, (r28 + 1492), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 11u, (r31 + 14));
    MemoryAlias::WriteResolved8(guest_range_3, 11u, (r28 + 1493), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 12u, (r31 + 15));
    MemoryAlias::WriteResolved8(guest_range_3, 12u, (r28 + 1494), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 13u, (r31 + 16));
    MemoryAlias::WriteResolved8(guest_range_3, 13u, (r28 + 1495), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 14u, (r31 + 17));
    MemoryAlias::WriteResolved8(guest_range_3, 14u, (r28 + 1496), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 15u, (r31 + 18));
    MemoryAlias::WriteResolved8(guest_range_3, 15u, (r28 + 1497), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_2, 16u, (r31 + 19));
    MemoryAlias::WriteResolved8(guest_range_3, 16u, (r28 + 1498), static_cast<uint8_t>(r0));
    goto loc_8043CFB4;
}

loc_8043CE50:
{
    r0 = MemoryAlias::FlatRead8((r3 + 8));
}

loc_8043CE58:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8043CE6C;
    }
}

loc_8043CE5C:
{
    r3 = 0;
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl1_0x8004D1B0:
{
}

loc_inl1_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004D1C0;
    }
}

loc_inl1_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl1_cont_8004D1B0;
}

loc_inl1_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl1_0x8004D1C4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl1_cont_8004D1B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
    r31 = r3;
    goto loc_8043CE78;
}

loc_8043CE6C:
{
    r3 = 1;
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl2_0x8004D1B0:
{
}

loc_inl2_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004D1C0;
    }
}

loc_inl2_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl2_cont_8004D1B0;
}

loc_inl2_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl2_0x8004D1C4:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl2_cont_8004D1B0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
    r31 = r3;
}

loc_8043CE78:
{
}

loc_8043CE7C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8043CFB4;
    }
}

loc_8043CE80:
{
    guest_range_6 = MemoryAlias::ResolveRangeHost(r31, 0, 44u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 0u, r31);
    guest_range_1 = MemoryAlias::ResolveRangeHost(r29, 0, 20u, false, true);
    MemoryAlias::WriteResolved8(guest_range_1, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 1u, (r31 + 1));
    MemoryAlias::WriteResolved8(guest_range_1, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 33u, (r31 + 33));
    MemoryAlias::WriteResolved8(guest_range_1, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 2u, (r31 + 2));
    MemoryAlias::WriteResolved8(guest_range_1, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_6, 20u, (r31 + 20));
    MemoryAlias::WriteResolved32(guest_range_1, 4u, (r29 + 4), r0);
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 32u, (r31 + 32));
    MemoryAlias::WriteResolved8(guest_range_1, 8u, (r29 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 34u, (r31 + 34));
    MemoryAlias::WriteResolved8(guest_range_1, 9u, (r29 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 35u, (r31 + 35));
    MemoryAlias::WriteResolved8(guest_range_1, 10u, (r29 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 36u, (r31 + 36));
    MemoryAlias::WriteResolved8(guest_range_1, 11u, (r29 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_6, 40u, (r31 + 40));
    MemoryAlias::WriteResolved32(guest_range_1, 16u, (r29 + 16), r0);
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 37u, (r31 + 37));
    MemoryAlias::WriteResolved8(guest_range_1, 12u, (r29 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 38u, (r31 + 38));
    MemoryAlias::WriteResolved8(guest_range_1, 13u, (r29 + 13), static_cast<uint8_t>(r0));
    r3 = 0x806E0000u;
    r29 = (r3 + -32080);
    r3 = (r29 + 20);
    r5 = MemoryAlias::FlatRead32((r30 + 16));
    r4 = MemoryAlias::FlatRead8((r28 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & -1073741824);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & 1);
    r0 = (r0 - r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -1);
    r0 = (r0 + r4);
    r0 = (r0 * 236);
    r4 = (r5 + r0);
    r5 = 236;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x8043CF24u;
    if constexpr (KnownRegArgsCpuCall<0x8004A2A4u>(&func_8004A2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004A2A4_3FF2 = func_8004A2A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004A2A4_3FF2);
        r4 = static_cast<uint32_t>(regargs_result_8004A2A4_3FF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004A2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r28;
    ctx->lr = 0x8043CF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8043CAA4u>(&func_8043CAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8043CAA4_43C9 = func_8043CAA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8043CAA4_43C9);
        r4 = static_cast<uint32_t>(regargs_result_8043CAA4_43C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043CAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    guest_range_5 = MemoryAlias::ResolveRangeHost((r31 + 3), 0, 17u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 0u, (r31 + 3));
    guest_range_4 = MemoryAlias::ResolveRangeHost((r28 + 1482), 0, 17u, false, true);
    MemoryAlias::WriteResolved8(guest_range_4, 0u, (r28 + 1482), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 1u, (r31 + 4));
    MemoryAlias::WriteResolved8(guest_range_4, 1u, (r28 + 1483), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 2u, (r31 + 5));
    MemoryAlias::WriteResolved8(guest_range_4, 2u, (r28 + 1484), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 3u, (r31 + 6));
    MemoryAlias::WriteResolved8(guest_range_4, 3u, (r28 + 1485), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 4u, (r31 + 7));
    MemoryAlias::WriteResolved8(guest_range_4, 4u, (r28 + 1486), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 5u, (r31 + 8));
    MemoryAlias::WriteResolved8(guest_range_4, 5u, (r28 + 1487), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 6u, (r31 + 9));
    MemoryAlias::WriteResolved8(guest_range_4, 6u, (r28 + 1488), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 7u, (r31 + 10));
    MemoryAlias::WriteResolved8(guest_range_4, 7u, (r28 + 1489), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 8u, (r31 + 11));
    MemoryAlias::WriteResolved8(guest_range_4, 8u, (r28 + 1490), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 9u, (r31 + 12));
    MemoryAlias::WriteResolved8(guest_range_4, 9u, (r28 + 1491), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 10u, (r31 + 13));
    MemoryAlias::WriteResolved8(guest_range_4, 10u, (r28 + 1492), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 11u, (r31 + 14));
    MemoryAlias::WriteResolved8(guest_range_4, 11u, (r28 + 1493), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 12u, (r31 + 15));
    MemoryAlias::WriteResolved8(guest_range_4, 12u, (r28 + 1494), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 13u, (r31 + 16));
    MemoryAlias::WriteResolved8(guest_range_4, 13u, (r28 + 1495), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 14u, (r31 + 17));
    MemoryAlias::WriteResolved8(guest_range_4, 14u, (r28 + 1496), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 15u, (r31 + 18));
    MemoryAlias::WriteResolved8(guest_range_4, 15u, (r28 + 1497), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 16u, (r31 + 19));
    MemoryAlias::WriteResolved8(guest_range_4, 16u, (r28 + 1498), static_cast<uint8_t>(r0));
}

loc_8043CFB4:
{
    r0 = MemoryAlias::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043CCD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043CCD8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043CCD8 func_8043CCD8 preserves=true fpr_mask=0x00000000
