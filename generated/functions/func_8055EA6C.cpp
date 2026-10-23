#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80552728(CpuContext* ctx);
extern "C" double func_80552728_ra38_0_0_2(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8055472C(CpuContext* ctx);
extern "C" void func_8055472C_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8055BEEC(CpuContext* ctx);
extern "C" uint64_t func_8055BEEC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_8055472C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8055EA6C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[2].d = arg_f2;

    goto loc_8055EA6C;

loc_8055EA6C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 7052;
    ctx->lr = 0x8055EA90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8055EA94:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055EBF4;
    }
}

loc_8055EA9C:
{
    r28 = MemoryInline::FlatRead32((r26 + 48));
    r4 = 0x80650000u;
    r30 = MemoryInline::FlatRead32((r26 + 8));
    r31 = 0;
    r29 = 0x80650000u;
    r4 = (r4 + 9528);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = 1;
    r29 = (r29 + 15748);
    r5 = 6104;
    MemoryInline::FlatWrite32(r3, r4);
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 6120), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 6121), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 6124), r0);
    MemoryInline::FlatWrite32((r3 + 6128), r26);
    r3 = (r3 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r30;
    r5 = r29;
    r6 = r28;
    r3 = (r27 + 6132);
    ctx->lr = 0x8055EAF8u;
    if constexpr (KnownRegArgsCpuCall<0x8055BEECu>(&func_8055BEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_8055BEEC_1149 = func_8055BEEC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055BEEC_1149);
        r4 = static_cast<uint32_t>(regargs_result_8055BEEC_1149 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8055BEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = 0x80650000u;
    r3 = 0x80650000u;
    r5 = (r5 + 9016);
}

loc_8055EB08:
{
    MemoryInline::FlatWrite32(r27, r5);
    r4 = (r5 + 76);
    r0 = (r5 + 192);
    r3 = (r3 + 9496);
    MemoryInline::FlatWrite32((r27 + 6132), r4);
    r6 = r27;
    MemoryInline::FlatWrite32((r27 + 6300), r0);
    MemoryInline::FlatWrite32((r27 + 6308), r31);
    MemoryInline::FlatWrite32((r27 + 6304), r3);
    MemoryInline::FlatWrite32((r27 + 6316), r27);
    MemoryInline::FlatWrite32((r27 + 6320), r31);
    MemoryInline::FlatWrite32((r27 + 6324), r31);
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055EB40;
    }
}

loc_8055EB3C:
{
    r6 = (r27 + 6300);
}

loc_8055EB40:
{
    r5 = r27;
    r3 = (r27 + 6328);
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80552728u>(&func_80552728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80552728_1B61 = func_80552728_ra38_0_0_2(ctx, r3, r4, r5);
        f1.d = regargs_result_80552728_1B61;
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80552728u>(ctx);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    }
}

loc_8055EB54:
{
    r6 = r27;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055EB60;
    }
}

loc_8055EB5C:
{
    r6 = (r27 + 6300);
}

loc_8055EB60:
{
    r5 = r27;
    r3 = (r27 + 6840);
    r4 = 1;
    // inline leaf 0x805547A4 (12 guest instruction(s))
    r7 = 0x80650000u;
    r0 = 0;
    r7 = (r7 + 9396);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    // end of inlined leaf 0x805547A4
}

loc_8055EB74:
{
    r6 = r27;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055EB80;
    }
}

loc_8055EB7C:
{
    r6 = (r27 + 6300);
}

loc_8055EB80:
{
    r5 = r27;
    r3 = (r27 + 6872);
    r4 = 2;
    // inline leaf 0x805547A4 (12 guest instruction(s))
    r7 = 0x80650000u;
    r0 = 0;
    r7 = (r7 + 9396);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    // end of inlined leaf 0x805547A4
}

loc_8055EB94:
{
    r6 = r27;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055EBA0;
    }
}

loc_8055EB9C:
{
    r6 = (r27 + 6300);
}

loc_8055EBA0:
{
    r5 = r27;
    r3 = (r27 + 6904);
    r4 = 3;
    // inline leaf 0x80554A54 (17 guest instruction(s))
    r7 = 0x80650000u;
    r8 = 0;
    r7 = (r7 + 9352);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r8);
    r0 = (r7 + 28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r5);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r6);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r8);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r8);
    // end of inlined leaf 0x80554A54
}

loc_8055EBB4:
{
    r6 = r27;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055EBC0;
    }
}

loc_8055EBBC:
{
    r6 = (r27 + 6300);
}

loc_8055EBC0:
{
    r5 = r27;
    r3 = (r27 + 7016);
    r4 = 4;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8055472Cu) && KnownTranslatedCpuCall<0x8055472Cu>::kAvailable && !KnownTranslatedCpuCall<0x8055472Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8055472Cu>()) {
        const auto state_free_result_8055472C_33FF = func_8055472C_statefree(r3, r4, r5, r6);
        r7 = static_cast<uint32_t>(state_free_result_8055472C_33FF[0]);
        r8 = static_cast<uint32_t>(state_free_result_8055472C_33FF[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8055472Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 1;
    r4 = 0x80650000u;
    MemoryInline::FlatWrite8((r27 + 7048), static_cast<uint8_t>(r0));
    r4 = (r4 + 17384);
    r3 = (r4 + 76);
    MemoryInline::FlatWrite32(r27, r4);
    r0 = (r4 + 192);
    MemoryInline::FlatWrite32((r27 + 6132), r3);
    MemoryInline::FlatWrite32((r27 + 6300), r0);
}

loc_8055EBF4:
{
    r11 = (r1 + 32);
    r3 = r27;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055EA6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055EA6C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055EA6C func_8055EA6C preserves=true fpr_mask=0x00000000
