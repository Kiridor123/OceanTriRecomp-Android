#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A444C(CpuContext* ctx);
extern "C" uint32_t func_800A444C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A4158_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800A4158u);
    goto loc_800A4158;

loc_800A4158:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A41A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A41B8;
    }
}

loc_800A41A4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A41B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A41B8;
    }
}

loc_800A41B4:
{
    r10 = 0;
}

loc_800A41B8:
{
}

loc_800A41BC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A41D4;
    }
}

loc_800A41C0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A41CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A41D4;
    }
}

loc_800A41D0:
{
    r9 = 0;
}

loc_800A41D4:
{
}

loc_800A41D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A41EC;
    }
}

loc_800A41DC:
{
    r0 = (r11 + 1073741824);
}

loc_800A41E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A41EC;
    }
}

loc_800A41E8:
{
    r8 = 0;
}

loc_800A41EC:
{
}

loc_800A41F0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A4208;
    }
}

loc_800A41F4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A4200:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A4208;
    }
}

loc_800A4204:
{
    r7 = 0;
}

loc_800A4208:
{
}

loc_800A420C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A4224;
    }
}

loc_800A4210:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A421C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A4224;
    }
}

loc_800A4220:
{
    r6 = 0;
}

loc_800A4224:
{
}

loc_800A4228:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A4240;
    }
}

loc_800A422C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A4238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A4240;
    }
}

loc_800A423C:
{
    r5 = 0;
}

loc_800A4240:
{
}

loc_800A4244:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A4268;
    }
}

loc_800A4248:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11248);
    r4 = 41;
    r5 = 0x80590000u;
    r5 = (r5 + 11264);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4268u;
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

loc_800A4268:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A428C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A42A4;
    }
}

loc_800A4290:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A429C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A42A4;
    }
}

loc_800A42A0:
{
    r9 = 0;
}

loc_800A42A4:
{
}

loc_800A42A8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A42C0;
    }
}

loc_800A42AC:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A42B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A42C0;
    }
}

loc_800A42BC:
{
    r8 = 0;
}

loc_800A42C0:
{
}

loc_800A42C4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A42D8;
    }
}

loc_800A42C8:
{
    r0 = (r10 + 1073741824);
}

loc_800A42D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A42D8;
    }
}

loc_800A42D4:
{
    r7 = 0;
}

loc_800A42D8:
{
}

loc_800A42DC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A42F4;
    }
}

loc_800A42E0:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A42EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A42F4;
    }
}

loc_800A42F0:
{
    r6 = 0;
}

loc_800A42F4:
{
}

loc_800A42F8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A4310;
    }
}

loc_800A42FC:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A4308:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A4310;
    }
}

loc_800A430C:
{
    r5 = 0;
}

loc_800A4310:
{
}

loc_800A4314:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A432C;
    }
}

loc_800A4318:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A4324:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A432C;
    }
}

loc_800A4328:
{
    r4 = 0;
}

loc_800A432C:
{
}

loc_800A4330:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A4354;
    }
}

loc_800A4334:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11248);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 11320);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4354u;
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

loc_800A4354:
{
    r3 = r28;
    // inline leaf 0x800A44B0 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 16), r0);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 12), r0);
    r3 = 1;
    // end of inlined leaf 0x800A44B0
    r3 = (r28 + 36);
    // inline leaf 0x800A448C (9 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 24u, r3, r0);
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 4), r0);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 12), r0);
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 16), r0);
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r3 + 24), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A448C
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r28 + 160), r0);
    r3 = (r28 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 32), 0, 116u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r28 + 32), r29);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r28 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r28 + 76), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r28 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r28 + 84), r0);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31408));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r28 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r28 + 140), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r28 + 144), f0.d);
    r3 = r29;
    // inline leaf 0x800A4484 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800A4484
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x800A43B4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = r3;
}

loc_800A43BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A43C8;
    }
}

loc_800A43C0:
{
    r3 = 0;
    goto loc_800A4434;
}

loc_800A43C8:
{
    r4 = r28;
    r5 = r30;
    r6 = 128;
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800A43E4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A43E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4410;
    }
}

loc_800A43EC:
{
    r3 = r29;
    // inline leaf 0x800A4484 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800A4484
    r4 = r27;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x800A4408u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0;
    goto loc_800A4434;
}

loc_800A4410:
{
    r3 = (r28 + 36);
    r4 = r27;
    ctx->lr = 0x800A441Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A444Cu>(&func_800A444C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800A444C_36A8 = func_800A444C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800A444C_36A8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x800A444Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 12), r0);
    r0 = MemoryInline::FlatRead16((r27 + 232));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite16((r27 + 232), static_cast<uint16_t>(r0));
    r3 = 1;
}

loc_800A4434:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A4158(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A4158_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A4158 func_800A4158 preserves=true fpr_mask=0x00000000
