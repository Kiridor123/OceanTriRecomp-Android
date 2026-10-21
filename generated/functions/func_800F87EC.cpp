#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F8BA8(CpuContext* ctx);
extern "C" uint64_t func_800F8BA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800F87ECu);
    goto loc_800F87EC;

loc_800F87EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806A0000u;
    r5 = (r4 + 17776);
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_800F8810:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800F881C;
    }
}

loc_800F8814:
{
    r3 = 0;
    goto loc_800F88BC;
}

loc_800F881C:
{
    r31 = MemoryInline::FlatRead32((r5 + 16));
    ctr = r0;
}

loc_800F8828:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800F8850;
    }
}

loc_800F882C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_800F8834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8848;
    }
}

loc_800F8838:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 20), r0);
    goto loc_800F8858;
}

loc_800F8848:
{
    r31 = (r31 + 72);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F882C;
    }
}

loc_800F8850:
{
    r3 = 0;
    goto loc_800F88BC;
}

loc_800F8858:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r31 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r31 + 23), static_cast<uint8_t>(r0));
}

loc_800F888C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F88B8;
    }
}

loc_800F8890:
{
    // inline leaf 0x800F8DE4 (9 guest instruction(s))
}

loc_inl0_0x800F8DE4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r4 = (r4_rot_1 & 67108863);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r0 = (r3 - r0);
    r0 = (r0 & 63);
}

loc_inl0_0x800F8DF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800F8E00;
    }
}

loc_inl0_0x800F8DFC:
{
    r4 = (r4 + 1);
}

loc_inl0_0x800F8E00:
{
    r3 = r4;
}

loc_inl0_cont_800F8DE4:
{
    // end of inlined leaf 0x800F8DE4
    MemoryInline::FlatWrite32((r31 + 60), r3);
    r3 = MemoryInline::FlatRead32((r31 + 60));
    if constexpr (KnownRegArgsCpuCall<0x800F8BA8u>(&func_800F8BA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F8BA8_101A = func_800F8BA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F8BA8_101A);
        r4 = static_cast<uint32_t>(regargs_result_800F8BA8_101A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F8BA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r31 + 56), r3);
    r0 = MemoryInline::FlatRead32((r31 + 56));
}

loc_800F88AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F88B8;
    }
}

loc_800F88B0:
{
    r3 = 0;
    goto loc_800F88BC;
}

loc_800F88B8:
{
    r3 = r31;
}

loc_800F88BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F87EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F87EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F87EC func_800F87EC preserves=true fpr_mask=0x00000000
