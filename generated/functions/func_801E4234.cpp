#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C300(CpuContext* ctx);
extern "C" uint64_t func_8004C300_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E40A0(CpuContext* ctx);
extern "C" uint64_t func_801E40A0_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E4170(CpuContext* ctx);
extern "C" uint64_t func_801E4170_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E41A0(CpuContext* ctx);
extern "C" uint64_t func_801E41A0_rac8_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8021290C(CpuContext* ctx);
extern "C" uint64_t func_8021290C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80212EA0(CpuContext* ctx);
extern "C" uint64_t func_80212EA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E4234_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x801E4234u);
    goto loc_801E4234;

loc_801E4234:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r22 = r3;
    r21 = r4;
    r25 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801E4258u;
    if constexpr (KnownRegArgsCpuCall<0x8004C300u>(&func_8004C300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C300_B86 = func_8004C300_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C300_B86);
        r4 = static_cast<uint32_t>(regargs_result_8004C300_B86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = r3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r27 = (r27_rot_0 & -8);
    r26 = (r27 + 7);
    r3 = r22;
    ctx->lr = 0x801E4270u;
    if constexpr (KnownRegArgsCpuCall<0x801E40A0u>(&func_801E40A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E40A0_F89 = func_801E40A0_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_801E40A0_F89);
        r4 = static_cast<uint32_t>(regargs_result_801E40A0_F89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x801E40A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = MemoryInline::FlatRead16((r22 + 68));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -9532);
    r3_addr_0 = (r3 + r0);
    r24 = MemoryInline::FlatRead32(r3_addr_0);
    r28 = 0;
    r30 = 0;
    MemoryInline::FlatWrite16((r22 + 248), static_cast<uint16_t>(r30));
    r23 = -1;
    r3 = (r13 + -29392);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite8((r22 + 100), static_cast<uint8_t>(r0));
}

loc_801E42A0:
{
    r3 = MemoryInline::FlatRead8((r22 + 100));
    r4 = MemoryInline::FlatRead8((r22 + 232));
    r5 = r23;
    r6 = r24;
    ctx->lr = 0x801E42B4u;
    if constexpr (KnownRegArgsCpuCall<0x80212EA0u>(&func_80212EA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80212EA0_1643 = func_80212EA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212EA0_1643);
        r4 = static_cast<uint32_t>(regargs_result_80212EA0_1643 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80212EA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_801E42BC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(-1))) {
        goto loc_801E4370;
    }
}

loc_801E42C0:
{
    r0 = (r23 * 6);
    r24_addr_2 = (r24 + r0);
    r21 = MemoryInline::FlatRead16(r24_addr_2);
    r3 = MemoryInline::FlatRead8((r22 + 233));
    r4 = MemoryInline::FlatRead8((r22 + 100));
    r5 = r21;
    ctx->lr = 0x801E42D8u;
    if constexpr (KnownRegArgsCpuCall<0x8021290Cu>(&func_8021290C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021290C_1B85 = func_8021290C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021290C_1B85);
        r4 = static_cast<uint32_t>(regargs_result_8021290C_1B85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021290Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801E42DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801E42A0;
    }
}

loc_801E42E0:
{
}

loc_801E42E4:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_801E42A0;
    }
}

loc_801E42E8:
{
}

loc_801E42EC:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r28))) {
        goto loc_801E4368;
    }
}

loc_801E42F0:
{
}

loc_801E42F4:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r26))) {
        goto loc_801E4368;
    }
}

loc_801E42F8:
{
    r0 = MemoryInline::FlatRead16((r22 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r31 = (r22 + r0);
    r0 = MemoryInline::FlatRead8((r22 + 100));
    MemoryInline::FlatWrite8((r31 + 309), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 310), static_cast<uint16_t>(r21));
    r3 = MemoryInline::FlatRead8((r31 + 309));
    r4 = MemoryInline::FlatRead16((r31 + 310));
    ctx->lr = 0x801E431Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E4170u>(&func_801E4170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E4170_22C9 = func_801E4170_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E4170_22C9);
        r4 = static_cast<uint32_t>(regargs_result_801E4170_22C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E4170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r31 + 312), r3);
    MemoryInline::FlatWrite8((r31 + 308), static_cast<uint8_t>(r30));
    r0 = (r29 & 65535);
}

loc_801E432C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E4340;
    }
}

loc_801E4330:
{
    r0 = MemoryInline::FlatRead8((r31 + 308));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 308), static_cast<uint8_t>(r0));
    goto loc_801E435C;
}

loc_801E4340:
{
    r3 = MemoryInline::FlatRead32((r31 + 312));
    r0 = MemoryInline::FlatRead32((r25 + 24));
}

loc_801E434C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_801E435C;
    }
}

loc_801E4350:
{
    r0 = MemoryInline::FlatRead8((r31 + 308));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 308), static_cast<uint8_t>(r0));
}

loc_801E435C:
{
    r3 = MemoryInline::FlatRead16((r22 + 248));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r22 + 248), static_cast<uint16_t>(r0));
}

loc_801E4368:
{
    r28 = (r28 + 1);
    goto loc_801E42A0;
}

loc_801E4370:
{
    r3 = MemoryInline::FlatRead16((r22 + 248));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r22 + 236));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E437C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_801E439C;
    }
}

loc_801E4380:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r22 + 236), static_cast<uint16_t>(r0));
}

loc_801E4390:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801E439C;
    }
}

loc_801E4394:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r22 + 236), static_cast<uint16_t>(r0));
}

loc_801E439C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r22 + 244), static_cast<uint16_t>(r3));
    r3 = r22;
    ctx->lr = 0x801E43B4u;
    if constexpr (KnownRegArgsCpuCall<0x801E41A0u>(&func_801E41A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_801E41A0_31B3 = func_801E41A0_rac8_1e_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801E41A0_31B3);
        r4 = static_cast<uint32_t>(regargs_result_801E41A0_31B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x801E41A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E4234(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E4234_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E4234 func_801E4234 preserves=true fpr_mask=0x00000000
