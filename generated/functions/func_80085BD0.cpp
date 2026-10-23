#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80085BD0_ra8_6_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80085BD0;

loc_80085BD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r3 = (r3 + 4);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = (r26 + 52);
    r30 = (r26 + 1588);
}

loc_80085BF8:
{
    r3 = r31;
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = (r31 + 48);
}

loc_80085C08:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_80085BF8;
    }
}

loc_80085C0C:
{
    r31 = (r26 + 3636);
}

loc_80085C10:
{
    r3 = r30;
    // inline leaf 0x800753F4 (1 guest instruction(s))
    // end of inlined leaf 0x800753F4
    r30 = (r30 + 64);
}

loc_80085C20:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_80085C10;
    }
}

loc_80085C24:
{
    r30 = (r26 + 5172);
}

loc_80085C28:
{
    r3 = r31;
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = (r31 + 48);
}

loc_80085C38:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_80085C28;
    }
}

loc_80085C3C:
{
    r31 = (r26 + 6708);
}

loc_80085C40:
{
    r3 = r30;
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r30 = (r30 + 48);
}

loc_80085C50:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_80085C40;
    }
}

loc_80085C54:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r0));
    r3 = (r26 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r27 = 0;
    r30 = (r26 + 52);
    r31 = (r26 + 1588);
    r29 = (r26 + 3636);
    r28 = (r26 + 5172);
}

loc_80085C7C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = r31;
    // inline leaf 0x80501CD8 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1496));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1492));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 48);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 56);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8, f2.d);
    // end of inlined leaf 0x80501CD8
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r30 = (r30 + 48);
    r31 = (r31 + 64);
    r29 = (r29 + 48);
    r28 = (r28 + 48);
    r27 = (r27 + 1);
}

loc_80085CB4:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(32))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_80085C7C;
    }
}

loc_80085CB8:
{
    r3 = r26;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r3;
}

}

extern "C" void func_80085BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80085BD0_ra8_6_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000080B gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085BD0 func_80085BD0 preserves=true fpr_mask=0x00000000
