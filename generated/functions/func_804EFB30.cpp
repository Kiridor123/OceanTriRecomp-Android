#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EFB30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804EFB30;

loc_804EFB30:
{
    r29 = 50;
}

loc_804EFB64:
{
}

loc_804EFB68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804EFC48;
    }
}

loc_804EFB6C:
{
    r5 = (r29 * r26);
    r3 = r31;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804EFB80:
{
    r3 = r26;
    r4 = 0;
    if ((static_cast<uint32_t>(r26) <= static_cast<uint32_t>(0))) {
        goto loc_804EFC3C;
    }
}

loc_804EFB8C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_804EFB90:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EFC24;
    }
}

loc_804EFB98:
{
    r0 = (r4 * r29);
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    r0 = (r4 * r29);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804EFB98;
    }
}

loc_804EFC1C:
{
    r3 = (r26 & 7);
}

loc_804EFC20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804EFC3C;
    }
}

loc_804EFC24:
{
    ctr = r3;
}

loc_804EFC28:
{
    r0 = (r4 * r29);
    r4 = (r4 + 1);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804EFC28;
    }
}

loc_804EFC3C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 2224), r0);
    MemoryInline::FlatWrite32((r28 + 2228), r26);
}

loc_804EFC48:
{
    MemoryInline::FlatWrite32((r28 + 2220), r31);
    r3 = r27;
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
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EFB30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EFB30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFC00003B gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804EFB30 func_804EFB30 preserves=true fpr_mask=0x00000000
