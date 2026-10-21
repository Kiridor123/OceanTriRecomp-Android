#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80459464(CpuContext* ctx);
extern "C" uint32_t func_80459464_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80459314_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80459314u);
    goto loc_80459314;

loc_80459314:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r4);
    r6 = (r0 & -8);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32(r4, r0);
    r5 = (r4 + r6);
    r4_addr_0 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r0 & -5);
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    MemoryInline::FlatWrite32((r5 + -4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -8);
    r31 = (r3 + r0);
    r31 = (r31 + -4);
    r3 = MemoryInline::FlatRead32(r31);
}

loc_80459364:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80459424;
    }
}

loc_80459368:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r4;
    MemoryInline::FlatWrite32((r4 + 8), r5);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r5 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32(r31, r4);
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 4);
}

loc_80459394:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80459414;
    }
}

loc_80459398:
{
    r6 = MemoryInline::FlatRead32((r4 + -4));
    r0 = (r6 & 2);
}

loc_804593A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804593A8;
    }
}

loc_804593A4:
{
    goto loc_80459414;
}

loc_804593A8:
{
    r3 = (r4 - r6);
    r0 = MemoryInline::FlatRead32(r3);
    r5 = (r0 & 7);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -8);
    r0 = (r6 + r0);
    r5_mrot_1 = (r0 & -8);
    r5_mdest_1 = (r5 & 7);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r5 & 2);
}

loc_804593D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804593E8;
    }
}

loc_804593D4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -8);
    r0 = (r6 + r0);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + -4), r0);
}

loc_804593E8:
{
    r5 = MemoryInline::FlatRead32(r31);
}

loc_804593F0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_804593FC;
    }
}

loc_804593F4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32(r31, r0);
}

loc_804593FC:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 12), r5);
}

loc_80459414:
{
    MemoryInline::FlatWrite32(r31, r3);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80459464u>(&func_80459464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80459464_FAD = func_80459464_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80459464_FAD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80459464u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_80459430;
}

loc_80459424:
{
    MemoryInline::FlatWrite32(r31, r4);
    MemoryInline::FlatWrite32((r4 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 12), r4);
}

loc_80459430:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 & -8);
}

loc_80459444:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8045944C;
    }
}

loc_80459448:
{
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_8045944C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80459314(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80459314_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80459314 func_80459314 preserves=true fpr_mask=0x00000000
