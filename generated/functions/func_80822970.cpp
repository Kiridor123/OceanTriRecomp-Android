#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80822970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80822970;

loc_80822970:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80840000u;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 24300);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 568));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808229B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_808229C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822A34;
    }
}

loc_808229CC:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_808229E0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808229E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_808229FC;
    }
}

loc_808229EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808229F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808229FC;
    }
}

loc_808229F8:
{
    goto loc_80822A2C;
}

loc_808229FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80822A08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80822A1C;
    }
}

loc_80822A0C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80822A14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80822A1C;
    }
}

loc_80822A18:
{
    goto loc_80822A2C;
}

loc_80822A1C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808229E0;
    }
}

loc_80822A28:
{
    r3 = -1;
}

loc_80822A2C:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
    goto loc_80822A98;
}

loc_80822A34:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80822A48:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80822A50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80822A64;
    }
}

loc_80822A54:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80822A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80822A64;
    }
}

loc_80822A60:
{
    goto loc_80822A94;
}

loc_80822A64:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80822A70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80822A84;
    }
}

loc_80822A74:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80822A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80822A84;
    }
}

loc_80822A80:
{
    goto loc_80822A94;
}

loc_80822A84:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822A48;
    }
}

loc_80822A90:
{
    r3 = -1;
}

loc_80822A94:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
}

loc_80822A98:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl0_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x8081AA24;
    }
}

loc_inl0_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x8081AA28;
}

loc_inl0_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = 16;
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1948), f0.d);
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80822AE4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80822B00;
    }
}

loc_80822AE8:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 2;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r4 = fctiwzword0;
    ctr = r12;
    ctx->lr = 0x80822B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
}

loc_80822B00:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80822970 func_80822970 preserves=true fpr_mask=0x00000000
