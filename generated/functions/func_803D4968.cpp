#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457198(CpuContext* ctx);
extern "C" uint64_t func_80457198_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803D4968_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_803D4968;

loc_803D4968:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r4 = 0x80600000u;
    r0 = (r4 + -20280);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 124);
    r4 = 0x803D0000u;
    r4 = (r4 + 19396);
    r5 = 0x803D0000u;
    r5 = (r5 + 19292);
    r6 = 164;
    r7 = 2;
    ctx->lr = 0x803D49B0u;
    if constexpr (KnownRegArgsCpuCall<0x80457198u>(&func_80457198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457198_7C7 = func_80457198_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457198_7C7);
        r4 = static_cast<uint32_t>(regargs_result_80457198_7C7 >> 32);
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
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 119u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 16), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r29 + 100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r29 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 97u, (r29 + 101), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r29 + 24), r0);
    MemoryInline::WriteResolved8(guest_range_0, 98u, (r29 + 102), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r29 + 103), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r29 + 104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r29 + 36), r0);
    MemoryInline::WriteResolved8(guest_range_0, 101u, (r29 + 105), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r29 + 40), r0);
    MemoryInline::WriteResolved8(guest_range_0, 102u, (r29 + 106), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r29 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_0, 103u, (r29 + 107), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r29 + 48), r0);
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r29 + 108), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r29 + 52), r0);
    MemoryInline::WriteResolved8(guest_range_0, 105u, (r29 + 109), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r29 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_0, 106u, (r29 + 110), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r29 + 60), r0);
    MemoryInline::WriteResolved8(guest_range_0, 107u, (r29 + 111), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r29 + 64), r0);
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r29 + 112), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r29 + 68), r0);
    MemoryInline::WriteResolved8(guest_range_0, 109u, (r29 + 113), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r29 + 72), r0);
    MemoryInline::WriteResolved8(guest_range_0, 110u, (r29 + 114), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r29 + 76), r0);
    MemoryInline::WriteResolved8(guest_range_0, 111u, (r29 + 115), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r29 + 80), r0);
    MemoryInline::WriteResolved8(guest_range_0, 112u, (r29 + 116), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r29 + 84), r0);
    MemoryInline::WriteResolved8(guest_range_0, 113u, (r29 + 117), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r29 + 88), r0);
    MemoryInline::WriteResolved8(guest_range_0, 114u, (r29 + 118), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r29 + 92), r0);
    MemoryInline::WriteResolved8(guest_range_0, 115u, (r29 + 119), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r29 + 96), r0);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r29 + 120), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r29 + 121), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 118u, (r29 + 122), static_cast<uint8_t>(r0));
    r30 = 0;
    r31 = (r29 + 124);
}

loc_803D4A7C:
{
    r3 = r31;
    // inline leaf 0x803D4AB4 (42 guest instruction(s))
    r6 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r6);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4960));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r6);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r6);
    MemoryInline::WriteResolved8(guest_range_1, 116u, (r3 + 116), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 148), r6);
    r4 = 0x80570000u;
    r5 = (r4 + 11248);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 156), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 160), r0);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 88), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 96), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 104), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r6);
    }
    // end of inlined leaf 0x803D4AB4
    r31 = (r31 + 164);
    r30 = (r30 + 1);
}

loc_803D4A90:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_803D4A7C;
    }
}

loc_803D4A94:
{
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

extern "C" void func_803D4968(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D4968_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F7F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D4968 func_803D4968 preserves=true fpr_mask=0x00000000
