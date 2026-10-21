#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843240(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8084329C_loc_0 = 0;
    uint32_t addr_lfsx_808432BC_loc_0 = 0;
    uint32_t addr_lfsx_808432D8_loc_0 = 0;
    uint32_t addr_lfsx_80843334_loc_0 = 0;
    uint32_t addr_lfsx_80843338_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80843240u);
    goto loc_80843240;

loc_80843240:
{
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r7 = 0x80850000u;
    r7 = (r7 + -29120);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 16);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r0 + r3_ca_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808432E4;
    }
}

loc_80843258:
{
    r5 = 458162176;
    r4 = 1374420992;
    r0 = (r5 + -32331);
    r6 = (r7 + 0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r8 = (r4 + -31457);
    r5 = (r7 + 400);
    r4 = (r7 + 448);
    r9 = (static_cast<int32_t>(r0) >> 7);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r0 = (r0 + r7);
    r7 = (r0 * 1200);
    r0 = (r9 + r10);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r7 = (r3 - r7);
    addr_lfsx_8084329C_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8084329C_loc_0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r5 = (static_cast<int32_t>(r0) >> 5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r7 = (r5 + r7);
    r5 = (static_cast<int32_t>(r0) >> 5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    addr_lfsx_808432BC_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_808432BC_loc_0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r0 = (r5 + r7);
    r0 = (r0 * 100);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    addr_lfsx_808432D8_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_808432D8_loc_0);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_808432E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80843344;
    }
}

loc_808432E8:
{
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5 = (static_cast<int32_t>(r0) >> 5);
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r4 = (r5 + r6);
    r3 = (r3 - r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80843320;
    }
}

loc_80843318:
{
    r3 = (r3 + 100);
    r4 = (r4 + -1);
}

loc_80843320:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r7 + 496);
    r5 = (0 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r7 + 0);
    addr_lfsx_80843334_loc_0 = (r4 + r5);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80843334_loc_0);
    addr_lfsx_80843338_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80843338_loc_0);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80843344:
{
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18872));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80843240 func_80843240 preserves=true fpr_mask=0x00000000
