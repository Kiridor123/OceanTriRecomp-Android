#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F7324(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x809F7324u);
    goto loc_809F7324;

loc_809F7324:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r3 = (r3 + 92);
    // inline leaf 0x8029F5FC (7 guest instruction(s))
}

loc_inl0_0x8029F5FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_inl0_0x8029F604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8029F610;
    }
}

loc_inl0_0x8029F608:
{
    r3 = 255;
    goto loc_inl0_cont_8029F5FC;
}

loc_inl0_0x8029F610:
{
    r3 = MemoryInline::FlatRead8((r3 + 14));
}

loc_inl0_cont_8029F5FC:
{
    // end of inlined leaf 0x8029F5FC
    r0 = (r3 & 255);
}

loc_809F7350:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809F736C;
    }
}

loc_809F7354:
{
    r0 = MemoryInline::FlatRead8((r31 + 39));
}

loc_809F735C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F736C;
    }
}

loc_809F7360:
{
    r3 = r30;
    ctx->lr = 0x809F7368u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809F8A80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_809F73AC;
}

loc_809F736C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_809F737C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(120))) {
        goto loc_809F738C;
    }
}

loc_809F7380:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    goto loc_809F73AC;
}

loc_809F738C:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_809F7394:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809F73A4;
    }
}

loc_809F7398:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809F73A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809F73C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_809F73A4:
{
    r3 = r30;
    ctx->lr = 0x809F73ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809F8E18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_809F73AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F7324 func_809F7324 preserves=true fpr_mask=0x00000000
