#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80222F7C_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x80222F7Cu);
    goto loc_80222F7C;

loc_80222F7C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r30 = r3;
    r31 = r4;
    r25 = 0;
    r26 = (r3 + 4);
}

loc_80222FA0:
{
    r3 = r26;
    ctx->lr = 0x80222FA8u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E05C4_732 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_732);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_732 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r26 = (r26 + 356);
    r25 = (r25 + 1);
}

loc_80222FB4:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(7))) {
        goto loc_80222FA0;
    }
}

loc_80222FB8:
{
    r25 = 0;
    r26 = (r30 + 2580);
    r28 = 255;
}

loc_80222FC4:
{
    r3 = r26;
    ctx->lr = 0x80222FCCu;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E05C4_B58 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_B58);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_B58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r3 = (r30 + r25);
    MemoryInline::FlatWrite8((r3 + 2506), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 2561), static_cast<uint8_t>(r28));
    r26 = (r26 + 356);
    r25 = (r25 + 1);
}

loc_80222FE4:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(3))) {
        goto loc_80222FC4;
    }
}

loc_80222FE8:
{
    r28 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 2509), 0, 2019u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1147u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 1147u, (r30 + 3656), r28);
        MemoryInline::WriteResolved32(guest_range_1, 1151u, (r30 + 3660), r28);
    }
    r3 = 255;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 2509), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 2510), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r30 + 2523), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 1291u, (r30 + 3800), r28);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 1295u, (r30 + 3804), r0);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 2511), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 2512), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r30 + 2524), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 1435u, (r30 + 3944), r28);
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 1439u, (r30 + 3948), r0);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 2513), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 2514), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r30 + 2525), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 1579u, (r30 + 4088), r28);
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 1583u, (r30 + 4092), r0);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r30 + 2515), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 2516), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r30 + 2526), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 1723u, (r30 + 4232), r28);
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 1727u, (r30 + 4236), r0);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r30 + 2517), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r30 + 2518), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r30 + 2527), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 1867u, (r30 + 4376), r28);
    r0 = 5;
    MemoryInline::WriteResolved32(guest_range_1, 1871u, (r30 + 4380), r0);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r30 + 2519), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r30 + 2520), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r30 + 2528), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 2011u, (r30 + 4520), r28);
    r0 = 6;
    MemoryInline::WriteResolved32(guest_range_1, 2015u, (r30 + 4524), r0);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r30 + 2521), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r30 + 2522), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r30 + 2529), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r30 + 2530), static_cast<uint8_t>(r3));
    r3 = (r30 + 2531);
    r4 = 255;
    r5 = 22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 2553);
    r4 = 255;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
    r27 = (r30 + 4656);
    r3 = 0x805C0000u;
    r29 = (r3 + -19888);
}

loc_802230C8:
{
    MemoryInline::FlatWrite32((r27 + 4), r28);
    MemoryInline::FlatWrite32((r27 + 12), r28);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r0));
    r24 = 0;
    r26 = (r27 + 20);
}

loc_802230E4:
{
    r3 = r30;
    r4 = r26;
    // inline leaf 0x8022312C (12 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r4 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r4 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r4 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r4 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r4 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r4 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r4 + 32), f0.d);
    }
    // end of inlined leaf 0x8022312C
    r26 = (r26 + 36);
    r24 = (r24 + 1);
}

loc_802230FC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(7))) {
        goto loc_802230E4;
    }
}

loc_80223100:
{
    r27 = (r27 + 272);
    r25 = (r25 + 1);
}

loc_8022310C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(3))) {
        goto loc_802230C8;
    }
}

loc_80223110:
{
    MemoryInline::FlatWrite32(r30, r31);
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80222F7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80222F7C_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80222F7C func_80222F7C preserves=true fpr_mask=0x00000000
