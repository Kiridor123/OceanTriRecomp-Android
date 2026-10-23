#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FF364(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809FF364;

loc_809FF364:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -2);
}

loc_809FF384:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_809FF3E0;
    }
}

loc_809FF388:
{
    r4 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809FF390:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809FF3A0;
    }
}

loc_809FF394:
{
}

loc_809FF398:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_809FF3AC;
    }
}

loc_809FF39C:
{
    goto loc_809FF3F0;
}

loc_809FF3A0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
}

loc_809FF3AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_809FF3BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_809FF3D0;
    }
}

loc_809FF3C0:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_809FF3F0;
}

loc_809FF3D0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x809FF3DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809FF0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_809FF3F0;
}

loc_809FF3E0:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
}

loc_809FF3F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FF364 func_809FF364 preserves=true fpr_mask=0x00000000
