#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050B800_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8050B800;

loc_8050B800:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_8050B818:
{
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 1;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050B838;
    }
}

loc_8050B82C:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_8050B834:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8050B840;
    }
}

loc_8050B838:
{
    r3 = -1;
    goto loc_8050B980;
}

loc_8050B840:
{
}

loc_8050B844:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8050B8E0;
    }
}

loc_8050B848:
{
}

loc_8050B84C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8050B858;
    }
}

loc_8050B850:
{
}

loc_8050B854:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_8050B860;
    }
}

loc_8050B858:
{
    r27 = 0;
    goto loc_8050B870;
}

loc_8050B860:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r6);
    r27 = (r4 + r0);
}

loc_8050B870:
{
    r4 = (r5 - r6);
    r26 = MemoryInline::FlatRead32((r3 + 8));
    r24 = (r4 + -1);
    r23 = 0;
    r31 = 0;
    goto loc_8050B8CC;
}

loc_8050B888:
{
    r0 = (r23 + r24);
    r12 = r30;
    r25 = (static_cast<int32_t>(r0) >> 1);
    r4 = r29;
    r0 = (r25 * r26);
    r3 = (r27 + r0);
    ctr = r12;
    ctx->lr = 0x8050B8A8u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8050B8AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050B8B4;
    }
}

loc_8050B8B0:
{
    r31 = 1;
}

loc_8050B8B4:
{
}

loc_8050B8B8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8050B8C0;
    }
}

loc_8050B8BC:
{
    r23 = (r25 + 1);
}

loc_8050B8C0:
{
}

loc_8050B8C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8050B8CC;
    }
}

loc_8050B8C8:
{
    r24 = (r25 + -1);
}

loc_8050B8CC:
{
}

loc_8050B8D0:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r24))) {
        goto loc_8050B888;
    }
}

loc_8050B8D4:
{
    r0 = (r23 * r26);
    r4 = (r27 + r0);
    goto loc_8050B958;
}

loc_8050B8E0:
{
}

loc_8050B8E4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8050B8F0;
    }
}

loc_8050B8E8:
{
}

loc_8050B8EC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_8050B8F8;
    }
}

loc_8050B8F0:
{
    r23 = 0;
    goto loc_8050B908;
}

loc_8050B8F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r6);
    r23 = (r4 + r0);
}

loc_8050B908:
{
    r25 = MemoryInline::FlatRead32((r3 + 8));
    r24 = (r5 - r6);
    r26 = 0;
    r27 = 0;
    goto loc_8050B94C;
}

loc_8050B91C:
{
    r12 = r30;
    r3 = r29;
    r4 = (r23 + r27);
    ctr = r12;
    ctx->lr = 0x8050B930u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8050B934:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050B944;
    }
}

loc_8050B938:
{
    r0 = (r25 * r26);
    r4 = (r23 + r0);
    goto loc_8050B958;
}

loc_8050B944:
{
    r27 = (r27 + r25);
    r26 = (r26 + 1);
}

loc_8050B94C:
{
}

loc_8050B950:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r24))) {
        goto loc_8050B91C;
    }
}

loc_8050B954:
{
    r4 = 0;
}

loc_8050B958:
{
}

loc_8050B95C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8050B97C;
    }
}

loc_8050B960:
{
}

loc_8050B964:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8050B97C;
    }
}

loc_8050B968:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r3 = (r4 - r3);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    goto loc_8050B980;
}

loc_8050B97C:
{
    r3 = -1;
}

loc_8050B980:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B800(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B800_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B800 func_8050B800 preserves=true fpr_mask=0x00000000
