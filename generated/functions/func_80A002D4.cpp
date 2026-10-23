#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A002D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80A002D4;

loc_80A002D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A002DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A002FC;
    }
}

loc_80A002E0:
{
}

loc_80A002E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A00300;
    }
}

loc_80A002E8:
{
}

loc_80A002EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A00304;
    }
}

loc_80A002F0:
{
}

loc_80A002F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A00308;
    }
}

loc_80A002F8:
{
    ctx->gpr[0] = r0;
    return;
}

loc_80A002FC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A00310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A00300:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A00668u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A00304:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A00D34u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A00308:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A00DD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A002D4 func_80A002D4 preserves=true fpr_mask=0x00000000
