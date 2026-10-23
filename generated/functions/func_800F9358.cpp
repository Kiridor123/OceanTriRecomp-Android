#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9358(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800F9358;

loc_800F9358:
{
}

loc_800F935C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F937C;
    }
}

loc_800F9360:
{
}

loc_800F9364:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_800F9394;
    }
}

loc_800F9368:
{
}

loc_800F936C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_800F93AC;
    }
}

loc_800F9370:
{
}

loc_800F9374:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_800F93C4;
    }
}

loc_800F9378:
{
    goto loc_800F93DC;
}

loc_800F937C:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800F9388:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F93DC;
    }
}

loc_800F938C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800F9394:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800F93A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F93DC;
    }
}

loc_800F93A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800F93AC:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800F93B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F93DC;
    }
}

loc_800F93BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800F93C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800F93D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F93DC;
    }
}

loc_800F93D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800F93DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F9358 func_800F9358 preserves=true fpr_mask=0x00000000
