#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082C250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x8082C250u);
    goto loc_8082C250;

loc_8082C250:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = 0x80840000u;
    r31 = (r31 + 18584);
    r30 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r29 = r3;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f2.d);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x808367A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80836720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f3.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f5.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f9.d = PpcFmulsInline(f1.d, f3.d);
    f8.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f11.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = (-(f2.d));
    f12.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32(r30);
    f10.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f11.d);
    f7.d = (-(f6.d));
    f1.d = PpcFmulsInline(f9.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f12.d);
    f3.d = PpcFmulsInline(f11.d, f4.d);
    f6.d = PpcFmulsInline(f12.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f9.d);
    f3.d = PpcFmulsInline(f10.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f10.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 12), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 44), f8.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000018 fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082C250 func_8082C250 preserves=true fpr_mask=0x00000000
