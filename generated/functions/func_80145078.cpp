#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80145078_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80145078;

loc_80145078:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r3 & 255);
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
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
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

loc_801450A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801450C0;
    }
}

loc_801450A4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801450AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801450C0;
    }
}

loc_801450B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = (r13 + -17296);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r31));
}

loc_801450C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80145078(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80145078_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80145078 func_80145078 preserves=true fpr_mask=0x00000000
