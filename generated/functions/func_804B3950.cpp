#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804B3950_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B3950u);
    goto loc_804B3950;

loc_804B3950:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    ctx->lr = 0x804B3974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    r3 = r29;
    ctx->lr = 0x804B3980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r31 + -8);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r4 = (r4_rot_0 & -536870912);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r4 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_804B3994:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -1);
    r30 = (r0 + r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804B39D8;
    }
}

loc_804B39A0:
{
}

loc_804B39A4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(6))) {
        goto loc_804B39EC;
    }
}

loc_804B39A8:
{
    r0 = (r3 & 255);
}

loc_804B39AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B39C4;
    }
}

loc_804B39B0:
{
    r3 = MemoryAlias::FlatRead32((r2 + -2480));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 856);
    goto loc_804B3A18;
}

loc_804B39C4:
{
    r3 = MemoryAlias::FlatRead32((r2 + -2480));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 728);
    goto loc_804B3A18;
}

loc_804B39D8:
{
    r3 = MemoryAlias::FlatRead32((r2 + -2480));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 600);
    goto loc_804B3A18;
}

loc_804B39EC:
{
    r0 = (r3 & 255);
}

loc_804B39F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B3A08;
    }
}

loc_804B39F4:
{
    r3 = MemoryAlias::FlatRead32((r2 + -2480));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 728);
    goto loc_804B3A18;
}

loc_804B3A08:
{
    r3 = MemoryAlias::FlatRead32((r2 + -2480));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 600);
}

loc_804B3A18:
{
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B3950(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B3950_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B3950 func_804B3950 preserves=true fpr_mask=0x00000000
