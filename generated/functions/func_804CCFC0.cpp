#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CCFC0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804CCFC0;

loc_804CCFC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r5 + 31);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    r0 = (r31 + 127);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r30 = (r30_rot_0 & 33554431);
    r29 = r4;
    r28 = r3;
    goto loc_804CD034;
}

loc_804CCFF8:
{
}

loc_804CCFFC:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(128))) {
        goto loc_804CD018;
    }
}

loc_804CD000:
{
    r3 = r28;
    r4 = r29;
    r5 = r31;
    // inline leaf 0x804CCF60 (9 guest instruction(s))
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 31);
    r4 = (r4 & 536870911);
    r6 = (r6 | r4);
    // mtspr 922 (unknown SPR) @ 0x804CCF6C
    PPC_WriteSpr(922, r6);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & 12);
    r6 = (r6 | r3);
    r6 = (r6 | 18);
    // mtspr 923 (unknown SPR) @ 0x804CCF7C
    PPC_WriteSpr(923, r6);
    // end of inlined leaf 0x804CCF60
    r31 = 0;
    goto loc_804CD034;
}

loc_804CD018:
{
    r3 = r28;
    r4 = r29;
    r5 = 0;
    // inline leaf 0x804CCF60 (9 guest instruction(s))
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_4 & 31);
    r4 = (r4 & 536870911);
    r6 = (r6 | r4);
    // mtspr 922 (unknown SPR) @ 0x804CCF6C
    PPC_WriteSpr(922, r6);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & 12);
    r6 = (r6 | r3);
    r6 = (r6 | 18);
    // mtspr 923 (unknown SPR) @ 0x804CCF7C
    PPC_WriteSpr(923, r6);
    // end of inlined leaf 0x804CCF60
    r31 = (r31 + -128);
    r28 = (r28 + 4096);
    r29 = (r29 + 4096);
}

loc_804CD034:
{
}

loc_804CD038:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804CCFF8;
    }
}

loc_804CD03C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CCFC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CCFC0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CCFC0 func_804CCFC0 preserves=true fpr_mask=0x00000000
