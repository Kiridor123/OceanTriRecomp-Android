#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_804B8900;

loc_804B8900:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -2368), 0, 40u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -2352));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804B890C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B8918;
    }
}

loc_804B8910:
{
    f3.d = f0.d;
    goto loc_804B892C;
}

loc_804B8918:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -2344));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_804B8920:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B892C;
    }
}

loc_804B8928:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -2348));
}

loc_804B892C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -2340));
    r0 = (r5 + -1);
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -2336));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r10 = MemoryInline::FlatRead32(r3);
    r5 = (r13 + -20352);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804B8950:
{
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    r7 = fctiwzword0;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r10_mrot_0 = (r10_rot_0 & 130560);
    r10_mdest_0 = (r10 & -130561);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r10_mrot_1 = (r10_rot_1 & 16);
    r10_mdest_1 = (r10 & -17);
    r10 = (r10_mdest_1 | r10_mrot_1);
    MemoryInline::FlatWrite32(r3, r10);
    r5_addr_0 = (r5 + r4);
    r4 = MemoryInline::FlatRead8(r5_addr_0);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r10_mrot_2 = (r10_rot_2 & 224);
    r10_mdest_2 = (r10 & -225);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r10_mrot_3 = (r10_rot_3 & 256);
    r10_mdest_3 = (r10 & -257);
    r10 = (r10_mdest_3 | r10_mrot_3);
    r0 = (r10 & -393217);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(19));
    r0_mrot_0 = (r0_rot_0 & 1572864);
    r0_mdest_0 = (r0 & -1572865);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(21));
    r0_mrot_1 = (r0_rot_1 & 2097152);
    r0_mdest_1 = (r0 & -2097153);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32(r3, r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B8990;
    }
}

loc_804B8988:
{
    f1.d = f0.d;
    goto loc_804B89A0;
}

loc_804B8990:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -2332));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804B8998:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804B89A0;
    }
}

loc_804B899C:
{
    f1.d = f0.d;
}

loc_804B89A0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2368));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -2336));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804B89B0:
{
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r4 = fctiwzword1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B89C8;
    }
}

loc_804B89C0:
{
    f2.d = f0.d;
    goto loc_804B89D8;
}

loc_804B89C8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -2332));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804B89D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804B89D8;
    }
}

loc_804B89D4:
{
    f2.d = f0.d;
}

loc_804B89D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -2368));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0_mrot_2 = (r4 & 255);
    r0_mdest_2 = (r0 & -256);
    r0 = (r0_mdest_2 | r0_mrot_2);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_2 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x000006B3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8900 func_804B8900 preserves=true fpr_mask=0x00000000
