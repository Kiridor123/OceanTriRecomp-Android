#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B56FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800B56FCu);
    goto loc_800B56FC;

loc_800B56FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B573C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B5754;
    }
}

loc_800B5740:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B574C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B5754;
    }
}

loc_800B5750:
{
    r10 = 0;
}

loc_800B5754:
{
}

loc_800B5758:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B5770;
    }
}

loc_800B575C:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B5768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B5770;
    }
}

loc_800B576C:
{
    r9 = 0;
}

loc_800B5770:
{
}

loc_800B5774:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B5788;
    }
}

loc_800B5778:
{
    r0 = (r11 + 1073741824);
}

loc_800B5780:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B5788;
    }
}

loc_800B5784:
{
    r8 = 0;
}

loc_800B5788:
{
}

loc_800B578C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B57A4;
    }
}

loc_800B5790:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B579C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B57A4;
    }
}

loc_800B57A0:
{
    r7 = 0;
}

loc_800B57A4:
{
}

loc_800B57A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B57C0;
    }
}

loc_800B57AC:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B57B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B57C0;
    }
}

loc_800B57BC:
{
    r6 = 0;
}

loc_800B57C0:
{
}

loc_800B57C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B57DC;
    }
}

loc_800B57C8:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B57D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B57DC;
    }
}

loc_800B57D8:
{
    r4 = 0;
}

loc_800B57DC:
{
}

loc_800B57E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B5804;
    }
}

loc_800B57E4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17920);
    r4 = 576;
    r5 = 0x80590000u;
    r5 = (r5 + 17868);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B5804u;
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

loc_800B5804:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B56FC func_800B56FC preserves=true fpr_mask=0x00000000
