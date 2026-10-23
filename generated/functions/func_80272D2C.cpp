#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80272D2C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80272D2C;

loc_80272D2C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = (r4 & 255);
}

loc_80272D50:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_80272D5C;
    }
}

loc_80272D54:
{
    r3 = 0;
    goto loc_80272DA8;
}

loc_80272D5C:
{
    // inline leaf 0x80272CE4 (18 guest instruction(s))
}

loc_inl0_0x80272CE4:
{
    r4 = (r4 & 255);
}

loc_inl0_0x80272CEC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_inl0_0x80272CF8;
    }
}

loc_inl0_0x80272CF0:
{
    r3 = 0;
    goto loc_inl0_cont_80272CE4;
}

loc_inl0_0x80272CF8:
{
    r0 = (r4 & 128);
}

loc_inl0_0x80272D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80272D1C;
    }
}

loc_inl0_0x80272D04:
{
    r4 = (r4 & 127);
    r0 = (r4 + 26);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 632));
    goto loc_inl0_cont_80272CE4;
}

loc_inl0_0x80272D1C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 632));
}

loc_inl0_cont_80272CE4:
{
    // end of inlined leaf 0x80272CE4
    r0 = (r3 & 65535);
}

loc_80272D68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(53))) {
        goto loc_80272D74;
    }
}

loc_80272D6C:
{
    r3 = 20;
    goto loc_80272DA8;
}

loc_80272D74:
{
    r3 = (r31 & 255);
    r0 = (r3 & 128);
}

loc_80272D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272D9C;
    }
}

loc_80272D84:
{
    r3 = (r3 & 127);
    r0 = (r3 + 26);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 634));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_80272DA8;
}

loc_80272D9C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 634));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80272DA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80272D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80272D2C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80272D2C func_80272D2C preserves=true fpr_mask=0x00000000
