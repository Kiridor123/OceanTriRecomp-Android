#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F9E38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x809F9E38u);
    goto loc_809F9E38;

loc_809F9E38:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
}

loc_809F9E50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809F9E5C;
    }
}

loc_809F9E54:
{
    r3 = 0;
    goto loc_809F9EC0;
}

loc_809F9E5C:
{
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl0_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl0_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8012D088;
    }
}

loc_inl0_0x8012D080:
{
    r3 = 0;
    goto loc_inl0_cont_8012D068;
}

loc_inl0_0x8012D088:
{
    r3 = 1;
}

loc_inl0_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_809F9E64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9E70;
    }
}

loc_809F9E68:
{
    r3 = 0;
    goto loc_809F9EC0;
}

loc_809F9E70:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_809F9E78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809F9E84;
    }
}

loc_809F9E7C:
{
    r3 = 0;
    goto loc_809F9EC0;
}

loc_809F9E84:
{
    r3 = r31;
    r4 = 12;
    r5 = 255;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_809F9E98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9EA4;
    }
}

loc_809F9E9C:
{
    r3 = 0;
    goto loc_809F9EC0;
}

loc_809F9EA4:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -6324));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 468));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809F9EB4:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 ^ 1);
}

loc_809F9EC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F9E38 func_809F9E38 preserves=true fpr_mask=0x00000000
