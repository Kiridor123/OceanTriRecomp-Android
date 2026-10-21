#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80043F10_ra8_e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80043F10u);
    goto loc_80043F10;

loc_80043F10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = 0x80670000u;
    r4 = (r3 + -18184);
    r3 = 0x80670000u;
    r3 = (r3 + -18152);
    r0 = MemoryInline::FlatRead16((r4 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17908));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -17924));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17904));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -17920));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8004403C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80044044;
    }
}

loc_80044040:
{
    goto loc_80044060;
}

loc_80044044:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80044054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8004405C;
    }
}

loc_80044058:
{
    goto loc_80044060;
}

loc_8004405C:
{
    f0.d = f2.d;
}

loc_80044060:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80044068:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80044070;
    }
}

loc_8004406C:
{
    goto loc_8004408C;
}

loc_80044070:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80044080:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80044088;
    }
}

loc_80044084:
{
    goto loc_8004408C;
}

loc_80044088:
{
    f1.d = f3.d;
}

loc_8004408C:
{
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3 = 0x80670000u;
    MemoryInline::FlatWriteRam16((r3 + -18184), static_cast<uint16_t>(r0));
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r3 = 0x80670000u;
    MemoryInline::FlatWriteRam16((r3 + -18152), static_cast<uint16_t>(r0));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80043F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80043F10_ra8_e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80043F10 func_80043F10 preserves=true fpr_mask=0x00000000
