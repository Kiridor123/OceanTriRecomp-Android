#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085B30(CpuContext* ctx);
extern "C" uint32_t func_80085B30_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80085B64(CpuContext* ctx);
extern "C" uint32_t func_80085B64_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80085B8C(CpuContext* ctx);
extern "C" uint32_t func_80085B8C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80085758(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80085758u);
    goto loc_80085758;

loc_80085758:
{
    MemoryHw::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r20 = r3;
    r19 = r4;
    r21 = r5;
    r22 = r6;
    r23 = r7;
    r24 = r8;
}

loc_80085788:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_800857EC;
    }
}

loc_8008578C:
{
}

loc_80085790:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8008579C;
    }
}

loc_80085794:
{
    r0 = 0;
    MemoryHw::FlatWrite32(r5, r0);
}

loc_8008579C:
{
}

loc_800857A0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800857AC;
    }
}

loc_800857A4:
{
    r0 = 0;
    MemoryHw::FlatWrite32(r6, r0);
}

loc_800857AC:
{
}

loc_800857B0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800857BC;
    }
}

loc_800857B4:
{
    r0 = 0;
    MemoryHw::FlatWrite32(r7, r0);
}

loc_800857BC:
{
}

loc_800857C0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800857CC;
    }
}

loc_800857C4:
{
    r0 = 0;
    MemoryHw::FlatWrite32(r8, r0);
}

loc_800857CC:
{
}

loc_800857D0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80085B18;
    }
}

loc_800857D4:
{
    r0 = 255;
    MemoryHw::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8((r9 + 2), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8(r9, static_cast<uint8_t>(r0));
    goto loc_80085B18;
}

loc_800857EC:
{
}

loc_800857F0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80085838;
    }
}

loc_800857F4:
{
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r0 = MemoryHw::FlatRead8((r3 + 9268));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80085808:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80085824;
    }
}

loc_8008580C:
{
    r0 = 255;
    MemoryHw::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8((r9 + 2), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8(r9, static_cast<uint8_t>(r0));
    goto loc_80085838;
}

loc_80085824:
{
    r3 = r9;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r20 + r0);
    r4 = (r4 + 8748);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryHw::FlatRead8(r4);
    MemoryHw::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead8((r4 + 1));
    MemoryHw::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead8((r4 + 2));
    MemoryHw::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead8((r4 + 3));
    MemoryHw::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
}

loc_80085838:
{
    r0 = MemoryHw::FlatRead32((r20 + 16));
}

loc_80085840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r19))) {
        goto loc_80085888;
    }
}

loc_80085844:
{
}

loc_80085848:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80085854;
    }
}

loc_8008584C:
{
    r0 = MemoryHw::FlatRead32((r20 + 20));
    MemoryHw::FlatWrite32(r21, r0);
}

loc_80085854:
{
}

loc_80085858:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80085864;
    }
}

loc_8008585C:
{
    r0 = MemoryHw::FlatRead32((r20 + 24));
    MemoryHw::FlatWrite32(r22, r0);
}

loc_80085864:
{
}

loc_80085868:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80085874;
    }
}

loc_8008586C:
{
    r0 = MemoryHw::FlatRead32((r20 + 28));
    MemoryHw::FlatWrite32(r23, r0);
}

loc_80085874:
{
}

loc_80085878:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80085B18;
    }
}

loc_8008587C:
{
    r0 = MemoryHw::FlatRead32((r20 + 32));
    MemoryHw::FlatWrite32(r24, r0);
    goto loc_80085B18;
}

loc_80085888:
{
    r0 = (r19 * 12);
    r3 = (r20 + r0);
    r27 = (r3 + 9260);
    r0 = 0;
    MemoryHw::FlatWrite32((r20 + 20), r0);
    MemoryHw::FlatWrite32((r20 + 24), r0);
    MemoryHw::FlatWrite32((r20 + 28), r0);
    MemoryHw::FlatWrite32((r20 + 32), r0);
    MemoryHw::FlatWrite32((r20 + 16), r19);
    r26 = 0;
    r29 = 1;
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    r19 = r27;
}

loc_800858C0:
{
    r0 = MemoryHw::FlatRead8(r19);
    MemoryHw::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800858D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80085AC8;
    }
}

loc_800858D4:
{
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_800858E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085AC8;
    }
}

loc_800858EC:
{
    r3 = (r20 + 36);
    r4 = (r20 + 44);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80085B8Cu>(&func_80085B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80085B8C_1F0D = func_80085B8C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80085B8C_1F0D;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80085B8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = r3;
    r4 = (r20 + 44);
}

loc_80085908:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r4))) {
        goto loc_800859E4;
    }
}

loc_8008590C:
{
    r3 = (r20 + 36);
    r5 = (r13 + -31708);
    if constexpr (KnownRegArgsCpuCall<0x80085B64u>(&func_80085B64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80085B64_2284 = func_80085B64_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80085B64_2284;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80085B64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r28 = r3;
    r0 = (r20 + 44);
}

loc_80085924:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80085964;
    }
}

loc_80085928:
{
    r3 = (r20 + 36);
    r4 = r28;
    ctx->lr = 0x80085934u;
    if constexpr (KnownRegArgsCpuCall<0x80085B30u>(&func_80085B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80085B30_2610 = func_80085B30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80085B30_2610;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80085B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r25 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x80085730 (2 guest instruction(s))
    r3 = (r3 + 4);
    // end of inlined leaf 0x80085730
    r4 = r25;
    ctx->lr = 0x80085958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B82C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryHw::FlatRead8((r1 + 8));
    MemoryHw::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_800859F4;
}

loc_80085964:
{
    r28 = 0;
    r25 = (r27 + 8);
}

loc_8008596C:
{
    r3 = r27;
    r4 = (r27 + 8);
    r5 = (r20 + r28);
    r5 = (r5 + 36);
    if constexpr (KnownRegArgsCpuCall<0x80085B8Cu>(&func_80085B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80085B8C_2CCD = func_80085B8C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80085B8C_2CCD;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80085B8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80085984:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r25))) {
        goto loc_80085994;
    }
}

loc_80085988:
{
    r28 = (r28 + 1);
}

loc_80085990:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(8))) {
        goto loc_8008596C;
    }
}

loc_80085994:
{
}

loc_80085998:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(8))) {
        goto loc_800859B0;
    }
}

loc_8008599C:
{
    r3 = (r30 + -240);
    r4 = 1550;
    r5 = (r31 + -84);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800859B0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800859B0:
{
    r25 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r28));
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x80085730 (2 guest instruction(s))
    r3 = (r3 + 4);
    // end of inlined leaf 0x80085730
    r4 = r25;
    ctx->lr = 0x800859D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B82C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r3 = (r20 + r28);
    MemoryHw::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    goto loc_800859F4;
}

loc_800859E4:
{
    r3 = (r20 + 36);
    r4 = r0;
    ctx->lr = 0x800859F0u;
    if constexpr (KnownRegArgsCpuCall<0x80085B30u>(&func_80085B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80085B30_375D = func_80085B30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80085B30_375D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80085B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r25 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_800859F4:
{
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x80077DB0 (6 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r3 = (r0 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80077DB0
}

loc_80085A10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085A70;
    }
}

loc_80085A14:
{
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x8008571C (5 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r0 = (r0 & 16);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x8008571C
}

loc_80085A30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085A40;
    }
}

loc_80085A34:
{
    r0 = MemoryHw::FlatRead32((r20 + 28));
    r0 = (r0 | r25);
    MemoryHw::FlatWrite32((r20 + 28), r0);
}

loc_80085A40:
{
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x80085708 (5 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r0 = (r0 & 32);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x80085708
}

loc_80085A5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085AC8;
    }
}

loc_80085A60:
{
    r0 = MemoryHw::FlatRead32((r20 + 32));
    r0 = (r0 | r25);
    MemoryHw::FlatWrite32((r20 + 32), r0);
    goto loc_80085AC8;
}

loc_80085A70:
{
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x8008571C (5 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r0 = (r0 & 16);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x8008571C
}

loc_80085A8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085A9C;
    }
}

loc_80085A90:
{
    r0 = MemoryHw::FlatRead32((r20 + 20));
    r0 = (r0 | r25);
    MemoryHw::FlatWrite32((r20 + 20), r0);
}

loc_80085A9C:
{
    r0 = MemoryHw::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 68);
    r3 = (r20 + r0);
    r3 = (r3 + 44);
    // inline leaf 0x80085708 (5 guest instruction(s))
    r0 = MemoryHw::FlatRead32(r3);
    r0 = (r0 & 32);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 134217727);
    // end of inlined leaf 0x80085708
}

loc_80085AB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80085AC8;
    }
}

loc_80085ABC:
{
    r0 = MemoryHw::FlatRead32((r20 + 24));
    r0 = (r0 | r25);
    MemoryHw::FlatWrite32((r20 + 24), r0);
}

loc_80085AC8:
{
    r26 = (r26 + 1);
    r19 = (r19 + 1);
}

loc_80085AD4:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(8))) {
        goto loc_800858C0;
    }
}

loc_80085AD8:
{
}

loc_80085ADC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80085AE8;
    }
}

loc_80085AE0:
{
    r0 = MemoryHw::FlatRead32((r20 + 20));
    MemoryHw::FlatWrite32(r21, r0);
}

loc_80085AE8:
{
}

loc_80085AEC:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80085AF8;
    }
}

loc_80085AF0:
{
    r0 = MemoryHw::FlatRead32((r20 + 24));
    MemoryHw::FlatWrite32(r22, r0);
}

loc_80085AF8:
{
}

loc_80085AFC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80085B08;
    }
}

loc_80085B00:
{
    r0 = MemoryHw::FlatRead32((r20 + 28));
    MemoryHw::FlatWrite32(r23, r0);
}

loc_80085B08:
{
}

loc_80085B0C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80085B18;
    }
}

loc_80085B10:
{
    r0 = MemoryHw::FlatRead32((r20 + 32));
    MemoryHw::FlatWrite32(r24, r0);
}

loc_80085B18:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryHw::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80085758 func_80085758 preserves=true fpr_mask=0x00000000
