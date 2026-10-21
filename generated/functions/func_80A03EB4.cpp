#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A03EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80A03EB4u);
    goto loc_80A03EB4;

loc_80A03EB4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A03EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A03EDC;
    }
}

loc_80A03EC0:
{
}

loc_80A03EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A03EE0;
    }
}

loc_80A03EC8:
{
}

loc_80A03ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A03EE4;
    }
}

loc_80A03ED0:
{
}

loc_80A03ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A03EE8;
    }
}

loc_80A03ED8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A03EDC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A03EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A03EE0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A04130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A03EE4:
{
    goto loc_80A046B4;
}

loc_80A03EE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80A046C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80A046B4:
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
// RECOMP_REGISTRATION base 0x80A03EB4 func_80A03EB4 preserves=true fpr_mask=0x00000000
