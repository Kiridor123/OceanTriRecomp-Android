#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EADE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EADE4;

loc_800EADE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = r30;
    r4 = 16777216;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EAE20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EAE58;
    }
}

loc_800EAE24:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_800EAE30:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_800EAEF4;
    }
}

loc_800EAE34:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EBAACu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 144), r3);
    r0 = MemoryInline::FlatRead32((r31 + 144));
}

loc_800EAE48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EAEF4;
    }
}

loc_800EAE4C:
{
    r3 = r30;
    r4 = 16777216;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
}

loc_800EAE58:
{
    r0 = MemoryInline::FlatRead8((r31 + 130));
}

loc_800EAE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EAE70;
    }
}

loc_800EAE64:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800EAE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800EABBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_800EAE70:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r0 = (r3 + 65536);
}

loc_800EAE7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EAE90;
    }
}

loc_800EAE80:
{
}

loc_800EAE84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EAE90;
    }
}

loc_800EAE88:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 108), r0);
}

loc_800EAE90:
{
    r0 = MemoryInline::FlatRead8((r31 + 130));
}

loc_800EAE98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EAECC;
    }
}

loc_800EAE9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 104));
    r0 = (r3 + 65536);
}

loc_800EAEA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EAECC;
    }
}

loc_800EAEAC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 104), r0);
}

loc_800EAEB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EAECC;
    }
}

loc_800EAEBC:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 130), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 104), r0);
}

loc_800EAECC:
{
    r3 = r29;
    r4 = r30;
    r5 = (r31 + 72);
    ctx->lr = 0x800EAEDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E9720u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800EAEE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800ECDE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800EAEF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800EB378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_800EAEF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EADE4 func_800EADE4 preserves=true fpr_mask=0x00000000
