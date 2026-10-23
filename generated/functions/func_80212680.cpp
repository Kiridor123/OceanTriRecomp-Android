#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80212680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80212680;

loc_80212680:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r4 + 40));
}

loc_8021269C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802126A8;
    }
}

loc_802126A0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 40), static_cast<uint8_t>(r0));
}

loc_802126A8:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802126B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802126F0;
    }
}

loc_802126B4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802126C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802126D0;
    }
}

loc_802126C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 52), static_cast<uint16_t>(r0));
}

loc_802126D0:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    r3 = MemoryInline::FlatRead16((r4 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802126E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(60))) {
        goto loc_80212728;
    }
}

loc_802126E4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 52), static_cast<uint16_t>(r0));
    goto loc_80212728;
}

loc_802126F0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80212700:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8021270C;
    }
}

loc_80212704:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 52), static_cast<uint16_t>(r0));
}

loc_8021270C:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    r3 = MemoryInline::FlatRead16((r4 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8021271C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(-60))) {
        goto loc_80212728;
    }
}

loc_80212720:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 52), static_cast<uint16_t>(r0));
}

loc_80212728:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -12348);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 48), r0);
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80212680 func_80212680 preserves=true fpr_mask=0x00000000
