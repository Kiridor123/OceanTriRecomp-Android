#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E04F4(CpuContext* ctx);
extern "C" uint32_t func_802E04F4_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
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

    MKW_GUEST_ENTER(0x802E05B4u);
    goto loc_802E05B4;

loc_802E05B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x80055EAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -17792));
    // end of inlined leaf 0x80055EAC
    r0 = (r3 & 255);
}

loc_802E05DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E0668;
    }
}

loc_802E05E0:
{
    r4 = (r30 & 65535);
}

loc_802E05E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2959))) {
        goto loc_802E05FC;
    }
}

loc_802E05EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17056));
    r0 = (r4 * 36);
    r30 = (r3 + r0);
    goto loc_802E0638;
}

loc_802E05FC:
{
}

loc_802E0600:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(4741))) {
        goto loc_802E0618;
    }
}

loc_802E0604:
{
    r3 = MemoryInline::FlatRead32((r13 + -17052));
    r0 = (r4 + -2959);
    r0 = (r0 * 36);
    r30 = (r3 + r0);
    goto loc_802E0638;
}

loc_802E0618:
{
}

loc_802E061C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(11084))) {
        goto loc_802E0634;
    }
}

loc_802E0620:
{
    r3 = MemoryInline::FlatRead32((r13 + -17052));
    r0 = (r4 + -4741);
    r0 = (r0 * 36);
    r30 = (r3 + r0);
    goto loc_802E0638;
}

loc_802E0634:
{
    r30 = MemoryInline::FlatRead32((r13 + -17056));
}

loc_802E0638:
{
}

loc_802E063C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802E0660;
    }
}

loc_802E0640:
{
    r3 = MemoryInline::FlatRead8((r30 + 19));
    ctx->lr = 0x802E0648u;
    if constexpr (KnownRegArgsCpuCall<0x802E04F4u>(&func_802E04F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802E04F4_9F6 = func_802E04F4_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_802E04F4_9F6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E04F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
}

loc_802E0660:
{
    r3 = r30;
    goto loc_802E06FC;
}

loc_802E0668:
{
    // inline leaf 0x80055EB4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -17791));
    // end of inlined leaf 0x80055EB4
    r0 = (r3 & 255);
}

loc_802E0674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E06C0;
    }
}

loc_802E0678:
{
    r3 = 0x805D0000u;
    r5 = (r3 + 24320);
    r3 = (r30 & 65535);
    goto loc_802E06B4;
}

loc_802E0688:
{
}

loc_802E068C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_802E06B0;
    }
}

loc_802E0690:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_802E0698:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_802E06B0;
    }
}

loc_802E069C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
    r30 = (r30 + r0);
    goto loc_802E06C0;
}

loc_802E06B0:
{
    r5 = (r5 + 6);
}

loc_802E06B4:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_802E06BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_802E0688;
    }
}

loc_802E06C0:
{
    // inline leaf 0x8043C7FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16632));
    // end of inlined leaf 0x8043C7FC
    r0 = (r30 & 65535);
    r0 = (r0 * 36);
    r30 = (r3 + r0);
}

loc_802E06D4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802E06F8;
    }
}

loc_802E06D8:
{
    r3 = MemoryInline::FlatRead8((r30 + 19));
    ctx->lr = 0x802E06E0u;
    if constexpr (KnownRegArgsCpuCall<0x802E04F4u>(&func_802E04F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802E04F4_149D = func_802E04F4_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_802E04F4_149D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E04F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
}

loc_802E06F8:
{
    r3 = r30;
}

loc_802E06FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E05B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E05B4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E05B4 func_802E05B4 preserves=true fpr_mask=0x00000000
