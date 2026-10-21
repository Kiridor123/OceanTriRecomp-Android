#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint32_t r7_stbu_ea_4 = 0;
    uint32_t r7_stbu_ea_5 = 0;
    uint32_t r7_stbu_ea_6 = 0;
    uint32_t r7_stbu_ea_7 = 0;
    uint32_t r7_stbu_ea_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8045FBD4u);
    goto loc_8045FBD4;

loc_8045FBD4:
{
    r0 = (r3 & 3);
    r5 = (r4 & 3);
}

loc_8045FBE0:
{
    r7 = r3;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_8045FC70;
    }
}

loc_8045FBE8:
{
}

loc_8045FBEC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045FC2C;
    }
}

loc_8045FBF0:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8045FBFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045FC00:
{
    r0 = (3 - r5);
    ctr = r0;
}

loc_8045FC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FC24;
    }
}

loc_8045FC10:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r7_stbu_ea_2 = (r7 + 1);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
}

loc_8045FC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045FC20:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045FC10;
    }
}

loc_8045FC24:
{
    r7 = (r7 + 1);
    r4 = (r4 + 1);
}

loc_8045FC2C:
{
    r8 = MemoryInline::FlatRead32(r4);
    r5 = 0x80810000u;
    r5 = (r5 + -32640);
    r6 = (r8 + -16842752);
    r6 = (r6 + -257);
    r6 = (r6 & ~r8);
    r0 = (r6 & r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FC70;
    }
}

loc_8045FC4C:
{
    r7 = (r7 + -4);
}

loc_8045FC50:
{
    MemoryInline::FlatWrite32((r7 + 4), r8);
    r7 = (r7 + 4);
    r4 = (r4 + 4);
    r8 = MemoryInline::FlatRead32(r4);
    r6 = (r8 + -16842752);
    r6 = (r6 + -257);
    r6 = (r6 & ~r8);
    r0 = (r6 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FC50;
    }
}

loc_8045FC6C:
{
    r7 = (r7 + 4);
}

loc_8045FC70:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
}

loc_8045FC7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045FC80:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r7_stbu_ea_7 = (r7 + 1);
    MemoryInline::FlatWrite8(r7_stbu_ea_7, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_7;
}

loc_8045FC8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FC80;
    }
}

loc_8045FC90:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8045FBD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045FBD4_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045FBD4 func_8045FBD4 preserves=true fpr_mask=0x00000000
