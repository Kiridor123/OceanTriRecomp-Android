#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAD90(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[16];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x804BAD90u);
    goto loc_804BAD90;

loc_804BAD90:
{
    r6 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = 327680;
    f7.d = MemoryInline::FlatReadFloat32((r2 + -2216));
    r4 = -872349696;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 1348), 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 1360));
    r5 = 16;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r6 + 1356));
    r0 = (r3 + 4122);
    f0.d = (-(f1.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 1348));
    f8.d = PpcFmulsInline(f2.d, f7.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r6 + 1352));
    f5.d = PpcFmulsInline(f1.d, f7.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r6 + 1364));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r6 + 1376));
    f7.d = PpcFmulsInline(f0.d, f7.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r6 + 1368));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r6 + 1372));
        }
    }
    f9.d = PpcFmulsInline(f3.d, f2.d);
    f10.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2212));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f8.d));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f9.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f8.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f4.d));
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f3.d));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 16u);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAD90 func_804BAD90 preserves=true fpr_mask=0x00000000
