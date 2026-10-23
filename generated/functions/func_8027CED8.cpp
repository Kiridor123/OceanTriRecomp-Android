#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027CED8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027CED8;

loc_8027CED8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8027CEF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027CF70;
    }
}

loc_8027CEF8:
{
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1153));
}

loc_8027CF08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027CF68;
    }
}

loc_8027CF0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027CF44;
    }
}

loc_8027CF10:
{
}

loc_8027CF14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1116))) {
        goto loc_8027CF30;
    }
}

loc_8027CF18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1104));
}

loc_8027CF1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027CF68;
    }
}

loc_8027CF20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8027CF70;
    }
}

loc_8027CF24:
{
}

loc_8027CF28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1114))) {
        goto loc_8027CF68;
    }
}

loc_8027CF2C:
{
    goto loc_8027CF70;
}

loc_8027CF30:
{
}

loc_8027CF34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1133))) {
        goto loc_8027CF70;
    }
}

loc_8027CF38:
{
}

loc_8027CF3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1130))) {
        goto loc_8027CF68;
    }
}

loc_8027CF40:
{
    goto loc_8027CF70;
}

loc_8027CF44:
{
}

loc_8027CF48:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1180))) {
        goto loc_8027CF60;
    }
}

loc_8027CF4C:
{
}

loc_8027CF50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1165))) {
        goto loc_8027CF70;
    }
}

loc_8027CF54:
{
}

loc_8027CF58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1163))) {
        goto loc_8027CF68;
    }
}

loc_8027CF5C:
{
    goto loc_8027CF70;
}

loc_8027CF60:
{
}

loc_8027CF64:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1183))) {
        goto loc_8027CF70;
    }
}

loc_8027CF68:
{
    r3 = 1;
    goto loc_8027CF74;
}

loc_8027CF70:
{
    r3 = 0;
}

loc_8027CF74:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8027CED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027CED8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027CED8 func_8027CED8 preserves=true fpr_mask=0x00000000
