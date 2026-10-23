#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800888BC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800888BC;

loc_800888BC:
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
    r29 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r0 = (r4 + -1);
}

loc_800888EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8008890C;
    }
}

loc_800888F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 2532;
    r5 = 0x80590000u;
    r5 = (r5 + 540);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008890Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008890C:
{
    r4 = (r29 + -1);
}

loc_80088914:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(2))) {
        goto loc_80088A44;
    }
}

loc_80088918:
{
}

loc_8008891C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80088A44;
    }
}

loc_80088920:
{
}

loc_80088924:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_80088A44;
    }
}

loc_80088928:
{
    r0 = 1;
    r3 = (r31 + r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_80088938:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80088A34;
    }
}

loc_8008893C:
{
    r29 = (r4 * 48);
    r3 = (r31 + r29);
    r30 = (r3 + 8);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31772));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
}

loc_80088980:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_800889E8;
    }
}

loc_80088984:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31776));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 8);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31772));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r3 = (r31 + r29);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    goto loc_800889F8;
}

loc_800889E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31788));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
}

loc_800889F8:
{
}

loc_800889FC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80088A1C;
    }
}

loc_80088A00:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 2566;
    r5 = 0x80590000u;
    r5 = (r5 + 616);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80088A1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80088A1C:
{
    r3 = r30;
    r4 = (r31 + r29);
    r4 = (r4 + 8);
    r5 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_80088A44;
}

loc_80088A34:
{
    r0 = (r4 * 48);
    r3 = (r31 + r0);
    r3 = (r3 + 8);
    // inline leaf 0x8050199C (8 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1496));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    // end of inlined leaf 0x8050199C
}

loc_80088A44:
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
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800888BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800888BC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800888BC func_800888BC preserves=true fpr_mask=0x00000000
