#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801296D8(CpuContext* ctx);
extern "C" uint64_t func_801296D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80135B28(CpuContext* ctx);
extern "C" uint64_t func_80135B28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802AB080;

loc_802AB080:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r25 = r4;
    r27 = r5;
    r26 = r6;
    r29 = r7;
    r30 = r8;
    r31 = (r3 + 92);
}

loc_802AB0B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AB234;
    }
}

loc_802AB0B8:
{
}

loc_802AB0BC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_802AB0C4;
    }
}

loc_802AB0C0:
{
    goto loc_802AB234;
}

loc_802AB0C4:
{
    r3 = r31;
    // inline leaf 0x8029F59C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F59C
    r0 = (r26 * 26);
    r25 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r25 + 15));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r27_addr_1 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_1);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = r31;
    r4 = 2;
    r5 = r28;
    // inline leaf 0x8029F0A0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0A0
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13984));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r27 = 1127219200;
    stackword10 = r27;
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    r0 = MemoryInline::FlatRead16((r25 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword12 = r27;
    MemoryInline::FlatWriteRam32((r1 + 16), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    r3 = r31;
    r4 = r25;
    ctx->lr = 0x802AB140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8029F268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_802AB148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AB168;
    }
}

loc_802AB14C:
{
}

loc_802AB150:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AB17C;
    }
}

loc_802AB154:
{
}

loc_802AB158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802AB208;
    }
}

loc_802AB15C:
{
}

loc_802AB160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802AB21C;
    }
}

loc_802AB164:
{
    goto loc_802AB22C;
}

loc_802AB168:
{
    r3 = r31;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r28 + 12));
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    goto loc_802AB22C;
}

loc_802AB17C:
{
    r26 = MemoryInline::FlatRead32((r28 + 12));
    r0 = MemoryInline::FlatRead16((r31 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802AB188:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802AB1D0;
    }
}

loc_802AB18C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13984));
    r0 = (r0 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword14 = r27;
    MemoryInline::FlatWriteRam32((r1 + 16), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 1972));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r31 + 64), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802AB1C4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802AB1D0;
    }
}

loc_802AB1C8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 64), static_cast<uint16_t>(r0));
}

loc_802AB1D0:
{
    r3 = r26;
    ctx->lr = 0x802AB1D8u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B28_1D45 = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_1D45);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_1D45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_802AB1E0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802AB1E8;
    }
}

loc_802AB1E4:
{
    r29 = (r29 & 239);
}

loc_802AB1E8:
{
    r3 = r31;
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r28 + 12));
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    r3 = r26;
    r4 = r31;
    ctx->lr = 0x802AB204u;
    if constexpr (KnownRegArgsCpuCall<0x801296D8u>(&func_801296D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801296D8_2274 = func_801296D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801296D8_2274);
        r4 = static_cast<uint32_t>(regargs_result_801296D8_2274 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801296D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802AB22C;
}

loc_802AB208:
{
    r3 = r31;
    r4 = 3;
    r5 = MemoryInline::FlatRead32((r28 + 12));
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    goto loc_802AB22C;
}

loc_802AB21C:
{
    r3 = r31;
    r4 = 2;
    r5 = r28;
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
}

loc_802AB22C:
{
    MemoryInline::FlatWrite8((r31 + 49), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 50), static_cast<uint8_t>(r30));
}

loc_802AB234:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AB080(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AB080_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AB080 func_802AB080 preserves=true fpr_mask=0x00000000
