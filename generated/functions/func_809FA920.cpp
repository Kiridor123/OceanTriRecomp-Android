#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FA920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FA920;

loc_809FA920:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FA928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FA948;
    }
}

loc_809FA92C:
{
}

loc_809FA930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FA94C;
    }
}

loc_809FA934:
{
}

loc_809FA938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FA950;
    }
}

loc_809FA93C:
{
}

loc_809FA940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FA954;
    }
}

loc_809FA944:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FA948:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FA94C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FAA04u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FA950:
{
    goto loc_809FAD24;
}

loc_809FA954:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FAD38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FAD24:
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
// RECOMP_REGISTRATION base 0x809FA920 func_809FA920 preserves=true fpr_mask=0x00000000
