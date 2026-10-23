#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801FCBCC_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t addr_lhax_801FCC24_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];

    goto loc_801FCBCC;

loc_801FCBCC:
{
    r0 = (r3 + -1000);
    r6 = (r0 & 65535);
    r0 = (r3 & 65535);
}

loc_801FCBDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1000))) {
        goto loc_801FCBE8;
    }
}

loc_801FCBE0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_801FCBE8:
{
    r5 = MemoryInline::FlatRead32((r13 + -17208));
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (static_cast<int32_t>(r4) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    r0 = (static_cast<int32_t>(r4) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r6 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    addr_lhax_801FCC24_loc_0 = (r5 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_801FCC24_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_801FCBCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801FCBCC_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002048 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801FCBCC func_801FCBCC preserves=true fpr_mask=0x00000000
