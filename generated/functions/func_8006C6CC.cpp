#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006C6CC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8006C6CC;

loc_8006C6CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8006C710:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C728;
    }
}

loc_8006C714:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006C720:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C728;
    }
}

loc_8006C724:
{
    r10 = 0;
}

loc_8006C728:
{
}

loc_8006C72C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006C744;
    }
}

loc_8006C730:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8006C73C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C744;
    }
}

loc_8006C740:
{
    r9 = 0;
}

loc_8006C744:
{
}

loc_8006C748:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006C75C;
    }
}

loc_8006C74C:
{
    r0 = (r11 + 1073741824);
}

loc_8006C754:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C75C;
    }
}

loc_8006C758:
{
    r8 = 0;
}

loc_8006C75C:
{
}

loc_8006C760:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006C778;
    }
}

loc_8006C764:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006C770:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C778;
    }
}

loc_8006C774:
{
    r7 = 0;
}

loc_8006C778:
{
}

loc_8006C77C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006C794;
    }
}

loc_8006C780:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8006C78C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C794;
    }
}

loc_8006C790:
{
    r6 = 0;
}

loc_8006C794:
{
}

loc_8006C798:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006C7B0;
    }
}

loc_8006C79C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006C7A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C7B0;
    }
}

loc_8006C7AC:
{
    r5 = 0;
}

loc_8006C7B0:
{
}

loc_8006C7B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006C7D8;
    }
}

loc_8006C7B8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 498;
    r5 = 0x80590000u;
    r5 = (r5 + -10780);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006C7D8u;
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

loc_8006C7D8:
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

loc_8006C7FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C814;
    }
}

loc_8006C800:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006C80C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C814;
    }
}

loc_8006C810:
{
    r9 = 0;
}

loc_8006C814:
{
}

loc_8006C818:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006C830;
    }
}

loc_8006C81C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006C828:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C830;
    }
}

loc_8006C82C:
{
    r8 = 0;
}

loc_8006C830:
{
}

loc_8006C834:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006C848;
    }
}

loc_8006C838:
{
    r0 = (r10 + 1073741824);
}

loc_8006C840:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C848;
    }
}

loc_8006C844:
{
    r7 = 0;
}

loc_8006C848:
{
}

loc_8006C84C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006C864;
    }
}

loc_8006C850:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006C85C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C864;
    }
}

loc_8006C860:
{
    r6 = 0;
}

loc_8006C864:
{
}

loc_8006C868:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006C880;
    }
}

loc_8006C86C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006C878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C880;
    }
}

loc_8006C87C:
{
    r5 = 0;
}

loc_8006C880:
{
}

loc_8006C884:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006C89C;
    }
}

loc_8006C888:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006C894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006C89C;
    }
}

loc_8006C898:
{
    r4 = 0;
}

loc_8006C89C:
{
}

loc_8006C8A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006C8C4;
    }
}

loc_8006C8A4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 499;
    r5 = 0x80590000u;
    r5 = (r5 + -9624);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006C8C4u;
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

loc_8006C8C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r7 = (r3 + -1);
}

loc_8006C8D0:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_8006C8F4;
    }
}

loc_8006C8D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 500;
    r5 = 0x80590000u;
    r5 = (r5 + -10728);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006C8F4u;
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

loc_8006C8F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r27 = (r3 + -1);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r28 = (r28_rot_0 & -4);
    goto loc_8006C95C;
}

loc_8006C904:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_2 = (r3 + r28);
    r26 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8006C910:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8006C954;
    }
}

loc_8006C914:
{
    r3 = r26;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80069D58u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8006C924:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006C954;
    }
}

loc_8006C928:
{
    r3 = r26;
    r4 = r30;
    r5 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x8006C944u;
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
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8006C94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006C954;
    }
}

loc_8006C950:
{
    goto loc_8006C970;
}

loc_8006C954:
{
    r28 = (r28 + -4);
    r27 = (r27 + -1);
}

loc_8006C95C:
{
}

loc_8006C960:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_8006C904;
    }
}

loc_8006C964:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r30;
}

loc_8006C970:
{
    r11 = (r1 + 32);
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

extern "C" void func_8006C6CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006C6CC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006C6CC func_8006C6CC preserves=true fpr_mask=0x00000000
