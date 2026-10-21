#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8083CA70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x8083CA70u);
    goto loc_8083CA70;

loc_8083CA70:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r3;
    r30 = r4;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_68C = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_68C);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_68C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r5 = r3;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r0);
    r4 = r30;
    r3 = (r1 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r31 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r31 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r31 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r31 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r31 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 64), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r31 + 64));
    MemoryInline::WriteResolved16(guest_range_1, 64u, (r1 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r31 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r1 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r31 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r1 + 75), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 76), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r31 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 80), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r1 + 88), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r31 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 92), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r31 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 96), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r31 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 100), r0);
    ctx->lr = 0x8083CB84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083D2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f30.d = f1.d;
    r3 = (r1 + 8);
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    f31.d = f1.d;
    r3 = (r1 + 8);
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    f2.d = f31.d;
    r3 = r31;
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8083CBB4u;
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
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f1.d = f30.d;
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F9E gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF003FFE fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083CA70 func_8083CA70 preserves=true fpr_mask=0x00000000
