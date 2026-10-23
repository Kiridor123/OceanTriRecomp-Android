#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809EA860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_809EA860;

loc_809EA860:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r4;
    r28 = r5;
    r3 = 4;
    ctx->lr = 0x809EA888u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_7C8 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_7C8);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_7C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_809EA890:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809EA9C8;
    }
}

loc_809EA894:
{
    r4 = 0x809F0000u;
    r0 = (r4 + -21776);
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r4 = 1;
    ctx->lr = 0x809EA8ACu;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA9E0_C2B = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_C2B);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_C2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_809EA8B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_809EA8C0;
    }
}

loc_809EA8B4:
{
    r3 = r31;
    ctx->lr = 0x809EA8BCu;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AA8C8_FEE = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_FEE);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_FEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_809EA9C8;
}

loc_809EA8C0:
{
    r29 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2), 0, 250u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 3), static_cast<uint8_t>(r29));
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = 0x809F0000u;
    r0 = (r3 + -21764);
    MemoryInline::WriteResolved32(guest_range_0, 246u, (r31 + 248), r0);
    r3 = r31;
    r4 = r30;
    r5 = 0;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r0 = MemoryInline::FlatRead8((r30 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 6), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 7), static_cast<uint8_t>(r28));
    r3 = r30;
    r4 = 63;
    ctx->lr = 0x809EA914u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EA918:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA928;
    }
}

loc_809EA91C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA928:
{
    r3 = r30;
    r4 = 64;
    ctx->lr = 0x809EA934u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EA938:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA948;
    }
}

loc_809EA93C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA948:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1E6C = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1E6C);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1E6C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809EA958:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA968;
    }
}

loc_809EA95C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA968:
{
    r3 = r30;
    r4 = 204;
    ctx->lr = 0x809EA974u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EA978:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA988;
    }
}

loc_809EA97C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA988:
{
    r3 = r30;
    r4 = 45;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_242E = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_242E);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_242E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809EA998:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA9A8;
    }
}

loc_809EA99C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 16);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA9A8:
{
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_27FE = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_27FE);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_27FE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809EA9B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EA9C8;
    }
}

loc_809EA9BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
}

loc_809EA9C8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EA860 func_809EA860 preserves=true fpr_mask=0x00000000
