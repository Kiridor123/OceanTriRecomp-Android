#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804ED6D0_ra188_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x804ED6D0u);
    goto loc_804ED6D0;

loc_804ED6D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r4 = 0x80760000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -10352);
    r28 = 0;
    r4_addr_0 = (r4 + r0);
    r27 = MemoryInline::FlatRead32(r4_addr_0);
    r29 = -1;
    r30 = 253;
    r31 = 12;
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 2128), 0, 196u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 2128), r28);
    r26 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r27 + 2260), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r27 + 2204), r28);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r27 + 2208), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r27 + 2216), r28);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r27 + 2220), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r27 + 2224), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r27 + 2228), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r27 + 2232), r28);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r27 + 2236), r29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 113u, (r27 + 2241), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 114u, (r27 + 2242), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 193u, (r27 + 2321), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 194u, (r27 + 2322), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 112u, (r27 + 2240), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 122u, (r27 + 2250), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 123u, (r27 + 2251), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 124u, (r27 + 2252), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 168u, (r27 + 2296), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 174u, (r27 + 2302), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 170u, (r27 + 2298), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 176u, (r27 + 2304), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 172u, (r27 + 2300), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 178u, (r27 + 2306), static_cast<uint16_t>(r28));
    ctx->lr = 0x804ED76Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D5400_1492 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1492);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1492 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r27 + 2292), r4);
    MemoryInline::FlatWrite32((r27 + 2288), r3);
    ctx->lr = 0x804ED778u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D5400_1876 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1876);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1876 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r27 + 2243), 0, 209u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 73u, (r27 + 2316), r4);
    r6 = 1;
    r0 = 4;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 69u, (r27 + 2312), r3);
    r3 = (r27 + 2104);
    r5 = 24;
    MemoryInline::WriteResolved8(guest_range_2, 77u, (r27 + 2320), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r27 + 2249), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved32(guest_range_2, 1u, (r27 + 2244), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 177u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 177u, (r27 + 2420), r28);
        MemoryInline::WriteResolved32(guest_range_2, 181u, (r27 + 2424), r28);
    }
    MemoryInline::WriteResolved16(guest_range_2, 189u, (r27 + 2432), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved32(guest_range_2, 185u, (r27 + 2428), r28);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r27 + 2243), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 21u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 21u, (r27 + 2264), r28);
        MemoryInline::WriteResolved32(guest_range_2, 25u, (r27 + 2268), r28);
    }
    MemoryInline::WriteResolved32(guest_range_2, 29u, (r27 + 2272), r28);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r27 + 2253), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r27 + 2254), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r27 + 2255), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 191u, (r27 + 2434), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 192u, (r27 + 2435), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved16(guest_range_2, 193u, (r27 + 2436), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 195u, (r27 + 2438), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 201u, (r27 + 2444), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved32(guest_range_2, 197u, (r27 + 2440), r28);
    MemoryInline::WriteResolved8(guest_range_2, 203u, (r27 + 2446), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 204u, (r27 + 2447), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 205u, (r27 + 2448), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 206u, (r27 + 2449), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved16(guest_range_2, 207u, (r27 + 2450), static_cast<uint16_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2356);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2132);
    r4 = 0;
    r5 = 46;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2178);
    r4 = 0;
    r5 = 26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2324);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2340);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 2348);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r27;
    r4 = 0;
    r5 = 56;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r27 + 2248), static_cast<uint8_t>(r28));
    r3 = (r27 + 160);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r27 + 201), static_cast<uint8_t>(r29));
    r3 = (r27 + 64);
    r4 = (r27 + 160);
    r5 = 96;
    MemoryInline::FlatWrite8((r27 + 297), static_cast<uint8_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r27 + 56), r29);
    r4 = (r27 + 364);
    r3 = 24;
    r0 = (r27 + 1528);
    MemoryInline::FlatWrite32((r27 + 60), r29);
    MemoryInline::FlatWrite32((r27 + 356), r4);
    MemoryInline::FlatWrite32((r27 + 360), r3);
    MemoryInline::FlatWrite32((r27 + 1520), r0);
    MemoryInline::FlatWrite32((r27 + 1524), r31);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    MemoryInline::FlatWrite8((r27 + 352), static_cast<uint8_t>(r28));
    r29 = r3;
    r4 = 0;
    MemoryInline::FlatWrite8((r27 + 353), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead32((r27 + 360));
    r3 = MemoryInline::FlatRead32((r27 + 356));
    r5 = (r0 * 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    MemoryInline::FlatWrite8((r27 + 1516), static_cast<uint8_t>(r28));
    r29 = r3;
    r4 = 0;
    MemoryInline::FlatWrite8((r27 + 1517), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead32((r27 + 1524));
    r3 = MemoryInline::FlatRead32((r27 + 1520));
    r5 = (r0 * 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r26;
    // inline leaf 0x804F9540 (11 guest instruction(s))
    r4 = 0x80760000u;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r4 = (r4 + -10352);
    r0 = 0;
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 2456), r0);
    MemoryInline::FlatWrite32((r3 + 2460), r0);
    MemoryInline::FlatWrite16((r3 + 2464), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2468), r0);
    MemoryInline::FlatWrite32((r3 + 2472), r0);
    // end of inlined leaf 0x804F9540
    r4 = (r13 + -14192);
    r3 = (r13 + -14188);
    r4_addr_2 = (r4 + r26);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r28));
    r11 = (r1 + 32);
    r3_addr_0 = (r3 + r26);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r28));
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804ED6D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804ED6D0_ra188_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804ED6D0 func_804ED6D0 preserves=true fpr_mask=0x00000000
