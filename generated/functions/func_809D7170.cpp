#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804688EC(CpuContext* ctx);
extern "C" uint32_t func_804688EC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809D7170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_809D75CC_loc_0 = 0;
    uint32_t addr_psqx_809D75D8_loc_0 = 0;
    uint32_t addr_psqx_809D75E4_loc_0 = 0;
    uint32_t addr_psqx_809D75F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_809D7170;

loc_809D7170:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r3 = 0x80A80000u;
    r24 = (r3 + -31488);
    r3 = 0x80A30000u;
    r27 = (r3 + 15808);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r29 = fctiwzword0;
    r28 = (r29 + 502);
    r30 = 0;
    r31 = -1076297728;
    r3 = 0x80A20000u;
    f29.d = MemoryInline::FlatReadFloat64((r3 + -7448));
    r23 = 1127219200;
    r3 = 0x80A20000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + -7428));
    r3 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -7424));
    r3 = 0x80A20000u;
    f28.d = MemoryInline::FlatReadFloat32((r3 + -7432));
    goto loc_809D75A4;
}

loc_809D71F8:
{
}

loc_809D71FC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r28))) {
        goto loc_809D75A0;
    }
}

loc_809D7200:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D720C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D7224;
    }
}

loc_809D7210:
{
}

loc_809D7214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809D73C0;
    }
}

loc_809D7218:
{
}

loc_809D721C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809D74E8;
    }
}

loc_809D7220:
{
    goto loc_809D75A0;
}

loc_809D7224:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + r3);
}

loc_809D7230:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r29))) {
        goto loc_809D75A0;
    }
}

loc_809D7234:
{
    r4 = MemoryInline::FlatRead32(r27);
    r0 = (r4 + 1);
}

loc_809D7240:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809D7358;
    }
}

loc_809D7244:
{
    r26 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r27 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_19CC = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_19CC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804688ECu>(&func_804688EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804688EC_1D82 = func_804688EC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804688EC_1D82;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804688ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r1 + 8);
    goto loc_809D7270;
}

loc_809D7268:
{
    r26 = (r26 + 1);
    r3 = (r3 + 1);
}

loc_809D7270:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D727C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D7268;
    }
}

loc_809D7280:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r26);
    r26 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryInline::FlatRead32(r27);
}

loc_809D7294:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D72A4;
    }
}

loc_809D7298:
{
}

loc_809D729C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_809D72E8;
    }
}

loc_809D72A0:
{
    goto loc_809D7328;
}

loc_809D72A4:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D72AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D72CC;
    }
}

loc_809D72B0:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r26 * r0);
    r25 = (427 - r0);
    goto loc_809D7328;
}

loc_809D72CC:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r26 * r0);
    r25 = (320 - r0);
    goto loc_809D7328;
}

loc_809D72E8:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D72F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D7310;
    }
}

loc_809D72F4:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r26 * r0);
    r25 = (214 - r0);
    goto loc_809D7328;
}

loc_809D7310:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r26 * r0);
    r25 = (160 - r0);
}

loc_809D7328:
{
    r3 = MemoryInline::FlatRead16((r27 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_2E6D = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_2E6D);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_2E6D >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 - r29);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::FlatRead8((r27 + 9));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r6 = MemoryInline::FlatRead32((r27 + 12));
    ctx->lr = 0x809D7354u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D6FE0u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D7358:
{
    r4 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8005C868_360E = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_360E);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_360E >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D7368:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D7394;
    }
}

loc_809D736C:
{
    r0 = MemoryInline::FlatRead32(r27);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 - r29);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::FlatRead8((r27 + 9));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r6 = MemoryInline::FlatRead32((r27 + 12));
    ctx->lr = 0x809D7390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D6FE0u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D7394:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + -107);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 - r29);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::FlatRead8((r27 + 9));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r6 = MemoryInline::FlatRead32((r27 + 12));
    ctx->lr = 0x809D73BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D6FE0u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D73C0:
{
    r0 = (r4 + 20);
}

loc_809D73C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r29))) {
        goto loc_809D75A0;
    }
}

loc_809D73CC:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 1);
}

loc_809D73D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809D7498;
    }
}

loc_809D73DC:
{
    r26 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r27 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_46F9 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_46F9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804688ECu>(&func_804688EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804688EC_4AAF = func_804688EC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804688EC_4AAF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804688ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r1 + 8);
    goto loc_809D7408;
}

loc_809D7400:
{
    r26 = (r26 + 1);
    r3 = (r3 + 1);
}

loc_809D7408:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809D7414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D7400;
    }
}

loc_809D7418:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r26);
    r26 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryInline::FlatRead32(r27);
}

loc_809D742C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D743C;
    }
}

loc_809D7430:
{
}

loc_809D7434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_809D7460;
    }
}

loc_809D7438:
{
    goto loc_809D7478;
}

loc_809D743C:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D7444:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D7454;
    }
}

loc_809D7448:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r25 = (427 - r0);
    goto loc_809D7478;
}

loc_809D7454:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r25 = (320 - r0);
    goto loc_809D7478;
}

loc_809D7460:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x80040424
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_809D7468:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r25 = (160 - r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809D7478;
    }
}

loc_809D7474:
{
    r25 = (214 - r0);
}

loc_809D7478:
{
    r3 = r25;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r0 - r29);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r6 = (r31 + 22783);
    r7 = 0;
    ctx->lr = 0x809D7494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D79A4u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D7498:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D74A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D74C4;
    }
}

loc_809D74A4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r0 - r29);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r6 = (r31 + 22783);
    r7 = 0;
    ctx->lr = 0x809D74C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D79A4u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D74C4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r3 = (r3 + -107);
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r0 - r29);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r6 = (r31 + 22783);
    r7 = 0;
    ctx->lr = 0x809D74E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D79A4u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809D75A0;
}

loc_809D74E8:
{
    r0 = (r4 + 256);
}

loc_809D74F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r29))) {
        goto loc_809D75A0;
    }
}

loc_809D74F4:
{
    r3 = MemoryInline::FlatRead8((r27 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809D7500:
{
    r26 = 128;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_809D750C;
    }
}

loc_809D7508:
{
    r26 = 256;
}

loc_809D750C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809D7514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_809D757C;
    }
}

loc_809D7518:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D7520:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D7550;
    }
}

loc_809D7524:
{
    r0 = (r26 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    stackword12 = r23;
    MemoryInline::FlatWriteRam32((r1 + 72), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r25 = fctiwzword1;
    goto loc_809D758C;
}

loc_809D7550:
{
    r0 = (r26 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword14 = r23;
    MemoryInline::FlatWriteRam32((r1 + 80), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r25 = fctiwzword2;
    goto loc_809D758C;
}

loc_809D757C:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D7584:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D758C;
    }
}

loc_809D7588:
{
    r25 = (r25 + 107);
}

loc_809D758C:
{
    r3 = r25;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r0 - r29);
    r5 = MemoryInline::FlatRead8((r27 + 9));
    ctx->lr = 0x809D75A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7C00u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_809D75A0:
{
    r27 = (r27 + 16);
}

loc_809D75A4:
{
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r4 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword16 = r23;
    MemoryInline::FlatWriteRam32((r1 + 80), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809D75C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_809D71F8;
    }
}

loc_809D75C8:
{
    r0 = 184;
    addr_psqx_809D75CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D75CC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_809D75D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D75D8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_809D75E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D75E4_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_809D75F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809D75F0_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D7170 func_809D7170 preserves=true fpr_mask=0x00000000
