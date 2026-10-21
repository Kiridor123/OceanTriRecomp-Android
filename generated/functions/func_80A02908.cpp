#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A02908(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80A02908u);
    goto loc_80A02908;

loc_80A02908:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A02910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A02930;
    }
}

loc_80A02914:
{
}

loc_80A02918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A02934;
    }
}

loc_80A0291C:
{
}

loc_80A02920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A02938;
    }
}

loc_80A02924:
{
}

loc_80A02928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A0293C;
    }
}

loc_80A0292C:
{
    ctx->gpr[0] = r0;
    return;
}

loc_80A02930:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A02944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A02934:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A02B5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A02938:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A02D04u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A0293C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A02DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A02908 func_80A02908 preserves=true fpr_mask=0x00000000
