#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA8B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t cr = ctx->cr;

    goto loc_804BA8B0;

loc_804BA8B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    f12.d = PpcFmulsInline(f5.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    f7.d = PpcFmulsInline(f4.d, f2.d);
    f9.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    f8.d = PpcFmulsInline(f5.d, f2.d);
    f5.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f4.d = PpcFmulsInline(f0.d, f2.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    f13.d = PpcFmulsInline(f11.d, f3.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f7.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 28));
    f10.d = PpcFmulsInline(f10.d, f3.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 44));
    f6.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2224));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f9.d));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f9.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BA938:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f7.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BA990;
    }
}

loc_804BA948:
{
    f1.d = (-(f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2220));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
        }
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
        }
    }
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f6.d = PpcFmulsInline(f9.d, f6.d);
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f3.d = PpcFmulsInline(f7.d, f3.d);
    f4.d = PpcFmulsInline(f8.d, f4.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    goto loc_804BA9C4;
}

loc_804BA990:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f6.d = PpcFmulsInline(f9.d, f2.d);
    f4.d = PpcFmulsInline(f8.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f2.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2220));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
}

loc_804BA9C4:
{
    f6.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = (-(f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = PpcFmulsInline(f7.d, f6.d);
    f9.d = MemoryInline::FlatReadFloat32((r2 + -2216));
    f3.d = PpcFmulsInline(f1.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f8.d = PpcFmulsInline(f6.d, f9.d);
    f7.d = PpcFmulsInline(f4.d, f9.d);
    f6.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = PpcFmulsInline(f3.d, f9.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f7.d = PpcFmulsInline(f0.d, f7.d);
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = PpcFmulsInline(f10.d, f1.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteFloat32(r6, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r7, f1.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FE gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x0000030E fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BA8B0 func_804BA8B0 preserves=true fpr_mask=0x00000000
