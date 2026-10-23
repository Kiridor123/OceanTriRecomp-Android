#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A02FB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80A02FB4;

loc_80A02FB4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A02FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A02FDC;
    }
}

loc_80A02FC0:
{
}

loc_80A02FC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A02FE0;
    }
}

loc_80A02FC8:
{
}

loc_80A02FCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A02FE4;
    }
}

loc_80A02FD0:
{
}

loc_80A02FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A02FE8;
    }
}

loc_80A02FD8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A02FDC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A02FF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A02FE0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A03280u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A02FE4:
{
    goto loc_80A03814;
}

loc_80A02FE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A03824u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A03814:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A02FB4 func_80A02FB4 preserves=true fpr_mask=0x00000000
