#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80144F54_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80144F54;

loc_80144F54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80144F70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80144FE8;
    }
}

loc_80144F74:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 1);
}

loc_80144F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80144FE8;
    }
}

loc_80144F84:
{
    r3 = (r4 & 255);
    // inline leaf 0x80145018 (11 guest instruction(s))
}

loc_inl0_0x80145018:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r4 = MemoryInline::FlatRead32((r4 + 3912));
}

loc_inl0_0x80145028:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8014503C;
    }
}

loc_inl0_0x8014502C:
{
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    goto loc_inl0_cont_80145018;
}

loc_inl0_0x8014503C:
{
    r3 = 0;
}

loc_inl0_cont_80145018:
{
    // end of inlined leaf 0x80145018
}

loc_80144F90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80144FE8;
    }
}

loc_80144F94:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80144F9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80144FE8;
    }
}

loc_80144FA0:
{
    goto loc_80144FDC;
}

loc_80144FA4:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_80144FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80144FD8;
    }
}

loc_80144FB0:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80144FB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80144FCC;
    }
}

loc_80144FBC:
{
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80144FC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80144FD8;
    }
}

loc_80144FCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27848));
    MemoryInline::FlatWriteFloat32((r31 + 464), f0.d);
    goto loc_80144FE8;
}

loc_80144FD8:
{
    r4 = (r4 + 12);
}

loc_80144FDC:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80144FE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80144FA4;
    }
}

loc_80144FE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80144F54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80144F54_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80144F54 func_80144F54 preserves=true fpr_mask=0x00000000
