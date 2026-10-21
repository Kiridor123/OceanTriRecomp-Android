#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EFCD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804EFCD0u);
    goto loc_804EFCD0;

loc_804EFCD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80760000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -10352);
    r4_addr_0 = (r4 + r0);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    r0 = (r0 * 96);
    r6 = (r31 + r0);
    r4 = MemoryInline::FlatRead16((r6 + 160));
    r0 = (r4 & 3);
}

loc_804EFD14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_804EFD20;
    }
}

loc_804EFD18:
{
    r0 = (r4 & -3);
    MemoryInline::FlatWrite16((r6 + 160), static_cast<uint16_t>(r0));
}

loc_804EFD20:
{
    r4 = MemoryInline::FlatRead16((r6 + 160));
    r0 = (r4 & 12);
}

loc_804EFD2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_804EFD38;
    }
}

loc_804EFD30:
{
    r0 = (r4 & -5);
    MemoryInline::FlatWrite16((r6 + 160), static_cast<uint16_t>(r0));
}

loc_804EFD38:
{
    r4 = MemoryInline::FlatRead32((r31 + 2232));
    r0 = (r4 + -6);
}

loc_804EFD44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_804EFD58;
    }
}

loc_804EFD48:
{
}

loc_804EFD4C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(11))) {
        goto loc_804EFD58;
    }
}

loc_804EFD50:
{
}

loc_804EFD54:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(15))) {
        goto loc_804EFD8C;
    }
}

loc_804EFD58:
{
    r5 = MemoryInline::FlatRead16((r6 + 202));
    r4 = (r5 & 32770);
}

loc_804EFD60:
{
    r0 = (r4 + 0);
}

loc_804EFD68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32770))) {
        goto loc_804EFD74;
    }
}

loc_804EFD6C:
{
    r0 = (r5 & 32767);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_804EFD74:
{
    r4 = MemoryInline::FlatRead16((r6 + 202));
    r0 = (r4 & 16385);
}

loc_804EFD7C:
{
}

loc_804EFD80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16385))) {
        goto loc_804EFD8C;
    }
}

loc_804EFD84:
{
    r0 = (r4 & -16385);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_804EFD8C:
{
    r0 = MemoryInline::FlatRead32((r31 + 2232));
}

loc_804EFD94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_804EFDCC;
    }
}

loc_804EFD98:
{
    r5 = MemoryInline::FlatRead16((r6 + 202));
    r4 = (r5 & 32770);
}

loc_804EFDA0:
{
    r0 = (r4 + 0);
}

loc_804EFDA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32770))) {
        goto loc_804EFDB4;
    }
}

loc_804EFDAC:
{
    r0 = (r5 & 32767);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_804EFDB4:
{
    r4 = MemoryInline::FlatRead16((r6 + 202));
    r0 = (r4 & 16385);
}

loc_804EFDBC:
{
}

loc_804EFDC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16385))) {
        goto loc_804EFDCC;
    }
}

loc_804EFDC4:
{
    r0 = (r4 & -16385);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_804EFDCC:
{
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EFCD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EFCD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804EFCD0 func_804EFCD0 preserves=true fpr_mask=0x00000000
