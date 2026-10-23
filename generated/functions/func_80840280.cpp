#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80840280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_80840280;

loc_80840280:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -400), 0, 408u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 404u, (r1 + 404), r0);
    r11 = (r1 + 368);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 384u, (r1 + 384), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 368u, (r1 + 368), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    r8 = 0x80840000u;
    f31.d = MemoryInline::FlatReadFloat32((r8 + 18816));
    r27 = r3;
    r8 = (r0 & 819);
}

loc_808402B8:
{
    r28 = r4;
    f2.d = f31.d;
    r29 = r5;
    r30 = r6;
    r31 = r7;
}

loc_808402D0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(768))) {
        goto loc_808403F0;
    }
}

loc_808402D4:
{
}

loc_808402D8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_808403F0;
    }
}

loc_808402DC:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 304u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 40), f31.d);
    r5 = r30;
    r6 = r31;
    r4 = (r1 + 40);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 44), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 48), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 52), f31.d);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved32(guest_range_3, 208u, (r1 + 248), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 212u, (r1 + 252), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 216u, (r1 + 256), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 220u, (r1 + 260), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 224u, (r1 + 264), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 228u, (r1 + 268), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 232u, (r1 + 272), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 236u, (r1 + 276), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 240u, (r1 + 280), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 248u, (r1 + 288), r7);
        MemoryInline::WriteResolved32(guest_range_3, 244u, (r1 + 284), r8);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 256u, (r1 + 296), r7);
        MemoryInline::WriteResolved32(guest_range_3, 252u, (r1 + 292), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 260u, (r1 + 300), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 268u, (r1 + 308), r7);
        MemoryInline::WriteResolved32(guest_range_3, 264u, (r1 + 304), r8);
    }
    r7 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved16(guest_range_3, 272u, (r1 + 312), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 274u, (r1 + 314), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 275u, (r1 + 315), static_cast<uint8_t>(r7));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 276u, (r1 + 316), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_3, 280u, (r1 + 320), r7);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 284u, (r1 + 324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 288u, (r1 + 328), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 292u, (r1 + 332), r7);
        MemoryInline::WriteResolved32(guest_range_3, 296u, (r1 + 336), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    r3 = (r1 + 248);
    MemoryInline::WriteResolved32(guest_range_3, 300u, (r1 + 340), r0);
    ctx->lr = 0x808403CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083FB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r3 = (r1 + 248);
    r4 = 0;
    ctx->lr = 0x808403D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_808403F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r0 = (r0 & 48);
}

loc_808403FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8084041C;
    }
}

loc_80840400:
{
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18832));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_80840430;
}

loc_8084041C:
{
}

loc_80840420:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_80840430;
    }
}

loc_80840424:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
}

loc_80840430:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r0 = (r0 & 768);
}

loc_8084043C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(256))) {
        goto loc_8084045C;
    }
}

loc_80840440:
{
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18832));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    goto loc_80840470;
}

loc_8084045C:
{
}

loc_80840460:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_80840470;
    }
}

loc_80840464:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_80840470:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r3 = (r0 & 3);
}

loc_8084047C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_808405C0;
    }
}

loc_80840480:
{
    r4 = 0x80840000u;
    r3 = (r1 + 152);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 18816));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 224u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
    f2.d = f1.d;
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r27);
    MemoryInline::WriteResolved32(guest_range_4, 128u, (r1 + 152), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r27 + 4));
    MemoryInline::WriteResolved32(guest_range_4, 132u, (r1 + 156), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r27 + 8));
    MemoryInline::WriteResolved32(guest_range_4, 136u, (r1 + 160), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r27 + 12));
    MemoryInline::WriteResolved32(guest_range_4, 140u, (r1 + 164), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::WriteResolved32(guest_range_4, 144u, (r1 + 168), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r27 + 20));
    MemoryInline::WriteResolved32(guest_range_4, 148u, (r1 + 172), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r27 + 24));
    MemoryInline::WriteResolved32(guest_range_4, 152u, (r1 + 176), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r27 + 28));
    MemoryInline::WriteResolved32(guest_range_4, 156u, (r1 + 180), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 160u, (r1 + 184), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 168u, (r1 + 192), r4);
        MemoryInline::WriteResolved32(guest_range_4, 164u, (r1 + 188), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r27 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 176u, (r1 + 200), r4);
        MemoryInline::WriteResolved32(guest_range_4, 172u, (r1 + 196), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_4, 180u, (r1 + 204), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r27 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 188u, (r1 + 212), r4);
        MemoryInline::WriteResolved32(guest_range_4, 184u, (r1 + 208), r5);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r27 + 64));
    MemoryInline::WriteResolved16(guest_range_4, 192u, (r1 + 216), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_4, 194u, (r1 + 218), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_4, 195u, (r1 + 219), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r27 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 196u, (r1 + 220), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r27 + 72));
    MemoryInline::WriteResolved32(guest_range_4, 200u, (r1 + 224), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 204u, (r1 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 208u, (r1 + 232), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r27 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 212u, (r1 + 236), r4);
        MemoryInline::WriteResolved32(guest_range_4, 216u, (r1 + 240), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_4, 220u, (r1 + 244), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 172u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 176u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    r5 = r30;
    r6 = r31;
    r3 = (r1 + 152);
    r4 = (r1 + 24);
    ctx->lr = 0x80840584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083F790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 152);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8084059Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 0x80840000u;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18832));
    r3 = r27;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    goto loc_80840708;
}

loc_808405C0:
{
}

loc_808405C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_808406FC;
    }
}

loc_808405C8:
{
    r4 = 0x80840000u;
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 18816));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
    f2.d = f1.d;
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r27);
    MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 56), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r27 + 4));
    MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 60), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r27 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 64), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r27 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 68), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 64u, (r1 + 72), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r27 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r1 + 76), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r27 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 72u, (r1 + 80), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r27 + 28));
    MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 84), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r27 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r4);
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r27 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r4);
        MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r5);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r27 + 64));
    MemoryInline::WriteResolved16(guest_range_5, 112u, (r1 + 120), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_5, 114u, (r1 + 122), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_5, 115u, (r1 + 123), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r27 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 116u, (r1 + 124), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r27 + 72));
    MemoryInline::WriteResolved32(guest_range_5, 120u, (r1 + 128), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 124u, (r1 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 128u, (r1 + 136), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r27 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 132u, (r1 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_5, 136u, (r1 + 144), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_5, 140u, (r1 + 148), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 92u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 96u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    r5 = r30;
    r6 = r31;
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->lr = 0x808406CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083F790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x808406E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r27;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    goto loc_80840708;
}

loc_808406FC:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r27;
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
}

loc_80840708:
{
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r0 = (r0 & 768);
}

loc_80840714:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(768))) {
        goto loc_80840728;
    }
}

loc_80840718:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = r27;
    // inline leaf 0x808388F0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x808388F0
    goto loc_80840740;
}

loc_80840728:
{
    r3 = r27;
    ctx->lr = 0x80840730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80838520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r3 = r27;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388F0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x808388F0
}

loc_80840740:
{
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 348), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 36u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 20u, (r1 + 368));
    r11 = (r1 + 368);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80840280 func_80840280 preserves=true fpr_mask=0x00000000
