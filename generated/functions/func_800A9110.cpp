#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009B6B4(CpuContext* ctx);
extern "C" uint64_t func_8009B6B4_ra38_3a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8009BF6C(CpuContext* ctx);
extern "C" uint64_t func_8009BF6C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A9110_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_800A9110;

loc_800A9110:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A9160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9178;
    }
}

loc_800A9164:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A9170:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9178;
    }
}

loc_800A9174:
{
    r10 = 0;
}

loc_800A9178:
{
}

loc_800A917C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A9194;
    }
}

loc_800A9180:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A918C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9194;
    }
}

loc_800A9190:
{
    r9 = 0;
}

loc_800A9194:
{
}

loc_800A9198:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A91AC;
    }
}

loc_800A919C:
{
    r0 = (r11 + 1073741824);
}

loc_800A91A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A91AC;
    }
}

loc_800A91A8:
{
    r8 = 0;
}

loc_800A91AC:
{
}

loc_800A91B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A91C8;
    }
}

loc_800A91B4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A91C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A91C8;
    }
}

loc_800A91C4:
{
    r7 = 0;
}

loc_800A91C8:
{
}

loc_800A91CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A91E4;
    }
}

loc_800A91D0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A91DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A91E4;
    }
}

loc_800A91E0:
{
    r6 = 0;
}

loc_800A91E4:
{
}

loc_800A91E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A9200;
    }
}

loc_800A91EC:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A91F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9200;
    }
}

loc_800A91FC:
{
    r5 = 0;
}

loc_800A9200:
{
}

loc_800A9204:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A9228;
    }
}

loc_800A9208:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 1124;
    r5 = 0x80590000u;
    r5 = (r5 + 12904);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A9228u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A9228:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r27 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A924C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9264;
    }
}

loc_800A9250:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A925C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9264;
    }
}

loc_800A9260:
{
    r9 = 0;
}

loc_800A9264:
{
}

loc_800A9268:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A9280;
    }
}

loc_800A926C:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A9278:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9280;
    }
}

loc_800A927C:
{
    r8 = 0;
}

loc_800A9280:
{
}

loc_800A9284:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A9298;
    }
}

loc_800A9288:
{
    r0 = (r10 + 1073741824);
}

loc_800A9290:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9298;
    }
}

loc_800A9294:
{
    r7 = 0;
}

loc_800A9298:
{
}

loc_800A929C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A92B4;
    }
}

loc_800A92A0:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A92AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A92B4;
    }
}

loc_800A92B0:
{
    r6 = 0;
}

loc_800A92B4:
{
}

loc_800A92B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A92D0;
    }
}

loc_800A92BC:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A92C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A92D0;
    }
}

loc_800A92CC:
{
    r5 = 0;
}

loc_800A92D0:
{
}

loc_800A92D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A92EC;
    }
}

loc_800A92D8:
{
    r3 = (r27 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A92E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A92EC;
    }
}

loc_800A92E8:
{
    r4 = 0;
}

loc_800A92EC:
{
}

loc_800A92F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A9314;
    }
}

loc_800A92F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 1125;
    r5 = 0x80590000u;
    r5 = (r5 + 12960);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A9314u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A9314:
{
}

loc_800A9318:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r27))) {
        goto loc_800A9338;
    }
}

loc_800A931C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 1126;
    r5 = 0x80590000u;
    r5 = (r5 + 13012);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A9338u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A9338:
{
}

loc_800A933C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A9368;
    }
}

loc_800A9340:
{
}

loc_800A9344:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800A9368;
    }
}

loc_800A9348:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_800A9350:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(100))) {
        goto loc_800A9368;
    }
}

loc_800A9354:
{
    r3 = r26;
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r3 = r26;
    goto loc_800A94F0;
}

loc_800A9368:
{
}

loc_800A936C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800A9394;
    }
}

loc_800A9370:
{
}

loc_800A9374:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800A9394;
    }
}

loc_800A9378:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_800A9380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A9394;
    }
}

loc_800A9384:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = r26;
    goto loc_800A94F0;
}

loc_800A9394:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r27;
    r4 = (r1 + 44);
    ctx->lr = 0x800A93B0u;
    if constexpr (KnownRegArgsCpuCall<0x8009BF6Cu>(&func_8009BF6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8009BF6C_2ECF = func_8009BF6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009BF6C_2ECF);
        r4 = static_cast<uint32_t>(regargs_result_8009BF6C_2ECF >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8009BF6Cu>(ctx);
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
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_800A93B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(100))) {
        goto loc_800A93D0;
    }
}

loc_800A93BC:
{
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
    goto loc_800A9424;
}

loc_800A93D0:
{
}

loc_800A93D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A9424;
    }
}

loc_800A93D8:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31376));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31392));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_800A9424:
{
}

loc_800A9428:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800A9434;
    }
}

loc_800A942C:
{
}

loc_800A9430:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A94EC;
    }
}

loc_800A9434:
{
}

loc_800A9438:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A9458;
    }
}

loc_800A943C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_800A9444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(100))) {
        goto loc_800A9458;
    }
}

loc_800A9448:
{
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
}

loc_800A9458:
{
}

loc_800A945C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800A9484;
    }
}

loc_800A9460:
{
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r27;
    r4 = (r1 + 56);
    ctx->lr = 0x800A9474u;
    if constexpr (KnownRegArgsCpuCall<0x8009B6B4u>(&func_8009B6B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8009B6B4_4335 = func_8009B6B4_ra38_3a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8009B6B4_4335);
        r4 = static_cast<uint32_t>(regargs_result_8009B6B4_4335 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8009B6B4u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800A9484:
{
}

loc_800A9488:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A94B0;
    }
}

loc_800A948C:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r27;
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009C0A4u>(ctx);
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 20);
    ctx->lr = 0x800A94B0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CC04u>(ctx);
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
    cr = ctx->cr;
}

loc_800A94B0:
{
}

loc_800A94B4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A94EC;
    }
}

loc_800A94B8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_800A94C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(100))) {
        goto loc_800A94EC;
    }
}

loc_800A94C4:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    r4 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31368));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r26;
    r4 = r26;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
}

loc_800A94EC:
{
    r3 = r26;
}

loc_800A94F0:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A9110(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A9110_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A9110 func_800A9110 preserves=true fpr_mask=0x00000000
