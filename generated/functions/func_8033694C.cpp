#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80335F50(CpuContext* ctx);
extern "C" uint64_t func_80335F50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80336AE0(CpuContext* ctx);
extern "C" uint32_t func_80336AE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804514C8(CpuContext* ctx);
extern "C" uint64_t func_804514C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_80336AE0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80336AE0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033694C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_8033694C;

loc_8033694C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r27 = r4;
    r28 = r5;
    r31 = r6;
    r30 = r7;
    r3 = (r1 + 8);
    ctx->lr = 0x8033697Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80336AE0u) && KnownTranslatedCpuCall<0x80336AE0u>::kAvailable && !KnownTranslatedCpuCall<0x80336AE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80336AE0u>()) {
        const auto state_free_result_80336AE0_A5E = func_80336AE0_statefree_v0(r1, r3, r31, 0x8033697Cu);
        r1 = static_cast<uint32_t>(state_free_result_80336AE0_A5E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80336AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    r4 = (r27 & 255);
    r5 = (r28 & 255);
    r6 = (r31 & 255);
    // inline leaf 0x80334A98 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80334A98
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r29 + 30));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 30), static_cast<uint8_t>(r0));
    r5 = (r1 + 12);
    // inline leaf 0x80335F38 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r5 + 3), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80335F38
    r31 = 0;
    MemoryInline::FlatWrite16((r29 + 1128), static_cast<uint16_t>(r31));
    r3 = (r1 + 16);
    r4 = (r29 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 428), 0, 1974u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r29 + 428));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 28), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 444));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 448));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r29 + 452));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 74u, (r29 + 502));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 53u, (r29 + 481));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r1 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1955u, (r29 + 2383));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1928u, (r29 + 2356));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1922u, (r29 + 2350));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1912u, (r29 + 2340));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1934u, (r29 + 2362));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1938u, (r29 + 2366));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1944u, (r29 + 2372));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1914u, (r29 + 2342));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1898u, (r29 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1904u, (r29 + 2332));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1901u, (r29 + 2329));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 653u, (r29 + 1081));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 70u, (r29 + 498));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1786u, (r29 + 2214));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1973u, (r29 + 2401));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r1 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1524u, (r29 + 1952));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 68), r0);
    r3 = r29;
    r4 = (r1 + 72);
    ctx->lr = 0x80336A94u;
    if constexpr (KnownRegArgsCpuCall<0x80335F50u>(&func_80335F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80335F50_2721 = func_80335F50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80335F50_2721);
        r4 = static_cast<uint32_t>(regargs_result_80335F50_2721 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80335F50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r30 & 255);
}

loc_80336A9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80336AAC;
    }
}

loc_80336AA0:
{
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_80336AA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80336AB8;
    }
}

loc_80336AAC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 65), static_cast<uint8_t>(r0));
    goto loc_80336ABC;
}

loc_80336AB8:
{
    MemoryInline::FlatWriteRam8((r1 + 65), static_cast<uint8_t>(r31));
}

loc_80336ABC:
{
    r3 = (r1 + 8);
    r4 = 96;
    ctx->lr = 0x80336AC8u;
    if constexpr (KnownRegArgsCpuCall<0x804514C8u>(&func_804514C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_804514C8_2EBB = func_804514C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804514C8_2EBB);
        r4 = static_cast<uint32_t>(regargs_result_804514C8_2EBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x804514C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
    r11 = (r1 + 128);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033694C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033694C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033694C func_8033694C preserves=true fpr_mask=0x00000000
