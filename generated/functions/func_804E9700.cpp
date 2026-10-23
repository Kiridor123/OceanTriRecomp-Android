#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E9700_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804E9700;

loc_804E9700:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = MemoryInline::FlatRead32((r13 + -14256));
    MemoryInline::FlatWrite32((r13 + -14256), r3);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = MemoryInline::FlatRead32((r13 + -14296));
}

loc_804E9728:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(8))) {
        goto loc_804E9750;
    }
}

loc_804E972C:
{
    r4 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -15940);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804E9744u:
        goto loc_804E9744;
        break;
    case 0x804E974Cu:
        goto loc_804E974C;
        break;
    case 0x804E9750u:
        goto loc_804E9750;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804E9744:
{
    r31 = 0;
    goto loc_804E9750;
}

loc_804E974C:
{
    r31 = 1;
}

loc_804E9750:
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
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E9700(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E9700_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E9700 func_804E9700 preserves=true fpr_mask=0x00000000
