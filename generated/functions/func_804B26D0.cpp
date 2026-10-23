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

extern "C" uint64_t func_804B26D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804B26D0;

loc_804B26D0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804B26E8:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B272C;
    }
}

loc_804B26FC:
{
}

loc_804B2700:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804B272C;
    }
}

loc_804B2704:
{
    r0 = MemoryInline::FlatRead32((r13 + -20448));
}

loc_804B270C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804B272C;
    }
}

loc_804B2710:
{
    r0 = (r4 & 31);
}

loc_804B2714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B272C;
    }
}

loc_804B2718:
{
    r4 = 64;
    if constexpr (KnownRegArgsCpuCall<0x804BB990u>(&func_804BB990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804BB990_BAE = func_804BB990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BB990_BAE);
        r4 = static_cast<uint32_t>(regargs_result_804BB990_BAE >> 32);
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

loc_804B2724:
{
    r31 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(64))) {
        goto loc_804B2734;
    }
}

loc_804B272C:
{
    r31 = -101;
    goto loc_804B27F0;
}

loc_804B2734:
{
    r3 = MemoryInline::FlatRead32((r13 + -15452));
    r4 = 320;
    r5 = 32;
    ctx->lr = 0x804B2744u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA20u>(&func_804BDA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804BDA20_1061 = func_804BDA20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA20_1061);
        r4 = static_cast<uint32_t>(regargs_result_804BDA20_1061 >> 32);
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
        InvokeDirectCpu<0x804BDA20u>(ctx);
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

loc_804B2748:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B2758;
    }
}

loc_804B2750:
{
    r31 = -22;
    goto loc_804B27F0;
}

loc_804B2758:
{
    r0 = (r3 + 63);
    r4 = r26;
    r30 = (r0 & -32);
    r5 = (r31 + 1);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r30);
    r3 = 64;
    r0 = (r30 + 95);
}

loc_804B2780:
{
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 4), r3);
    r30 = (r0 & -32);
    r3 = 4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 12), r3);
    }
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_804B27C4;
    }
}

loc_804B2798:
{
    r0 = MemoryInline::FlatRead32(r28);
    r5 = 2;
    MemoryInline::FlatWrite32(r30, r0);
    r6 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r29 + 16), r27);
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 * 13);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r29 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 24), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 28), r3);
    goto loc_804B27CC;
}

loc_804B27C4:
{
    r5 = 1;
    r6 = 1;
}

loc_804B27CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -20448));
    r7 = r29;
    r4 = 4;
    ctx->lr = 0x804B27DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_804B27E0:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B27F0;
    }
}

loc_804B27E8:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_804B27F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_804B27F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2808;
    }
}

loc_804B27F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B2808;
    }
}

loc_804B27FC:
{
    r3 = MemoryInline::FlatRead32((r13 + -15452));
    r4 = r29;
    ctx->lr = 0x804B2808u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804BDA30_20FB = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_20FB);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_20FB >> 32);
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

loc_804B2808:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B26D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B26D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B26D0 func_804B26D0 preserves=true fpr_mask=0x00000000
