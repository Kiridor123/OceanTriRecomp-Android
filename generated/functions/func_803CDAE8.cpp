#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CE620(CpuContext* ctx);
extern "C" uint32_t func_803CE620_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803CE638(CpuContext* ctx);
extern "C" uint32_t func_803CE638_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803CE620_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_803CE638_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_803CE620_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_803CE638_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803CDAE8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803CDAE8u);
    goto loc_803CDAE8;

loc_803CDAE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r7;
    r30 = r8;
    r4 = MemoryInline::FlatRead32((r3 + 9256));
}

loc_803CDB18:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803CDB24;
    }
}

loc_803CDB1C:
{
    r3 = 0;
    goto loc_803CDC78;
}

loc_803CDB24:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_803CDB2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803CDB74;
    }
}

loc_803CDB30:
{
    r3 = r4;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803CE620u) && KnownTranslatedCpuCall<0x803CE620u>::kAvailable && !KnownTranslatedCpuCall<0x803CE620u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803CE620u>()) {
        const auto state_free_result_803CE620_BD2 = func_803CE620_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_803CE620_BD2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CE620u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_803CDB3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803CDB74;
    }
}

loc_803CDB40:
{
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803CE638u) && KnownTranslatedCpuCall<0x803CE638u>::kAvailable && !KnownTranslatedCpuCall<0x803CE638u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803CE638u>()) {
        const auto state_free_result_803CE638_10C8 = func_803CE638_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_803CE638_10C8[0]);
        cr = static_cast<uint32_t>(state_free_result_803CE638_10C8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CE638u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803CE620u) && KnownTranslatedCpuCall<0x803CE620u>::kAvailable && !KnownTranslatedCpuCall<0x803CE620u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803CE620u>()) {
        const auto state_free_result_803CE620_1595 = func_803CE620_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_803CE620_1595);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CE620u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = 0x80030000u;
    r4 = (r4 + 34);
    r6 = r30;
    // inline leaf 0x803CCF78 (7 guest instruction(s))
}

loc_inl1_0x803CCF78:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x803CCF80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803CCF84:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_803CCF78;
}

loc_inl1_return:
{
}

loc_inl1_cont_803CCF78:
{
    // end of inlined leaf 0x803CCF78
    r3 = -1;
    goto loc_803CDC78;
}

loc_803CDB74:
{
    r29 = MemoryInline::FlatRead32(r27);
    r0 = 0;
    MemoryInline::FlatWrite32(r27, r0);
}

loc_803CDB84:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803CDB8C;
    }
}

loc_803CDB88:
{
    MemoryInline::FlatWrite32(r28, r0);
}

loc_803CDB8C:
{
}

loc_803CDB90:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803CDB9C;
    }
}

loc_803CDB94:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_803CDB9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 9244));
}

loc_803CDBA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_803CDBB0;
    }
}

loc_803CDBA8:
{
    r3 = 0;
    goto loc_803CDC78;
}

loc_803CDBB0:
{
    r30 = (r31 + 25);
    r3 = (r1 + 8);
    r4 = r30;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x803CDBDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    r5 = (r3 & 65535);
}

loc_803CDBE8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803CDC0C;
    }
}

loc_803CDBEC:
{
    r3 = r31;
    r4 = 0x80030000u;
    r4 = (r4 + 34);
    r5 = 0;
    r6 = 0x80000000u;
    // inline leaf 0x803CCF78 (7 guest instruction(s))
}

loc_inl3_0x803CCF78:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_0x803CCF80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x803CCF84:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl3_cont_803CCF78;
}

loc_inl3_return:
{
}

loc_inl3_cont_803CCF78:
{
    // end of inlined leaf 0x803CCF78
    r3 = -1;
    goto loc_803CDC78;
}

loc_803CDC0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 9244));
    r0 = (r5 + 2);
}

loc_803CDC18:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803CDC24;
    }
}

loc_803CDC1C:
{
    r3 = 0;
    goto loc_803CDC78;
}

loc_803CDC24:
{
}

loc_803CDC28:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r5))) {
        goto loc_803CDC34;
    }
}

loc_803CDC2C:
{
    r3 = 0;
    goto loc_803CDC78;
}

loc_803CDC34:
{
    r3 = r26;
    r4 = (r30 + 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite32(r27, r3);
    r4 = (r3 + 2);
    r0 = MemoryInline::FlatRead32((r31 + 9244));
    r5 = (r0 - r4);
    MemoryInline::FlatWrite32((r31 + 9244), r5);
}

loc_803CDC5C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803CDC70;
    }
}

loc_803CDC60:
{
    r3 = r30;
    r4 = (r31 + r4);
    r4 = (r4 + 25);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803CDC70:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r3 + 2);
}

loc_803CDC78:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CDAE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CDAE8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CDAE8 func_803CDAE8 preserves=true fpr_mask=0x00000000
