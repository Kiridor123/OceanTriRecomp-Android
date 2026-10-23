#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80471BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80471BD0;

loc_80471BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_80471BF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80471C1C;
    }
}

loc_80471BF8:
{
}

loc_80471BFC:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_80471C28;
    }
}

loc_80471C00:
{
}

loc_80471C04:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_80471C34;
    }
}

loc_80471C08:
{
}

loc_80471C0C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(3))) {
        goto loc_80471C44;
    }
}

loc_80471C10:
{
}

loc_80471C14:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(4))) {
        goto loc_80471C58;
    }
}

loc_80471C18:
{
    goto loc_80471C68;
}

loc_80471C1C:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    goto loc_80471C68;
}

loc_80471C28:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    goto loc_80471C68;
}

loc_80471C34:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    goto loc_80471C68;
}

loc_80471C44:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    goto loc_80471C68;
}

loc_80471C58:
{
    r4 = 0;
    r0 = 2;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
}

loc_80471C68:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80471BD0 func_80471BD0 preserves=true fpr_mask=0x00000000
