#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8DF0(CpuContext* ctx);
extern "C" uint64_t func_800D8DF0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800DB9D8_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x800DB9D8u);
    goto loc_800DB9D8;

loc_800DB9D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 2812));
}

loc_800DBA04:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800DBB10;
    }
}

loc_800DBA08:
{
    r30 = 0;
    r3 = r29;
    ctx->lr = 0x800DBA14u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800D8DF0_603 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_603);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_603 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_800DBA18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800DBA60;
    }
}

loc_800DBA1C:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_800DBA24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800DBA40;
    }
}

loc_800DBA28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800DBA2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DBA50;
    }
}

loc_800DBA30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DBA58;
    }
}

loc_800DBA34:
{
}

loc_800DBA38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800DBA58;
    }
}

loc_800DBA3C:
{
    goto loc_800DBAA0;
}

loc_800DBA40:
{
}

loc_800DBA44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_800DBAA0;
    }
}

loc_800DBA48:
{
}

loc_800DBA4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_800DBA58;
    }
}

loc_800DBA50:
{
    r30 = 87;
    goto loc_800DBAA0;
}

loc_800DBA58:
{
    r30 = 88;
    goto loc_800DBAA0;
}

loc_800DBA60:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_800DBA68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800DBA84;
    }
}

loc_800DBA6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800DBA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800DBA94;
    }
}

loc_800DBA74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800DBA9C;
    }
}

loc_800DBA78:
{
}

loc_800DBA7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800DBA9C;
    }
}

loc_800DBA80:
{
    goto loc_800DBAA0;
}

loc_800DBA84:
{
}

loc_800DBA88:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_800DBAA0;
    }
}

loc_800DBA8C:
{
}

loc_800DBA90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_800DBA9C;
    }
}

loc_800DBA94:
{
    r30 = 187;
    goto loc_800DBAA0;
}

loc_800DBA9C:
{
    r30 = 188;
}

loc_800DBAA0:
{
}

loc_800DBAA4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800DBB10;
    }
}

loc_800DBAA8:
{
    r3 = r31;
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800D8EBC_12AE = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_12AE;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r31 = r3;
}

loc_800DBABC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DBB10;
    }
}

loc_800DBAC0:
{
    r4 = 3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 40), r4);
    MemoryInline::FlatWrite32((r3 + 44), r30);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = (r3 + 4);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
}

loc_800DBB10:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DB9D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DB9D8_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DB9D8 func_800DB9D8 preserves=true fpr_mask=0x00000000
