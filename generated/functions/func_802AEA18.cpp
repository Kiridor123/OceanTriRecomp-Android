#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004045C(CpuContext* ctx);
extern "C" uint32_t func_8004045C_ra0_0_8_0(CpuContext*);
extern "C" void func_80057874(CpuContext* ctx);
extern "C" void func_80057874_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CF3F8(CpuContext* ctx);
extern "C" uint32_t func_800CF3F8_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_802AE970(CpuContext* ctx);
extern "C" void func_802AE970_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AFF9C(CpuContext* ctx);
extern "C" uint32_t func_802AFF9C_ra0_0_8_0(CpuContext*);
extern "C" void func_802B2B04(CpuContext* ctx);
extern "C" uint64_t func_802B2B04_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802B4EBC(CpuContext* ctx);
extern "C" uint64_t func_802B4EBC_ra18_1e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_8004045C_statefree();
extern "C" uint64_t func_800CF3F8_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_802AE970_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" MkwStateFreeResult2 func_802AFF9C_statefree();

extern "C" uint64_t func_802AEA18_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802AEA18;

loc_802AEA18:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -21440);
    r30 = (r31 + 3024);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802AEA48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AEA94;
    }
}

loc_802AEA4C:
{
    r0 = MemoryInline::FlatRead8((r31 + 3013));
}

loc_802AEA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_802AEA60;
    }
}

loc_802AEA58:
{
    ctx->lr = 0x802AEA5Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B4EBCu>(&func_802B4EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_802B4EBC_E76 = func_802B4EBC_ra18_1e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802B4EBC_E76);
        r4 = static_cast<uint32_t>(regargs_result_802B4EBC_E76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802B4EBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AEB9C;
}

loc_802AEA60:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802AEA68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802AEA80;
    }
}

loc_802AEA6C:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r29 = (r3 + 3396);
    goto loc_802AEAD0;
}

loc_802AEA80:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r29 = (r3 + 3472);
    goto loc_802AEAD0;
}

loc_802AEA94:
{
    // inline leaf 0x802AFF9C (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802AFF9C
}

loc_802AEA9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AEB08;
    }
}

loc_802AEAA0:
{
    ctx->lr = 0x802AEAA4u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE0EC_19D3 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_19D3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_802AEAA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802AEAC0;
    }
}

loc_802AEAAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r29 = (r3 + 3472);
    goto loc_802AEAD0;
}

loc_802AEAC0:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r29 = (r3 + 3396);
}

loc_802AEAD0:
{
    r3 = MemoryInline::FlatRead8(r29);
    MemoryInline::FlatWriteRam8((r31 + 3015), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead8((r29 + 1));
    MemoryInline::FlatWriteRam8((r31 + 3016), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::FlatWriteRam8((r31 + 3017), static_cast<uint8_t>(r5));
    if constexpr (KnownRegArgsCpuCall<0x80057874u>(&func_80057874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80057874_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80057874u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead8((r31 + 3018));
    r4 = MemoryInline::FlatRead8((r31 + 3019));
    r5 = MemoryInline::FlatRead8((r31 + 3020));
    // inline leaf 0x800578EC (6 guest instruction(s))
    r6 = 0x80670000u;
    r6 = (r6 + -11912);
    MemoryInline::FlatWriteRam8((r6 + 118), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + 119), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r6 + 120), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800578EC
    r3 = r30;
    r4 = (r29 + 8);
    // inline leaf 0x802AE970 (29 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 56u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r0);
    // end of inlined leaf 0x802AE970
}

loc_802AEB08:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r29 = (r3 & 255);
    r3 = 0;
    // inline leaf 0x800CF3F8 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 39), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800CF3F8
    r3 = (r31 + 3024);
    r4 = (r31 + 3080);
    r5 = 0;
    ctx->lr = 0x802AEB28u;
    if constexpr (KnownRegArgsCpuCall<0x802B2B04u>(&func_802B2B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802B2B04_2FF6 = func_802B2B04_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802B2B04_2FF6);
        r4 = static_cast<uint32_t>(regargs_result_802B2B04_2FF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802B2B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004045Cu) && KnownTranslatedCpuCall<0x8004045Cu>::kAvailable && !KnownTranslatedCpuCall<0x8004045Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004045Cu>()) {
        const auto state_free_result_8004045C_36C9 = func_8004045C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_8004045C_36C9[0]);
        r3 = static_cast<uint32_t>(state_free_result_8004045C_36C9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8004045Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802AEB30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802AEB94;
    }
}

loc_802AEB34:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CF3F8u) && KnownTranslatedCpuCall<0x800CF3F8u>::kAvailable && !KnownTranslatedCpuCall<0x800CF3F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CF3F8u>()) {
        const auto state_free_result_800CF3F8_3CB1 = func_800CF3F8_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_800CF3F8_3CB1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF3F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AFF9Cu) && KnownTranslatedCpuCall<0x802AFF9Cu>::kAvailable && !KnownTranslatedCpuCall<0x802AFF9Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AFF9Cu>()) {
        const auto state_free_result_802AFF9C_41AD = func_802AFF9C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_802AFF9C_41AD[0]);
        r3 = static_cast<uint32_t>(state_free_result_802AFF9C_41AD[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802AFF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802AEB44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AEB9C;
    }
}

loc_802AEB48:
{
    ctx->lr = 0x802AEB4Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE0EC_475D = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_475D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_802AEB50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802AEB68;
    }
}

loc_802AEB54:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r4 = (r3 + 3472);
    goto loc_802AEB78;
}

loc_802AEB68:
{
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r3 = (r31 + r0);
    r4 = (r3 + 3396);
}

loc_802AEB78:
{
    r3 = (r1 + 8);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AE970u) && KnownTranslatedCpuCall<0x802AE970u>::kAvailable && !KnownTranslatedCpuCall<0x802AE970u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AE970u>()) {
        const auto state_free_result_802AE970_4D29 = func_802AE970_statefree(r3, r4, f0);
        r0 = static_cast<uint32_t>(state_free_result_802AE970_4D29[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_802AE970_4D29[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802AE970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r1 + 8);
    r4 = (r31 + 3080);
    r5 = 1;
    ctx->lr = 0x802AEB94u;
    if constexpr (KnownRegArgsCpuCall<0x802B2B04u>(&func_802B2B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802B2B04_52C3 = func_802B2B04_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802B2B04_52C3);
        r4 = static_cast<uint32_t>(regargs_result_802B2B04_52C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802B2B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802AEB94:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CF3F8u) && KnownTranslatedCpuCall<0x800CF3F8u>::kAvailable && !KnownTranslatedCpuCall<0x800CF3F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CF3F8u>()) {
        const auto state_free_result_800CF3F8_59E9 = func_800CF3F8_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_800CF3F8_59E9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF3F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802AEB9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AEA18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AEA18_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AEA18 func_802AEA18 preserves=true fpr_mask=0x00000000
