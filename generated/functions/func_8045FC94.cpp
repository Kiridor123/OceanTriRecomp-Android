#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8045FC94u);
    goto loc_8045FC94;

loc_8045FC94:
{
    r4 = (r4 + -1);
    r6 = (r3 + -1);
    r5 = (r5 + 1);
    goto loc_8045FCCC;
}

loc_8045FCA4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r6_stbu_ea_2 = (r6 + 1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
}

loc_8045FCB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FCCC;
    }
}

loc_8045FCB4:
{
    r0 = 0;
    goto loc_8045FCC0;
}

loc_8045FCBC:
{
    r6_stbu_ea_4 = (r6 + 1);
    MemoryInline::FlatWrite8(r6_stbu_ea_4, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_4;
}

loc_8045FCC0:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + -1);
}

loc_8045FCC4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FCBC;
    }
}

loc_8045FCC8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_8045FCCC:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045FCD0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045FCA4;
    }
}

loc_8045FCD4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8045FC94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045FC94_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045FC94 func_8045FC94 preserves=true fpr_mask=0x00000000
