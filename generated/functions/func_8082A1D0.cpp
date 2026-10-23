#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8082A1D0;

loc_8082A1D0:
{
}

loc_8082A1D4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8082A1E0;
    }
}

loc_8082A1D8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_8082A1E0:
{
}

loc_8082A1E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082A230;
    }
}

loc_8082A1E8:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 65536);
}

loc_8082A1F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8082A228;
    }
}

loc_8082A1F8:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + 65536);
}

loc_8082A204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8082A228;
    }
}

loc_8082A208:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 65536);
}

loc_8082A214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8082A228;
    }
}

loc_8082A218:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 + 65536);
}

loc_8082A224:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8082A230;
    }
}

loc_8082A228:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_8082A230:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082A1D0 func_8082A1D0 preserves=true fpr_mask=0x00000000
