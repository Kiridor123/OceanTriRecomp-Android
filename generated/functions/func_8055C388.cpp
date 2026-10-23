#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055C388_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8055C388;

loc_8055C388:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r12 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x8055C3B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 136));
}

loc_8055C3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055C3EC;
    }
}

loc_8055C3BC:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x8055C3D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r31 + 24);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x8055C3ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8055C3EC:
{
    r12 = 0x80650000u;
    r3 = (r1 + 8);
    r12 = (r12 + 15532);
    MemoryInline::FlatWriteRam32((r1 + 8), r12);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8055C408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r28 = (r1 + 8);
    r27 = 0;
    r29 = 0;
    r30 = 5;
    goto loc_8055C514;
}

loc_8055C41C:
{
    r12 = MemoryInline::FlatRead32((r31 + 140));
    r3 = (r31 + 140);
    r4 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8055C434u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8055C438:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C510;
    }
}

loc_8055C43C:
{
    r12 = MemoryInline::FlatRead32((r31 + 140));
    r3 = (r31 + 140);
    r4 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8055C454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_8055C45C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055C510;
    }
}

loc_8055C460:
{
    r12 = MemoryInline::FlatRead32((r31 + 140));
    r3 = (r31 + 140);
    r4 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8055C478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 28));
}

loc_8055C480:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055C4BC;
    }
}

loc_8055C484:
{
    r5 = (r1 + 8);
    r4 = 0;
    ctr = r30;
}

loc_8055C490:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8055C498:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055C4AC;
    }
}

loc_8055C49C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r28 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    goto loc_8055C510;
}

loc_8055C4AC:
{
    r5 = (r5 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8055C490;
    }
}

loc_8055C4B8:
{
    goto loc_8055C510;
}

loc_8055C4BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8055C4C4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8055C4D0;
    }
}

loc_8055C4CC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
}

loc_8055C4D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_8055C4D8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8055C4E4;
    }
}

loc_8055C4E0:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
}

loc_8055C4E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8055C4EC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8055C4F8;
    }
}

loc_8055C4F4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
}

loc_8055C4F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
}

loc_8055C500:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8055C50C;
    }
}

loc_8055C508:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r29);
}

loc_8055C50C:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
}

loc_8055C510:
{
    r27 = (r27 + 1);
}

loc_8055C514:
{
    r12 = MemoryInline::FlatRead32((r31 + 140));
    r3 = (r31 + 140);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8055C528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8055C52C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r3))) {
        goto loc_8055C41C;
    }
}

loc_8055C530:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8055C538:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C548;
    }
}

loc_8055C53C:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_8055C548:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8055C550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C560;
    }
}

loc_8055C554:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_8055C560:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
}

loc_8055C568:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C578;
    }
}

loc_8055C56C:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_8055C578:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8055C580:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C590;
    }
}

loc_8055C584:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_8055C590:
{
    r3 = MemoryInline::FlatRead32((r1 + 28));
}

loc_8055C598:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C5A8;
    }
}

loc_8055C59C:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_8055C5A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r31 + 24);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8055C5C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r28 = (r1 + 8);
    r27 = 0;
}

loc_8055C5C8:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
}

loc_8055C5D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C5FC;
    }
}

loc_8055C5D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r4 = (r31 + 24);
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8055C5FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8055C5FC:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_8055C608:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(5))) {
        goto loc_8055C5C8;
    }
}

loc_8055C60C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055C388(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055C388_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055C388 func_8055C388 preserves=true fpr_mask=0x00000000
