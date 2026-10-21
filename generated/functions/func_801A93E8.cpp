#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801A93E8_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801A93E8u);
    goto loc_801A93E8;

loc_801A93E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_801A93FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A942C;
    }
}

loc_801A9400:
{
}

loc_801A9404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801A9444;
    }
}

loc_801A9408:
{
}

loc_801A940C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801A9464;
    }
}

loc_801A9410:
{
}

loc_801A9414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801A94B0;
    }
}

loc_801A9418:
{
}

loc_801A941C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801A94E0;
    }
}

loc_801A9420:
{
}

loc_801A9424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801A94FC;
    }
}

loc_801A9428:
{
    goto loc_801A9510;
}

loc_801A942C:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_801A9514;
}

loc_801A9444:
{
    r4 = MemoryInline::FlatRead8((r3 + 851));
    r3 = 1;
    r0 = (r4 + -1);
    r3 = (r4 | ~r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_801A9514;
}

loc_801A9464:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21756));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9470:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9480;
    }
}

loc_801A9478:
{
    r3 = 0;
    goto loc_801A9514;
}

loc_801A9480:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9488:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A9494;
    }
}

loc_801A948C:
{
    r3 = 1;
    goto loc_801A9514;
}

loc_801A9494:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20916));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A949C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A94A8;
    }
}

loc_801A94A0:
{
    r3 = 2;
    goto loc_801A9514;
}

loc_801A94A8:
{
    r3 = 3;
    goto loc_801A9514;
}

loc_801A94B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 392));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20912));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A94BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A94C8;
    }
}

loc_801A94C0:
{
    r3 = 2;
    goto loc_801A9514;
}

loc_801A94C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21480));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A94D0:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
    r3 = (r0 & 255);
    goto loc_801A9514;
}

loc_801A94E0:
{
    r3 = 0;
    ctx->lr = 0x801A94E8u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B510C_118E = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_118E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r3 = (r0 & 255);
    goto loc_801A9514;
}

loc_801A94FC:
{
    r3 = MemoryInline::FlatRead8((r3 + 856));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_801A9514;
}

loc_801A9510:
{
    r3 = 0;
}

loc_801A9514:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A93E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A93E8_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A93E8 func_801A93E8 preserves=true fpr_mask=0x00000000
