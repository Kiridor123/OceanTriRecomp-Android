#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081C270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081C270u);
    goto loc_8081C270;

loc_8081C270:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C288:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C294;
    }
}

loc_8081C28C:
{
    r3 = 0;
    goto loc_8081C35C;
}

loc_8081C294:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C29C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C2A8;
    }
}

loc_8081C2A0:
{
    r3 = 1;
    goto loc_8081C35C;
}

loc_8081C2A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C2B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C2BC;
    }
}

loc_8081C2B4:
{
    r3 = 0;
    goto loc_8081C35C;
}

loc_8081C2BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C2C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C2D0;
    }
}

loc_8081C2C8:
{
    r3 = 1;
    goto loc_8081C35C;
}

loc_8081C2D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C2D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C2E4;
    }
}

loc_8081C2DC:
{
    r3 = 0;
    goto loc_8081C35C;
}

loc_8081C2E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C2EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C2F8;
    }
}

loc_8081C2F0:
{
    r3 = 1;
    goto loc_8081C35C;
}

loc_8081C2F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
}

loc_8081C300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C30C;
    }
}

loc_8081C304:
{
    r3 = 0;
    goto loc_8081C35C;
}

loc_8081C30C:
{
    r31 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8081C314:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8081C320;
    }
}

loc_8081C318:
{
    r3 = 1;
    goto loc_8081C35C;
}

loc_8081C320:
{
    r3 = r31;
    // inline leaf 0x8081C370 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8081C370
}

loc_8081C32C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C338;
    }
}

loc_8081C330:
{
    r3 = 0;
    goto loc_8081C35C;
}

loc_8081C338:
{
    r3 = r31;
    // inline leaf 0x8081C380 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x8081C380
}

loc_8081C344:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081C350;
    }
}

loc_8081C348:
{
    r3 = 1;
    goto loc_8081C35C;
}

loc_8081C350:
{
    r3 = r31;
    // inline leaf 0x8081C380 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x8081C380
    ctx->lr = 0x8081C35Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_8081C35C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081C270 func_8081C270 preserves=true fpr_mask=0x00000000
