#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802E2C6C_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802E2C6C;

loc_802E2C6C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r4 + 4));
    r29 = r31;
    r28 = MemoryInline::FlatRead16((r4 + 2));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 32768);
}

loc_802E2CA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E2CC0;
    }
}

loc_802E2CA8:
{
    r0 = (r28 + -1);
    r0 = (r0 * 6);
    r31_addr_1 = (r31 + r0);
    r3 = MemoryInline::FlatRead16(r31_addr_1);
    r4 = (r5 & 65535);
    // inline leaf 0x802E2750 (8 guest instruction(s))
    r4 = (r4 & 65535);
    r3 = (r3 & 65535);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x802E2750
    r5 = r3;
}

loc_802E2CC0:
{
    r3 = (r5 & 65535);
}

loc_802E2CC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E2CDC;
    }
}

loc_802E2CCC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_802E2DC8;
}

loc_802E2CDC:
{
    r5 = MemoryInline::FlatRead16(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_802E2CE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E2CF8;
    }
}

loc_802E2CE8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_802E2DC8;
}

loc_802E2CF8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802E2D28;
    }
}

loc_802E2CFC:
{
    r28 = (r28 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E2D08:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802E2D1C;
    }
}

loc_802E2D0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_802E2DC8;
}

loc_802E2D1C:
{
    r29 = r31;
    r31 = (r31 + 6);
    goto loc_802E2CDC;
}

loc_802E2D28:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
}

loc_802E2D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E2D40;
    }
}

loc_802E2D34:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_802E2DC4;
}

loc_802E2D40:
{
    r6 = MemoryInline::FlatRead16(r29);
    r0 = (r3 - r6);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 1127219200;
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r5 - r6);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword9 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r5 = MemoryInline::FlatRead16((r29 + 4));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword11 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
}

loc_802E2DC4:
{
    r3 = 1;
}

loc_802E2DC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E2C6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E2C6C_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E2C6C func_802E2C6C preserves=true fpr_mask=0x00000000
