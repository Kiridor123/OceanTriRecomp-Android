#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A1568_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A1568u);
    goto loc_800A1568;

loc_800A1568:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r10 = r3;
    r30 = r7;
    r31 = r8;
    r9 = MemoryInline::FlatRead8((r5 + 1));
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r7 = MemoryInline::FlatRead8((r3 + 229));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (r0 - r9);
    r0 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r7 - r0);
    r0 = (r8 + r0);
    r29 = (r0 & 65535);
    r29 = (r29 + r9);
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (r0 & 4);
}

loc_800A15C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A15EC;
    }
}

loc_800A15C8:
{
    r5 = (r29 & 65535);
    r3 = MemoryInline::FlatRead16(r4);
    r0 = (r3 + -1);
}

loc_800A15D8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_800A160C;
    }
}

loc_800A15DC:
{
    r3 = r6;
    r4 = r10;
    ctx->lr = 0x800A15E8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AB8E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    goto loc_800A160C;
}

loc_800A15EC:
{
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 + -1);
    r0 = (r29 & 65535);
}

loc_800A15FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_800A160C;
    }
}

loc_800A1600:
{
    r0 = (r3 & 65535);
    r0 = (r29 - r0);
    r29 = (r0 & 65535);
}

loc_800A160C:
{
    r0 = (r29 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A1644:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A165C;
    }
}

loc_800A1648:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1654:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A165C;
    }
}

loc_800A1658:
{
    r9 = 0;
}

loc_800A165C:
{
}

loc_800A1660:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1678;
    }
}

loc_800A1664:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1670:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1678;
    }
}

loc_800A1674:
{
    r8 = 0;
}

loc_800A1678:
{
}

loc_800A167C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A1690;
    }
}

loc_800A1680:
{
    r0 = (r10 + 1073741824);
}

loc_800A1688:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1690;
    }
}

loc_800A168C:
{
    r7 = 0;
}

loc_800A1690:
{
}

loc_800A1694:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A16AC;
    }
}

loc_800A1698:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A16A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A16AC;
    }
}

loc_800A16A8:
{
    r6 = 0;
}

loc_800A16AC:
{
}

loc_800A16B0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A16C8;
    }
}

loc_800A16B4:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A16C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A16C8;
    }
}

loc_800A16C4:
{
    r5 = 0;
}

loc_800A16C8:
{
}

loc_800A16CC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A16E4;
    }
}

loc_800A16D0:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A16DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A16E4;
    }
}

loc_800A16E0:
{
    r4 = 0;
}

loc_800A16E4:
{
}

loc_800A16E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A170C;
    }
}

loc_800A16EC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1805;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A170Cu;
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

loc_800A170C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A1568(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A1568_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A1568 func_800A1568 preserves=true fpr_mask=0x00000000
