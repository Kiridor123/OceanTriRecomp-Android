#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D071C(CpuContext* ctx);
extern "C" uint64_t func_800D071C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_800D07C8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D07C8u);
    goto loc_800D07C8;

loc_800D07C8:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r4 = 0x80690000u;
    r31 = (r4 + 30624);
    r7 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 30624), 0, 168u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 30624), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 3), static_cast<uint8_t>(r7));
    r0 = 1;
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 166u, (r31 + 166), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 167u, (r31 + 167), static_cast<uint8_t>(r7));
    r3 = 0x80590000u;
    r8 = (r3 + 22944);
    r9 = r31;
    r10 = 0;
    r11 = r31;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r4 = MemoryInline::FlatRead8((r3 + 9));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 23216);
    r3_addr_0 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = (r13 + -31424);
    r3_addr_1 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = r6;
}

loc_800D084C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_800D0948;
    }
}

loc_800D0850:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_800D0858:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D090C;
    }
}

loc_800D0860:
{
    r0 = MemoryInline::FlatRead16(r8);
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 100), 0, 52u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r11 + 122), static_cast<uint16_t>(r0));
    r5 = (r6 + r10);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r11 + 144), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r11 + 100), static_cast<uint16_t>(r7));
    r10 = (r10 + 4);
    r0 = MemoryInline::FlatRead16((r8 + 2));
    MemoryInline::FlatWrite32((r9 + 12), r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r11 + 124), static_cast<uint16_t>(r0));
    r5 = (r6 + r10);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r11 + 146), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r11 + 102), static_cast<uint16_t>(r7));
    r10 = (r10 + 4);
    r0 = MemoryInline::FlatRead16((r8 + 4));
    MemoryInline::FlatWrite32((r9 + 16), r0);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r11 + 126), static_cast<uint16_t>(r0));
    r5 = (r6 + r10);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r11 + 148), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r11 + 104), static_cast<uint16_t>(r7));
    r10 = (r10 + 4);
    r0 = MemoryInline::FlatRead16((r8 + 6));
    MemoryInline::FlatWrite32((r9 + 20), r0);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r11 + 128), static_cast<uint16_t>(r0));
    r5 = (r6 + r10);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 50u, (r11 + 150), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r11 + 106), static_cast<uint16_t>(r7));
    r8 = (r8 + 8);
    r9 = (r9 + 16);
    r10 = (r10 + 4);
    r3 = (r3 + 16);
    r11 = (r11 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0860;
    }
}

loc_800D0904:
{
    r4 = (r4 & 3);
}

loc_800D0908:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800D0948;
    }
}

loc_800D090C:
{
    ctr = r4;
}

loc_800D0910:
{
    r0 = MemoryInline::FlatRead16(r8);
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r11 + 122), static_cast<uint16_t>(r0));
    r5 = (r6 + r10);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r11 + 144), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r11 + 100), static_cast<uint16_t>(r7));
    r8 = (r8 + 2);
    r9 = (r9 + 4);
    r10 = (r10 + 4);
    r3 = (r3 + 4);
    r11 = (r11 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0910;
    }
}

loc_800D0948:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30524));
    f1.d = (-(f2.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 52), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r31 + 52), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r31 + 56), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30528));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r31 + 60), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r31 + 64), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r31 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r31 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r31 + 76), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r31 + 80), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r31 + 88), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r31 + 92), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r31 + 96), f0.d);
    }
    r0 = MemoryInline::FlatRead8((r31 + 166));
}

loc_800D098C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_800D09CC;
    }
}

loc_800D0990:
{
    r3 = 0x90F10000u;
    r0 = (r3 + -32768);
    MemoryInline::FlatWriteRam32((r31 + 212), r0);
    r3 = 0x80590000u;
    r30 = (r3 + -18632);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x800D09B0u;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800413D0_29E3 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_29E3);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_29E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 212));
    r5 = MemoryInline::FlatRead32((r30 + 16));
    ctx->lr = 0x800D09C0u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_2F66 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_2F66);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_2F66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
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
    r3 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r31 + 216);
    ctx->lr = 0x800D09CCu;
    if constexpr (KnownRegArgsCpuCall<0x800D071Cu>(&func_800D071C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        const auto regargs_result_800D071C_3929 = func_800D071C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800D071C_3929);
        r4 = static_cast<uint32_t>(regargs_result_800D071C_3929 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D071Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_800D09CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
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

extern "C" void func_800D07C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D07C8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D07C8 func_800D07C8 preserves=true fpr_mask=0x00000000
