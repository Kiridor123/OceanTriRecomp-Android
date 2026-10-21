#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8083FDE8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t stackword43 = 0;
    uint32_t stackword44 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8083FDE8u);
    goto loc_8083FDE8;

loc_8083FDE8:
{
    r4 = (r26 & 65535);
}

loc_8083FDF0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_80840134;
    }
}

loc_8083FDF4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r5 = (r1 + 80);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r3 = MemoryInline::FlatRead32((r28 + 92));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8083FE1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8083FE20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80840100;
    }
}

loc_8083FE24:
{
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r3 = (r0 & 3);
}

loc_8083FE30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8083FF7C;
    }
}

loc_8083FE34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 264u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 32), f31.d);
    f1.d = f31.d;
    f2.d = f31.d;
    r31 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 36), f31.d);
    r3 = (r1 + 200);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 40), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 44), f31.d);
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 96u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r28);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r1 + 200), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r28 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r1 + 204), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r28 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r1 + 208), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r28 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 212), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r28 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r1 + 216), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r28 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r1 + 220), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r28 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r1 + 224), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r28 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 228), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r28 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r1 + 232), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r28 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r28 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 240), r4);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r1 + 236), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r28 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r28 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r1 + 248), r4);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 244), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r28 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r1 + 252), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r28 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r28 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 260), r4);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r1 + 256), r5);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r28 + 64));
    MemoryInline::WriteResolved16(guest_range_0, 232u, (r1 + 264), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r28 + 66));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (r1 + 266), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r28 + 67));
    MemoryInline::WriteResolved8(guest_range_0, 235u, (r1 + 267), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r28 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r1 + 268), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r28 + 72));
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 272), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r28 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 244u, (r1 + 276), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r28 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 248u, (r1 + 280), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r28 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 284), r4);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r1 + 288), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r28 + 92));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 292), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 212u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    r4 = (r31 - r29);
    r5 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r1 + 200);
    r0 = (r0 + r4);
    r4 = (r1 + 32);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r6 = (r30 - r0);
    ctx->lr = 0x8083FF48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083F790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r3 = (r1 + 200);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = 0;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8083FF60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = r28;
    f1.d = PpcFmulsInline(f1.d, f25.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    goto loc_808400F8;
}

loc_8083FF7C:
{
}

loc_8083FF80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_808400C8;
    }
}

loc_8083FF84:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 184u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 16), f31.d);
    f1.d = f31.d;
    f2.d = f31.d;
    r31 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 20), f31.d);
    r3 = (r1 + 104);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 24), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 28), f31.d);
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r28, 0, 96u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, r28);
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 104), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r28 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 108), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r28 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 112), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r28 + 12));
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 116), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r28 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 120), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r28 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 124), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r28 + 24));
    MemoryInline::WriteResolved32(guest_range_2, 112u, (r1 + 128), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r28 + 28));
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 132), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r28 + 32));
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 136), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r28 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r28 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 128u, (r1 + 144), r4);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 140), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r28 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r28 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 148), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r28 + 52));
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 156), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r28 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r28 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 160), r5);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_3, 64u, (r28 + 64));
    MemoryInline::WriteResolved16(guest_range_2, 152u, (r1 + 168), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 66u, (r28 + 66));
    MemoryInline::WriteResolved8(guest_range_2, 154u, (r1 + 170), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 67u, (r28 + 67));
    MemoryInline::WriteResolved8(guest_range_2, 155u, (r1 + 171), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r28 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r1 + 172), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r28 + 72));
    MemoryInline::WriteResolved32(guest_range_2, 160u, (r1 + 176), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r28 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 164u, (r1 + 180), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r28 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 168u, (r1 + 184), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 84u, (r28 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r1 + 188), r4);
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r1 + 192), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 92u, (r28 + 92));
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 196), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    r4 = (r31 - r29);
    r5 = r31;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r1 + 104);
    r0 = (r0 + r4);
    r4 = (r1 + 16);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r6 = (r30 - r0);
    ctx->lr = 0x80840098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083F790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = 0;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x808400B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = r28;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    goto loc_808400F8;
}

loc_808400C8:
{
    r3 = r28;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_808400DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808400E4;
    }
}

loc_808400E0:
{
    goto loc_808400E8;
}

loc_808400E4:
{
    f0.d = f29.d;
}

loc_808400E8:
{
    f29.d = f0.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = r28;
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
}

loc_808400F8:
{
    r31 = 0;
    goto loc_80840128;
}

loc_80840100:
{
}

loc_80840104:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80840110;
    }
}

loc_80840108:
{
    r31 = 0;
    goto loc_80840128;
}

loc_80840110:
{
}

loc_80840114:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80840120;
    }
}

loc_80840118:
{
    r31 = 1;
    goto loc_80840128;
}

loc_80840120:
{
}

loc_80840124:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_808401F0;
    }
}

loc_80840128:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    goto loc_808401C0;
}

loc_80840134:
{
    r3 = r28;
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
}

loc_80840140:
{
    f24.d = f1.d;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80840154;
    }
}

loc_80840148:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    r3 = r28;
    // inline leaf 0x80838910 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x80838910
}

loc_80840154:
{
    r3 = r28;
    r31 = 1;
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
    r25 = r3;
    r3 = r28;
    // inline leaf 0x808382E0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    // end of inlined leaf 0x808382E0
    r12 = MemoryInline::FlatRead32(r25);
    f26.d = f1.d;
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80840184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (0 - r3);
    stackword43 = r27;
    MemoryInline::FlatWriteRam32((r1 + 296), r27);
    r0 = (r0 ^ -2147483648);
    r3 = r28;
    stackword44 = r0;
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword43), static_cast<uint32_t>(stackword44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f1.d = PpcFmulsInline(f0.d, f26.d);
    // inline leaf 0x80838920 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    // end of inlined leaf 0x80838920
    r3 = r28;
    r4 = (r26 & 65535);
    ctx->lr = 0x808401B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808386B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = f24.d;
    r3 = r28;
    // inline leaf 0x808388F0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x808388F0
}

loc_808401C0:
{
    r3 = (r1 + 64);
    r12 = (r1 + 68);
    ctx->lr = 0x808401CCu;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_6D72 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_6D72);
        r4 = static_cast<uint32_t>(regargs_result_80457338_6D72 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    r26 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 64));
    r3 = (r5 - r29);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_808401EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_8083FDE8;
    }
}

loc_808401F0:
{
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r0 & 768);
}

loc_808401FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(256))) {
        goto loc_80840208;
    }
}

loc_80840200:
{
}

loc_80840204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_80840218;
    }
}

loc_80840208:
{
    f1.d = f28.d;
    r3 = r28;
    // inline leaf 0x808388F0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x808388F0
    goto loc_80840224;
}

loc_80840218:
{
    f1.d = f30.d;
    r3 = r28;
    // inline leaf 0x80838920 (4 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    // end of inlined leaf 0x80838920
}

loc_80840224:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f1.d = f29.d;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 308), 0, 164u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 140u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 124u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 108u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 92u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 76u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 60u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 44u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 28u, (r1 + 336));
    r11 = (r1 + 336);
    // inline leaf 0x804574CC (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_4, 160u, (r1 + 468));
    ctx->lr = r0;
    r1 = (r1 + 464);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083FDE8 func_8083FDE8 preserves=false fpr_mask=0x25000000
