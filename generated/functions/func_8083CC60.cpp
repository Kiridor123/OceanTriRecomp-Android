#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083CC60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8083CC60;

loc_8083CC60:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r6 = 0x80840000u;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 18816));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    f2.d = f1.d;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r5;
    r30 = r4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f1.d);
    }
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r4);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved16(guest_range_1, 88u, (r1 + 88), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 90u, (r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 91u, (r1 + 91), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r1 + 92), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r1 + 104), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    r3 = (r1 + 24);
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    r5 = r30;
    r6 = r31;
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x8083CD8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083CDD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 24);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8083CDA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FBE gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xF0003FF8 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083CC60 func_8083CC60 preserves=true fpr_mask=0x00000000
