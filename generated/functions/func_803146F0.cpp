#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80054058(CpuContext* ctx);
extern "C" uint64_t func_80054058_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027EF34(CpuContext* ctx);
extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0910(CpuContext* ctx);
extern "C" uint64_t func_802E0910_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80314668(CpuContext* ctx);
extern "C" uint64_t func_80314668_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803146F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[2].d = arg_f2;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803146F0u);
    goto loc_803146F0;

loc_803146F0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 292u, (r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r29 = r4;
    r27 = r5;
    r28 = r6;
    r3 = r29;
    ctx->lr = 0x8031471Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r30 = r3;
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8031472Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027EF34u>(&func_8027EF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EF34_11FC = func_8027EF34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EF34_11FC);
        r4 = static_cast<uint32_t>(regargs_result_8027EF34_11FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EF34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + 1896);
    r3_addr_0 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29 = (r29 + r0);
    r3 = 2060;
    r4 = r27;
    ctx->lr = 0x80314760u;
    if constexpr (KnownRegArgsCpuCall<0x802E0910u>(&func_802E0910)) {
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
        const auto regargs_result_802E0910_1827 = func_802E0910_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0910_1827);
        r4 = static_cast<uint32_t>(regargs_result_802E0910_1827 >> 32);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802E0910u>(ctx);
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
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = 2059;
    r4 = 0;
    ctx->lr = 0x8031476Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_202D = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_202D);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_202D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r31 = r3;
    r4 = MemoryInline::FlatRead16(r27);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r1 + 8), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r27 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r5 + r4);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r1 + 10), static_cast<uint16_t>(r6));
    r5 = (r1 + 136);
    MemoryInline::WriteResolved16(guest_range_5, 140u, (r1 + 148), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_5, 128u, (r1 + 136), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16(r29);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r0 + r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_5, 136u, (r1 + 144), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 132u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_5, 132u, (r1 + 140), r4);
        MemoryInline::WriteResolved16(guest_range_5, 134u, (r1 + 142), r6);
    }
    MemoryInline::WriteResolved16(guest_range_5, 130u, (r1 + 138), static_cast<uint16_t>(r6));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r6 + r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_5, 142u, (r1 + 150), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_5, 138u, (r1 + 146), static_cast<uint16_t>(r4));
    r6 = (r1 + 24);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 - r8);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_5, 28u, (r1 + 36), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r1 + 24), static_cast<uint16_t>(r8));
    r10 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r4 = MemoryInline::FlatRead16(r29);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r8 = (r7 * r4);
    r4 = 0x91A30000u;
    r4 = (r4 + -19515);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (r9 + r8);
    r8 = (static_cast<int32_t>(r8) >> 8);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r8 = (r8 + r9);
    r8 = (r10 + r8);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    MemoryInline::WriteResolved16(guest_range_5, 24u, (r1 + 32), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_5, 20u, (r1 + 28), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 22u, (r1 + 30), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_5, 18u, (r1 + 26), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 30u, (r1 + 38), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_5, 26u, (r1 + 34), static_cast<uint16_t>(r8));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r8 = 6;
    ctr = r8;
}

loc_8031484C:
{
    r8 = MemoryInline::FlatRead16((r5 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r9 = MemoryInline::FlatRead16((r6 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r5 + 16);
    r6 = (r6 + 16);
    r29 = (r29 + 2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r5 + 12), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_1, 0u, r5, static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16(r29);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r8 = (r0 + r8);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r5 + 8), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 4), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r1 + 138));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 6), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r5 + 2), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r1 + 146));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r5 + 14), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r5 + 10), static_cast<uint16_t>(r8));
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r6 + 12), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved16(guest_range_2, 0u, r6, static_cast<uint16_t>(r9));
    r10 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r8 = MemoryInline::FlatRead16(r29);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r8 = (r7 * r8);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (r9 + r8);
    r8 = (static_cast<int32_t>(r8) >> 8);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r8 = (r8 + r9);
    r8 = (r10 + r8);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r6 + 8), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r6 + 4), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r1 + 26));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r6 + 6), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r6 + 2), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r1 + 34));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r6 + 14), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r6 + 10), static_cast<uint16_t>(r8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8031484C;
    }
}

loc_803148E8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -11360));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11372));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11368));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = 3;
    r4 = 28;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 136);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = 0x805E0000u;
    r3 = (r3 + -10944);
    // inline leaf 0x800539F8 (8 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 & -131073);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 12), r3);
    // end of inlined leaf 0x800539F8
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    ctx->lr = 0x80314948u;
    if constexpr (KnownRegArgsCpuCall<0x80054058u>(&func_80054058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_80054058_4DFB = func_80054058_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80054058_4DFB);
        r4 = static_cast<uint32_t>(regargs_result_80054058_4DFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80054058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead8((r31 + 18));
    r3 = (r3 & 65535);
    r4 = (r1 + 24);
    ctx->lr = 0x80314958u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_541B = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_541B);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_541B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8031495Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = r26;
    r0 = MemoryInline::FlatRead8((r30 + 9));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r28 & 255);
    r5 = (r0 & 2);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    ctx->lr = 0x80314980u;
    if constexpr (KnownRegArgsCpuCall<0x80314668u>(&func_80314668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80314668_5C13 = func_80314668_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314668_5C13);
        r4 = static_cast<uint32_t>(regargs_result_80314668_5C13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80314668u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_80314988:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(6))) {
        goto loc_80314A04;
    }
}

loc_8031498C:
{
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r0 * 50);
    r0 = (r3 + 150);
    r0 = (r4 * r0);
    r3 = 0x91A30000u;
    r3 = (r3 + -19515);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 - r3);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 3;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl4_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl4_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl4_0x800538AC;
    }
}

loc_inl4_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl4_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800538B0;
    }
}

loc_inl4_0x800538A8:
{
    goto loc_inl4_cont_80053870;
}

loc_inl4_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl4_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl4_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = r26;
    r6 = MemoryInline::FlatRead16((r31 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    // inline leaf 0x800538E0 (20 guest instruction(s))
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    guest_range_3 = MemoryInline::ResolveRangeHost((r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r7 + 32), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r7 + 20), static_cast<uint16_t>(r3));
    r0 = (r3 + r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r7 + 28), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r7 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r7 + 26), r4);
    }
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r7 + 22), static_cast<uint16_t>(r4));
    r0 = (r4 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r7 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r7 + 30), static_cast<uint16_t>(r0));
    r0 = (r7 + 20);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r7 + 8), r0);
    // end of inlined leaf 0x800538E0
    r3 = 255;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    ctx->lr = 0x80314A04u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_80314A04:
{
    r11 = (r1 + 288);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
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

extern "C" void func_803146F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803146F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803146F0 func_803146F0 preserves=true fpr_mask=0x00000000
