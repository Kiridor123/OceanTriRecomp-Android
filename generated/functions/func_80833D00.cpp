#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833D00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
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
    const uint32_t r28_entry = r28;

    goto loc_80833D00;

loc_80833D00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    r31 = 0x80840000u;
    r31 = (r31 + 18680);
    r30 = r5;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r29 = r4;
    f2.d = f1.d;
    r28 = r3;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    r3 = r30;
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    f1.d = MemoryInline::FlatReadFloat32((r29 + 76));
    r3 = r28;
    r6 = MemoryInline::FlatRead16((r29 + 250));
    r4 = (r1 + 24);
    r5 = MemoryInline::FlatRead32((r29 + 212));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r30 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r30 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r7);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r30 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r30 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r30 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r7);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r30 + 64));
    MemoryInline::WriteResolved16(guest_range_1, 88u, (r1 + 88), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r30 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 90u, (r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r30 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 91u, (r1 + 91), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r1 + 92), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r30 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r1 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r1 + 104), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r30 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r30 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r30 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    ctx->lr = 0x80833E38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80833F60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    r3 = (r1 + 24);
    r4 = -1;
    ctx->lr = 0x80833E44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8083DDF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x808314C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r5 = 1431633920;
    r6 = MemoryInline::FlatRead8((r29 + 252));
    r0 = (r5 + 21846);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r0 = (r5 + r0);
    r0 = (r0 * 3);
    r0 = (r6 - r0);
    r0 = (r0 & 255);
}

loc_80833E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80833E98;
    }
}

loc_80833E88:
{
}

loc_80833E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80833EA0;
    }
}

loc_80833E90:
{
    f6.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80833EA4;
}

loc_80833E98:
{
    f6.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80833EA4;
}

loc_80833EA0:
{
    f6.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80833EA4:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    r0 = (r0 & 255);
}

loc_80833EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80833ED4;
    }
}

loc_80833EC4:
{
}

loc_80833EC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80833EDC;
    }
}

loc_80833ECC:
{
    f7.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80833EE0;
}

loc_80833ED4:
{
    f7.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80833EE0;
}

loc_80833EDC:
{
    f7.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80833EE0:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 80));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f3.d = PpcFmulsInline(f3.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F7F gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xF8003FF8 fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80833D00 func_80833D00 preserves=true fpr_mask=0x00000000
