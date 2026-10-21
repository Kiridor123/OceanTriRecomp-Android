#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801E9228_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801E9228u);
    goto loc_801E9228;

loc_801E9228:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    // inline leaf 0x8004D198 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -15384);
    // end of inlined leaf 0x8004D198
    r28 = r3;
    r27 = 0;
    r30 = r28;
    r29 = 0;
    r31 = 0;
}

loc_801E9254:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead16((r3 + 18648));
    r4 = MemoryInline::FlatRead16(r30);
    // inline leaf 0x801E93D0 (8 guest instruction(s))
}

loc_inl2_0x801E93D0:
{
    r3 = (r3 & 65535);
    r0 = (r4 & 65535);
    r3 = (r3 + r0);
}

loc_inl2_0x801E93E0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(99))) {
        goto loc_inl2_0x801E93E8;
    }
}

loc_inl2_0x801E93E4:
{
    r3 = 99;
}

loc_inl2_0x801E93E8:
{
    r3 = (r3 & 65535);
}

loc_inl2_cont_801E93D0:
{
    // end of inlined leaf 0x801E93D0
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r29);
    MemoryInline::FlatWrite16((r4 + 18648), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead16((r3 + 18904));
    r4 = MemoryInline::FlatRead16((r30 + 82));
    // inline leaf 0x801E93D0 (8 guest instruction(s))
}

loc_inl3_0x801E93D0:
{
    r3 = (r3 & 65535);
    r0 = (r4 & 65535);
    r3 = (r3 + r0);
}

loc_inl3_0x801E93E0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(99))) {
        goto loc_inl3_0x801E93E8;
    }
}

loc_inl3_0x801E93E4:
{
    r3 = 99;
}

loc_inl3_0x801E93E8:
{
    r3 = (r3 & 65535);
}

loc_inl3_cont_801E93D0:
{
    // end of inlined leaf 0x801E93D0
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r29);
    MemoryInline::FlatWrite16((r4 + 18904), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 82), static_cast<uint16_t>(r31));
    r30 = (r30 + 2);
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_801E92AC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(41))) {
        goto loc_801E9254;
    }
}

loc_801E92B0:
{
    r29 = 0;
    r30 = (r28 + 248);
    r31 = 0;
}

loc_801E92BC:
{
    r3 = MemoryInline::FlatRead16(r30);
}

loc_801E92C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E92EC;
    }
}

loc_801E92C8:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = (r5 + 18528);
    r6 = 30;
    r7 = 0;
    r8 = 99;
    ctx->lr = 0x801E92E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8004BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r31));
}

loc_801E92EC:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_801E92F8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(30))) {
        goto loc_801E92BC;
    }
}

loc_801E92FC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E9228(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E9228_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E9228 func_801E9228 preserves=true fpr_mask=0x00000000
