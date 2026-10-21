#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130B24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80130B24u);
    goto loc_80130B24;

loc_80130B24:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2218));
}

loc_80130B40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80130B78;
    }
}

loc_80130B44:
{
    r4 = MemoryInline::FlatRead16((r3 + 2216));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80130B58:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80130B78;
    }
}

loc_80130B5C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_80130B6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80130B78;
    }
}

loc_80130B70:
{
    r3 = r31;
    // inline leaf 0x801308A8 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2214), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2218), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801308A8
}

loc_80130B78:
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130B24 func_80130B24 preserves=true fpr_mask=0x00000000
