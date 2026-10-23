#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F21C(CpuContext* ctx);
extern "C" uint32_t func_8027F21C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F628(CpuContext* ctx);
extern "C" uint64_t func_8027F628_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80359338(CpuContext* ctx);
extern "C" uint64_t func_80359338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80361D68(CpuContext* ctx);
extern "C" uint64_t func_80361D68_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_803625DC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_803625DC;

loc_803625DC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r4;
    r3 = (r3 + 804);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = r27;
    ctx->lr = 0x80362620u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F21C_966 = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_966;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x80362638u;
    if constexpr (KnownRegArgsCpuCall<0x8027F628u>(&func_8027F628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8027F628_D0E = func_8027F628_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F628_D0E);
        r4 = static_cast<uint32_t>(regargs_result_8027F628_D0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027F628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r27 = 0;
    r30 = (r31 + 804);
    r29 = (r1 + 8);
    goto loc_803626C4;
}

loc_80362648:
{
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16(r29);
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl1_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl1_0x8029F728;
    }
}

loc_inl1_0x8029F724:
{
    r3 = 0;
}

loc_inl1_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl1_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    MemoryInline::FlatWrite32(r30, r3);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    r0 = (r27 & 65535);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 10));
    // inline leaf 0x803625D4 (2 guest instruction(s))
    r3 = 10;
    // end of inlined leaf 0x803625D4
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r28 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80362690:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80362698;
    }
}

loc_80362694:
{
    r28 = (r28 | 4);
}

loc_80362698:
{
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r4 = 1;
    ctx->lr = 0x803626A4u;
    if constexpr (KnownRegArgsCpuCall<0x80359338u>(&func_80359338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359338_1717 = func_80359338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80359338_1717);
        r4 = static_cast<uint32_t>(regargs_result_80359338_1717 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80359338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803626A8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_803626B4;
    }
}

loc_803626AC:
{
    r0 = (r28 | 2);
    r28 = (r0 & 65535);
}

loc_803626B4:
{
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r28));
    r30 = (r30 + 16);
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_803626C4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803626D0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80362648;
    }
}

loc_803626D4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->lr = 0x803626E4u;
    if constexpr (KnownRegArgsCpuCall<0x80361D68u>(&func_80361D68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80361D68_1D76 = func_80361D68_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80361D68_1D76);
        r4 = static_cast<uint32_t>(regargs_result_80361D68_1D76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80361D68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803625DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803625DC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803625DC func_803625DC preserves=true fpr_mask=0x00000000
