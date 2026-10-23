#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047AC30(CpuContext* ctx);
extern "C" uint64_t func_8047AC30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A50E4(CpuContext* ctx);
extern "C" uint32_t func_804A50E4_ra58_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8049FACC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8049FACC;

loc_8049FACC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_8049FAE4:
{
    r27 = r3;
    r26 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049FB18;
    }
}

loc_8049FB00:
{
}

loc_8049FB04:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(108))) {
        goto loc_8049FB18;
    }
}

loc_8049FB08:
{
}

loc_8049FB0C:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(12))) {
        goto loc_8049FB18;
    }
}

loc_8049FB10:
{
}

loc_8049FB14:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(3))) {
        goto loc_8049FB54;
    }
}

loc_8049FB18:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_8049FB28:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8049FB4C;
    }
}

loc_8049FB2C:
{
    r4 = 0x80620000u;
    r5 = r27;
    r6 = r26;
    r7 = r28;
    r8 = r30;
    r4 = (r4 + -31040);
    r3 = 655360;
    ctx->lr = 0x8049FB4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047AC30u>(&func_8047AC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8047AC30_F60 = func_8047AC30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047AC30_F60);
        r4 = static_cast<uint32_t>(regargs_result_8047AC30_F60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047AC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8049FB4C:
{
    r3 = 0;
    goto loc_8049FE2C;
}

loc_8049FB54:
{
    r5 = r26;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = (r26 + -108);
    r0 = (r27 + 108);
    r3 = 0;
}

loc_8049FB70:
{
    MemoryInline::FlatWrite32(r27, r5);
    r4 = 0;
    MemoryInline::FlatWrite32((r27 + 4), r5);
    MemoryInline::FlatWrite32((r27 + 8), r3);
    MemoryInline::FlatWrite32((r27 + 104), r0);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8049FD5C;
    }
}

loc_8049FB88:
{
}

loc_8049FB8C:
{
    r3 = (r28 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_8049FD08;
    }
}

loc_8049FB98:
{
    r3 = (r3 & 65535);
    r0 = (r3 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8049FBAC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8049FD08;
    }
}

loc_8049FBB0:
{
    r0 = (r4 & 65535);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 160u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r29);
    r3 = (r0 * 20);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 4));
    r4 = (r4 + 8);
    r3 = (r27 + r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 32), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r29 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 28));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 48), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r29 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 52), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r29 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r29 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r29 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r29 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 68), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r29 + 56));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 72), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r29 + 60));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r29 + 64));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 76), r5);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 80), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 68u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r29 + 68));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r29 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 84), r5);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 88), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r29 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r29 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r29 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 100), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r29 + 88));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r29 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 104), r5);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 108), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r29 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r29 + 100));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r29 + 104));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 120), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r29 + 108));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r29 + 112));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 128), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r29 + 116));
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 132), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r29 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r29 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 140), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 128u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r29 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r29 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 144), r5);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 148), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r29 + 136));
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 152), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r29 + 140));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r29 + 144));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 160), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r29 + 148));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r29 + 152));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 168), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r29 + 156));
    r29 = (r29 + 160);
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 172), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049FBB0;
    }
}

loc_8049FD08:
{
    r3 = (r4 & 65535);
    r0 = (r28 - r3);
    ctr = r0;
}

loc_8049FD18:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r28))) {
        goto loc_8049FD5C;
    }
}

loc_8049FD1C:
{
    r0 = (r4 & 65535);
    r3 = MemoryInline::FlatRead32(r29);
    r5 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r4 + 1);
    r5 = (r27 + r5);
    MemoryInline::FlatWrite32((r5 + 16), r3);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 12));
    MemoryInline::FlatWrite32((r5 + 24), r3);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r29 = (r29 + 20);
    MemoryInline::FlatWrite32((r5 + 32), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049FD1C;
    }
}

loc_8049FD5C:
{
}

loc_8049FD60:
{
    MemoryInline::FlatWrite16((r27 + 12), static_cast<uint16_t>(r28));
    r5 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8049FE18;
    }
}

loc_8049FD6C:
{
}

loc_8049FD70:
{
    r3 = (r30 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8))) {
        goto loc_8049FDE8;
    }
}

loc_8049FD7C:
{
    r3 = (r3 & 65535);
    r0 = (r3 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_8049FD90:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8049FDE8;
    }
}

loc_8049FD94:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 131070);
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r31);
    r3 = (r27 + r3);
    r5 = (r5 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 78), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r3 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r31 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 80), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 82), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 84), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r31 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 86), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r31 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 88), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r31 + 12));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 90), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r31 + 14));
    r31 = (r31 + 16);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 92), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049FD94;
    }
}

loc_8049FDE8:
{
    r3 = (r5 & 65535);
    r0 = (r30 - r3);
    ctr = r0;
}

loc_8049FDF8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r30))) {
        goto loc_8049FE18;
    }
}

loc_8049FDFC:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 131070);
    r4 = MemoryInline::FlatRead16(r31);
    r3 = (r27 + r0);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 78), static_cast<uint16_t>(r4));
    r31 = (r31 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049FDFC;
    }
}

loc_8049FE18:
{
    r3 = r30;
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x804A50E4u>(&func_804A50E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804A50E4_5DA5 = func_804A50E4_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_804A50E4_5DA5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804A50E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    MemoryInline::FlatWrite16((r27 + 76), static_cast<uint16_t>(r30));
    r3 = 1;
}

loc_8049FE2C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049FACC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049FACC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049FACC func_8049FACC preserves=true fpr_mask=0x00000000
