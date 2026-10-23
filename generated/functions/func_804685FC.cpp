#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804685FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804685FC;

loc_804685FC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r6 & 2146435072);
    r3 = (r3 + -2146435072);
}

loc_80468618:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(0))) {
        goto loc_80468630;
    }
}

loc_8046861C:
{
    f0.d = (f1.d * f1.d);
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    f1.d = (f1.d + f0.d);
    goto loc_8046883C;
}

loc_80468630:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80468634:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80468660;
    }
}

loc_80468638:
{
    r3 = (r6 & 2147483647);
    r3 = (r0 | r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80468648;
    }
}

loc_80468644:
{
    goto loc_8046883C;
}

loc_80468648:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80468660;
    }
}

loc_8046864C:
{
    r3 = 0x80790000u;
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 25016));
    goto loc_8046883C;
}

loc_80468660:
{
    r3 = (static_cast<int32_t>(r6) >> 20);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804686B4;
    }
}

loc_80468668:
{
    goto loc_8046867C;
}

loc_8046866C:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r4 = (r4_rot_2 & 2097151);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_2 & -2097152);
    r6 = (r6 | r4);
    r3 = (r3 + -21);
}

loc_8046867C:
{
}

loc_80468680:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8046866C;
    }
}

loc_80468684:
{
    r7 = 0;
    goto loc_80468694;
}

loc_8046868C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r7 = (r7 + 1);
}

loc_80468694:
{
    r4 = (r6 & 1048576);
}

loc_80468698:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046868C;
    }
}

loc_8046869C:
{
    r4 = (32 - r7);
    r5 = (r7 + -1);
    r4 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r3 = (r3 - r5);
    r6 = (r6 | r4);
}

loc_804686B4:
{
    r4 = (r3 + -1023);
    r5 = (r6 & 1048575);
    r4 = (r4 & 1);
}

loc_804686C0:
{
    r6 = (r5 | 1048576);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804686D8;
    }
}

loc_804686C8:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
}

loc_804686D8:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r9 = 0;
    r11 = 0;
    r10 = 0;
    r12 = 0;
    r7 = 2097152;
    goto loc_8046872C;
}

loc_80468700:
{
    r4 = (r11 + r7);
}

loc_80468708:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_80468718;
    }
}

loc_8046870C:
{
    r11 = (r4 + r7);
    r6 = (r6 - r4);
    r12 = (r12 + r7);
}

loc_80468718:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_2 & 2147483647);
}

loc_8046872C:
{
}

loc_80468730:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80468700;
    }
}

loc_80468734:
{
    r7 = 0x80000000u;
    goto loc_804687A4;
}

loc_8046873C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r6));
}

loc_80468740:
{
    r5 = r11;
    r8 = (r9 + r7);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80468758;
    }
}

loc_8046874C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80468790;
    }
}

loc_80468750:
{
}

loc_80468754:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(r0))) {
        goto loc_80468790;
    }
}

loc_80468758:
{
    r4 = (r8 & -2147483648);
    r9 = (r8 + r7);
    r4 = (r4 + -2147483648);
}

loc_80468768:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(0))) {
        goto loc_80468778;
    }
}

loc_8046876C:
{
    r4 = (r9 & -2147483648);
}

loc_80468770:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80468778;
    }
}

loc_80468774:
{
    r11 = (r11 + 1);
}

loc_80468778:
{
}

loc_8046877C:
{
    r6 = (r6 - r5);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_80468788;
    }
}

loc_80468784:
{
    r6 = (r6 + -1);
}

loc_80468788:
{
    r0 = (r0 - r8);
    r10 = (r10 + r7);
}

loc_80468790:
{
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_4 & 2147483647);
}

loc_804687A4:
{
}

loc_804687A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8046873C;
    }
}

loc_804687AC:
{
    r0 = (r6 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80468808;
    }
}

loc_804687B4:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2920));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f0.d);
}

loc_804687C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80468808;
    }
}

loc_804687C8:
{
    r0 = (r10 + 65536);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
}

loc_804687D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_804687E4;
    }
}

loc_804687D8:
{
    r10 = 0;
    r12 = (r12 + 1);
    goto loc_80468808;
}

loc_804687E4:
{
    SetCRFloatResident(cr, 0, f0.d, f0.d);
}

loc_804687E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80468800;
    }
}

loc_804687EC:
{
}

loc_804687F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65534))) {
        goto loc_804687F8;
    }
}

loc_804687F4:
{
    r12 = (r12 + 1);
}

loc_804687F8:
{
    r10 = (r10 + 2);
    goto loc_80468808;
}

loc_80468800:
{
    r0 = (r10 & 1);
    r10 = (r10 + r0);
}

loc_80468808:
{
    r0 = (r12 & 1);
    r4 = (static_cast<int32_t>(r12) >> 1);
}

loc_80468814:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(31));
    r5 = (r5_rot_8 & 2147483647);
    r4 = (r4 + 1071644672);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80468824;
    }
}

loc_80468820:
{
    r5 = (r5 | -2147483648);
}

loc_80468824:
{
    r0 = (r3 + -1023);
    stackword1 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_4 & -1048576);
    r4 = (r4 + r0);
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
}

loc_8046883C:
{
    r1 = (r1 + 32);
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804685FC func_804685FC preserves=true fpr_mask=0x00000000
