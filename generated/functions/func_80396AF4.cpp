#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034C3B4(CpuContext* ctx);
extern "C" uint32_t func_8034C3B4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8034C3B4_statefree(uint32_t);

extern "C" uint64_t func_80396AF4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80396AF4;

loc_80396AF4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r25 = r4;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r29 = r3;
    r30 = 0;
    MemoryInline::FlatWrite32((r24 + 256), r30);
    // inline leaf 0x8029F86C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3 = MemoryInline::FlatRead32((r3 + 1876));
    // end of inlined leaf 0x8029F86C
    r31 = r3;
    r26 = 0;
    r23 = 1;
}

loc_80396B30:
{
    r3 = (r26 & 255);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r27 = (r27_rot_2 & -4);
    r28 = (r25 + r27);
    r0 = MemoryInline::FlatRead16((r28 + 164));
}

loc_80396B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80396BE4;
    }
}

loc_80396B48:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8034C3B4u) && KnownTranslatedCpuCall<0x8034C3B4u>::kAvailable && !KnownTranslatedCpuCall<0x8034C3B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8034C3B4u>()) {
        const auto state_free_result_8034C3B4_B70 = func_8034C3B4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8034C3B4_B70);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8034C3B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80396B54:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80396BE4;
    }
}

loc_80396B58:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80396B68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80396BE4;
    }
}

loc_80396B6C:
{
    r0 = MemoryInline::FlatRead32((r24 + 256));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r24 + r0);
    r5 = (r29 + r27);
    r3 = MemoryInline::FlatRead16((r5 + 15296));
}

loc_80396B84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80396B94;
    }
}

loc_80396B88:
{
    r0 = MemoryInline::FlatRead16((r28 + 164));
}

loc_80396B90:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_80396B9C;
    }
}

loc_80396B94:
{
    MemoryInline::FlatWrite8((r4 + 96), static_cast<uint8_t>(r23));
    goto loc_80396BA0;
}

loc_80396B9C:
{
    MemoryInline::FlatWrite8((r4 + 96), static_cast<uint8_t>(r30));
}

loc_80396BA0:
{
    MemoryInline::FlatWrite8((r4 + 97), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead16((r28 + 164));
    MemoryInline::FlatWrite16((r4 + 100), static_cast<uint16_t>(r0));
    r6 = (r25 + r27);
    r3 = MemoryInline::FlatRead16((r6 + 166));
    r0 = MemoryInline::FlatRead16((r5 + 15298));
}

loc_80396BBC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80396BCC;
    }
}

loc_80396BC0:
{
    r0 = MemoryInline::FlatRead8((r4 + 96));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r4 + 96), static_cast<uint8_t>(r0));
}

loc_80396BCC:
{
    MemoryInline::FlatWrite8((r4 + 97), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead16((r6 + 166));
    MemoryInline::FlatWrite16((r4 + 102), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r24 + 256));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r24 + 256), r0);
}

loc_80396BE4:
{
    r26 = (r26 + 1);
}

loc_80396BEC:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(41))) {
        goto loc_80396B30;
    }
}

loc_80396BF0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80396AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80396AF4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80396AF4 func_80396AF4 preserves=true fpr_mask=0x00000000
