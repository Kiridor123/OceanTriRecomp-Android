#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AE900(CpuContext* ctx);
extern "C" uint64_t func_804AE900_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint32_t func_804AB2F0_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfc_sub_1 = 0;
    uint32_t r3_subfc_sub_2 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    goto loc_804AB2F0;

loc_804AB2F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x804B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r3 = (r3 + -19744);
    MemoryInline::FlatWrite32((r13 + -15680), r0);
    ctx->lr = 0x804AB314u;
    if constexpr (KnownRegArgsCpuCall<0x804AE900u>(&func_804AE900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->xer = xer;
        const auto regargs_result_804AE900_A86 = func_804AE900_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804AE900_A86);
        r4 = static_cast<uint32_t>(regargs_result_804AE900_A86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804AE900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    // nop
}

loc_804AB318:
{
    r0 = MemoryInline::FlatRead32((r13 + -15680));
}

loc_804AB320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AB318;
    }
}

loc_804AB324:
{
    r0 = MemoryInline::FlatRead32((r13 + -15680));
    r0 = (r0 & 1);
}

loc_804AB32C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AB338;
    }
}

loc_804AB330:
{
    r3 = 0;
    goto loc_804AB3A8;
}

loc_804AB338:
{
    // inline leaf 0x804AE8D0 (4 guest instruction(s))
    r3 = 0x80750000u;
    r3 = (r3 + -28960);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x804AE8D0
    r31 = r3;
    ctx->lr = 0x804AB344u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_150C = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_150C);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_150C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r6 = 0x80000000u;
    r5 = 274857984;
    r6 = MemoryInline::FlatRead32((r6 + 248));
    r7 = (r5 + 19923);
    r8 = MemoryInline::FlatRead32((r13 + -15640));
    r0 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    r9 = MemoryInline::FlatRead32((r13 + -15636));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r5)) >> 32));
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r5 = (r0 ^ -2147483648);
    r0_not_1 = ~(r8);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r3);
    r0 = (r0 + r0_ca_1);
    r0 = (r0 ^ -2147483648);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r3 = (r3_rot_1 & 67108863);
    r3 = (r3 * 100);
    r3_subfc_sub_1 = r3;
    r3 = (r4 - r3_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_1) ? 1u : 0u) << 29);
    r5_not_1 = ~(r5);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r0);
    r5 = (r5 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_2 = ~(r0);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r0);
    r5 = (r5 + r5_ca_2);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804AB39C;
    }
}

loc_804AB394:
{
    r3 = 0;
    goto loc_804AB3A8;
}

loc_804AB39C:
{
    r0 = (r31 & 1);
    r3 = (0 - r0);
    r3 = (r3 + 2);
}

loc_804AB3A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return r4;
}

}

extern "C" void func_804AB2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804AB2F0_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AB2F0 func_804AB2F0 preserves=true fpr_mask=0x00000000
