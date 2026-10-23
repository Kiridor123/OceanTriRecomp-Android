#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A048D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80A048D4;

loc_80A048D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A048DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A048FC;
    }
}

loc_80A048E0:
{
}

loc_80A048E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A04900;
    }
}

loc_80A048E8:
{
}

loc_80A048EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A04904;
    }
}

loc_80A048F0:
{
}

loc_80A048F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A04908;
    }
}

loc_80A048F8:
{
    ctx->gpr[0] = r0;
    return;
}

loc_80A048FC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A04910u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A04900:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A04D08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A04904:
{
    goto loc_80A04FBC;
}

loc_80A04908:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A04FD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A04FBC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A048D4 func_80A048D4 preserves=true fpr_mask=0x00000000
