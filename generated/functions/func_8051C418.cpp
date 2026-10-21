#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051C418_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x8051C418u);
    goto loc_8051C418;

loc_8051C418:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-384 - r11_subfic_ra_0);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    r11 = r12;
    guest_range_0 = MemoryInline::ResolveRangeHost((r12 + -28), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r12 + 4), r0);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r6 = 0x80630000u;
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = (r6 + 6288);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BC500u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051C458:
{
    r31 = r3;
    r27 = -1;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051C46C;
    }
}

loc_8051C464:
{
    r3 = -1;
    goto loc_8051C6BC;
}

loc_8051C46C:
{
    r0 = (r29 & 31);
}

loc_8051C470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051C47C;
    }
}

loc_8051C474:
{
    r26 = (32 - r0);
    goto loc_8051C480;
}

loc_8051C47C:
{
    r26 = 0;
}

loc_8051C480:
{
    r3 = (r1 + 320);
    r25 = 0;
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051C498:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8051C548;
    }
}

loc_8051C49C:
{
}

loc_8051C4A0:
{
    if ((static_cast<uint32_t>(r26) <= static_cast<uint32_t>(r30))) {
        goto loc_8051C4A8;
    }
}

loc_8051C4A4:
{
    r26 = r30;
}

loc_8051C4A8:
{
    r4 = r29;
    r5 = r26;
    r3 = (r1 + 320);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r9 = 32;
    r10 = (r1 + 288);
    r8 = (r1 + 256);
    r0 = (r1 + 320);
    r4 = -1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 224), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 256), r28);
    r3 = r31;
    r7 = (r1 + 224);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 288), r4);
    r4 = 5;
    r5 = 1;
    r6 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 224), r10);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 228), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 232), r8);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 236), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 240), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 244), r26);
    }
    ctx->lr = 0x8051C504u;
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
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = MemoryInline::FlatRead32((r1 + 288));
}

loc_8051C50C:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8051C538;
    }
}

loc_8051C510:
{
}

loc_8051C514:
{
    r25 = r27;
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r26))) {
        goto loc_8051C52C;
    }
}

loc_8051C51C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r27;
    goto loc_8051C6BC;
}

loc_8051C52C:
{
    r29 = (r29 + r27);
    r30 = (r30 - r27);
    goto loc_8051C548;
}

loc_8051C538:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r27;
    goto loc_8051C6BC;
}

loc_8051C548:
{
}

loc_8051C54C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8051C5F4;
    }
}

loc_8051C550:
{
    r26 = (r30 & -32);
}

loc_8051C554:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8051C5F4;
    }
}

loc_8051C558:
{
    r8 = 32;
    r9 = (r1 + 192);
    r0 = (r1 + 160);
    r5 = -1;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 192), r5);
    r3 = r31;
    r7 = (r1 + 128);
    r4 = 5;
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 160), r28);
    r5 = 1;
    r6 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 128), r9);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 132), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 140), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 144), r29);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 148), r26);
    }
    ctx->lr = 0x8051C5A0u;
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
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = MemoryInline::FlatRead32((r1 + 192));
}

loc_8051C5A8:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8051C5D4;
    }
}

loc_8051C5AC:
{
}

loc_8051C5B0:
{
    r25 = (r25 + r27);
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r26))) {
        goto loc_8051C5C8;
    }
}

loc_8051C5B8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r25;
    goto loc_8051C6BC;
}

loc_8051C5C8:
{
    r29 = (r29 + r27);
    r30 = (r30 - r27);
    goto loc_8051C5F4;
}

loc_8051C5D4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051C5E0:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(0))) {
        goto loc_8051C5EC;
    }
}

loc_8051C5E4:
{
    r3 = r25;
    goto loc_8051C6BC;
}

loc_8051C5EC:
{
    r3 = r27;
    goto loc_8051C6BC;
}

loc_8051C5F4:
{
}

loc_8051C5F8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8051C6A4;
    }
}

loc_8051C5FC:
{
    r26 = (r30 & 31);
}

loc_8051C600:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8051C6A4;
    }
}

loc_8051C604:
{
    r3 = (r1 + 320);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r29;
    r5 = r26;
    r3 = (r1 + 320);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r9 = 32;
    r10 = (r1 + 96);
    r8 = (r1 + 64);
    r0 = (r1 + 320);
    r4 = -1;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 64), r28);
    r3 = r31;
    r7 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 96), r4);
    r4 = 5;
    r5 = 1;
    r6 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 32), r10);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 40), r8);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 44), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 52), r26);
    }
    ctx->lr = 0x8051C670u;
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
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = MemoryInline::FlatRead32((r1 + 96));
}

loc_8051C678:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8051C684;
    }
}

loc_8051C67C:
{
    r25 = (r25 + r27);
    goto loc_8051C6A4;
}

loc_8051C684:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051C690:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(0))) {
        goto loc_8051C69C;
    }
}

loc_8051C694:
{
    r3 = r25;
    goto loc_8051C6BC;
}

loc_8051C69C:
{
    r3 = r27;
    goto loc_8051C6BC;
}

loc_8051C6A4:
{
}

loc_8051C6A8:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(0))) {
        goto loc_8051C6B0;
    }
}

loc_8051C6AC:
{
    r27 = r25;
}

loc_8051C6B0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r27;
}

loc_8051C6BC:
{
    r10 = MemoryInline::FlatRead32(r1);
    r11 = r10;
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051C418(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051C418_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051C418 func_8051C418 preserves=true fpr_mask=0x00000000
