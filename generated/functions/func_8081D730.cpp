#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBDF0(CpuContext* ctx);
extern "C" uint64_t func_804CBDF0_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081D730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081D730;

loc_8081D730:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0 = MemoryInline::FlatRead8((r3 + 492));
    r31 = r3;
}

loc_8081D750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081D7EC;
    }
}

loc_8081D754:
{
    r3 = (r3 + 416);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = 0x80000000u;
    r5 = 1125908480;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r6 = 274857984;
    r10 = (r6 + 19923);
    r9 = 0x80820000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r5 = (r5 + -8573);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r7 = 6684672;
    r6 = r4;
    r0 = (r7 + -18005);
    r5 = r3;
    r3 = (r31 + 416);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r9 = (r9 + -11488);
    r0 = (r4 * r0);
    r7 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r10) * static_cast<uint64_t>(r0)) >> 32));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r8 = (r8_rot_1 & 8388607);
    ctx->lr = 0x8081D7B4u;
    if constexpr (KnownRegArgsCpuCall<0x804CBDF0u>(&func_804CBDF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804CBDF0_CB8 = func_804CBDF0_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBDF0_CB8);
        r4 = static_cast<uint32_t>(regargs_result_804CBDF0_CB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CBDF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    }
    r27 = 0;
    r28 = 0;
    r29 = -1;
    r30 = 1;
}

loc_8081D7C4:
{
    r3 = r31;
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    MemoryInline::FlatWrite32((r31 + 80), r28);
    r27 = (r27 + 1);
}

loc_8081D7D8:
{
    MemoryInline::FlatWrite32((r31 + 88), r29);
    MemoryInline::FlatWrite8((r31 + 92), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 98), static_cast<uint8_t>(r30));
    r31 = (r31 + 104);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8081D7C4;
    }
}

loc_8081D7EC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081D730 func_8081D730 preserves=true fpr_mask=0x00000000
