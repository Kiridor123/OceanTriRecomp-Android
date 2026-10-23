#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BC218_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_800BC218;

loc_800BC218:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC260:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC278;
    }
}

loc_800BC264:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BC270:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC278;
    }
}

loc_800BC274:
{
    r10 = 0;
}

loc_800BC278:
{
}

loc_800BC27C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC294;
    }
}

loc_800BC280:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BC28C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC294;
    }
}

loc_800BC290:
{
    r9 = 0;
}

loc_800BC294:
{
}

loc_800BC298:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC2AC;
    }
}

loc_800BC29C:
{
    r0 = (r11 + 1073741824);
}

loc_800BC2A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC2AC;
    }
}

loc_800BC2A8:
{
    r8 = 0;
}

loc_800BC2AC:
{
}

loc_800BC2B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC2C8;
    }
}

loc_800BC2B4:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BC2C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC2C8;
    }
}

loc_800BC2C4:
{
    r7 = 0;
}

loc_800BC2C8:
{
}

loc_800BC2CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC2E4;
    }
}

loc_800BC2D0:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BC2DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC2E4;
    }
}

loc_800BC2E0:
{
    r6 = 0;
}

loc_800BC2E4:
{
}

loc_800BC2E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BC300;
    }
}

loc_800BC2EC:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC2F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC300;
    }
}

loc_800BC2FC:
{
    r4 = 0;
}

loc_800BC300:
{
}

loc_800BC304:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BC328;
    }
}

loc_800BC308:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 342;
    r5 = 0x80590000u;
    r5 = (r5 + 18560);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC328u;
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

loc_800BC328:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BDBC4u>(ctx);
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC360:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC378;
    }
}

loc_800BC364:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BC370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC378;
    }
}

loc_800BC374:
{
    r10 = 0;
}

loc_800BC378:
{
}

loc_800BC37C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC394;
    }
}

loc_800BC380:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BC38C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC394;
    }
}

loc_800BC390:
{
    r9 = 0;
}

loc_800BC394:
{
}

loc_800BC398:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC3AC;
    }
}

loc_800BC39C:
{
    r0 = (r11 + 1073741824);
}

loc_800BC3A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC3AC;
    }
}

loc_800BC3A8:
{
    r8 = 0;
}

loc_800BC3AC:
{
}

loc_800BC3B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC3C8;
    }
}

loc_800BC3B4:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BC3C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC3C8;
    }
}

loc_800BC3C4:
{
    r7 = 0;
}

loc_800BC3C8:
{
}

loc_800BC3CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC3E4;
    }
}

loc_800BC3D0:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BC3DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC3E4;
    }
}

loc_800BC3E0:
{
    r5 = 0;
}

loc_800BC3E4:
{
}

loc_800BC3E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BC400;
    }
}

loc_800BC3EC:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC3F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC400;
    }
}

loc_800BC3FC:
{
    r4 = 0;
}

loc_800BC400:
{
}

loc_800BC404:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BC424;
    }
}

loc_800BC408:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 346;
    r5 = 0x80590000u;
    r5 = (r5 + 18612);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC424u;
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

loc_800BC424:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800BC42Cu;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_2114 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_2114;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = r29;
    // inline leaf 0x800BC480 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 178));
    r3 = (r0 & 3);
    // end of inlined leaf 0x800BC480
}

loc_800BC43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800BC454;
    }
}

loc_800BC440:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x800BC450u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC48Cu>(ctx);
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
    cr = ctx->cr;
    goto loc_800BC464;
}

loc_800BC454:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x800BC464u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD298u>(ctx);
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
    cr = ctx->cr;
}

loc_800BC464:
{
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800BC218(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BC218_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BC218 func_800BC218 preserves=true fpr_mask=0x00000000
