#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808300B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_808300B0;

loc_808300B0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 80));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 15);
}

loc_808300E0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_808300F8;
    }
}

loc_808300E4:
{
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18608));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_8083019C;
}

loc_808300F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & 8160);
    r6 = MemoryInline::FlatRead32((r4 + 88));
    r6_addr_1 = (r6 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6_addr_1, 0, 32u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6_addr_1);
    r6 = r6_addr_1;
    r3 = (r1 + 8);
    r4 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r5);
    }
    ctx->lr = 0x8083014Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804B8A40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = (r1 + 8);
    ctx->lr = 0x80830154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804B8AE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 & 65535);
    r30 = 1127219200;
    r29 = 0x80840000u;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = MemoryInline::FlatReadFloat64((r29 + 18624));
    r3 = (r1 + 8);
    stackword14 = r30;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x8083017Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804B8AC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 & 65535);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = MemoryInline::FlatReadFloat64((r29 + 18624));
    stackword16 = r30;
    MemoryInline::FlatWriteRam32((r1 + 48), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    MemoryInline::FlatWriteFloat32((r31 + 4), f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_8083019C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808300B0 func_808300B0 preserves=true fpr_mask=0x00000000
