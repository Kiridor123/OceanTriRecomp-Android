#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055BEEC(CpuContext* ctx);
extern "C" uint64_t func_8055BEEC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_8055E7B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;

    MKW_GUEST_ENTER(0x8055E7B0u);
    goto loc_8055E7B0;

loc_8055E7B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 336;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x8055E7D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8055E7DC:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055E8B8;
    }
}

loc_8055E7E4:
{
    r6 = MemoryInline::FlatRead32((r29 + 48));
    r7 = 0x80650000u;
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r31 = 0;
    r5 = 0x80650000u;
    r7 = (r7 + 632);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r31);
    r0 = 1;
    r5 = (r5 + 15640);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r31);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r31);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r31);
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 68), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r29);
    r3 = (r3 + 76);
    ctx->lr = 0x8055E83Cu;
    if constexpr (KnownRegArgsCpuCall<0x8055BEECu>(&func_8055BEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8055BEEC_1048 = func_8055BEEC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055BEEC_1048);
        r4 = static_cast<uint32_t>(regargs_result_8055BEEC_1048 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = 0x80650000u;
}

loc_8055E844:
{
    r4 = (r4 + 200);
    r6 = r30;
    MemoryInline::FlatWrite32(r30, r4);
    r3 = (r4 + 144);
    r0 = (r4 + 260);
    MemoryInline::FlatWrite32((r30 + 76), r3);
    MemoryInline::FlatWrite32((r30 + 244), r0);
    MemoryInline::FlatWrite32((r30 + 248), r31);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8055E86C;
    }
}

loc_8055E868:
{
    r6 = (r30 + 244);
}

loc_8055E86C:
{
    r5 = r30;
    r3 = (r30 + 264);
    r4 = 1;
    // inline leaf 0x8053E990 (13 guest instruction(s))
    r7 = 0x80650000u;
    r0 = 0;
    r7 = (r7 + 544);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 33u, false, true);
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
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8053E990
}

loc_8055E880:
{
    r6 = r30;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8055E88C;
    }
}

loc_8055E888:
{
    r6 = (r30 + 244);
}

loc_8055E88C:
{
    r5 = r30;
    r3 = (r30 + 300);
    r4 = 0;
    // inline leaf 0x8053E990 (13 guest instruction(s))
    r7 = 0x80650000u;
    r0 = 0;
    r7 = (r7 + 544);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 33u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r6);
    }
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8053E990
    r4 = 0x80650000u;
    r4 = (r4 + 17984);
    MemoryInline::FlatWrite32(r30, r4);
    r3 = (r4 + 144);
    r0 = (r4 + 260);
    MemoryInline::FlatWrite32((r30 + 76), r3);
    MemoryInline::FlatWrite32((r30 + 244), r0);
}

loc_8055E8B8:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055E7B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055E7B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055E7B0 func_8055E7B0 preserves=true fpr_mask=0x00000000
