#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800AF0CC_ra8_1e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800AF0CCu);
    goto loc_800AF0CC;

loc_800AF0CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_800AF0F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF100;
    }
}

loc_800AF0F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_800AF0FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF108;
    }
}

loc_800AF100:
{
    r3 = 3;
    goto loc_800AF188;
}

loc_800AF108:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_800AF110:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF11C;
    }
}

loc_800AF114:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AF118:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF124;
    }
}

loc_800AF11C:
{
    r3 = 3;
    goto loc_800AF188;
}

loc_800AF124:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_800AF12C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AF138;
    }
}

loc_800AF130:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF134:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF140;
    }
}

loc_800AF138:
{
    r3 = 3;
    goto loc_800AF188;
}

loc_800AF140:
{
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AF150:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AF15C;
    }
}

loc_800AF154:
{
    r3 = 3;
    goto loc_800AF188;
}

loc_800AF15C:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AF160:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AF16C;
    }
}

loc_800AF164:
{
    r3 = 1;
    goto loc_800AF188;
}

loc_800AF16C:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_800AF170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AF17C;
    }
}

loc_800AF174:
{
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_800AF178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AF184;
    }
}

loc_800AF17C:
{
    r3 = 1;
    goto loc_800AF188;
}

loc_800AF184:
{
    r3 = 2;
}

loc_800AF188:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_800AF0CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800AF0CC_ra8_1e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AF0CC func_800AF0CC preserves=true fpr_mask=0x00000000
