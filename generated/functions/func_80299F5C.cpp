#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80299F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80299F5C;

loc_80299F5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80299F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80299F84;
    }
}

loc_80299F7C:
{
    r3 = 0;
    goto loc_8029A190;
}

loc_80299F84:
{
    r4 = 256;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_80299F90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029A01C;
    }
}

loc_80299F94:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_80299F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80299FB4;
    }
}

loc_80299FA0:
{
}

loc_80299FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80299FC0;
    }
}

loc_80299FA8:
{
}

loc_80299FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80299FCC;
    }
}

loc_80299FB0:
{
    goto loc_8029A01C;
}

loc_80299FB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    goto loc_80299FD4;
}

loc_80299FC0:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    goto loc_80299FD4;
}

loc_80299FCC:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
}

loc_80299FD4:
{
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r31 + 24));
}

loc_80299FE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8029A01C;
    }
}

loc_80299FE4:
{
    r0 = MemoryInline::FlatRead16((r31 + 26));
}

loc_80299FEC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8029A01C;
    }
}

loc_80299FF0:
{
    r4 = (r31 + 4);
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_80299FFC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8029A01C;
    }
}

loc_8029A000:
{
    r0 = MemoryInline::FlatRead16((r4 + 26));
}

loc_8029A008:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8029A01C;
    }
}

loc_8029A00C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8029A190;
}

loc_8029A01C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8029A024:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029A048;
    }
}

loc_8029A028:
{
    r3 = r31;
    r4 = 512;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A038:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029A048;
    }
}

loc_8029A03C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x8012F948 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    // end of inlined leaf 0x8012F948
    goto loc_8029A0A4;
}

loc_8029A048:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8029A050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A074;
    }
}

loc_8029A054:
{
    r3 = r31;
    r4 = 512;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A064:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029A074;
    }
}

loc_8029A068:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 856));
    goto loc_8029A0A4;
}

loc_8029A074:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8029A07C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8029A0A0;
    }
}

loc_8029A080:
{
    r3 = r31;
    r4 = 512;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029A090:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029A0A0;
    }
}

loc_8029A094:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x802D2A40 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    // end of inlined leaf 0x802D2A40
    goto loc_8029A0A4;
}

loc_8029A0A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14088));
}

loc_8029A0A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A0B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A16C;
    }
}

loc_8029A0B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A0C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029A160;
    }
}

loc_8029A0C4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A0D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029A118;
    }
}

loc_8029A0D8:
{
    r3 = MemoryInline::FlatRead8((r31 + 51));
    r0 = (r3 & 1);
}

loc_8029A0E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A0F4;
    }
}

loc_8029A0E8:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    goto loc_8029A158;
}

loc_8029A0F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A100:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A158;
    }
}

loc_8029A108:
{
    MemoryInline::FlatWriteFloat32((r31 + 80), f2.d);
    r0 = (r3 | 2);
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    goto loc_8029A158;
}

loc_8029A118:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A120:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029A158;
    }
}

loc_8029A124:
{
    r3 = MemoryInline::FlatRead8((r31 + 51));
    r0 = (r3 & 2);
}

loc_8029A130:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029A140;
    }
}

loc_8029A134:
{
    r0 = (r3 | 2);
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    goto loc_8029A158;
}

loc_8029A140:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A14C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A158;
    }
}

loc_8029A154:
{
    MemoryInline::FlatWriteFloat32((r31 + 84), f2.d);
}

loc_8029A158:
{
    r3 = 1;
    goto loc_8029A190;
}

loc_8029A160:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_8029A18C;
}

loc_8029A16C:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A170:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029A18C;
    }
}

loc_8029A174:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8029A180:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029A18C;
    }
}

loc_8029A188:
{
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
}

loc_8029A18C:
{
    r3 = 0;
}

loc_8029A190:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80299F5C func_80299F5C preserves=true fpr_mask=0x00000000
