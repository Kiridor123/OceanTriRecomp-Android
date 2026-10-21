#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805217D8(CpuContext* ctx);
extern "C" uint64_t func_805217D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050C8F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8050C8F0u);
    goto loc_8050C8F0;

loc_8050C8F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0;
    r5 = 16386;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    r30 = 65536;
    r4 = (r30 + -2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8050C928u;
    if constexpr (KnownRegArgsCpuCall<0x805217D8u>(&func_805217D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805217D8_958 = func_805217D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805217D8_958);
        r4 = static_cast<uint32_t>(regargs_result_805217D8_958 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805217D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + -1);
}

loc_8050C934:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(15))) {
        goto loc_8050C940;
    }
}

loc_8050C938:
{
    r3 = 0;
    goto loc_8050CAB8;
}

loc_8050C940:
{
    r5 = (r3 * 12);
    r31 = 0x80760000u;
    r4 = 190;
    r3 = (r31 + 14552);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r30 + -2);
    r6 = (r31 + 14552);
    r7 = (r1 + 8);
    r0 = (r0 * 12);
    r3 = 0;
    r5 = 16387;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8050C978u;
    if constexpr (KnownRegArgsCpuCall<0x805217D8u>(&func_805217D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805217D8_147B = func_805217D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805217D8_147B);
        r4 = static_cast<uint32_t>(regargs_result_805217D8_147B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805217D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r4 = 0x80760000u;
    r3 = (r4 + 14472);
    r6 = 0x80630000u;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8050C98C:
{
    r5 = (r13 + -13844);
    r6 = (r6 + 4360);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r4 + 14472), r6);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r7));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8050CA98;
    }
}

loc_8050C9B0:
{
}

loc_8050C9B4:
{
    r5 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_8050CA50;
    }
}

loc_8050C9BC:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8050C9D8;
    }
}

loc_8050C9C4:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8050C9D0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_8050C9D8;
    }
}

loc_8050C9D4:
{
    r6 = 1;
}

loc_8050C9D8:
{
}

loc_8050C9DC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8050CA50;
    }
}

loc_8050C9E0:
{
    r0 = (r5 + 7);
    r8 = 0x80760000u;
    r9 = 0x80760000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r8 = (r8 + 14552);
    r9 = (r9 + 14488);
    ctr = r0;
}

loc_8050CA00:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8050CA50;
    }
}

loc_8050CA04:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r9, r8);
    r3 = (r8 + 12);
    r0 = (r8 + 24);
    r7 = (r8 + 36);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r9 + 4), r3);
    r6 = (r8 + 48);
    r5 = (r8 + 60);
    r3 = (r8 + 72);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r9 + 8), r0);
    r0 = (r8 + 84);
    r8 = (r8 + 96);
    r4 = (r4 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r9 + 12), r7);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r9 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r9 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r9 + 24), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r9 + 28), r0);
    r9 = (r9 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050CA04;
    }
}

loc_8050CA50:
{
    r8 = MemoryInline::FlatRead32((r1 + 16));
    r7 = (r4 * 12);
    r6 = 0x80760000u;
    r3 = 0x80760000u;
    r6 = (r6 + 14552);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r3 + 14488);
    r0 = (r8 - r4);
    r6 = (r6 + r7);
    r3 = (r3 + r5);
    ctr = r0;
}

loc_8050CA80:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r8))) {
        goto loc_8050CA98;
    }
}

loc_8050CA84:
{
    MemoryInline::FlatWrite32(r3, r6);
    r6 = (r6 + 12);
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050CA84;
    }
}

loc_8050CA98:
{
    r5 = 0x80760000u;
    r3 = 0x80760000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = 0;
    r5 = (r5 + 14488);
    r3 = (r3 + 14472);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
}

loc_8050CAB8:
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050C8F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050C8F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050C8F0 func_8050C8F0 preserves=true fpr_mask=0x00000000
