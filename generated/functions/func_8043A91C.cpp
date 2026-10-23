#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8043A91C_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_lfsx_8043A930_loc_0 = 0;
    uint32_t addr_lfsx_8043A954_loc_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8043A91C;

loc_8043A91C:
{
    r0 = (r4 & 255);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r0 = (r6 * 12);
    r4 = 0x80600000u;
    r5 = (r4 + 20512);
    addr_lfsx_8043A930_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8043A930_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 452), f0.d);
    r4 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 456), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 460), f0.d);
    r0 = (r6 + 1);
    r0 = (r0 * 12);
    addr_lfsx_8043A954_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8043A954_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 476), f0.d);
    r4 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 480), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 484), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return r4;
}

}

extern "C" void func_8043A91C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8043A91C_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043A91C func_8043A91C preserves=true fpr_mask=0x00000000
