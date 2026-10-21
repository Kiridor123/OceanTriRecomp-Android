#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EC8E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x809EC8E8u);
    goto loc_809EC8E8;

loc_809EC8E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809EC8F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC910;
    }
}

loc_809EC8F4:
{
}

loc_809EC8F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809EC914;
    }
}

loc_809EC8FC:
{
}

loc_809EC900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809EC918;
    }
}

loc_809EC904:
{
}

loc_809EC908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809EC91C;
    }
}

loc_809EC90C:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809EC910:
{
    goto loc_809EC924;
}

loc_809EC914:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809ECE64u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EC918:
{
    goto loc_809ED8C8;
}

loc_809EC91C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809ED8DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EC924:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_809EC92C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EC93C;
    }
}

loc_809EC930:
{
}

loc_809EC934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809EC940;
    }
}

loc_809EC938:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809EC93C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809EC948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809EC940:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809ECCA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809ED8C8:
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EC8E8 func_809EC8E8 preserves=true fpr_mask=0x00000000
