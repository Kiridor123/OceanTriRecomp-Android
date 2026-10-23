#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802245B4(CpuContext* ctx);
extern "C" uint64_t func_802245B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8022431C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8022431C;

loc_8022431C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = 1;
    r31 = 4;
    r30 = (r3 + 356);
    r29 = (r3 + 3792);
}

loc_80224344:
{
    r0 = MemoryInline::FlatRead32(r27);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 536));
}

loc_80224354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80224394;
    }
}

loc_80224358:
{
    r0 = MemoryInline::FlatRead32((r30 + 284));
}

loc_80224360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224394;
    }
}

loc_80224364:
{
    r3 = r27;
    r4 = r29;
    r5 = r28;
    ctx->lr = 0x80224374u;
    if constexpr (KnownRegArgsCpuCall<0x802245B4u>(&func_802245B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_802245B4_949 = func_802245B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802245B4_949);
        r4 = static_cast<uint32_t>(regargs_result_802245B4_949 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802245B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r30 + 284));
    r5 = 2;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80224394u;
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

loc_80224394:
{
    r31 = (r31 + 4);
    r30 = (r30 + 356);
    r29 = (r29 + 144);
    r28 = (r28 + 1);
}

loc_802243A8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(7))) {
        goto loc_80224344;
    }
}

loc_802243AC:
{
    r5 = MemoryInline::FlatRead8((r27 + 2506));
}

loc_802243B4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_80224414;
    }
}

loc_802243B8:
{
    r0 = MemoryInline::FlatRead32((r27 + 2860));
}

loc_802243C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224414;
    }
}

loc_802243C4:
{
    r3 = r27;
    r4 = (r27 + 4656);
    r6 = (r27 + 2580);
    // inline leaf 0x80224854 (12 guest instruction(s))
}

loc_inl1_0x80224854:
{
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r5 = (r5 & 255);
    r0 = (r5 + -5);
}

loc_inl1_0x80224868:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl1_0x80224878;
    }
}

loc_inl1_0x8022486C:
{
    r0 = (r3 + 2580);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    goto loc_inl1_cont_80224854;
}

loc_inl1_0x80224878:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_inl1_cont_80224854:
{
    // end of inlined leaf 0x80224854
    r3 = (r27 + 4656);
    r4 = MemoryInline::FlatRead32((r27 + 2860));
    r5 = 1;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x802243F4u;
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
    r3 = (r27 + 4656);
    r4 = MemoryInline::FlatRead32((r27 + 2860));
    r5 = 2;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80224414u;
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

loc_80224414:
{
    r5 = MemoryInline::FlatRead8((r27 + 2507));
}

loc_8022441C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8022447C;
    }
}

loc_80224420:
{
    r0 = MemoryInline::FlatRead32((r27 + 3216));
}

loc_80224428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022447C;
    }
}

loc_8022442C:
{
    r3 = r27;
    r4 = (r27 + 4928);
    r6 = (r27 + 2936);
    // inline leaf 0x80224854 (12 guest instruction(s))
}

loc_inl2_0x80224854:
{
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r5 = (r5 & 255);
    r0 = (r5 + -5);
}

loc_inl2_0x80224868:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl2_0x80224878;
    }
}

loc_inl2_0x8022486C:
{
    r0 = (r3 + 2580);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    goto loc_inl2_cont_80224854;
}

loc_inl2_0x80224878:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_inl2_cont_80224854:
{
    // end of inlined leaf 0x80224854
    r3 = (r27 + 4928);
    r4 = MemoryInline::FlatRead32((r27 + 3216));
    r5 = 1;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8022445Cu;
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
    r3 = (r27 + 4928);
    r4 = MemoryInline::FlatRead32((r27 + 3216));
    r5 = 2;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8022447Cu;
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

loc_8022447C:
{
    r5 = MemoryInline::FlatRead8((r27 + 2508));
}

loc_80224484:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_802244E4;
    }
}

loc_80224488:
{
    r0 = MemoryInline::FlatRead32((r27 + 3572));
}

loc_80224490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802244E4;
    }
}

loc_80224494:
{
    r3 = r27;
    r4 = (r27 + 5200);
    r6 = (r27 + 3292);
    // inline leaf 0x80224854 (12 guest instruction(s))
}

loc_inl3_0x80224854:
{
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r5 = (r5 & 255);
    r0 = (r5 + -5);
}

loc_inl3_0x80224868:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl3_0x80224878;
    }
}

loc_inl3_0x8022486C:
{
    r0 = (r3 + 2580);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    goto loc_inl3_cont_80224854;
}

loc_inl3_0x80224878:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_inl3_cont_80224854:
{
    // end of inlined leaf 0x80224854
    r3 = (r27 + 5200);
    r4 = MemoryInline::FlatRead32((r27 + 3572));
    r5 = 1;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x802244C4u;
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
    r3 = (r27 + 5200);
    r4 = MemoryInline::FlatRead32((r27 + 3572));
    r5 = 2;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x802244E4u;
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

loc_802244E4:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8022431C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8022431C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8022431C func_8022431C preserves=true fpr_mask=0x00000000
