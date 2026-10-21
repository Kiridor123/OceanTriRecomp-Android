#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800515D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_psqx_80051734_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
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
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800515D8u);
    goto loc_800515D8;

loc_800515D8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 44u, true, false);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 44u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 32));
    f2.d = PpcFmulsInline(f11.d, f8.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f1.d = PpcFmulsInline(f10.d, f7.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 16));
    f0.d = PpcFmulsInline(f9.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 36));
    f2.d = PpcFmulsInline(f11.d, f5.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 4));
    f1.d = PpcFmulsInline(f10.d, f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 20));
    f0.d = PpcFmulsInline(f9.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 40));
    f11.d = PpcFmulsInline(f11.d, f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 8));
    f10.d = PpcFmulsInline(f10.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 24));
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f9.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    f11.d = PpcFmulsInline(f31.d, f8.d);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 16));
    f10.d = PpcFmulsInline(f13.d, f7.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    f9.d = PpcFmulsInline(f12.d, f6.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f9.d);
    f11.d = PpcFmulsInline(f31.d, f5.d);
    f10.d = PpcFmulsInline(f13.d, f4.d);
    f9.d = PpcFmulsInline(f12.d, f3.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f9.d);
    f11.d = PpcFmulsInline(f31.d, f2.d);
    f10.d = PpcFmulsInline(f13.d, f1.d);
    f9.d = PpcFmulsInline(f12.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f9.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 40));
    f10.d = PpcFmulsInline(f11.d, f8.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
    f8.d = PpcFmulsInline(f9.d, f7.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 36));
    f6.d = PpcFmulsInline(f7.d, f6.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f6.d);
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f4.d = PpcFmulsInline(f9.d, f4.d);
    f3.d = PpcFmulsInline(f7.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    f2.d = PpcFmulsInline(f11.d, f2.d);
    f1.d = PpcFmulsInline(f9.d, f1.d);
    f0.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    r3 = r30;
    r4 = (r1 + 8);
    // inline leaf 0x80051758 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f0.d);
    // end of inlined leaf 0x80051758
    r0 = 72;
    addr_psqx_80051734_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80051734_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800515D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800515D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800515D8 func_800515D8 preserves=true fpr_mask=0x00000000
