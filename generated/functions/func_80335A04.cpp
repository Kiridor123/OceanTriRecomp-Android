#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80335B80(CpuContext* ctx);
extern "C" uint32_t func_80335B80_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804514C8(CpuContext* ctx);
extern "C" uint64_t func_804514C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80335B80_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80335B80_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80335A04_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t stackword10 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80335A04;

loc_80335A04:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r3 = (r1 + 8);
    ctx->lr = 0x80335A34u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80335B80u) && KnownTranslatedCpuCall<0x80335B80u>::kAvailable && !KnownTranslatedCpuCall<0x80335B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80335B80u>()) {
        const auto state_free_result_80335B80_969 = func_80335B80_statefree_v0(r1, r3, r31, 0x80335A34u);
        r1 = static_cast<uint32_t>(state_free_result_80335B80_969);
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
        InvokeDirectCpu<0x80335B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 76;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    r4 = (r27 & 255);
    r5 = (r28 & 255);
    r6 = (r29 & 255);
    // inline leaf 0x80334A98 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 88u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80334A98
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 1615u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r31 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 57u, (r1 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 12), static_cast<uint16_t>(r30));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 59u, (r31 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 63u, (r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 67u, (r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 171u, (r31 + 172));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 167u, (r31 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r31 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r1 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 11u, (r31 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 773u, (r31 + 774));
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r1 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 619u, (r31 + 620));
    MemoryInline::WriteResolved8(guest_range_1, 58u, (r1 + 66), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 181u, (r31 + 182));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 879u, (r31 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 881u, (r31 + 882));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r1 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 889u, (r31 + 890));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r1 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1410u, (r31 + 1411));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r1 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1614u, (r31 + 1615));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r1 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r1 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 951u, (r31 + 952));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -10224));
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 92), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 88), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 60), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r31 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r31 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 983u, (r31 + 984));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 987u, (r31 + 988));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 76), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 893u, (r31 + 894));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r1 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1553u, (r31 + 1554));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 72u, (r1 + 80), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1555u, (r31 + 1556));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 73u, (r1 + 81), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1557u, (r31 + 1558));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 74u, (r1 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1559u, (r31 + 1560));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 75u, (r1 + 83), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = 76;
    ctx->lr = 0x80335B68u;
    if constexpr (KnownRegArgsCpuCall<0x804514C8u>(&func_804514C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_804514C8_271E = func_804514C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804514C8_271E);
        r4 = static_cast<uint32_t>(regargs_result_804514C8_271E >> 32);
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

extern "C" void func_80335A04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80335A04_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFC fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80335A04 func_80335A04 preserves=true fpr_mask=0x00000000
