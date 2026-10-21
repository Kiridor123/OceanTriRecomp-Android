#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803752F4_ra18_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x803752F4u);
    goto loc_803752F4;

loc_803752F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_80375308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80375328;
    }
}

loc_8037530C:
{
}

loc_80375310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8037539C;
    }
}

loc_80375314:
{
}

loc_80375318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803753B4;
    }
}

loc_8037531C:
{
}

loc_80375320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803753DC;
    }
}

loc_80375324:
{
    goto loc_803753F0;
}

loc_80375328:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8776));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8037533C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8037534C;
    }
}

loc_80375344:
{
    r3 = 2;
    goto loc_803753F4;
}

loc_8037534C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8752));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80375354:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80375364;
    }
}

loc_8037535C:
{
    r3 = 1;
    goto loc_803753F4;
}

loc_80375364:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8656));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8037536C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8037537C;
    }
}

loc_80375374:
{
    r3 = 4;
    goto loc_803753F4;
}

loc_8037537C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7736));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80375384:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80375394;
    }
}

loc_8037538C:
{
    r3 = 3;
    goto loc_803753F4;
}

loc_80375394:
{
    r3 = 0;
    goto loc_803753F4;
}

loc_8037539C:
{
    // inline leaf 0x80375558 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80375558
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r3 = (r0 & 255);
    goto loc_803753F4;
}

loc_803753B4:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803753BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803753D4;
    }
}

loc_803753C0:
{
    // inline leaf 0x8027DCC8 (5 guest instruction(s))
    r3 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r3 + -9184));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8027DCC8
}

loc_803753C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803753D4;
    }
}

loc_803753CC:
{
    r3 = 1;
    goto loc_803753F4;
}

loc_803753D4:
{
    r3 = 0;
    goto loc_803753F4;
}

loc_803753DC:
{
    r3 = MemoryInline::FlatRead16((r3 + 830));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_803753F4;
}

loc_803753F0:
{
    r3 = 0;
}

loc_803753F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_803752F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803752F4_ra18_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803752F4 func_803752F4 preserves=true fpr_mask=0x00000000
