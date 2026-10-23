#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8020FD04_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8020FD04;

loc_8020FD04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8020FD18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020FD28;
    }
}

loc_8020FD1C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8020FD24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020FD30;
    }
}

loc_8020FD28:
{
    r3 = 1;
    goto loc_8020FD58;
}

loc_8020FD30:
{
    r3 = MemoryInline::FlatRead8((r3 + 22));
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_8020FD3C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8020FD48;
    }
}

loc_8020FD40:
{
    r3 = 1;
    goto loc_8020FD58;
}

loc_8020FD48:
{
    r3 = r4;
    // inline leaf 0x8020FCCC (14 guest instruction(s))
}

loc_inl0_0x8020FCCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl0_0x8020FCD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8020FCE0;
    }
}

loc_inl0_0x8020FCD8:
{
    r3 = 0;
    goto loc_inl0_cont_8020FCCC;
}

loc_inl0_0x8020FCE0:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r3 + -19);
    r3 = 5;
    r0 = (5 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8020FCCC:
{
    // end of inlined leaf 0x8020FCCC
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_8020FD58:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8020FD04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020FD04_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020FD04 func_8020FD04 preserves=true fpr_mask=0x00000000
