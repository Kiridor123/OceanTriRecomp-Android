#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80471040_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80471040;

loc_80471040:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = (r3 + 40);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r13 + -15928));
    r4 = MemoryInline::FlatRead32((r13 + -15944));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r13 + -15928), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r29 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 320);
}

loc_80471084:
{
    r31 = (r4 + r0);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_804710B0;
    }
}

loc_8047108C:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 106));
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 122));
    MemoryInline::FlatWrite16((r30 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 124));
    MemoryInline::FlatWrite16((r30 + 124), static_cast<uint16_t>(r0));
    goto loc_80471570;
}

loc_804710B0:
{
    r0 = (r29 & -2147483648);
}

loc_804710B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804710CC;
    }
}

loc_804710B8:
{
    r3 = r31;
    r4 = r30;
    r5 = 320;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80471570;
}

loc_804710CC:
{
    r0 = (r29 & 1);
}

loc_804710D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804710E4;
    }
}

loc_804710D4:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 10));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_804710E4:
{
    r0 = (r29 & 2);
}

loc_804710E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804710F4;
    }
}

loc_804710EC:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_804710F4:
{
    r0 = (r29 & 4);
}

loc_804710F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471108;
    }
}

loc_804710FC:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    goto loc_80471110;
}

loc_80471108:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
}

loc_80471110:
{
    r0 = (r29 & 8);
}

loc_80471114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471120;
    }
}

loc_80471118:
{
    r0 = MemoryInline::FlatRead16((r30 + 18));
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_80471120:
{
    r0 = (r29 & 16);
}

loc_80471124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471138;
    }
}

loc_80471128:
{
    r3 = (r31 + 20);
    r4 = (r30 + 20);
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80471138:
{
    r0 = (r29 & 64);
}

loc_8047113C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471154;
    }
}

loc_80471140:
{
    r0 = MemoryInline::FlatRead16((r30 + 78));
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r0));
    goto loc_804711DC;
}

loc_80471154:
{
    r0 = (r29 & 32);
}

loc_80471158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804711DC;
    }
}

loc_8047115C:
{
    r3 = MemoryInline::FlatRead16((r30 + 68));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 68), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 70));
    MemoryInline::FlatWrite16((r31 + 70), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 72));
    MemoryInline::FlatWrite16((r31 + 72), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 74));
    MemoryInline::FlatWrite16((r31 + 74), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 76));
    MemoryInline::FlatWrite16((r31 + 76), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 78));
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
}

loc_804711DC:
{
    r0 = (r29 & 128);
}

loc_804711E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804711F4;
    }
}

loc_804711E4:
{
    r3 = (r31 + 82);
    r4 = (r30 + 82);
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804711F4:
{
    r0 = (r29 & 512);
}

loc_804711F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471210;
    }
}

loc_804711FC:
{
    r0 = MemoryInline::FlatRead16((r31 + 106));
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
    goto loc_80471228;
}

loc_80471210:
{
    r0 = (r29 & 256);
}

loc_80471214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471228;
    }
}

loc_80471218:
{
    r0 = MemoryInline::FlatRead16((r30 + 106));
    MemoryInline::FlatWrite16((r31 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
}

loc_80471228:
{
    r0 = (r29 & 30720);
}

loc_8047122C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471280;
    }
}

loc_80471230:
{
    r0 = (r29 & 2048);
}

loc_80471234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471240;
    }
}

loc_80471238:
{
    r0 = MemoryInline::FlatRead16((r30 + 110));
    MemoryInline::FlatWrite16((r31 + 110), static_cast<uint16_t>(r0));
}

loc_80471240:
{
    r0 = (r29 & 4096);
}

loc_80471244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471250;
    }
}

loc_80471248:
{
    r0 = MemoryInline::FlatRead32((r30 + 114));
    MemoryInline::FlatWrite32((r31 + 114), r0);
}

loc_80471250:
{
    r0 = (r29 & 8192);
}

loc_80471254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471260;
    }
}

loc_80471258:
{
    r0 = MemoryInline::FlatRead32((r30 + 118));
    MemoryInline::FlatWrite32((r31 + 118), r0);
}

loc_80471260:
{
    r0 = (r29 & 16384);
}

loc_80471264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471274;
    }
}

loc_80471268:
{
    r0 = MemoryInline::FlatRead32((r30 + 122));
    MemoryInline::FlatWrite32((r31 + 122), r0);
    goto loc_804712BC;
}

loc_80471274:
{
    r0 = MemoryInline::FlatRead32((r31 + 122));
    MemoryInline::FlatWrite32((r30 + 122), r0);
    goto loc_804712BC;
}

loc_80471280:
{
    r0 = (r29 & 1024);
}

loc_80471284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804712AC;
    }
}

loc_80471288:
{
    r0 = MemoryInline::FlatRead32((r30 + 110));
    MemoryInline::FlatWrite32((r31 + 110), r0);
    r0 = MemoryInline::FlatRead32((r30 + 114));
    MemoryInline::FlatWrite32((r31 + 114), r0);
    r0 = MemoryInline::FlatRead32((r30 + 118));
    MemoryInline::FlatWrite32((r31 + 118), r0);
    r0 = MemoryInline::FlatRead32((r30 + 122));
    MemoryInline::FlatWrite32((r31 + 122), r0);
    goto loc_804712BC;
}

loc_804712AC:
{
    r0 = MemoryInline::FlatRead16((r31 + 122));
    MemoryInline::FlatWrite16((r30 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 124));
    MemoryInline::FlatWrite16((r30 + 124), static_cast<uint16_t>(r0));
}

loc_804712BC:
{
    r0 = (r29 & 32768);
}

loc_804712C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471314;
    }
}

loc_804712C4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 126), 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 126));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 126), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 126), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r30 + 130));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r31 + 130), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r30 + 134));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r31 + 134), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r30 + 138));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r31 + 138), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r30 + 142));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r31 + 142), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r30 + 146));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 146), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r30 + 150));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 150), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r30 + 154));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r31 + 154), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r30 + 158));
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r31 + 158), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r30 + 162));
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r31 + 162), r0);
}

loc_80471314:
{
    r0 = (r29 & 131072);
}

loc_80471318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471330;
    }
}

loc_8047131C:
{
    r0 = MemoryInline::FlatRead16((r30 + 166));
    MemoryInline::FlatWrite16((r31 + 166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 168));
    MemoryInline::FlatWrite16((r31 + 168), static_cast<uint16_t>(r0));
    goto loc_80471370;
}

loc_80471330:
{
    r0 = (r29 & 65536);
}

loc_80471334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471370;
    }
}

loc_80471338:
{
    r0 = MemoryInline::FlatRead16((r30 + 166));
    MemoryInline::FlatWrite16((r31 + 166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 168));
    MemoryInline::FlatWrite16((r31 + 168), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 170));
    MemoryInline::FlatWrite16((r31 + 170), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 172));
    MemoryInline::FlatWrite16((r31 + 172), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 174));
    MemoryInline::FlatWrite16((r31 + 174), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 176));
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 178));
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
}

loc_80471370:
{
    r0 = (r29 & 262144);
}

loc_80471374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471390;
    }
}

loc_80471378:
{
    r0 = MemoryInline::FlatRead16((r30 + 180));
    MemoryInline::FlatWrite16((r31 + 180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 182));
    MemoryInline::FlatWrite16((r31 + 182), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 184));
    MemoryInline::FlatWrite16((r31 + 184), static_cast<uint16_t>(r0));
}

loc_80471390:
{
    r0 = (r29 & 1048576);
}

loc_80471394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804713AC;
    }
}

loc_80471398:
{
    r0 = MemoryInline::FlatRead16((r30 + 190));
    MemoryInline::FlatWrite16((r31 + 190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 192));
    MemoryInline::FlatWrite16((r31 + 192), static_cast<uint16_t>(r0));
    goto loc_804713D4;
}

loc_804713AC:
{
    r0 = (r29 & 524288);
}

loc_804713B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804713D4;
    }
}

loc_804713B4:
{
    r0 = MemoryInline::FlatRead16((r30 + 186));
    MemoryInline::FlatWrite16((r31 + 186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 188));
    MemoryInline::FlatWrite16((r31 + 188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 190));
    MemoryInline::FlatWrite16((r31 + 190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 192));
    MemoryInline::FlatWrite16((r31 + 192), static_cast<uint16_t>(r0));
}

loc_804713D4:
{
    r0 = (r29 & 4194304);
}

loc_804713D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471408;
    }
}

loc_804713DC:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    MemoryInline::FlatWrite16((r31 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 206));
    MemoryInline::FlatWrite16((r31 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 208));
    MemoryInline::FlatWrite16((r31 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 210));
    MemoryInline::FlatWrite16((r31 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 212));
    MemoryInline::FlatWrite16((r31 + 212), static_cast<uint16_t>(r0));
    goto loc_80471460;
}

loc_80471408:
{
    r0 = (r29 & 2097152);
}

loc_8047140C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471460;
    }
}

loc_80471410:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 194), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r30 + 194));
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 194), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r31 + 194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r30 + 196));
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r31 + 196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r30 + 198));
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r31 + 198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r30 + 200));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r31 + 200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r30 + 202));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r31 + 202), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r30 + 204));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r31 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r30 + 206));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r31 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r30 + 208));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r31 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r30 + 210));
    MemoryInline::WriteResolved16(guest_range_4, 16u, (r31 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r30 + 212));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r31 + 212), static_cast<uint16_t>(r0));
}

loc_80471460:
{
    r0 = (r29 & 8388608);
}

loc_80471464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471470;
    }
}

loc_80471468:
{
    r0 = MemoryInline::FlatRead16((r30 + 214));
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
}

loc_80471470:
{
    r0 = (r29 & 16777216);
}

loc_80471474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471480;
    }
}

loc_80471478:
{
    r0 = MemoryInline::FlatRead16((r30 + 216));
    MemoryInline::FlatWrite16((r31 + 216), static_cast<uint16_t>(r0));
}

loc_80471480:
{
    r0 = (r29 & 33554432);
}

loc_80471484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471498;
    }
}

loc_80471488:
{
    r3 = (r31 + 218);
    r4 = (r30 + 218);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80471498:
{
    r0 = (r29 & 67108864);
}

loc_8047149C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804714B0;
    }
}

loc_804714A0:
{
    r3 = (r31 + 250);
    r4 = (r30 + 250);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804714B0:
{
    r0 = (r29 & 134217728);
}

loc_804714B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804714C8;
    }
}

loc_804714B8:
{
    r3 = (r31 + 266);
    r4 = (r30 + 266);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804714C8:
{
    r0 = (r29 & 536870912);
}

loc_804714CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804714E4;
    }
}

loc_804714D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 280));
    MemoryInline::FlatWrite16((r31 + 280), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 282));
    MemoryInline::FlatWrite16((r31 + 282), static_cast<uint16_t>(r0));
    goto loc_80471570;
}

loc_804714E4:
{
    r0 = (r29 & 1073741824);
}

loc_804714E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471518;
    }
}

loc_804714EC:
{
    r0 = MemoryInline::FlatRead16((r30 + 286));
    MemoryInline::FlatWrite16((r31 + 286), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 288));
    MemoryInline::FlatWrite16((r31 + 288), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 290));
    MemoryInline::FlatWrite16((r31 + 290), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 292));
    MemoryInline::FlatWrite16((r31 + 292), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 294));
    MemoryInline::FlatWrite16((r31 + 294), static_cast<uint16_t>(r0));
    goto loc_80471570;
}

loc_80471518:
{
    r0 = (r29 & 268435456);
}

loc_8047151C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471570;
    }
}

loc_80471520:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r30 + 276), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_5, 0u, (r30 + 276));
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 276), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r31 + 276), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 2u, (r30 + 278));
    MemoryInline::WriteResolved16(guest_range_6, 2u, (r31 + 278), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 4u, (r30 + 280));
    MemoryInline::WriteResolved16(guest_range_6, 4u, (r31 + 280), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 6u, (r30 + 282));
    MemoryInline::WriteResolved16(guest_range_6, 6u, (r31 + 282), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 8u, (r30 + 284));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r31 + 284), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 10u, (r30 + 286));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r31 + 286), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 12u, (r30 + 288));
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r31 + 288), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 14u, (r30 + 290));
    MemoryInline::WriteResolved16(guest_range_6, 14u, (r31 + 290), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 16u, (r30 + 292));
    MemoryInline::WriteResolved16(guest_range_6, 16u, (r31 + 292), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 18u, (r30 + 294));
    MemoryInline::WriteResolved16(guest_range_6, 18u, (r31 + 294), static_cast<uint16_t>(r0));
}

loc_80471570:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80471040(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80471040_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80471040 func_80471040 preserves=true fpr_mask=0x00000000
