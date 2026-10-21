#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_804BA0B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mdest_6 = 0;
    uint32_t r6_mdest_7 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_mrot_6 = 0;
    uint32_t r6_mrot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804BA0B0u);
    goto loc_804BA0B0;

loc_804BA0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = (r3 & 7);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r30 = (r30_rot_0 & 1);
}

loc_804BA0D4:
{
    r29 = r4;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804BA12C;
    }
}

loc_804BA0E4:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_804BA0E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BA0F4;
    }
}

loc_804BA0EC:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_804BA0F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BA104;
    }
}

loc_804BA0F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2304));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_804BA234;
}

loc_804BA104:
{
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -2300));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f6.d));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_804BA234;
}

loc_804BA12C:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_804BA130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BA13C;
    }
}

loc_804BA134:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_804BA138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BA14C;
    }
}

loc_804BA13C:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2304));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2296));
    f31.d = f3.d;
    goto loc_804BA168;
}

loc_804BA14C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
}

loc_804BA168:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2296));
    r28 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2288));
    goto loc_804BA180;
}

loc_804BA178:
{
    f4.d = PpcFmulsInline(f4.d, f1.d);
    r28 = (r28 + 1);
}

loc_804BA180:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BA184:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804BA178;
    }
}

loc_804BA188:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2272));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2280));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2304));
    goto loc_804BA1A0;
}

loc_804BA198:
{
    f4.d = PpcFmulsInline(f4.d, f2.d);
    r28 = (r28 + -1);
}

loc_804BA1A0:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_804BA1A4:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
}

loc_804BA1AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BA1B8;
    }
}

loc_804BA1B0:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BA1B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804BA198;
    }
}

loc_804BA1B8:
{
    r0 = (r28 + 1);
    r3 = 1;
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2264));
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2256));
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_1DB4 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1DB4;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r6_mrot_1 = (r3 & 16777215);
    r6_mdest_1 = (r6 & -16777216);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = 239;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r5 = (r28 + 1);
    r3 = 240;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r6_mrot_3 = (r5 & 31);
    r6_mdest_3 = (r6 & -32);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r6_mrot_4 = (r6_rot_2 & -16777216);
    r6_mdest_4 = (r6 & 16777215);
    r6 = (r6_mdest_4 | r6_mrot_4);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
}

loc_804BA234:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = -872349696;
    r5 = 97;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r7 = 0;
    r3 = 238;
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r7_mrot_0 = (r7_rot_0 & 2047);
    r7_mdest_0 = (r7 & -2048);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r8 = 0;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r7_mrot_1 = (r7_rot_1 & 522240);
    r7_mdest_1 = (r7 & -522241);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r7_mrot_2 = (r7_rot_2 & 524288);
    r7_mdest_2 = (r7 & -524289);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r8_mrot_0 = (r8_rot_0 & 2047);
    r8_mdest_0 = (r8 & -2048);
    r8 = (r8_mdest_0 | r8_mrot_0);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7_mrot_3 = (r7_rot_3 & -16777216);
    r7_mdest_3 = (r7 & 16777215);
    r7 = (r7_mdest_3 | r7_mrot_3);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r8_mrot_1 = (r8_rot_1 & 522240);
    r8_mdest_1 = (r8 & -522241);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r6 = 0;
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r8_mrot_2 = (r8_rot_2 & 524288);
    r8_mdest_2 = (r8 & -524289);
    r8 = (r8_mdest_2 | r8_mrot_2);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(20));
    r8_mrot_3 = (r8_rot_3 & 1048576);
    r8_mdest_3 = (r8 & -1048577);
    r8 = (r8_mdest_3 | r8_mrot_3);
    r7 = 241;
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(21));
    r8_mrot_4 = (r8_rot_4 & 14680064);
    r8_mdest_4 = (r8 & -14680065);
    r8 = (r8_mdest_4 | r8_mrot_4);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_6 = (r6_rot_4 & 16777215);
    r6_mdest_6 = (r6 & -16777216);
    r6 = (r6_mdest_6 | r6_mrot_6);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_5 = (r8_rot_5 & -16777216);
    r8_mdest_5 = (r8 & 16777215);
    r8 = (r8_mdest_5 | r8_mrot_5);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r0 = 242;
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_7 = (r6_rot_5 & -16777216);
    r6_mdest_7 = (r6 & 16777215);
    r6 = (r6_mdest_7 | r6_mrot_7);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r1 + 48));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x8000007F fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA0B0 func_804BA0B0 preserves=true fpr_mask=0x00000000
