#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029628C(CpuContext* ctx);
extern "C" uint32_t func_8029628C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802963CC(CpuContext* ctx);
extern "C" uint32_t func_802963CC_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802968D4(CpuContext* ctx);
extern "C" uint64_t func_802968D4_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_802916C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80291A40_loc_0 = 0;
    uint32_t addr_stfsx_802918C8_loc_0 = 0;
    uint32_t addr_stfsx_8029196C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802916C8;

loc_802916C8:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r29 = 0;
    r0 = (r5 & 255);
}

loc_80291700:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8029170C;
    }
}

loc_80291704:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r24 = r3;
}

loc_8029170C:
{
    r0 = (r24 & 255);
    r4 = (r0 * 136);
    r3 = 0x806B0000u;
    r0 = (r3 + -6904);
    r28 = (r0 + r4);
    r0 = 1;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80291730:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80291744;
    }
}

loc_80291734:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    goto loc_80291A3C;
}

loc_80291744:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    r3 = r22;
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x802963CCu>(&func_802963CC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802963CC_10B3 = func_802963CC_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_802963CC_10B3;
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802963CCu>(ctx);
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8029175C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80291900;
    }
}

loc_80291760:
{
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r22;
    r4 = r28;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x80291794u;
    if constexpr (KnownRegArgsCpuCall<0x802968D4u>(&func_802968D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802968D4_16B8 = func_802968D4_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802968D4_16B8);
        r4 = static_cast<uint32_t>(regargs_result_802968D4_16B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802968D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32(r22);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r27 = 0;
    r3 = 0x806B0000u;
    r31 = (r3 + -4864);
    r21 = (r1 + 48);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    goto loc_802918F0;
}

loc_802917BC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = r27;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = r28;
    // inline leaf 0x80296A0C (10 guest instruction(s))
    r8 = MemoryInline::FlatRead32((r6 + 120));
    r7 = MemoryInline::FlatRead32((r6 + 108));
    r0 = MemoryInline::FlatRead32((r6 + 112));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r8_addr_2 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_2);
    // end of inlined leaf 0x80296A0C
    r30 = r3;
    goto loc_802918DC;
}

loc_802917D8:
{
    r3 = (r24 & 255);
    // inline leaf 0x802B0B50 (6 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 10268));
    // end of inlined leaf 0x802B0B50
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r26 + 7));
    r0 = (r0 & r3);
}

loc_802917F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802918D8;
    }
}

loc_802917F4:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_802917FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80291808;
    }
}

loc_80291800:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
}

loc_80291808:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r23 & r0);
}

loc_80291814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802918D8;
    }
}

loc_80291818:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 48));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80291820:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802918D8;
    }
}

loc_80291828:
{
    r3 = r26;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    if constexpr (KnownRegArgsCpuCall<0x8029628Cu>(&func_8029628C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8029628C_2642 = func_8029628C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8029628C_2642;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029628Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80291838:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802918D8;
    }
}

loc_8029183C:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    r3 = (r1 + 68);
    r4 = (r1 + 16);
    ctx->lr = 0x80291878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80296A5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8029187C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802918D8;
    }
}

loc_80291880:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 44));
    f0.d = MemoryInline::FlatReadFloat32(r22);
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWrite32(r31, r26);
    r31 = (r31 + 4);
    r0 = r29;
    r29 = (r29 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    addr_stfsx_802918C8_loc_0 = (r21 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_802918C8_loc_0, f0.d);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_802918D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80291910;
    }
}

loc_802918D8:
{
    r30 = (r30 + 4);
}

loc_802918DC:
{
    r26 = MemoryInline::FlatRead32(r30);
    r0 = (r26 + 65536);
}

loc_802918E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802917D8;
    }
}

loc_802918EC:
{
    r27 = (r27 + 1);
}

loc_802918F0:
{
    r0 = MemoryInline::FlatRead32((r28 + 112));
}

loc_802918F8:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_802917BC;
    }
}

loc_802918FC:
{
    goto loc_80291910;
}

loc_80291900:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    r0 = 0;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    goto loc_80291A3C;
}

loc_80291910:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
}

loc_80291918:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_80291A28;
    }
}

loc_8029191C:
{
    r5 = 0;
    r7 = 0;
    r6 = 0;
    r4 = (r1 + 48);
    r3 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14188));
    ctr = r0;
}

loc_8029193C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8029197C;
    }
}

loc_80291940:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80291950:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80291970;
    }
}

loc_80291958:
{
    r5 = 1;
    r0 = r7;
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    addr_stfsx_8029196C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8029196C_loc_0, f2.d);
}

loc_80291970:
{
    r4 = (r4 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80291940;
    }
}

loc_8029197C:
{
}

loc_80291980:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_802919DC;
    }
}

loc_80291984:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8029198C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80291998;
    }
}

loc_80291990:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    goto loc_80291A3C;
}

loc_80291998:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    r5 = 1;
    r4 = (r1 + 32);
    r0 = (r3 + -1);
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802919D4;
    }
}

loc_802919B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802919C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802919C8;
    }
}

loc_802919C4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_802919C8:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802919B4;
    }
}

loc_802919D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    goto loc_80291A3C;
}

loc_802919DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r5 = 1;
    r4 = (r1 + 52);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0 = (r3 + -1);
    ctr = r0;
}

loc_802919FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_80291A20;
    }
}

loc_80291A00:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80291A0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80291A14;
    }
}

loc_80291A10:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_80291A14:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80291A00;
    }
}

loc_80291A20:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    goto loc_80291A3C;
}

loc_80291A28:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
}

loc_80291A30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80291A3C;
    }
}

loc_80291A34:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80291A3C:
{
    r0 = 168;
    addr_psqx_80291A40_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80291A40_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802916C8 func_802916C8 preserves=true fpr_mask=0x00000000
