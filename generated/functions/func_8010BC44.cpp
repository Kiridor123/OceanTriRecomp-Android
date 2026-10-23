#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F8978(CpuContext* ctx);
extern "C" uint32_t func_800F8978_ra10_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8010BC44_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8010BC44;

loc_8010BC44:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r26 = r3;
    r20 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = (r30 & 255);
}

loc_8010BC80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8010BD88;
    }
}

loc_8010BC84:
{
    r3 = 156;
    ctx->lr = 0x8010BC8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_AB1 = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_AB1);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_AB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r31 = r3;
}

loc_8010BC94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8010BD88;
    }
}

loc_8010BC98:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r20));
    r4 = 0x80110000u;
    r0 = (r4 + -16884);
    MemoryInline::FlatWriteRam32((r3 + 52), r0);
    r4 = 0x80110000u;
    r0 = (r4 + -16992);
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
    r20 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 2;
    MemoryInline::FlatWrite32(r20, r0);
    r21 = 0;
    r24 = r20;
    r23 = (r20 + 12);
    r22 = (r20 + 36);
    r25 = 0;
    goto loc_8010BD30;
}

loc_8010BCD8:
{
    ctx->lr = 0x8010BCDCu;
    if constexpr (KnownRegArgsCpuCall<0x800F8978u>(&func_800F8978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_800F8978_112B = func_800F8978_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_800F8978_112B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F8978u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_8010BCE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010BCF8;
    }
}

loc_8010BCEC:
{
    r3 = r31;
    ctx->lr = 0x8010BCF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    goto loc_8010BD88;
}

loc_8010BCF8:
{
    r3 = r23;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r22;
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWrite8((r24 + 4), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r24 + 6), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r24 + 7), static_cast<uint8_t>(r25));
    r24 = (r24 + 72);
    r23 = (r23 + 72);
    r22 = (r22 + 72);
    r21 = (r21 + 1);
}

loc_8010BD30:
{
    r0 = MemoryInline::FlatRead32(r20);
}

loc_8010BD38:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_8010BCD8;
    }
}

loc_8010BD3C:
{
    r3 = (r31 + 24);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32(r29);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 35u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 39u, (r31 + 40), r0);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 43u, (r31 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_2, 67u, (r31 + 68), static_cast<uint8_t>(r30));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 3), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 47u, (r31 + 48), r26);
    r3 = r31;
    r4 = 0;
    r5 = 4;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
}

loc_8010BD88:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010BC44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010BC44_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010BC44 func_8010BC44 preserves=true fpr_mask=0x00000000
