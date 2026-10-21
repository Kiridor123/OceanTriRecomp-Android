#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A03A34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80A03A34u);
    goto loc_80A03A34;

loc_80A03A34:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80A03A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A03A5C;
    }
}

loc_80A03A40:
{
}

loc_80A03A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A03A60;
    }
}

loc_80A03A48:
{
}

loc_80A03A4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A03A64;
    }
}

loc_80A03A50:
{
}

loc_80A03A54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A03A68;
    }
}

loc_80A03A58:
{
    ctx->gpr[0] = r0;
    return;
}

loc_80A03A5C:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A03A70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A03A60:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A03B28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A03A64:
{
    goto loc_80A03CD8;
}

loc_80A03A68:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x80A03CECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_80A03CD8:
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
// RECOMP_REGISTRATION base 0x80A03A34 func_80A03A34 preserves=true fpr_mask=0x00000000
