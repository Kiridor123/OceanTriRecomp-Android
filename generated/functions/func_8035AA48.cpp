#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8035AA48_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_8035AA48;

loc_8035AA48:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r3 = 4200;
    ctx->lr = 0x8035AA64u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_891 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_891);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_891 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r27 = r3;
    MemoryInline::FlatWrite32((r13 + -16960), r3);
    r4 = 0;
    r5 = 4200;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r26 = 0;
    r30 = (r27 + 12);
    r29 = r27;
    r28 = r27;
    r31 = 0;
}

loc_8035AA8C:
{
    r3 = r30;
    r4 = 0;
    r5 = 188;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r26 & 255);
    MemoryInline::FlatWrite8((r29 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 15), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r28 + 3020), r31);
    r30 = (r30 + 188);
    r29 = (r29 + 188);
    r28 = (r28 + 4);
    r26 = (r26 + 1);
}

loc_8035AAC0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(16))) {
        goto loc_8035AA8C;
    }
}

loc_8035AAC4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 4069u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r27 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r27 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3096u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3096u, (r27 + 3100), r0);
        MemoryInline::WriteResolved32(guest_range_0, 3100u, (r27 + 3104), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 3104u, (r27 + 3108), r0);
    MemoryInline::WriteResolved16(guest_range_0, 3108u, (r27 + 3112), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3140u, (r27 + 3144), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3172u, (r27 + 3176), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3110u, (r27 + 3114), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3142u, (r27 + 3146), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3236u, (r27 + 3240), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3112u, (r27 + 3116), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3144u, (r27 + 3148), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3300u, (r27 + 3304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3114u, (r27 + 3118), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3146u, (r27 + 3150), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3364u, (r27 + 3368), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3116u, (r27 + 3120), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3148u, (r27 + 3152), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3428u, (r27 + 3432), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3118u, (r27 + 3122), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3150u, (r27 + 3154), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3492u, (r27 + 3496), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3120u, (r27 + 3124), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3152u, (r27 + 3156), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3556u, (r27 + 3560), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3122u, (r27 + 3126), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3154u, (r27 + 3158), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3620u, (r27 + 3624), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3124u, (r27 + 3128), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3156u, (r27 + 3160), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3684u, (r27 + 3688), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3126u, (r27 + 3130), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3158u, (r27 + 3162), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3748u, (r27 + 3752), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3128u, (r27 + 3132), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3160u, (r27 + 3164), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3812u, (r27 + 3816), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3130u, (r27 + 3134), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3162u, (r27 + 3166), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3876u, (r27 + 3880), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3132u, (r27 + 3136), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3164u, (r27 + 3168), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3940u, (r27 + 3944), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3134u, (r27 + 3138), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3166u, (r27 + 3170), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4004u, (r27 + 4008), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3136u, (r27 + 3140), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3168u, (r27 + 3172), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4068u, (r27 + 4072), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3138u, (r27 + 3142), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 3170u, (r27 + 3174), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r27 + 4136), static_cast<uint8_t>(r0));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035AA48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035AA48_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8035AA48 func_8035AA48 preserves=true fpr_mask=0x00000000
