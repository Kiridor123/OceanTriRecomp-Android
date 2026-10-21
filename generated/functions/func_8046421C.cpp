#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8046421C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_sthu_ea_0 = 0;
    uint32_t r6_sthu_ea_1 = 0;
    uint32_t r6_sthu_ea_2 = 0;
    uint32_t r6_sthu_ea_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8046421Cu);
    goto loc_8046421C;

loc_8046421C:
{
    r4 = (r4 + -2);
    r6 = (r3 + -2);
}

loc_80464224:
{
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8046422C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464224;
    }
}

loc_80464230:
{
    r6 = (r6 + -2);
    r5 = (r5 + 1);
    goto loc_80464254;
}

loc_8046423C:
{
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r6_sthu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite16(r6_sthu_ea_2, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_2;
}

loc_80464248:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464254;
    }
}

loc_8046424C:
{
    r6 = (r6 + -2);
    goto loc_8046425C;
}

loc_80464254:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_80464258:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046423C;
    }
}

loc_8046425C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8046421C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8046421C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046421C func_8046421C preserves=true fpr_mask=0x00000000
