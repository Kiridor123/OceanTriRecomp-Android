#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80442C08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80442C08u);
    goto loc_80442C08;

loc_80442C08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 420);
    r4 = 0;
    r5 = 100;
    r6 = 8;
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl0_0x802A9354:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl0_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl0_0x802A93B8;
    }
}

loc_inl0_0x802A93B4:
{
    goto loc_inl0_0x802A93BC;
}

loc_inl0_0x802A93B8:
{
    r5 = r7;
}

loc_inl0_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl0_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 797u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 569u, (r31 + 570), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 757u, (r31 + 758), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 758u, (r31 + 759), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 759u, (r31 + 760), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 760u, (r31 + 761), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 761u, (r31 + 762), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 762u, (r31 + 763), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 763u, (r31 + 764), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 764u, (r31 + 765), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 765u, (r31 + 766), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 766u, (r31 + 767), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 767u, (r31 + 768), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 768u, (r31 + 769), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 769u, (r31 + 770), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 770u, (r31 + 771), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 771u, (r31 + 772), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 772u, (r31 + 773), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 773u, (r31 + 774), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 774u, (r31 + 775), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 775u, (r31 + 776), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 776u, (r31 + 777), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 777u, (r31 + 778), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 778u, (r31 + 779), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 779u, (r31 + 780), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 780u, (r31 + 781), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 781u, (r31 + 782), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 782u, (r31 + 783), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 783u, (r31 + 784), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 784u, (r31 + 785), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 785u, (r31 + 786), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 786u, (r31 + 787), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 787u, (r31 + 788), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 788u, (r31 + 789), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 789u, (r31 + 790), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 790u, (r31 + 791), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 791u, (r31 + 792), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 792u, (r31 + 793), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 793u, (r31 + 794), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 794u, (r31 + 795), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 795u, (r31 + 796), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 796u, (r31 + 797), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r31 + 28), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r31 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -19);
}

loc_80442CF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80442D04;
    }
}

loc_80442CF8:
{
}

loc_80442CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(21))) {
        goto loc_80442D10;
    }
}

loc_80442D00:
{
    goto loc_80442D20;
}

loc_80442D04:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 2), static_cast<uint8_t>(r4));
    goto loc_80442D44;
}

loc_80442D10:
{
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 2), static_cast<uint8_t>(r4));
    goto loc_80442D44;
}

loc_80442D20:
{
    r3 = 0x80600000u;
    r3 = (r3 + 31264);
    r4 = 136;
    r5 = 0x80600000u;
    r5 = (r5 + 31288);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80442D3Cu;
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
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_80442D44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80442C08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80442C08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80442C08 func_80442C08 preserves=true fpr_mask=0x00000000
