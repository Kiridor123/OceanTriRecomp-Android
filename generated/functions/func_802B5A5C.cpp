#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050D7C(CpuContext* ctx);
extern "C" uint64_t func_80050D7C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802B5990(CpuContext* ctx);
extern "C" uint64_t func_802B5990_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE158(CpuContext* ctx);
extern "C" uint64_t func_802BE158_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802B5A5C_ra68_1f0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[6] = arg_r6;

    goto loc_802B5A5C;

loc_802B5A5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13756));
    // inline leaf 0x8005000C (4 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13752));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r30 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r30 + 48), f0.d);
    r3 = 0;
    r4 = 2;
    ctx->lr = 0x802B5AC0u;
    if constexpr (KnownRegArgsCpuCall<0x802B5990u>(&func_802B5990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B5990_EE5 = func_802B5990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B5990_EE5);
        r4 = static_cast<uint32_t>(regargs_result_802B5990_EE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B5990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
    r4 = r30;
    r5 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    ctx->lr = 0x802B5AD8u;
    if constexpr (KnownRegArgsCpuCall<0x802BE158u>(&func_802BE158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE158_12C1 = func_802BE158_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE158_12C1);
        r4 = static_cast<uint32_t>(regargs_result_802BE158_12C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BE158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 8);
    r4 = r30;
    r5 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r30 + 100);
    r5 = (r30 + 104);
    ctx->lr = 0x802B5B04u;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80050D7C_197A = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_197A);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_197A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 100));
    MemoryInline::FlatWrite32((r30 + 108), r0);
    r0 = MemoryInline::FlatRead32((r30 + 104));
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r3 = MemoryInline::FlatRead8((r30 + 1176));
    r4 = 3;
    ctx->lr = 0x802B5B20u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803BED04_20BA = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_20BA);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_20BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_802B5B28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B5B48;
    }
}

loc_802B5B2C:
{
}

loc_802B5B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B5B54;
    }
}

loc_802B5B34:
{
}

loc_802B5B38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B5B6C;
    }
}

loc_802B5B3C:
{
}

loc_802B5B40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802B5B78;
    }
}

loc_802B5B44:
{
    goto loc_802B5B60;
}

loc_802B5B48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
    goto loc_802B5B80;
}

loc_802B5B54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
    goto loc_802B5B80;
}

loc_802B5B60:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
    goto loc_802B5B80;
}

loc_802B5B6C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
    goto loc_802B5B80;
}

loc_802B5B78:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 124), static_cast<uint8_t>(r0));
}

loc_802B5B80:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 116), 0, 210u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r30 + 146), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 128), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 116), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 120), r31);
    }
    r3 = (r30 + 184);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 196);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 208);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 220);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 232);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 244);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r30 + 160), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r30 + 161), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r30 + 162), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r30 + 163), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 49u, (r30 + 165), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 50u, (r30 + 166), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r30 + 164), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r30 + 168), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r30 + 170), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 55u, (r30 + 171), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 57u, (r30 + 173), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 58u, (r30 + 174), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r30 + 176), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 62u, (r30 + 178), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r30 + 172), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r30 + 181), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r30 + 180), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 141u, (r30 + 257), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 140u, (r30 + 256), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 143u, (r30 + 259), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 142u, (r30 + 258), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 153u, (r30 + 269), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 152u, (r30 + 268), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 155u, (r30 + 271), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 154u, (r30 + 270), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 156u, (r30 + 272), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r30 + 158), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r30 + 159), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r30 + 182), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r30 + 183), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r30 + 132), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 276), r31);
    MemoryInline::WriteResolved8(guest_range_1, 164u, (r30 + 280), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 166u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 166u, (r30 + 282), r31);
        MemoryInline::WriteResolved16(guest_range_1, 168u, (r30 + 284), r31);
    }
    MemoryInline::WriteResolved8(guest_range_1, 208u, (r30 + 324), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 209u, (r30 + 325), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return r3;
}

}

extern "C" void func_802B5A5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B5A5C_ra68_1f0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FEF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FF0 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B5A5C func_802B5A5C preserves=true fpr_mask=0x00000000
