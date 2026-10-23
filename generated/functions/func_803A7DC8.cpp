#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803A7DC8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t addr_lfsx_803A7DF8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_803A7DC8;

loc_803A7DC8:
{
    r0 = (r3 & 255);
}

loc_803A7DD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803A7DDC;
    }
}

loc_803A7DD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5680));
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    return r3;
}

loc_803A7DDC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x805F0000u;
    r3 = (r3 + 10432);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 10488);
    addr_lfsx_803A7DF8_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_803A7DF8_loc_0);
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_803A7DC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803A7DC8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A7DC8 func_803A7DC8 preserves=true fpr_mask=0x00000000
