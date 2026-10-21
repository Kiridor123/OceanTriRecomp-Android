#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081D190(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081D190u);
    goto loc_8081D190;

loc_8081D190:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8081D1B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_8081D1C0;
    }
}

loc_8081D1B8:
{
    r3 = -2;
    goto loc_8081D1FC;
}

loc_8081D1C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = r0;
    // inline leaf 0x8081DD30 (7 guest instruction(s))
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8081DD30
}

loc_8081D1D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081D1E0;
    }
}

loc_8081D1D4:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
}

loc_8081D1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081D1E8;
    }
}

loc_8081D1E0:
{
    r3 = -2;
    goto loc_8081D1FC;
}

loc_8081D1E8:
{
    r5 = 0x80820000u;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    r5 = (r5 + -11744);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804EF3C0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8081D1FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D190 func_8081D190 preserves=true fpr_mask=0x00000000
