#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800BE1B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_800BE1B8;

loc_800BE1B8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BE200:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE218;
    }
}

loc_800BE204:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BE210:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE218;
    }
}

loc_800BE214:
{
    r10 = 0;
}

loc_800BE218:
{
}

loc_800BE21C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BE234;
    }
}

loc_800BE220:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BE22C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE234;
    }
}

loc_800BE230:
{
    r9 = 0;
}

loc_800BE234:
{
}

loc_800BE238:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BE24C;
    }
}

loc_800BE23C:
{
    r0 = (r11 + 1073741824);
}

loc_800BE244:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE24C;
    }
}

loc_800BE248:
{
    r8 = 0;
}

loc_800BE24C:
{
}

loc_800BE250:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BE268;
    }
}

loc_800BE254:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BE260:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE268;
    }
}

loc_800BE264:
{
    r7 = 0;
}

loc_800BE268:
{
}

loc_800BE26C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BE284;
    }
}

loc_800BE270:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BE27C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE284;
    }
}

loc_800BE280:
{
    r6 = 0;
}

loc_800BE284:
{
}

loc_800BE288:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BE2A0;
    }
}

loc_800BE28C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BE298:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE2A0;
    }
}

loc_800BE29C:
{
    r5 = 0;
}

loc_800BE2A0:
{
}

loc_800BE2A4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BE2C8;
    }
}

loc_800BE2A8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18872);
    r4 = 88;
    r5 = 0x80590000u;
    r5 = (r5 + 18896);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BE2C8u;
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

loc_800BE2C8:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    r4 = r29;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 32);
    r4 = r29;
    r5 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 20);
    r4 = r29;
    r5 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 8);
    r4 = r29;
    r5 = (r30 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800BE338u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    r3 = (r1 + 44);
    // inline leaf 0x800BE400 (9 guest instruction(s))
}

loc_inl4_0x800BE400:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x800BE410:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl4_cont_800BE400:
{
    // end of inlined leaf 0x800BE400
    r3 = r31;
    // inline leaf 0x800BE3EC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BE3EC
}

loc_800BE34C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BE358;
    }
}

loc_800BE350:
{
    r3 = 0;
    // inline leaf 0x800BE3DC (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BE3DC
}

loc_800BE358:
{
    r3 = (r1 + 32);
    // inline leaf 0x800BE400 (9 guest instruction(s))
}

loc_inl7_0x800BE400:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x800BE410:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl7_cont_800BE400:
{
    // end of inlined leaf 0x800BE400
    r3 = r31;
    // inline leaf 0x800BE3EC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BE3EC
}

loc_800BE36C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BE378;
    }
}

loc_800BE370:
{
    r3 = 1;
    // inline leaf 0x800BE3DC (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BE3DC
}

loc_800BE378:
{
    r3 = (r1 + 20);
    // inline leaf 0x800BE400 (9 guest instruction(s))
}

loc_inl10_0x800BE400:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x800BE410:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl10_cont_800BE400:
{
    // end of inlined leaf 0x800BE400
    r3 = r31;
    // inline leaf 0x800BE3EC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800BE3EC
}

loc_800BE38C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BE398;
    }
}

loc_800BE390:
{
    r3 = 2;
    // inline leaf 0x800BE3DC (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BE3DC
}

loc_800BE398:
{
    r3 = (r1 + 8);
    // inline leaf 0x800BE400 (9 guest instruction(s))
}

loc_inl13_0x800BE400:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl13_0x800BE410:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
}

loc_inl13_cont_800BE400:
{
    // end of inlined leaf 0x800BE400
    r3 = r31;
    // inline leaf 0x800BE3EC (5 guest instruction(s))
    r3 = (r3 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x800BE3EC
}

loc_800BE3AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BE3B8;
    }
}

loc_800BE3B0:
{
    r3 = 3;
    // inline leaf 0x800BE3DC (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800BE3DC
}

loc_800BE3B8:
{
    // inline leaf 0x800BE3D8 (1 guest instruction(s))
    // end of inlined leaf 0x800BE3D8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BE1B8 func_800BE1B8 preserves=true fpr_mask=0x00000000
