#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080CC4(CpuContext* ctx);
extern "C" uint64_t func_80080CC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8007EDBC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8007EDBC;

loc_8007EDBC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r29 = r3;
    r12 = MemoryInline::FlatRead32((r1 + 56));
    r11 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 64));
    r28 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r11);
    }
    r5 = (r1 + 16);
    ctx->lr = 0x8007EE08u;
    if constexpr (KnownRegArgsCpuCall<0x80080CC4u>(&func_80080CC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_80080CC4_9E9 = func_80080CC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80080CC4_9E9);
        r4 = static_cast<uint32_t>(regargs_result_80080CC4_9E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80080CC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0x80590000u;
    r0 = (r3 + -2072);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 392u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r29 + 312), r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r29 + 316), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r29 + 320), r28);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r30);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r30 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r29 + 324), r3);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r29 + 328), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r30 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r30 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r29 + 332), r3);
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r29 + 336), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r30 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r30 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r29 + 340), r3);
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r29 + 344), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r30 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r30 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r29 + 348), r3);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r29 + 352), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r30 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r30 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r29 + 356), r3);
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r29 + 360), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r30 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r30 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r29 + 364), r3);
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r29 + 368), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r30 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r30 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r29 + 372), r3);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r29 + 376), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r30 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r30 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r29 + 380), r3);
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r29 + 384), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r29 + 388), r31);
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_8007EDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007EDBC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x038027FE gpr_write=0x03801FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007EDBC func_8007EDBC preserves=true fpr_mask=0x00000000
