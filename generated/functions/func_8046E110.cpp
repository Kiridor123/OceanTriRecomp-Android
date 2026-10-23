#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E410(CpuContext* ctx);
extern "C" uint64_t func_8046E410_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046E690(CpuContext* ctx);
extern "C" uint64_t func_8046E690_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046E110_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_10 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r28_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_8046E110;

loc_8046E110:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = MemoryInline::FlatRead32((r3 + 4));
    r26 = r3;
    r27 = r4;
    r29 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8046E410u>(&func_8046E410)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8046E410_CF5 = func_8046E410_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E410_CF5);
        r4 = static_cast<uint32_t>(regargs_result_8046E410_CF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046E410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_8046E13C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8046E370;
    }
}

loc_8046E140:
{
    r29 = MemoryInline::FlatRead32((r26 + 24));
    r28 = MemoryInline::FlatRead32((r26 + 4));
}

loc_8046E14C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8046E158;
    }
}

loc_8046E150:
{
    r4 = 0;
    goto loc_8046E2F8;
}

loc_8046E158:
{
    r0 = (r29 * 12);
    r7 = MemoryInline::FlatRead32((r26 + 16));
    r3 = (r28 + r0);
    r28_addr_1 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16777215);
}

loc_8046E174:
{
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046E184;
    }
}

loc_8046E17C:
{
    r4 = 0;
    goto loc_8046E298;
}

loc_8046E184:
{
    r0 = (r3 * 12);
    r3 = (r28 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16777215);
}

loc_8046E19C:
{
    r31 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046E1AC;
    }
}

loc_8046E1A4:
{
    r4 = 0;
    goto loc_8046E238;
}

loc_8046E1AC:
{
    r4 = (r3 * 12);
    r3 = r26;
    r5 = (r1 + 8);
    r6 = 128;
    r28_addr_3 = (r28 + r4);
    r0 = MemoryInline::FlatRead32(r28_addr_3);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16777215);
    r26 = (r7 + r0);
    ctx->lr = 0x8046E1D4u;
    if constexpr (KnownRegArgsCpuCall<0x8046E690u>(&func_8046E690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8046E690_180B = func_8046E690_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046E690_180B);
        r4 = static_cast<uint32_t>(regargs_result_8046E690_180B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046E690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_8046E1D8:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_8046E1E4;
    }
}

loc_8046E1E0:
{
    goto loc_8046E238;
}

loc_8046E1E4:
{
    r4 = (r3 + 1);
    r5 = (r1 + 8);
    r0 = 47;
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r4);
    r5 = (r5 + r4);
    r3 = r6;
    goto loc_8046E21C;
}

loc_8046E208:
{
    r0 = MemoryInline::FlatRead8(r26);
    r26 = (r26 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r3 = (r3 + -1);
}

loc_8046E21C:
{
}

loc_8046E220:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046E230;
    }
}

loc_8046E224:
{
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E208;
    }
}

loc_8046E230:
{
    r0 = (r6 - r3);
    r4 = (r4 + r0);
}

loc_8046E238:
{
}

loc_8046E23C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8046E244;
    }
}

loc_8046E240:
{
    goto loc_8046E298;
}

loc_8046E244:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    r3 = (r3 + r5);
    r4 = r6;
    goto loc_8046E27C;
}

loc_8046E268:
{
    r0 = MemoryInline::FlatRead8(r31);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r4 = (r4 + -1);
}

loc_8046E27C:
{
}

loc_8046E280:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046E290;
    }
}

loc_8046E284:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E268;
    }
}

loc_8046E290:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_8046E298:
{
}

loc_8046E29C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8046E2A4;
    }
}

loc_8046E2A0:
{
    goto loc_8046E2F8;
}

loc_8046E2A4:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    r3 = (r3 + r5);
    r4 = r6;
    goto loc_8046E2DC;
}

loc_8046E2C8:
{
    r0 = MemoryInline::FlatRead8(r30);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r4 = (r4 + -1);
}

loc_8046E2DC:
{
}

loc_8046E2E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046E2F0;
    }
}

loc_8046E2E4:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046E2C8;
    }
}

loc_8046E2F0:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_8046E2F8:
{
}

loc_8046E2FC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8046E30C;
    }
}

loc_8046E300:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    goto loc_8046E350;
}

loc_8046E30C:
{
    r0 = (r29 * 12);
    r28_addr_7 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_7);
    r0 = (r0 & -16777216);
}

loc_8046E318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046E344;
    }
}

loc_8046E31C:
{
}

loc_8046E320:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(127))) {
        goto loc_8046E334;
    }
}

loc_8046E324:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_5 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r0));
    goto loc_8046E350;
}

loc_8046E334:
{
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_8046E344:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_8 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r0));
}

loc_8046E350:
{
    r3 = 0x80610000u;
    r4 = r27;
    r3 = (r3 + 332);
    r5 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8046E368u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_301B = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_301B);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_301B >> 32);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0;
    goto loc_8046E3A4;
}

loc_8046E370:
{
    r3 = (r3 * 12);
    r28_addr_9 = (r28 + r3);
    r0 = MemoryInline::FlatRead32(r28_addr_9);
    r0 = (r0 & -16777216);
}

loc_8046E37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046E388;
    }
}

loc_8046E380:
{
    r3 = 0;
    goto loc_8046E3A4;
}

loc_8046E388:
{
    MemoryInline::FlatWrite32(r29, r26);
    r4 = (r28 + r3);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r29 + 8), r0);
}

loc_8046E3A4:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046E110(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046E110_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046E110 func_8046E110 preserves=true fpr_mask=0x00000000
