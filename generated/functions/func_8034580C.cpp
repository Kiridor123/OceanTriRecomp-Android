#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126054(CpuContext* ctx);
extern "C" uint64_t func_80126054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8034580C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8034580C;

loc_8034580C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x80343AB8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -26328);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80343AB8
}

loc_8034582C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80345838;
    }
}

loc_80345830:
{
    r3 = 0;
    goto loc_803458E0;
}

loc_80345838:
{
    r31 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80345840:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80345864;
    }
}

loc_80345844:
{
    r3 = 0;
    goto loc_803458E0;
}

loc_80345850:
{
    r3 = MemoryInline::FlatRead8((r30 + 19));
    ctx->lr = 0x80345858u;
    if constexpr (KnownRegArgsCpuCall<0x80126054u>(&func_80126054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126054_756 = func_80126054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126054_756);
        r4 = static_cast<uint32_t>(regargs_result_80126054_756 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8034585C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80345870;
    }
}

loc_80345860:
{
    r31 = (r31 + 8);
}

loc_80345864:
{
    r4 = MemoryInline::FlatRead8(r31);
}

loc_8034586C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_80345850;
    }
}

loc_80345870:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80345878:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80345884;
    }
}

loc_8034587C:
{
    r3 = 0;
    goto loc_803458E0;
}

loc_80345884:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    goto loc_8034589C;
}

loc_8034588C:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80345894:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803458A8;
    }
}

loc_80345898:
{
    r4 = (r4 + 8);
}

loc_8034589C:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803458A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_8034588C;
    }
}

loc_803458A8:
{
}

loc_803458AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_803458B8;
    }
}

loc_803458B0:
{
    r3 = 0;
    goto loc_803458E0;
}

loc_803458B8:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_803458D0;
}

loc_803458C0:
{
    r0 = MemoryInline::FlatRead8((r30 + 21));
}

loc_803458C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803458DC;
    }
}

loc_803458CC:
{
    r4 = (r4 + 2);
}

loc_803458D0:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803458D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_803458C0;
    }
}

loc_803458DC:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
}

loc_803458E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034580C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034580C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034580C func_8034580C preserves=true fpr_mask=0x00000000
