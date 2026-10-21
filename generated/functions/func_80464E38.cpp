#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80464E38_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_lfdx_80464EC0_loc_0 = 0;
    uint32_t addr_lfdx_80465040_loc_0 = 0;
    uint32_t addr_lfdx_80465084_loc_0 = 0;
    uint32_t addr_lfdx_804650C4_loc_0 = 0;
    uint32_t addr_lfdx_804650FC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80464E38u);
    goto loc_80464E38;

loc_80464E38:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 & 2147483647);
    r4 = (r7 & -2147483648);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r0 | r6);
    r8 = (r7 ^ r4);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80464E8C;
    }
}

loc_80464E68:
{
    r7 = 2146435072;
}

loc_80464E70:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r7))) {
        goto loc_80464E8C;
    }
}

loc_80464E74:
{
    r3 = (0 - r6);
    r3 = (r6 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r3 = (r0 | r3);
}

loc_80464E88:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r7))) {
        goto loc_80464E98;
    }
}

loc_80464E8C:
{
    f0.d = (f1.d * f2.d);
    f1.d = (f0.d / f0.d);
    goto loc_804651B0;
}

loc_80464E98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80464E9C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80464EC8;
    }
}

loc_80464EA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804651B0;
    }
}

loc_80464EA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_80464EA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80464EB0;
    }
}

loc_80464EAC:
{
    goto loc_804651B0;
}

loc_80464EB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80464EC8;
    }
}

loc_80464EB4:
{
    r3 = 0x80570000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 8);
    r3 = (r3 + 14680);
    addr_lfdx_80464EC0_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80464EC0_loc_0);
    goto loc_804651B0;
}

loc_80464EC8:
{
    r3 = 1048576;
}

loc_80464ED0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r3))) {
        goto loc_80464F1C;
    }
}

loc_80464ED4:
{
}

loc_80464ED8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80464EFC;
    }
}

loc_80464EDC:
{
    r3 = r5;
    r11 = -1043;
    goto loc_80464EF0;
}

loc_80464EE8:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r11 = (r11 + -1);
}

loc_80464EF0:
{
}

loc_80464EF4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80464EE8;
    }
}

loc_80464EF8:
{
    goto loc_80464F24;
}

loc_80464EFC:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(11));
    r3 = (r3_rot_4 & -2048);
    r11 = -1022;
    goto loc_80464F10;
}

loc_80464F08:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r11 = (r11 + -1);
}

loc_80464F10:
{
}

loc_80464F14:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80464F08;
    }
}

loc_80464F18:
{
    goto loc_80464F24;
}

loc_80464F1C:
{
    r3 = (static_cast<int32_t>(r8) >> 20);
    r11 = (r3 + -1023);
}

loc_80464F24:
{
    r3 = 1048576;
}

loc_80464F2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80464F78;
    }
}

loc_80464F30:
{
}

loc_80464F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464F58;
    }
}

loc_80464F38:
{
    r7 = r6;
    r3 = -1043;
    goto loc_80464F4C;
}

loc_80464F44:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    r3 = (r3 + -1);
}

loc_80464F4C:
{
}

loc_80464F50:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_80464F44;
    }
}

loc_80464F54:
{
    goto loc_80464F80;
}

loc_80464F58:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r7 = (r7_rot_3 & -2048);
    r3 = -1022;
    goto loc_80464F6C;
}

loc_80464F64:
{
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & -2);
    r3 = (r3 + -1);
}

loc_80464F6C:
{
}

loc_80464F70:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_80464F64;
    }
}

loc_80464F74:
{
    goto loc_80464F80;
}

loc_80464F78:
{
    r3 = (static_cast<int32_t>(r0) >> 20);
    r3 = (r3 + -1023);
}

loc_80464F80:
{
}

loc_80464F84:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(-1022))) {
        goto loc_80464F94;
    }
}

loc_80464F88:
{
    r7 = (r8 & 1048575);
    r9 = (r7 | 1048576);
    goto loc_80464FC4;
}

loc_80464F94:
{
    r9 = (-1022 - r11);
}

loc_80464F9C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(31))) {
        goto loc_80464FB8;
    }
}

loc_80464FA0:
{
    r7 = (32 - r9);
    r8 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    r7 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r9 = (r8 | r7);
    goto loc_80464FC4;
}

loc_80464FB8:
{
    r7 = (r9 + -32);
    r9 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r5 = 0;
}

loc_80464FC4:
{
}

loc_80464FC8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(-1022))) {
        goto loc_80464FD8;
    }
}

loc_80464FCC:
{
    r0 = (r0 & 1048575);
    r10 = (r0 | 1048576);
    goto loc_80465008;
}

loc_80464FD8:
{
    r10 = (-1022 - r3);
}

loc_80464FE0:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(31))) {
        goto loc_80464FFC;
    }
}

loc_80464FE4:
{
    r7 = (32 - r10);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r6 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r10 = (r8 | r0);
    goto loc_80465008;
}

loc_80464FFC:
{
    r0 = (r10 + -32);
    r10 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r6 = 0;
}

loc_80465008:
{
    r7 = (r11 - r3);
    r11 = (r7 + 2);
    r8 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r11));
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804650A0;
    }
}

loc_8046501C:
{
    r7 = (r9 - r10);
    r12 = (r5 - r6);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80465048;
    }
}

loc_80465028:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
}

loc_80465030:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r8))) {
        goto loc_80465048;
    }
}

loc_80465034:
{
    r3 = 0x80570000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & 8);
    r3 = (r3 + 14680);
    addr_lfdx_80465040_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80465040_loc_0);
    goto loc_804651B0;
}

loc_80465048:
{
}

loc_8046504C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_80465054;
    }
}

loc_80465050:
{
    r7 = (r7 + -1);
}

loc_80465054:
{
}

loc_80465058:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_80465070;
    }
}

loc_8046505C:
{
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_8 & 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r9 = (r7 + r0);
    r5 = (r5 + r5);
    goto loc_8046509C;
}

loc_80465070:
{
    r0 = (r7 | r12);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046508C;
    }
}

loc_80465078:
{
    r3 = 0x80570000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 8);
    r3 = (r3 + 14680);
    addr_lfdx_80465084_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80465084_loc_0);
    goto loc_804651B0;
}

loc_8046508C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r9 = (r5 + r0);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
}

loc_8046509C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046501C;
    }
}

loc_804650A0:
{
    r7 = (r9 - r10);
    r10 = (r5 - r6);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804650CC;
    }
}

loc_804650AC:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r11));
}

loc_804650B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r8))) {
        goto loc_804650CC;
    }
}

loc_804650B8:
{
    r3 = 0x80570000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & 8);
    r3 = (r3 + 14680);
    addr_lfdx_804650C4_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804650C4_loc_0);
    goto loc_804651B0;
}

loc_804650CC:
{
}

loc_804650D0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_804650D8;
    }
}

loc_804650D4:
{
    r7 = (r7 + -1);
}

loc_804650D8:
{
}

loc_804650DC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_804650E8;
    }
}

loc_804650E0:
{
    r9 = r7;
    r5 = r10;
}

loc_804650E8:
{
    r0 = (r9 | r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80465104;
    }
}

loc_804650F0:
{
    r3 = 0x80570000u;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 8);
    r3 = (r3 + 14680);
    addr_lfdx_804650FC_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_804650FC_loc_0);
    goto loc_804651B0;
}

loc_80465104:
{
    r0 = 1048576;
    goto loc_80465120;
}

loc_8046510C:
{
    r7_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_12 & 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r9 = (r7 + r6);
    r5 = (r5 + r5);
    r3 = (r3 + -1);
}

loc_80465120:
{
}

loc_80465124:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_8046510C;
    }
}

loc_80465128:
{
}

loc_8046512C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(-1022))) {
        goto loc_80465150;
    }
}

loc_80465130:
{
    r0 = (r3 + 1023);
    r3 = (r9 + -1048576);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_11 & -1048576);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r3 | r0);
    r0 = (r0 | r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_804651AC;
}

loc_80465150:
{
    r6 = (-1022 - r3);
}

loc_80465158:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(20))) {
        goto loc_80465174;
    }
}

loc_8046515C:
{
    r0 = (32 - r6);
    r3 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r9 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r6));
    r3 = (r3 | r0);
    goto loc_804651A0;
}

loc_80465174:
{
}

loc_80465178:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(31))) {
        goto loc_80465194;
    }
}

loc_8046517C:
{
    r3 = (32 - r6);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r3 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r3));
    r9 = r4;
    r3 = (r3 | r0);
    goto loc_804651A0;
}

loc_80465194:
{
    r0 = (r6 + -32);
    r3 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r9 = r4;
}

loc_804651A0:
{
    r0 = (r9 | r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
}

loc_804651AC:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
}

loc_804651B0:
{
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80464E38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80464E38_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80464E38 func_80464E38 preserves=true fpr_mask=0x00000000
