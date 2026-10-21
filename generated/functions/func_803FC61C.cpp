#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803FC61C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x803FC61Cu);
    goto loc_803FC61C;

loc_803FC61C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = 0x80570000u;
    r3 = (r3 + 11248);
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 0x80600000u;
    r3 = (r3 + -3792);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 252u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 32), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 56), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 60), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r3 + 100), r5);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r3 + 104), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r3 + 108), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r3 + 220), r5);
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r3 + 224), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r3 + 228), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 240u, (r3 + 268), r5);
        MemoryInline::WriteResolved32(guest_range_2, 244u, (r3 + 272), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 248u, (r3 + 276), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 340), 0, 4092u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 340), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 344), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 348), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 388), r5);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 392), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 396), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 412), r5);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 416), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 420), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 436), r5);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 440), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 444), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 484), r5);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 488), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 492), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 532), r5);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 536), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 540), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 556), r5);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 560), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 564), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 604), r5);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r3 + 608), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r3 + 612), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 652), r5);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r3 + 656), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 660), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r3 + 700), r5);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r3 + 704), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 368u, (r3 + 708), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 748), r5);
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r3 + 752), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 756), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r3 + 796), r5);
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r3 + 800), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 464u, (r3 + 804), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r3 + 844), r5);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r3 + 848), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r3 + 852), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 552u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 552u, (r3 + 892), r5);
        MemoryInline::WriteResolved32(guest_range_0, 556u, (r3 + 896), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r3 + 900), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 600u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 600u, (r3 + 940), r5);
        MemoryInline::WriteResolved32(guest_range_0, 604u, (r3 + 944), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 608u, (r3 + 948), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 648u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 648u, (r3 + 988), r5);
        MemoryInline::WriteResolved32(guest_range_0, 652u, (r3 + 992), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 656u, (r3 + 996), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 696u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 696u, (r3 + 1036), r5);
        MemoryInline::WriteResolved32(guest_range_0, 700u, (r3 + 1040), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 704u, (r3 + 1044), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 744u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 744u, (r3 + 1084), r5);
        MemoryInline::WriteResolved32(guest_range_0, 748u, (r3 + 1088), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 752u, (r3 + 1092), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 792u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 792u, (r3 + 1132), r5);
        MemoryInline::WriteResolved32(guest_range_0, 796u, (r3 + 1136), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 800u, (r3 + 1140), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 840u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 840u, (r3 + 1180), r5);
        MemoryInline::WriteResolved32(guest_range_0, 844u, (r3 + 1184), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 848u, (r3 + 1188), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 888u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 888u, (r3 + 1228), r5);
        MemoryInline::WriteResolved32(guest_range_0, 892u, (r3 + 1232), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 896u, (r3 + 1236), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 936u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 936u, (r3 + 1276), r5);
        MemoryInline::WriteResolved32(guest_range_0, 940u, (r3 + 1280), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 944u, (r3 + 1284), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 984u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 984u, (r3 + 1324), r5);
        MemoryInline::WriteResolved32(guest_range_0, 988u, (r3 + 1328), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 992u, (r3 + 1332), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1032u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1032u, (r3 + 1372), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1036u, (r3 + 1376), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1040u, (r3 + 1380), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1080u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1080u, (r3 + 1420), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1084u, (r3 + 1424), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1088u, (r3 + 1428), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1128u, (r3 + 1468), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1132u, (r3 + 1472), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1136u, (r3 + 1476), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1176u, (r3 + 1516), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1180u, (r3 + 1520), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1184u, (r3 + 1524), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1224u, (r3 + 1564), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1228u, (r3 + 1568), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1232u, (r3 + 1572), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1272u, (r3 + 1612), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1276u, (r3 + 1616), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1280u, (r3 + 1620), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1320u, (r3 + 1660), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1324u, (r3 + 1664), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1328u, (r3 + 1668), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1368u, (r3 + 1708), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1372u, (r3 + 1712), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1376u, (r3 + 1716), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1416u, (r3 + 1756), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1420u, (r3 + 1760), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1424u, (r3 + 1764), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1464u, (r3 + 1804), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1468u, (r3 + 1808), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1472u, (r3 + 1812), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1512u, (r3 + 1852), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1516u, (r3 + 1856), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1520u, (r3 + 1860), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1560u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1560u, (r3 + 1900), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1564u, (r3 + 1904), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1568u, (r3 + 1908), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1608u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1608u, (r3 + 1948), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1612u, (r3 + 1952), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1616u, (r3 + 1956), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1656u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1656u, (r3 + 1996), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1660u, (r3 + 2000), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1664u, (r3 + 2004), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1704u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1704u, (r3 + 2044), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1708u, (r3 + 2048), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1712u, (r3 + 2052), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1752u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1752u, (r3 + 2092), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1756u, (r3 + 2096), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1760u, (r3 + 2100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1800u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1800u, (r3 + 2140), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1804u, (r3 + 2144), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1808u, (r3 + 2148), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1848u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1848u, (r3 + 2188), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1852u, (r3 + 2192), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1856u, (r3 + 2196), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1896u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1896u, (r3 + 2236), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1900u, (r3 + 2240), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1904u, (r3 + 2244), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1944u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1944u, (r3 + 2284), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1948u, (r3 + 2288), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1952u, (r3 + 2292), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2016u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2016u, (r3 + 2356), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2020u, (r3 + 2360), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2024u, (r3 + 2364), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2064u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2064u, (r3 + 2404), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2068u, (r3 + 2408), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2072u, (r3 + 2412), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2112u, (r3 + 2452), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2116u, (r3 + 2456), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2120u, (r3 + 2460), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2160u, (r3 + 2500), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2164u, (r3 + 2504), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2168u, (r3 + 2508), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2208u, (r3 + 2548), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2212u, (r3 + 2552), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2216u, (r3 + 2556), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2280u, (r3 + 2620), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2284u, (r3 + 2624), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2288u, (r3 + 2628), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2352u, (r3 + 2692), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2356u, (r3 + 2696), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2360u, (r3 + 2700), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2400u, (r3 + 2740), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2404u, (r3 + 2744), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2408u, (r3 + 2748), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2448u, (r3 + 2788), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2452u, (r3 + 2792), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2456u, (r3 + 2796), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2520u, (r3 + 2860), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2524u, (r3 + 2864), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2528u, (r3 + 2868), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2568u, (r3 + 2908), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2572u, (r3 + 2912), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2576u, (r3 + 2916), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2616u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2616u, (r3 + 2956), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2620u, (r3 + 2960), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2624u, (r3 + 2964), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2664u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2664u, (r3 + 3004), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2668u, (r3 + 3008), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2672u, (r3 + 3012), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2712u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2712u, (r3 + 3052), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2716u, (r3 + 3056), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2720u, (r3 + 3060), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2760u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2760u, (r3 + 3100), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2764u, (r3 + 3104), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2768u, (r3 + 3108), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2808u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2808u, (r3 + 3148), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2812u, (r3 + 3152), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2816u, (r3 + 3156), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2856u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2856u, (r3 + 3196), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2860u, (r3 + 3200), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2864u, (r3 + 3204), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2904u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2904u, (r3 + 3244), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2908u, (r3 + 3248), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2912u, (r3 + 3252), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2952u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2952u, (r3 + 3292), r5);
        MemoryInline::WriteResolved32(guest_range_0, 2956u, (r3 + 3296), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 2960u, (r3 + 3300), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3024u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3024u, (r3 + 3364), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3028u, (r3 + 3368), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3032u, (r3 + 3372), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3096u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3096u, (r3 + 3436), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3100u, (r3 + 3440), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3104u, (r3 + 3444), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3144u, (r3 + 3484), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3148u, (r3 + 3488), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3152u, (r3 + 3492), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3192u, (r3 + 3532), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3196u, (r3 + 3536), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3200u, (r3 + 3540), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3240u, (r3 + 3580), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3244u, (r3 + 3584), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3248u, (r3 + 3588), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3288u, (r3 + 3628), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3292u, (r3 + 3632), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3296u, (r3 + 3636), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3336u, (r3 + 3676), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3340u, (r3 + 3680), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3344u, (r3 + 3684), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3384u, (r3 + 3724), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3388u, (r3 + 3728), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3392u, (r3 + 3732), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3456u, (r3 + 3796), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3460u, (r3 + 3800), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3464u, (r3 + 3804), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3504u, (r3 + 3844), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3508u, (r3 + 3848), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3512u, (r3 + 3852), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3552u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3552u, (r3 + 3892), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3556u, (r3 + 3896), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3560u, (r3 + 3900), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3576u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3576u, (r3 + 3916), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3580u, (r3 + 3920), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3584u, (r3 + 3924), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3672u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3672u, (r3 + 4012), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3676u, (r3 + 4016), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3680u, (r3 + 4020), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3720u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3720u, (r3 + 4060), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3724u, (r3 + 4064), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3728u, (r3 + 4068), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3744u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3744u, (r3 + 4084), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3748u, (r3 + 4088), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3752u, (r3 + 4092), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3816u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3816u, (r3 + 4156), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3820u, (r3 + 4160), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3824u, (r3 + 4164), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3888u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3888u, (r3 + 4228), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3892u, (r3 + 4232), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3896u, (r3 + 4236), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3936u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3936u, (r3 + 4276), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3940u, (r3 + 4280), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3944u, (r3 + 4284), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3984u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3984u, (r3 + 4324), r5);
        MemoryInline::WriteResolved32(guest_range_0, 3988u, (r3 + 4328), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3992u, (r3 + 4332), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4032u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4032u, (r3 + 4372), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4036u, (r3 + 4376), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4040u, (r3 + 4380), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4080u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4080u, (r3 + 4420), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4084u, (r3 + 4424), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4088u, (r3 + 4428), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4468), 0, 2772u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4468), r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4472), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 4476), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 4516), r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 4520), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 4524), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 4588), r5);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 4592), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 4596), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r3 + 4660), r5);
        MemoryInline::WriteResolved32(guest_range_1, 196u, (r3 + 4664), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 200u, (r3 + 4668), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r3 + 4732), r5);
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r3 + 4736), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 272u, (r3 + 4740), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 336u, (r3 + 4804), r5);
        MemoryInline::WriteResolved32(guest_range_1, 340u, (r3 + 4808), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 344u, (r3 + 4812), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 384u, (r3 + 4852), r5);
        MemoryInline::WriteResolved32(guest_range_1, 388u, (r3 + 4856), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 392u, (r3 + 4860), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 456u, (r3 + 4924), r5);
        MemoryInline::WriteResolved32(guest_range_1, 460u, (r3 + 4928), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 464u, (r3 + 4932), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 504u, (r3 + 4972), r5);
        MemoryInline::WriteResolved32(guest_range_1, 508u, (r3 + 4976), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 512u, (r3 + 4980), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 576u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 576u, (r3 + 5044), r5);
        MemoryInline::WriteResolved32(guest_range_1, 580u, (r3 + 5048), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 584u, (r3 + 5052), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 624u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 624u, (r3 + 5092), r5);
        MemoryInline::WriteResolved32(guest_range_1, 628u, (r3 + 5096), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 632u, (r3 + 5100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 672u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 672u, (r3 + 5140), r5);
        MemoryInline::WriteResolved32(guest_range_1, 676u, (r3 + 5144), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 680u, (r3 + 5148), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 720u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 720u, (r3 + 5188), r5);
        MemoryInline::WriteResolved32(guest_range_1, 724u, (r3 + 5192), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 728u, (r3 + 5196), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 768u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 768u, (r3 + 5236), r5);
        MemoryInline::WriteResolved32(guest_range_1, 772u, (r3 + 5240), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 776u, (r3 + 5244), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 840u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 840u, (r3 + 5308), r5);
        MemoryInline::WriteResolved32(guest_range_1, 844u, (r3 + 5312), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 848u, (r3 + 5316), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 888u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 888u, (r3 + 5356), r5);
        MemoryInline::WriteResolved32(guest_range_1, 892u, (r3 + 5360), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 896u, (r3 + 5364), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 960u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 960u, (r3 + 5428), r5);
        MemoryInline::WriteResolved32(guest_range_1, 964u, (r3 + 5432), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 968u, (r3 + 5436), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1032u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1032u, (r3 + 5500), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1036u, (r3 + 5504), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1040u, (r3 + 5508), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1104u, (r3 + 5572), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1108u, (r3 + 5576), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1112u, (r3 + 5580), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1152u, (r3 + 5620), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1156u, (r3 + 5624), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1160u, (r3 + 5628), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1200u, (r3 + 5668), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1204u, (r3 + 5672), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1208u, (r3 + 5676), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1224u, (r3 + 5692), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1228u, (r3 + 5696), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1232u, (r3 + 5700), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1296u, (r3 + 5764), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1300u, (r3 + 5768), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1304u, (r3 + 5772), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1416u, (r3 + 5884), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1420u, (r3 + 5888), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1424u, (r3 + 5892), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1512u, (r3 + 5980), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1516u, (r3 + 5984), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1520u, (r3 + 5988), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1584u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1584u, (r3 + 6052), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1588u, (r3 + 6056), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1592u, (r3 + 6060), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1680u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1680u, (r3 + 6148), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1684u, (r3 + 6152), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1688u, (r3 + 6156), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1728u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1728u, (r3 + 6196), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1732u, (r3 + 6200), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1736u, (r3 + 6204), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1776u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1776u, (r3 + 6244), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1780u, (r3 + 6248), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1784u, (r3 + 6252), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1848u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1848u, (r3 + 6316), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1852u, (r3 + 6320), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1856u, (r3 + 6324), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1896u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1896u, (r3 + 6364), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1900u, (r3 + 6368), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1904u, (r3 + 6372), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1944u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1944u, (r3 + 6412), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1948u, (r3 + 6416), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 1952u, (r3 + 6420), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1992u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1992u, (r3 + 6460), r5);
        MemoryInline::WriteResolved32(guest_range_1, 1996u, (r3 + 6464), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2000u, (r3 + 6468), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2040u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2040u, (r3 + 6508), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2044u, (r3 + 6512), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2048u, (r3 + 6516), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2088u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2088u, (r3 + 6556), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2092u, (r3 + 6560), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2096u, (r3 + 6564), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2136u, (r3 + 6604), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2140u, (r3 + 6608), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2144u, (r3 + 6612), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2184u, (r3 + 6652), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2188u, (r3 + 6656), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2192u, (r3 + 6660), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2256u, (r3 + 6724), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2260u, (r3 + 6728), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2264u, (r3 + 6732), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2328u, (r3 + 6796), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2332u, (r3 + 6800), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2336u, (r3 + 6804), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2376u, (r3 + 6844), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2380u, (r3 + 6848), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2384u, (r3 + 6852), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2424u, (r3 + 6892), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2428u, (r3 + 6896), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2432u, (r3 + 6900), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2472u, (r3 + 6940), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2476u, (r3 + 6944), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2480u, (r3 + 6948), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2520u, (r3 + 6988), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2524u, (r3 + 6992), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2528u, (r3 + 6996), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2568u, (r3 + 7036), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2572u, (r3 + 7040), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2576u, (r3 + 7044), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2616u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2616u, (r3 + 7084), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2620u, (r3 + 7088), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2624u, (r3 + 7092), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2664u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2664u, (r3 + 7132), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2668u, (r3 + 7136), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2672u, (r3 + 7140), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2712u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2712u, (r3 + 7180), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2716u, (r3 + 7184), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2720u, (r3 + 7188), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 2760u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 2760u, (r3 + 7228), r5);
        MemoryInline::WriteResolved32(guest_range_1, 2764u, (r3 + 7232), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 2768u, (r3 + 7236), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FC61C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FC61C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FC61C func_803FC61C preserves=true fpr_mask=0x00000000
