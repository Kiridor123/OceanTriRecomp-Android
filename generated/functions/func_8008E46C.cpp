#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008E46C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8008E46Cu);
    goto loc_8008E46C;

loc_8008E46C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008E4AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E4C4;
    }
}

loc_8008E4B0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008E4BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E4C4;
    }
}

loc_8008E4C0:
{
    r10 = 0;
}

loc_8008E4C4:
{
}

loc_8008E4C8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008E4E0;
    }
}

loc_8008E4CC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008E4D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E4E0;
    }
}

loc_8008E4DC:
{
    r9 = 0;
}

loc_8008E4E0:
{
}

loc_8008E4E4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E4F8;
    }
}

loc_8008E4E8:
{
    r0 = (r11 + 1073741824);
}

loc_8008E4F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E4F8;
    }
}

loc_8008E4F4:
{
    r8 = 0;
}

loc_8008E4F8:
{
}

loc_8008E4FC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E514;
    }
}

loc_8008E500:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008E50C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E514;
    }
}

loc_8008E510:
{
    r7 = 0;
}

loc_8008E514:
{
}

loc_8008E518:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E530;
    }
}

loc_8008E51C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008E528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E530;
    }
}

loc_8008E52C:
{
    r6 = 0;
}

loc_8008E530:
{
}

loc_8008E534:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E54C;
    }
}

loc_8008E538:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E544:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E54C;
    }
}

loc_8008E548:
{
    r5 = 0;
}

loc_8008E54C:
{
}

loc_8008E550:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E574;
    }
}

loc_8008E554:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1322;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E574u;
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

loc_8008E574:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8008E598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E5B0;
    }
}

loc_8008E59C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008E5A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E5B0;
    }
}

loc_8008E5AC:
{
    r9 = 0;
}

loc_8008E5B0:
{
}

loc_8008E5B4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E5CC;
    }
}

loc_8008E5B8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008E5C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E5CC;
    }
}

loc_8008E5C8:
{
    r8 = 0;
}

loc_8008E5CC:
{
}

loc_8008E5D0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E5E4;
    }
}

loc_8008E5D4:
{
    r0 = (r10 + 1073741824);
}

loc_8008E5DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E5E4;
    }
}

loc_8008E5E0:
{
    r7 = 0;
}

loc_8008E5E4:
{
}

loc_8008E5E8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E600;
    }
}

loc_8008E5EC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008E5F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E600;
    }
}

loc_8008E5FC:
{
    r6 = 0;
}

loc_8008E600:
{
}

loc_8008E604:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E61C;
    }
}

loc_8008E608:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008E614:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E61C;
    }
}

loc_8008E618:
{
    r5 = 0;
}

loc_8008E61C:
{
}

loc_8008E620:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E638;
    }
}

loc_8008E624:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E630:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E638;
    }
}

loc_8008E634:
{
    r4 = 0;
}

loc_8008E638:
{
}

loc_8008E63C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008E660;
    }
}

loc_8008E640:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1323;
    r5 = 0x80590000u;
    r5 = (r5 + 2888);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E660u;
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

loc_8008E660:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 32);
}

loc_8008E66C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008E6AC;
    }
}

loc_8008E670:
{
    r0 = (r3 & 64);
}

loc_8008E678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008E688;
    }
}

loc_8008E67C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    goto loc_8008E6E4;
}

loc_8008E688:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8008E6E4;
}

loc_8008E6AC:
{
    r0 = (r3 & 64);
}

loc_8008E6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008E6D8;
    }
}

loc_8008E6B8:
{
    r3 = r31;
    r4 = (r30 + 28);
    ctx->lr = 0x8008E6C4u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_2172 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_2172);
        r4 = static_cast<uint32_t>(regargs_result_80071070_2172 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_8008E6E4;
}

loc_8008E6D8:
{
    r3 = r31;
    r4 = (r30 + 28);
    ctx->lr = 0x8008E6E4u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_25BD = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_25BD);
        r4 = static_cast<uint32_t>(regargs_result_80071070_25BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_8008E6E4:
{
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E46C func_8008E46C preserves=true fpr_mask=0x00000000
