#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F9B04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809F9C18_loc_0 = 0;
    uint32_t addr_lhax_809F9BA4_loc_0 = 0;
    uint32_t addr_lhax_809F9BE8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x809F9B04u);
    goto loc_809F9B04;

loc_809F9B04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809F9B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9C74;
    }
}

loc_809F9B18:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
}

loc_809F9B20:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(4))) {
        goto loc_809F9B28;
    }
}

loc_809F9B24:
{
    goto loc_809F9C74;
}

loc_809F9B28:
{
    r0 = MemoryInline::FlatRead8((r3 + 168));
    r4 = (r0 & 63);
    r0 = (r4 + -5);
}

loc_809F9B38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_809F9B50;
    }
}

loc_809F9B3C:
{
}

loc_809F9B40:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(9))) {
        goto loc_809F9C74;
    }
}

loc_809F9B44:
{
}

loc_809F9B48:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(12))) {
        goto loc_809F9B90;
    }
}

loc_809F9B4C:
{
    goto loc_809F9C74;
}

loc_809F9B50:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -3);
}

loc_809F9B5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_809F9B84;
    }
}

loc_809F9B60:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_809F9B68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F9B78;
    }
}

loc_809F9B6C:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -19468);
    goto loc_809F9BA0;
}

loc_809F9B78:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -19492);
    goto loc_809F9BA0;
}

loc_809F9B84:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -19492);
    goto loc_809F9BA0;
}

loc_809F9B90:
{
    r4 = 0x80A30000u;
    r4 = (r4 + -19480);
}

loc_809F9BA0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    addr_lhax_809F9BA4_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809F9BA4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r6 + 36));
}

loc_809F9BB8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_809F9BC8;
    }
}

loc_809F9BBC:
{
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
    goto loc_809F9BD8;
}

loc_809F9BC8:
{
}

loc_809F9BCC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_809F9BD8;
    }
}

loc_809F9BD0:
{
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 168), static_cast<uint8_t>(r0));
}

loc_809F9BD8:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = 0x80A30000u;
    r4 = (r4 + -19436);
    addr_lhax_809F9BE8_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809F9BE8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 169), static_cast<uint8_t>(r0));
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6324));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_809F9C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_809F9C74;
    }
}

loc_809F9C08:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 0x80A30000u;
    r4 = (r4 + -19456);
    addr_lfsx_809F9C18_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809F9C18_loc_0);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6128));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809F9C2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809F9C40;
    }
}

loc_809F9C34:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    goto loc_809F9C74;
}

loc_809F9C40:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -6320));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809F9C4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809F9C60;
    }
}

loc_809F9C54:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    goto loc_809F9C74;
}

loc_809F9C60:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
}

loc_809F9C74:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F9B04 func_809F9B04 preserves=true fpr_mask=0x00000000
