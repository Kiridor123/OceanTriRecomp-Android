#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80869FD0u);
    goto loc_80869FD0;

loc_80869FD0:
{
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27872));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r4 + 27920), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27876));
    r4 = (r4 + 27920);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27880));
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27884));
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27888));
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27892));
    MemoryInline::FlatWriteRam32((r4 + 20), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27896));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r4 + 27944), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27900));
    r4 = (r4 + 27944);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27904));
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27908));
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27912));
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 27916));
    MemoryInline::FlatWriteRam32((r4 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80869FD0 func_80869FD0 preserves=true fpr_mask=0x00000000
