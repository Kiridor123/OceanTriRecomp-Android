#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BB990(CpuContext* ctx);
extern "C" uint64_t func_804BB990_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BDA20(CpuContext* ctx);
extern "C" uint64_t func_804BDA20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BDA30(CpuContext* ctx);
extern "C" uint64_t func_804BDA30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804B2980_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804B2980;

loc_804B2980:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_804B2998:
{
    r30 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r29 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29BC:
{
    r0 = MemoryInline::FlatRead32((r13 + -20448));
}

loc_804B29C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29C8:
{
    r4 = 64;
    if constexpr (KnownRegArgsCpuCall<0x804BB990u>(&func_804BB990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804BB990_B2E = func_804BB990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BB990_B2E);
        r4 = static_cast<uint32_t>(regargs_result_804BB990_B2E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BB990u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804B29D4:
{
    r31 = r3;
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(64))) {
        goto loc_804B2A0C;
    }
}

loc_804B29DC:
{
}

loc_804B29E0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29E4:
{
}

loc_804B29E8:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29EC:
{
}

loc_804B29F0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29F4:
{
}

loc_804B29F8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B29FC:
{
}

loc_804B2A00:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_804B2A0C;
    }
}

loc_804B2A04:
{
}

loc_804B2A08:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804B2A14;
    }
}

loc_804B2A0C:
{
    r31 = -101;
    goto loc_804B2AA4;
}

loc_804B2A14:
{
    r3 = MemoryInline::FlatRead32((r13 + -15452));
    r4 = 320;
    r5 = 32;
    ctx->lr = 0x804B2A24u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA20u>(&func_804BDA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804BDA20_1374 = func_804BDA20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA20_1374);
        r4 = static_cast<uint32_t>(regargs_result_804BDA20_1374 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804BDA20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
}

loc_804B2A28:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B2A38;
    }
}

loc_804B2A30:
{
    r31 = -22;
    goto loc_804B2AA4;
}

loc_804B2A38:
{
    r4 = r30;
    r5 = (r31 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 + 95);
    r3 = MemoryInline::FlatRead32((r13 + -20448));
    r30 = (r0 & -32);
    r5 = r29;
    r7 = r30;
    r4 = 6;
    r6 = 64;
    r8 = 76;
    ctx->lr = 0x804B2A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BCFB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_804B2A6C:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B2AA4;
    }
}

loc_804B2A74:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32(r23, r0);
    r0 = MemoryInline::FlatRead16((r30 + 4));
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 73));
    MemoryInline::FlatWrite32(r25, r0);
    r0 = MemoryInline::FlatRead8((r30 + 70));
    MemoryInline::FlatWrite32(r26, r0);
    r0 = MemoryInline::FlatRead8((r30 + 71));
    MemoryInline::FlatWrite32(r27, r0);
    r0 = MemoryInline::FlatRead8((r30 + 72));
    MemoryInline::FlatWrite32(r28, r0);
}

loc_804B2AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_804B2AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2ABC;
    }
}

loc_804B2AAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2ABC;
    }
}

loc_804B2AB0:
{
    r3 = MemoryInline::FlatRead32((r13 + -15452));
    r4 = r29;
    ctx->lr = 0x804B2ABCu;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804BDA30_2104 = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_2104);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_2104 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804B2ABC:
{
    r11 = (r1 + 48);
    r3 = r31;
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B2980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B2980_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B2980 func_804B2980 preserves=true fpr_mask=0x00000000
