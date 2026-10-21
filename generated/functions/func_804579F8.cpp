#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804579F8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x804579F8u);
    goto loc_804579F8;

loc_804579F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r5 = (r5_rot_0 & 2047);
}

loc_80457A10:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1023))) {
        goto loc_80457A20;
    }
}

loc_80457A14:
{
    r3 = 0;
    r4 = 0;
    goto loc_80457A98;
}

loc_80457A20:
{
    r6 = (r3 & -2147483648);
}

loc_80457A24:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80457A14;
    }
}

loc_80457A28:
{
    r3 = (r3 & 1048575);
    r3 = (r3 | 1048576);
    r5 = (r5 + -1075);
}

loc_80457A38:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80457A64;
    }
}

loc_80457A3C:
{
    r5 = (0 - r5);
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r10 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r4 = (r4 | r10);
    r10 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
    r4 = (r4 | r10);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    goto loc_80457A98;
}

loc_80457A64:
{
}

loc_80457A68:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(11))) {
        goto loc_80457A78;
    }
}

loc_80457A6C:
{
    r3 = -1;
    r4 = -1;
    goto loc_80457A98;
}

loc_80457A78:
{
    r8 = (32 - r5);
    r9 = (r5 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80457A98:
{
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804579F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804579F8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000077A gpr_write=0x0000077A gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804579F8 func_804579F8 preserves=true fpr_mask=0x00000000
