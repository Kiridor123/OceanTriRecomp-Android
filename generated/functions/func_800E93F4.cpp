#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E93F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    MKW_GUEST_ENTER(0x800E93F4u);
    goto loc_800E93F4;

loc_800E93F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30084));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30132));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30088));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
}

loc_800E9424:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(30))) {
        goto loc_800E9430;
    }
}

loc_800E9428:
{
    r3 = 30;
    goto loc_800E943C;
}

loc_800E9430:
{
}

loc_800E9434:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_800E943C;
    }
}

loc_800E9438:
{
    r3 = 1;
}

loc_800E943C:
{
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x00000006 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E93F4 func_800E93F4 preserves=true fpr_mask=0x00000000
