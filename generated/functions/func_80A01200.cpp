#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A01200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80A01200u);
    goto loc_80A01200;

loc_80A01200:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A01208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A01228;
    }
}

loc_80A0120C:
{
}

loc_80A01210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A0122C;
    }
}

loc_80A01214:
{
}

loc_80A01218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A01230;
    }
}

loc_80A0121C:
{
}

loc_80A01220:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A01234;
    }
}

loc_80A01224:
{
    ctx->gpr[0] = r0;
    return;
}

loc_80A01228:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A0123Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A0122C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A01528u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A01230:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A017DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A01234:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A01908u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A01200 func_80A01200 preserves=true fpr_mask=0x00000000
