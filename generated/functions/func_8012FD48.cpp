#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012FD48_ra18_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8012FD48u);
    goto loc_8012FD48;

loc_8012FD48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 476));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012FD64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012FDF0;
    }
}

loc_8012FD68:
{
}

loc_8012FD6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8012FD80;
    }
}

loc_8012FD70:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 472));
    r4 = 0;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl0_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl0_cont_8012FD28;
}

loc_inl0_return:
{
}

loc_inl0_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    goto loc_8012FDE4;
}

loc_8012FD80:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 468));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 472));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_8012FDB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FDD0;
    }
}

loc_8012FDBC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012FDC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012FDE0;
    }
}

loc_8012FDC8:
{
    f3.d = f2.d;
    goto loc_8012FDE0;
}

loc_8012FDD0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012FDD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FDE0;
    }
}

loc_8012FDDC:
{
    f3.d = f2.d;
}

loc_8012FDE0:
{
    MemoryInline::FlatWriteFloat32((r3 + 468), f3.d);
}

loc_8012FDE4:
{
    r3 = MemoryInline::FlatRead16((r31 + 476));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 476), static_cast<uint16_t>(r0));
}

loc_8012FDF0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012FD48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012FD48_ra18_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FD48 func_8012FD48 preserves=true fpr_mask=0x00000000
