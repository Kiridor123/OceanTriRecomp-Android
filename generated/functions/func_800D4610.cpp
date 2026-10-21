#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800D4610_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800D4610u);
    goto loc_800D4610;

loc_800D4610:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r29 = r4;
    r3 = 24;
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r31 = r3;
    r3 = r29;
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r4 = MemoryInline::FlatRead32((r30 + 48));
    goto loc_800D478C;
}

loc_800D4654:
{
    r6 = MemoryInline::FlatRead32((r4 + 16));
}

loc_800D465C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r3))) {
        goto loc_800D4788;
    }
}

loc_800D4660:
{
    r5 = (r3 + r31);
    r0 = (r5 + 32);
}

loc_800D466C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_800D46D4;
    }
}

loc_800D4670:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_800D4678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D4688;
    }
}

loc_800D467C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_800D4690;
}

loc_800D4688:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_800D4690:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800D4698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D46A4;
    }
}

loc_800D469C:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_800D46A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
}

loc_800D46AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D46B4;
    }
}

loc_800D46B0:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_800D46B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 44));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 44), r4);
    goto loc_800D4780;
}

loc_800D46D4:
{
    r0 = (r4 + r31);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 - r3);
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 16), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r6 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
}

loc_800D4714:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D471C;
    }
}

loc_800D4718:
{
    MemoryInline::FlatWrite32((r5 + 8), r6);
}

loc_800D471C:
{
    MemoryInline::FlatWrite32((r6 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r5 = MemoryInline::FlatRead32(r4);
}

loc_800D472C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D4738;
    }
}

loc_800D4730:
{
    MemoryInline::FlatWrite32((r5 + 4), r6);
    goto loc_800D473C;
}

loc_800D4738:
{
    MemoryInline::FlatWrite32((r30 + 48), r6);
}

loc_800D473C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800D4744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D4750;
    }
}

loc_800D4748:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r5, r6);
}

loc_800D4750:
{
    r5 = MemoryInline::FlatRead32((r30 + 44));
}

loc_800D4758:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D4760;
    }
}

loc_800D475C:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_800D4760:
{
    r0 = MemoryInline::FlatRead32((r30 + 44));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 16), r3);
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 44), r4);
}

loc_800D4780:
{
    r3 = (r4 + r31);
    goto loc_800D47B4;
}

loc_800D4788:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800D478C:
{
}

loc_800D4790:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800D4654;
    }
}

loc_800D4794:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24308);
    r4 = 580;
    r5 = 0x80590000u;
    r5 = (r5 + 24280);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D47B0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    r3 = 0;
}

loc_800D47B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D4610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D4610_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D4610 func_800D4610 preserves=true fpr_mask=0x00000000
