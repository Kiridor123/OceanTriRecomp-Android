#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80344EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80344EBC;

loc_80344EBC:
{
    r4 = MemoryInline::FlatRead16((r3 + 52));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80344EC4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32767))) {
        goto loc_80344ED0;
    }
}

loc_80344EC8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
}

loc_80344ED0:
{
    r4 = MemoryInline::FlatRead16((r3 + 28));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80344ED8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32767))) {
        goto loc_80344EE4;
    }
}

loc_80344EDC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
}

loc_80344EE4:
{
    r4 = MemoryInline::FlatRead16((r3 + 30));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 & 65535);
}

loc_80344EF0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(32766))) {
        goto loc_return;
    }
}

loc_80344EF4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80344EBC func_80344EBC preserves=true fpr_mask=0x00000000
