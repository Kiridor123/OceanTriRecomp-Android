#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042A2D4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8042A2D4;

loc_8042A2D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_8042A2F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8042A304;
    }
}

loc_8042A2FC:
{
    r3 = -1;
    goto loc_8042A324;
}

loc_8042A304:
{
    r3 = MemoryInline::FlatRead32((r31 + 136));
}

loc_8042A30C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8042A318;
    }
}

loc_8042A310:
{
    r3 = -1;
    goto loc_8042A324;
}

loc_8042A318:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_8042A324:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8042A2D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042A2D4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042A2D4 func_8042A2D4 preserves=true fpr_mask=0x00000000
