#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801CA1D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801CA1D4u);
    goto loc_801CA1D4;

loc_801CA1D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_801CA208:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_801CA214;
    }
}

loc_801CA20C:
{
    r3 = 0;
    goto loc_801CA2A0;
}

loc_801CA214:
{
    r6 = 0;
    r3 = 0x805B0000u;
    r3 = (r3 + 17560);
    goto loc_801CA288;
}

loc_801CA224:
{
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_801CA22C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_801CA284;
    }
}

loc_801CA230:
{
    r3 = 0x805B0000u;
    r0 = (r3 + 17560);
    r3 = (r0 + r5);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r3 = (r30 & 255);
    goto loc_801CA274;
}

loc_801CA250:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_801CA258:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801CA26C;
    }
}

loc_801CA25C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    r3 = MemoryInline::FlatRead8((r6 + 1));
    goto loc_801CA2A0;
}

loc_801CA26C:
{
    r5 = (r5 + 1);
    r6 = (r6 + 8);
}

loc_801CA274:
{
    r0 = (r5 & 255);
}

loc_801CA27C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_801CA250;
    }
}

loc_801CA280:
{
    goto loc_801CA29C;
}

loc_801CA284:
{
    r6 = (r6 + 1);
}

loc_801CA288:
{
    r0 = (r6 & 255);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -8);
    r3_addr_2 = (r3 + r5);
    r4 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_801CA298:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_801CA224;
    }
}

loc_801CA29C:
{
    r3 = 0;
}

loc_801CA2A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801CA1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801CA1D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CA1D4 func_801CA1D4 preserves=true fpr_mask=0x00000000
