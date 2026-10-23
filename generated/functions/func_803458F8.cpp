#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126054(CpuContext* ctx);
extern "C" uint64_t func_80126054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803458F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803458F8;

loc_803458F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = (r5 & 255);
}

loc_80345928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80345934;
    }
}

loc_8034592C:
{
    r3 = 0;
    goto loc_803459D8;
}

loc_80345934:
{
    // inline leaf 0x80343AB8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -26328);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80343AB8
}

loc_8034593C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80345948;
    }
}

loc_80345940:
{
    r3 = 0;
    goto loc_803459D8;
}

loc_80345948:
{
    r31 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80345950:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80345974;
    }
}

loc_80345954:
{
    r3 = 0;
    goto loc_803459D8;
}

loc_80345960:
{
    r3 = MemoryInline::FlatRead8((r28 + 19));
    ctx->lr = 0x80345968u;
    if constexpr (KnownRegArgsCpuCall<0x80126054u>(&func_80126054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126054_95A = func_80126054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126054_95A);
        r4 = static_cast<uint32_t>(regargs_result_80126054_95A >> 32);
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

loc_8034596C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80345980;
    }
}

loc_80345970:
{
    r31 = (r31 + 8);
}

loc_80345974:
{
    r4 = MemoryInline::FlatRead8(r31);
}

loc_8034597C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_80345960;
    }
}

loc_80345980:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80345988:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80345994;
    }
}

loc_8034598C:
{
    r3 = 0;
    goto loc_803459D8;
}

loc_80345994:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r29 & 255);
    goto loc_803459AC;
}

loc_803459A0:
{
}

loc_803459A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803459B8;
    }
}

loc_803459A8:
{
    r4 = (r4 + 8);
}

loc_803459AC:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_803459B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_803459A0;
    }
}

loc_803459B8:
{
}

loc_803459BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_803459C8;
    }
}

loc_803459C0:
{
    r3 = 0;
    goto loc_803459D8;
}

loc_803459C8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r3 = (r3 + r0);
}

loc_803459D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803458F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803458F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803458F8 func_803458F8 preserves=true fpr_mask=0x00000000
