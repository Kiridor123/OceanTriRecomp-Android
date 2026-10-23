#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8010D20C_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_8010D20C;

loc_8010D20C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = MemoryInline::FlatRead32((r3 + 56));
    r5 = 0x805A0000u;
    r7 = (r5 + -784);
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -736);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r8 = (r5 + r0);
}

loc_8010D23C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(32))) {
        goto loc_8010D244;
    }
}

loc_8010D240:
{
    r8 = (r8 + -32);
}

loc_8010D244:
{
    r9 = 1;
    r4 = (r7 + 8);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29280));
    r3 = (r8 ^ -2147483648);
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29288));
    goto loc_8010D290;
}

loc_8010D260:
{
    stackword1 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8010D278:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010D288;
    }
}

loc_8010D280:
{
    r5 = (r9 + -1);
    goto loc_8010D29C;
}

loc_8010D288:
{
    r4 = (r4 + 8);
    r9 = (r9 + 1);
}

loc_8010D290:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8010D298:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010D260;
    }
}

loc_8010D29C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29280));
    r0 = (r8 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 68));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = f0.d;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010D20C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010D20C_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x0000001B fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8010D20C func_8010D20C preserves=true fpr_mask=0x00000000
