#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7D44(CpuContext* ctx);
extern "C" uint64_t func_800E7D44_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_800E7D44_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800E7D44_statefree_v1(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E7B20_ra308_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r8, uint32_t arg_r9, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[8] = arg_r8;
    ctx->gpr[9] = arg_r9;

    MKW_GUEST_ENTER(0x800E7B20u);
    goto loc_800E7B20;

loc_800E7B20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    ctx->lr = 0x800E7B40u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E7D44u) && KnownTranslatedCpuCall<0x800E7D44u>::kAvailable && !KnownTranslatedCpuCall<0x800E7D44u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E7D44u>()) {
        const auto state_free_result_800E7D44_841 = func_800E7D44_statefree_v1(r1, r3, r31, 0x800E7B40u);
        r1 = static_cast<uint32_t>(state_free_result_800E7D44_841[0]);
        r4 = static_cast<uint32_t>(state_free_result_800E7D44_841[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E7D44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r3 = 0x805A0000u;
    r0 = (r3 + -31384);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 140u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r29, r0);
    r30 = 127;
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r29 + 8), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 110u, (r29 + 110), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 111u, (r29 + 111), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 112u, (r29 + 112), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 113u, (r29 + 113), static_cast<uint8_t>(r30));
    r0 = 512;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r29 + 116), r0);
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r29 + 120), r31);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30192));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r29 + 136), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30188));
    ctx->lr = 0x800E7B84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E7D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    MemoryInline::FlatWriteFloat32((r29 + 140), f1.d);
    r3 = (r29 + 144);
    r4 = 0x800E0000u;
    r4 = (r4 + 31896);
    r5 = 0x800E0000u;
    r5 = (r5 + 21932);
    r6 = 72;
    r7 = 49;
    ctx->lr = 0x800E7BA8u;
    if constexpr (KnownRegArgsCpuCall<0x80457198u>(&func_80457198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457198_1575 = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_1575);
        r4 = static_cast<uint32_t>(regargs_result_80457198_1575 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80457198u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 10), 0, 126u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r29 + 10), r30);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 12), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r29 + 14), r30);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r29 + 16), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r29 + 18), r30);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r29 + 20), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r29 + 22), r30);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r29 + 24), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r29 + 26), r30);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r29 + 28), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r29 + 30), r30);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r29 + 32), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r29 + 34), r30);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r29 + 36), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r29 + 38), r30);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r29 + 40), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r29 + 42), r30);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r29 + 44), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r29 + 46), r30);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r29 + 48), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 40u, (r29 + 50), r30);
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r29 + 52), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 44u, (r29 + 54), r30);
        MemoryInline::WriteResolved16(guest_range_0, 46u, (r29 + 56), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 48u, (r29 + 58), r30);
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r29 + 60), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r29 + 62), r30);
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r29 + 64), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r29 + 66), r30);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r29 + 68), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (r29 + 70), r30);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r29 + 72), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r29 + 74), r30);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (r29 + 76), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 68u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 68u, (r29 + 78), r30);
        MemoryInline::WriteResolved16(guest_range_0, 70u, (r29 + 80), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 72u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 72u, (r29 + 82), r30);
        MemoryInline::WriteResolved16(guest_range_0, 74u, (r29 + 84), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 76u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 76u, (r29 + 86), r30);
        MemoryInline::WriteResolved16(guest_range_0, 78u, (r29 + 88), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 80u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 80u, (r29 + 90), r30);
        MemoryInline::WriteResolved16(guest_range_0, 82u, (r29 + 92), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 84u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 84u, (r29 + 94), r30);
        MemoryInline::WriteResolved16(guest_range_0, 86u, (r29 + 96), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 88u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 88u, (r29 + 98), r30);
        MemoryInline::WriteResolved16(guest_range_0, 90u, (r29 + 100), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 92u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 92u, (r29 + 102), r30);
        MemoryInline::WriteResolved16(guest_range_0, 94u, (r29 + 104), r30);
    }
    MemoryInline::WriteResolved16(guest_range_0, 96u, (r29 + 106), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 114u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 114u, (r29 + 124), r31);
        MemoryInline::WriteResolved32(guest_range_0, 118u, (r29 + 128), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 122u, (r29 + 132), r31);
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_800E7B20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E7B20_ra308_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[8], ctx->gpr[9], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FEE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFC fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E7B20 func_800E7B20 preserves=true fpr_mask=0x00000000
