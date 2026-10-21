#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D547C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D547Cu);
    goto loc_800D547C;

loc_800D547C:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r6 = (r4 + 65536);
    r6 = (r6 + 24688);
}

loc_800D548C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800D5498;
    }
}

loc_800D5490:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D5498:
{
}

loc_800D549C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_800D54A8;
    }
}

loc_800D54A0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D54A8:
{
    r5 = 0;
    r0 = 256;
    ctr = r0;
}

loc_800D54B4:
{
    r4 = MemoryInline::FlatRead32((r6 + 64));
}

loc_800D54BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D54EC;
    }
}

loc_800D54C0:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D54CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D54EC;
    }
}

loc_800D54D0:
{
    r0 = MemoryInline::FlatRead32((r6 + 68));
}

loc_800D54D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D54EC;
    }
}

loc_800D54DC:
{
}

loc_800D54E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_800D54EC;
    }
}

loc_800D54E4:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D54EC:
{
    r6 = (r6 + 76);
    r4 = MemoryInline::FlatRead32((r6 + 64));
}

loc_800D54F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D5528;
    }
}

loc_800D54FC:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D5508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D5528;
    }
}

loc_800D550C:
{
    r0 = MemoryInline::FlatRead32((r6 + 68));
}

loc_800D5514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D5528;
    }
}

loc_800D5518:
{
}

loc_800D551C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_800D5528;
    }
}

loc_800D5520:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D5528:
{
    r6 = (r6 + 76);
    r4 = MemoryInline::FlatRead32((r6 + 64));
}

loc_800D5534:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D5564;
    }
}

loc_800D5538:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D5544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D5564;
    }
}

loc_800D5548:
{
    r0 = MemoryInline::FlatRead32((r6 + 68));
}

loc_800D5550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D5564;
    }
}

loc_800D5554:
{
}

loc_800D5558:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_800D5564;
    }
}

loc_800D555C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D5564:
{
    r6 = (r6 + 76);
    r4 = MemoryInline::FlatRead32((r6 + 64));
}

loc_800D5570:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D55A0;
    }
}

loc_800D5574:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D5580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D55A0;
    }
}

loc_800D5584:
{
    r0 = MemoryInline::FlatRead32((r6 + 68));
}

loc_800D558C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D55A0;
    }
}

loc_800D5590:
{
}

loc_800D5594:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_800D55A0;
    }
}

loc_800D5598:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D55A0:
{
    r5 = (r5 + 3);
    r6 = (r6 + 76);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D54B4;
    }
}

loc_800D55AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D547C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D547C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D547C func_800D547C preserves=true fpr_mask=0x00000000
