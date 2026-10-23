#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_804B4CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_804B4CD0;

loc_804B4CD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -15408));
}

loc_804B4CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B4CF8;
    }
}

loc_804B4CEC:
{
    r0 = MemoryInline::FlatRead8((r13 + -15407));
}

loc_804B4CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B4D00;
    }
}

loc_804B4CF8:
{
    r3 = 0;
    goto loc_804B4DB8;
}

loc_804B4D00:
{
    r4 = 0x80750000u;
    r3 = 0x80750000u;
    r6 = MemoryInline::FlatRead32((r4 + -26784));
    r4 = MemoryInline::FlatRead32((r3 + -26748));
}

loc_804B4D14:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r6))) {
        goto loc_804B4D1C;
    }
}

loc_804B4D18:
{
    r7 = 1;
}

loc_804B4D1C:
{
    r5 = 0x80750000u;
    r3 = 0x80750000u;
    r5 = (r5 + -26784);
    r3 = (r3 + -26748);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804B4D38:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_804B4D40;
    }
}

loc_804B4D3C:
{
    r7 = (r7 + 1);
}

loc_804B4D40:
{
}

loc_804B4D44:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(2))) {
        goto loc_804B4D50;
    }
}

loc_804B4D48:
{
    r3 = 1;
    goto loc_804B4DB8;
}

loc_804B4D50:
{
    r3 = (r5 - r6);
    r6 = (r0 - r4);
    r0 = 0;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_804B4D68;
    }
}

loc_804B4D60:
{
}

loc_804B4D64:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(0))) {
        goto loc_804B4D78;
    }
}

loc_804B4D68:
{
}

loc_804B4D6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804B4D7C;
    }
}

loc_804B4D70:
{
}

loc_804B4D74:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804B4D7C;
    }
}

loc_804B4D78:
{
    r0 = 1;
}

loc_804B4D7C:
{
}

loc_804B4D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B4DB4;
    }
}

loc_804B4D84:
{
    r3 = 0x80620000u;
    r3 = (r3 + -20384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804B4D94u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_EB0 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_EB0);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_EB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r4 = 0x80750000u;
    r3 = 0x80620000u;
    r5 = (r4 + -26784);
    r4 = MemoryInline::FlatRead32((r4 + -26784));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r3 = (r3 + -20360);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804B4DB4u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_1634 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_1634);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_1634 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804B4DB4:
{
    r3 = 0;
}

loc_804B4DB8:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B4CD0 func_804B4CD0 preserves=true fpr_mask=0x00000000
