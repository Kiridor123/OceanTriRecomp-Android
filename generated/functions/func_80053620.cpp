#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800534CC(CpuContext* ctx);
extern "C" uint64_t func_800534CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534F0(CpuContext* ctx);
extern "C" uint64_t func_800534F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80053620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800537B4_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80053620;

loc_80053620:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r4;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = 2;
    ctx->lr = 0x8005365Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800531C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    ctx->lr = 0x80053664u;
    if constexpr (KnownRegArgsCpuCall<0x800534F0u>(&func_800534F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534F0_8E6 = func_800534F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534F0_8E6);
        r4 = static_cast<uint32_t>(regargs_result_800534F0_8E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800534F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = r31;
    ctx->lr = 0x80053688u;
    if constexpr (KnownRegArgsCpuCall<0x800534CCu>(&func_800534CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534CC_DBA = func_800534CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534CC_DBA);
        r4 = static_cast<uint32_t>(regargs_result_800534CC_DBA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800534CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32400));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r0 = MemoryInline::FlatRead16((r30 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r0 = MemoryInline::FlatRead16((r30 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80053728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 12u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
        }
    }
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
        }
    }
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 16));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
        }
    }
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    // inline leaf 0x80053404 (1 guest instruction(s))
    // end of inlined leaf 0x80053404
    ctx->lr = 0x800537B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800533D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    mkw_gqr0 = ctx->gqr[0];
    r0 = 56;
    addr_psqx_800537B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800537B4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80053620 func_80053620 preserves=true fpr_mask=0x00000000
