#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8018377C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8018377C;

loc_8018377C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80183798:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801837AC;
    }
}

loc_8018379C:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
    goto loc_801837B8;
}

loc_801837AC:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r31 + 2102), static_cast<uint16_t>(r0));
}

loc_801837B8:
{
    r3 = MemoryInline::FlatRead16((r31 + 858));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_801837C0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801837CC;
    }
}

loc_801837C4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 858), static_cast<uint16_t>(r0));
}

loc_801837CC:
{
    r3 = MemoryInline::FlatRead16((r31 + 860));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_801837D4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801837E0;
    }
}

loc_801837D8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 860), static_cast<uint16_t>(r0));
}

loc_801837E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_801837E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801837F8;
    }
}

loc_801837EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 906), static_cast<uint8_t>(r0));
    goto loc_80183800;
}

loc_801837F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 906), static_cast<uint8_t>(r0));
}

loc_80183800:
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

extern "C" void func_8018377C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8018377C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8018377C func_8018377C preserves=true fpr_mask=0x00000000
