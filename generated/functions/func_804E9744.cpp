#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E9744_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804E9744;

loc_804E9744:
{
    r31 = 0;
}

loc_804E9750:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl0_0x804D1330:
{
}

loc_inl0_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x804D1344;
    }
}

loc_inl0_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl0_0x804D1348;
}

loc_inl0_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl0_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
}

loc_inl0_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804E9758:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_804E979C;
    }
}

loc_804E975C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14256));
}

loc_804E9764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E9774;
    }
}

loc_804E9768:
{
}

loc_804E976C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E9780;
    }
}

loc_804E9770:
{
    goto loc_804E9790;
}

loc_804E9774:
{
    r0 = 30000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E97DC;
}

loc_804E9780:
{
    r3 = 65536;
    r0 = (r3 + -20536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E97DC;
}

loc_804E9790:
{
    r0 = 15000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E97DC;
}

loc_804E979C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14256));
}

loc_804E97A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E97B4;
    }
}

loc_804E97A8:
{
}

loc_804E97AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E97C4;
    }
}

loc_804E97B0:
{
    goto loc_804E97D4;
}

loc_804E97B4:
{
    r3 = 65536;
    r0 = (r3 + -29536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E97DC;
}

loc_804E97C4:
{
    r3 = 65536;
    r0 = (r3 + -11536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E97DC;
}

loc_804E97D4:
{
    r0 = 18000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
}

loc_804E97DC:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_804E9744(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E9744_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x4000200B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E9744 func_804E9744 preserves=true fpr_mask=0x00000000
