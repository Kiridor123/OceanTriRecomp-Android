#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809FBBC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809FBBC0;

loc_809FBBC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r3 = 72;
    ctx->lr = 0x809FBBE8u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_4D8 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_4D8);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_4D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
}

loc_809FBBF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809FBC94;
    }
}

loc_809FBBF4:
{
    r31 = 0;
    MemoryInline::FlatWriteRam32((r3 + 252), r31);
    r0 = 9;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = 0x80A00000u;
    r0 = (r3 + -17236);
    MemoryInline::FlatWriteRam32((r30 + 248), r0);
    r0 = MemoryInline::FlatRead8((r27 + 481));
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam32((r30 + 36), r31);
    r0 = MemoryInline::FlatRead32((r27 + 448));
    MemoryInline::FlatWriteRam32((r30 + 40), r0);
    MemoryInline::FlatWriteRam32((r30 + 44), r31);
    r3 = (r30 + 24);
    r4 = (r27 + 392);
    ctx->lr = 0x809FBC44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r30 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809FBC50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r30 + 20), r29);
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_809FBC5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32))) {
        goto loc_809FBC68;
    }
}

loc_809FBC60:
{
    r0 = 32;
    MemoryInline::FlatWriteRam32((r30 + 20), r0);
}

loc_809FBC68:
{
    r31 = MemoryInline::FlatRead32((r30 + 256));
    r0 = MemoryInline::FlatRead16((r27 + 492));
    MemoryInline::FlatWrite16((r31 + 56), static_cast<uint16_t>(r0));
    r3 = r27;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 52), r0);
    r3 = r30;
    r4 = r27;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
}

loc_809FBC94:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FBBC0 func_809FBBC0 preserves=true fpr_mask=0x00000000
