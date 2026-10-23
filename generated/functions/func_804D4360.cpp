#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD6A0(CpuContext* ctx);
extern "C" uint32_t func_804CD6A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804CD720(CpuContext* ctx);
extern "C" uint64_t func_804CD720_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804D4360(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804D4360;

loc_804D4360:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -14992));
}

loc_804D4380:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_804D438C;
    }
}

loc_804D4384:
{
    r3 = 0;
    goto loc_804D4574;
}

loc_804D438C:
{
    // inline leaf 0x804CD690 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 212));
    // end of inlined leaf 0x804CD690
    r4 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r4 + 228));
}

loc_804D439C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r5))) {
        goto loc_804D43A8;
    }
}

loc_804D43A0:
{
    r3 = 0;
    goto loc_804D4574;
}

loc_804D43A8:
{
}

loc_804D43AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804D4470;
    }
}

loc_804D43B0:
{
    r0 = MemoryInline::FlatRead16((r5 + 712));
}

loc_804D43B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804D444C;
    }
}

loc_804D43BC:
{
}

loc_804D43C0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804D43E0;
    }
}

loc_804D43C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -14984));
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
}

loc_804D43D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r3))) {
        goto loc_804D43E0;
    }
}

loc_804D43D8:
{
    r3 = 0;
    goto loc_804D4574;
}

loc_804D43E0:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r5 + 712), static_cast<uint16_t>(r0));
    r3 = 0x80750000u;
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r3 = (r3 + -400);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804D4408:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4414;
    }
}

loc_804D440C:
{
    MemoryInline::FlatWrite32(r3, r5);
    goto loc_804D4418;
}

loc_804D4414:
{
    MemoryInline::FlatWrite32((r4 + 736), r5);
}

loc_804D4418:
{
    MemoryInline::FlatWrite32((r5 + 740), r4);
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r5 + 736), r0);
    r4 = MemoryInline::FlatRead32((r5 + 732));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -14984));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
    MemoryInline::FlatWrite32((r13 + -14988), r3);
}

loc_804D444C:
{
    r0 = MemoryInline::FlatRead16((r5 + 418));
    r0 = (r0 & 2);
}

loc_804D4454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D4470;
    }
}

loc_804D4458:
{
    r3 = r5;
    ctx->lr = 0x804D4460u;
    if constexpr (KnownRegArgsCpuCall<0x804CD6A0u>(&func_804CD6A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_804CD6A0_1373 = func_804CD6A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804CD6A0_1373;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CD6A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804D4464:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D4470;
    }
}

loc_804D4468:
{
    r3 = 0;
    goto loc_804D4574;
}

loc_804D4470:
{
    r0 = MemoryInline::FlatRead32((r13 + -14984));
}

loc_804D4478:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D44D8;
    }
}

loc_804D447C:
{
    r12 = MemoryInline::FlatRead32((r13 + -20064));
    r31 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r31 + 228));
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x804D4494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    r3 = 0x80750000u;
    MemoryInline::FlatWriteRam32((r31 + 228), r0);
    r3 = (r3 + -144);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl1_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl1_0x804CD668;
    }
}

loc_inl1_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl1_cont_804CD630;
}

loc_inl1_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl1_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
}

loc_804D44A8:
{
    // inline leaf 0x804D1310 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 | 32768);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D1310
    // nop
}

loc_804D44B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14984));
}

loc_804D44B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D44B0;
    }
}

loc_804D44BC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r13 + -14984));
}

loc_804D44C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D44A8;
    }
}

loc_804D44CC:
{
    r3 = 0x80750000u;
    r3 = (r3 + -144);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl4_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl4_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl4_cont_804CD870;
}

loc_inl4_return:
{
}

loc_inl4_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
}

loc_804D44D8:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -14988), r4);
    r0 = MemoryInline::FlatRead32((r13 + -14984));
    r3 = 0x80750000u;
    r3 = (r3 + -400);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = r3_addr_1;
    r6 = MemoryInline::FlatRead32((r30 + 736));
}

loc_804D4500:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804D450C;
    }
}

loc_804D4504:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    goto loc_804D4510;
}

loc_804D450C:
{
    MemoryInline::FlatWrite32((r6 + 740), r4);
}

loc_804D4510:
{
}

loc_804D4514:
{
    MemoryInline::FlatWrite32(r3, r6);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804D4534;
    }
}

loc_804D451C:
{
    r0 = (31 - r5);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r13 + -14984));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
}

loc_804D4534:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 732), r0);
    r0 = 2;
    r31 = 0x80000000u;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r13 + -20064));
    r3 = MemoryInline::FlatRead32((r31 + 228));
    ctr = r12;
    ctx->lr = 0x804D455Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r31 + 228), r30);
    r3 = r30;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl5_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl5_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl5_0x804CD668;
    }
}

loc_inl5_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl5_cont_804CD630;
}

loc_inl5_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl5_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        const auto regargs_result_804CD720_30D0 = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_30D0);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_30D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
    }
    r3 = r30;
}

loc_804D4574:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x3FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4360 func_804D4360 preserves=true fpr_mask=0x00000000
