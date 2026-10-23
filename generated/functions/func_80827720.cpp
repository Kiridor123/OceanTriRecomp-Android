#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80827720;

loc_80827720:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80840000u;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 37;
    r5 = (r5 + 17760);
    r30 = r3;
    ctr = r0;
    // nop
}

loc_80827750:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80827758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082776C;
    }
}

loc_8082775C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80827764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082776C;
    }
}

loc_80827768:
{
    goto loc_8082779C;
}

loc_8082776C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80827778:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082778C;
    }
}

loc_8082777C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80827784:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082778C;
    }
}

loc_80827788:
{
    goto loc_8082779C;
}

loc_8082778C:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827750;
    }
}

loc_80827798:
{
    r4 = -1;
}

loc_8082779C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r31;
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
    r4 = 0x80840000u;
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_808277D0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808277D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_808277EC;
    }
}

loc_808277DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808277E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808277EC;
    }
}

loc_808277E8:
{
    goto loc_8082781C;
}

loc_808277EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808277F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8082780C;
    }
}

loc_808277FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80827804:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082780C;
    }
}

loc_80827808:
{
    goto loc_8082781C;
}

loc_8082780C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808277D0;
    }
}

loc_80827818:
{
    r3 = -1;
}

loc_8082781C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r30 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r31;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827720 func_80827720 preserves=true fpr_mask=0x00000000
