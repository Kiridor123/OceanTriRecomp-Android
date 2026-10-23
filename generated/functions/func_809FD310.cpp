#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FD310(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FD310;

loc_809FD310:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_809FD318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FD338;
    }
}

loc_809FD31C:
{
}

loc_809FD320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FD33C;
    }
}

loc_809FD324:
{
}

loc_809FD328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FD340;
    }
}

loc_809FD32C:
{
}

loc_809FD330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809FD344;
    }
}

loc_809FD334:
{
    ctx->gpr[0] = r0;
    return;
}

loc_809FD338:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FD34Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FD33C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE050u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FD340:
{
    goto loc_809FE1CC;
}

loc_809FD344:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FE1E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FE1CC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x802AB264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 189), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB264
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FD310 func_809FD310 preserves=true fpr_mask=0x00000000
