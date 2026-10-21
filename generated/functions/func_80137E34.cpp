#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80137E34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80137E34u);
    goto loc_80137E34;

loc_80137E34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r4 + -1);
}

loc_80137E54:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80137F24;
    }
}

loc_80137E58:
{
    // inline leaf 0x80133CAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1925));
    // end of inlined leaf 0x80133CAC
}

loc_80137E60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80137EB0;
    }
}

loc_80137E64:
{
    r3 = MemoryInline::FlatRead32((r31 + 444));
    r0 = (r3 & 65535);
}

loc_80137E70:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32768))) {
        goto loc_80137E94;
    }
}

loc_80137E74:
{
}

loc_80137E78:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_80137E88;
    }
}

loc_80137E7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 444), r0);
    goto loc_80137EB0;
}

loc_80137E88:
{
    r0 = (r3 + -256);
    MemoryInline::FlatWrite32((r31 + 444), r0);
    goto loc_80137EB0;
}

loc_80137E94:
{
}

loc_80137E98:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65280))) {
        goto loc_80137EA8;
    }
}

loc_80137E9C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 444), r0);
    goto loc_80137EB0;
}

loc_80137EA8:
{
    r0 = (r3 + 256);
    MemoryInline::FlatWrite32((r31 + 444), r0);
}

loc_80137EB0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1924));
}

loc_80137EB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80137F30;
    }
}

loc_80137EBC:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_80137EC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80137ED4;
    }
}

loc_80137EC8:
{
    r0 = MemoryInline::FlatRead8((r31 + 483));
}

loc_80137ED0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80137F30;
    }
}

loc_80137ED4:
{
    r3 = MemoryInline::FlatRead32((r31 + 452));
    r0 = (r3 & 65535);
}

loc_80137EE0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32768))) {
        goto loc_80137F04;
    }
}

loc_80137EE4:
{
}

loc_80137EE8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_80137EF8;
    }
}

loc_80137EEC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 452), r0);
    goto loc_80137F30;
}

loc_80137EF8:
{
    r0 = (r3 + -256);
    MemoryInline::FlatWrite32((r31 + 452), r0);
    goto loc_80137F30;
}

loc_80137F04:
{
}

loc_80137F08:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65280))) {
        goto loc_80137F18;
    }
}

loc_80137F0C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 452), r0);
    goto loc_80137F30;
}

loc_80137F18:
{
    r0 = (r3 + 256);
    MemoryInline::FlatWrite32((r31 + 452), r0);
    goto loc_80137F30;
}

loc_80137F24:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 444), r0);
    MemoryInline::FlatWrite32((r3 + 452), r0);
}

loc_80137F30:
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

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80137E34 func_80137E34 preserves=true fpr_mask=0x00000000
