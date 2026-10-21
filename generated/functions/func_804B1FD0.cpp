#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B1E50(CpuContext* ctx);
extern "C" uint64_t func_804B1E50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804B1FD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B1FD0u);
    goto loc_804B1FD0;

loc_804B1FD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 8);
    r31 = r4;
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B1AA0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804B1FF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B2174;
    }
}

loc_804B1FFC:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 16908288;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B2008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B200C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B20A0;
    }
}

loc_804B2010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_804B2014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B206C;
    }
}

loc_804B201C:
{
    r3 = 0x80000000u;
    r0 = (r3 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B2028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B202C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2050;
    }
}

loc_804B2030:
{
    r0 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B2038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B203C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B2040:
{
    r0 = (r3 + 4);
}

loc_804B2048:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B204C:
{
    goto loc_804B2144;
}

loc_804B2050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_804B2054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2058:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B205C:
{
    r0 = (r3 + 32);
}

loc_804B2064:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B2068:
{
    goto loc_804B2144;
}

loc_804B206C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_804B2070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2074:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2090;
    }
}

loc_804B2078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(16));
}

loc_804B207C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2080:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B2084:
{
}

loc_804B2088:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_804B2174;
    }
}

loc_804B208C:
{
    goto loc_804B2144;
}

loc_804B2090:
{
    r0 = 16842752;
}

loc_804B2098:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B209C:
{
    goto loc_804B2144;
}

loc_804B20A0:
{
    r3 = 67371008;
    r0 = (r3 + 1028);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B20AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B20B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2108;
    }
}

loc_804B20B4:
{
    r3 = 67239936;
    r0 = (r3 + 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B20C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B20C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B20E8;
    }
}

loc_804B20C8:
{
    r0 = 50397184;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B20D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B20D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B20D8:
{
    r0 = 33685504;
}

loc_804B20E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B20E4:
{
    goto loc_804B2144;
}

loc_804B20E8:
{
    r0 = (r3 + 768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B20F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B20F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B20F8:
{
    r0 = (r3 + 512);
}

loc_804B2100:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B2104:
{
    goto loc_804B2144;
}

loc_804B2108:
{
    r0 = 68354048;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B2110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2114:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2138;
    }
}

loc_804B2118:
{
    r0 = 68288512;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_804B2120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2174;
    }
}

loc_804B2124:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804B2144;
    }
}

loc_804B2128:
{
    r0 = 67502080;
}

loc_804B2130:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B2134:
{
    goto loc_804B2144;
}

loc_804B2138:
{
    r0 = 69337088;
}

loc_804B2140:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_804B2174;
    }
}

loc_804B2144:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x804B2154u;
    if constexpr (KnownRegArgsCpuCall<0x804B1E50u>(&func_804B1E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804B1E50_1CA5 = func_804B1E50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804B1E50_1CA5);
        r4 = static_cast<uint32_t>(regargs_result_804B1E50_1CA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804B1E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804B2158:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B2174;
    }
}

loc_804B215C:
{
    r3 = -1510014976;
    MemoryInline::FlatWrite32((r13 + -15476), r30);
    r0 = (r3 + 90);
    MemoryInline::FlatWrite32((r13 + -15480), r31);
    MemoryInline::FlatWrite32((r13 + -15484), r0);
    MemoryInline::FlatWrite32((r13 + -15488), r0);
}

loc_804B2174:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_804B1FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B1FD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B1FD0 func_804B1FD0 preserves=true fpr_mask=0x00000000
