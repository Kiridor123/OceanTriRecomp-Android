#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056BC24_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8056BC24;

loc_8056BC24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = r3;
    r30 = r4;
}

loc_8056BC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056BCE0;
    }
}

loc_8056BC4C:
{
    r3 = r0;
    r4 = 160;
    ctx->lr = 0x8056BC58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 16;
    ctx->lr = 0x8056BC68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BC6C:
{
    r27 = r3;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8056BCCC;
    }
}

loc_8056BC74:
{
    r4 = 0x80660000u;
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r4 = (r4 + -22472);
    r3 = 65536;
    MemoryInline::FlatWrite32(r31, r4);
    r28 = 0;
    r0 = (r3 + -1);
    r3 = r31;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r31 + 120), r0);
    MemoryInline::FlatWrite32((r31 + 124), r5);
    MemoryInline::FlatWrite8((r31 + 144), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r31 + 148), r28);
    MemoryInline::FlatWrite32((r31 + 152), r28);
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8056BCBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 0x80660000u;
    r3 = (r3 + -22744);
    MemoryInline::FlatWrite32(r31, r3);
    MemoryInline::FlatWrite32((r31 + 156), r28);
}

loc_8056BCCC:
{
}

loc_8056BCD0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8056BD60;
    }
}

loc_8056BCD4:
{
    MemoryInline::FlatWrite32(r27, r30);
    MemoryInline::FlatWrite32((r27 + 4), r31);
    goto loc_8056BD60;
}

loc_8056BCE0:
{
    r3 = 160;
    ctx->lr = 0x8056BCE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BCEC:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056BD44;
    }
}

loc_8056BCF4:
{
    r12 = 0x80660000u;
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r12 = (r12 + -22472);
    r4 = 65536;
    MemoryInline::FlatWriteRam32(r3, r12);
    r28 = 0;
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam32((r3 + 120), r0);
    MemoryInline::FlatWriteRam32((r3 + 124), r5);
    MemoryInline::FlatWriteRam8((r3 + 144), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam32((r3 + 148), r28);
    MemoryInline::FlatWriteRam32((r3 + 152), r28);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8056BD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 0x80660000u;
    r3 = (r3 + -22744);
    MemoryInline::FlatWriteRam32(r31, r3);
    MemoryInline::FlatWriteRam32((r31 + 156), r28);
}

loc_8056BD44:
{
    r3 = 16;
    ctx->lr = 0x8056BD4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BD50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056BD5C;
    }
}

loc_8056BD54:
{
    MemoryInline::FlatWriteRam32(r3, r30);
    MemoryInline::FlatWriteRam32((r3 + 4), r31);
}

loc_8056BD5C:
{
    r27 = r3;
}

loc_8056BD60:
{
    r4 = r27;
    r3 = (r29 + 36);
    // inline leaf 0x805020E4 (28 guest instruction(s))
}

loc_inl1_0x805020E4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x805020EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8050211C;
    }
}

loc_inl1_0x805020F0:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_805020E4;
}

loc_inl1_0x8050211C:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_1 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_1, r5);
    r6 = r6_addr_1;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_805020E4:
{
    // end of inlined leaf 0x805020E4
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r3 = r31;
    r4 = r30;
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r29 + 32), r0);
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8056BD90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BD94:
{
    r28 = (r13 + -13304);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8056BDE4;
    }
}

loc_8056BD9C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8056BDB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8056BDC8;
}

loc_8056BDB4:
{
}

loc_8056BDB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_8056BDC4;
    }
}

loc_8056BDBC:
{
    r0 = 1;
    goto loc_8056BDD4;
}

loc_8056BDC4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8056BDC8:
{
}

loc_8056BDCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056BDB4;
    }
}

loc_8056BDD0:
{
    r0 = 0;
}

loc_8056BDD4:
{
}

loc_8056BDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056BDE4;
    }
}

loc_8056BDDC:
{
    r0 = r30;
    goto loc_8056BDE8;
}

loc_8056BDE4:
{
    r0 = 0;
}

loc_8056BDE8:
{
}

loc_8056BDEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056BE08;
    }
}

loc_8056BDF0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x8056BE08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BE08:
{
}

loc_8056BE0C:
{
    r28 = (r13 + -13288);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8056BE58;
    }
}

loc_8056BE14:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8056BE28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8056BE40;
}

loc_8056BE2C:
{
}

loc_8056BE30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_8056BE3C;
    }
}

loc_8056BE34:
{
    r0 = 1;
    goto loc_8056BE4C;
}

loc_8056BE3C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8056BE40:
{
}

loc_8056BE44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056BE2C;
    }
}

loc_8056BE48:
{
    r0 = 0;
}

loc_8056BE4C:
{
}

loc_8056BE50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056BE58;
    }
}

loc_8056BE54:
{
    goto loc_8056BE5C;
}

loc_8056BE58:
{
    r30 = 0;
}

loc_8056BE5C:
{
}

loc_8056BE60:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8056BE7C;
    }
}

loc_8056BE64:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x8056BE7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8056BE7C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8056BE94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056BC24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056BC24_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056BC24 func_8056BC24 preserves=true fpr_mask=0x00000000
