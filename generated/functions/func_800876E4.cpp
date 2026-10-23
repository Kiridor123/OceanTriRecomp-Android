#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800876E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;

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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_800876E4;

loc_800876E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
}

loc_80087710:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(256))) {
        goto loc_80087730;
    }
}

loc_80087714:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1113;
    r5 = 0x80590000u;
    r5 = (r5 + 196);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80087730u;
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

loc_80087730:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80087738:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(32))) {
        goto loc_80087758;
    }
}

loc_8008773C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1114;
    r5 = 0x80590000u;
    r5 = (r5 + 260);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80087758u;
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

loc_80087758:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_80087760:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(128))) {
        goto loc_80087780;
    }
}

loc_80087764:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1115;
    r5 = 0x80590000u;
    r5 = (r5 + 308);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80087780u;
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

loc_80087780:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800877A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800877BC;
    }
}

loc_800877A8:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800877B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800877BC;
    }
}

loc_800877B8:
{
    r9 = 0;
}

loc_800877BC:
{
}

loc_800877C0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800877D8;
    }
}

loc_800877C4:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800877D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800877D8;
    }
}

loc_800877D4:
{
    r8 = 0;
}

loc_800877D8:
{
}

loc_800877DC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800877F0;
    }
}

loc_800877E0:
{
    r0 = (r10 + 1073741824);
}

loc_800877E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800877F0;
    }
}

loc_800877EC:
{
    r7 = 0;
}

loc_800877F0:
{
}

loc_800877F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008780C;
    }
}

loc_800877F8:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80087804:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008780C;
    }
}

loc_80087808:
{
    r6 = 0;
}

loc_8008780C:
{
}

loc_80087810:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80087828;
    }
}

loc_80087814:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80087820:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80087828;
    }
}

loc_80087824:
{
    r5 = 0;
}

loc_80087828:
{
}

loc_8008782C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80087844;
    }
}

loc_80087830:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008783C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80087844;
    }
}

loc_80087840:
{
    r4 = 0;
}

loc_80087844:
{
}

loc_80087848:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008786C;
    }
}

loc_8008784C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1116;
    r5 = 0x80590000u;
    r5 = (r5 + 352);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008786Cu;
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

loc_8008786C:
{
}

loc_80087870:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(256))) {
        goto loc_80087878;
    }
}

loc_80087874:
{
    r28 = 0;
}

loc_80087878:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80087880:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(32))) {
        goto loc_80087888;
    }
}

loc_80087884:
{
    r30 = -1;
}

loc_80087888:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_80087890:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(128))) {
        goto loc_80087898;
    }
}

loc_80087894:
{
    r31 = -1;
}

loc_80087898:
{
}

loc_8008789C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800878BC;
    }
}

loc_800878A0:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r27_addr_1 = (r27 + r0);
    r12 = MemoryInline::FlatRead32(r27_addr_1);
    ctr = r12;
    ctx->lr = 0x800878BCu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800878BC:
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800876E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800876E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800876E4 func_800876E4 preserves=true fpr_mask=0x00000000
