#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80346538_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80346538;

loc_80346538:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r3 + 23));
}

loc_80346558:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80346564;
    }
}

loc_8034655C:
{
    r3 = 1;
    goto loc_80346600;
}

loc_80346564:
{
    r3 = MemoryInline::FlatRead8((r3 + 19));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80346574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80346584;
    }
}

loc_80346578:
{
}

loc_8034657C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803465AC;
    }
}

loc_80346580:
{
    goto loc_803465FC;
}

loc_80346584:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
}

loc_8034658C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803465FC;
    }
}

loc_80346590:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r0 = (r3 & 255);
}

loc_803465A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803465FC;
    }
}

loc_803465A4:
{
    r3 = 0;
    goto loc_80346600;
}

loc_803465AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
}

loc_803465B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803465C4;
    }
}

loc_803465B8:
{
}

loc_803465BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803465E0;
    }
}

loc_803465C0:
{
    goto loc_803465FC;
}

loc_803465C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r0 = (r3 & 255);
}

loc_803465D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803465FC;
    }
}

loc_803465D8:
{
    r3 = 0;
    goto loc_80346600;
}

loc_803465E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r0 = (r3 & 255);
}

loc_803465F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803465FC;
    }
}

loc_803465F4:
{
    r3 = 0;
    goto loc_80346600;
}

loc_803465FC:
{
    r3 = 1;
}

loc_80346600:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80346538(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80346538_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80346538 func_80346538 preserves=true fpr_mask=0x00000000
