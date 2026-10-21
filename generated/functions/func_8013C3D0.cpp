#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013C3D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8013C3D0u);
    goto loc_8013C3D0;

loc_8013C3D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r30 = r5;
    r0 = MemoryInline::FlatRead8((r3 + 2472));
}

loc_8013C3FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(6))) {
        goto loc_8013C418;
    }
}

loc_8013C400:
{
    r4 = 15;
    r5 = 0;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl0_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl0_0x80140B70:
{
}

loc_inl0_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    r3 = MemoryInline::FlatRead8((r31 + 2472));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 2472), static_cast<uint8_t>(r0));
}

loc_8013C418:
{
    r4 = MemoryInline::FlatRead8((r31 + 2396));
    r0 = MemoryInline::FlatRead8((r31 + 2472));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 2476), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 2397));
    r0 = MemoryInline::FlatRead8((r31 + 2472));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 2477), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r31 + 2472));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 2480), r30);
    r3 = r31;
    r4 = 1;
    r5 = (r29 & 255);
    ctx->lr = 0x8013C460u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_AA4 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_AA4);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_AA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013ABD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8013C464:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013C494;
    }
}

loc_8013C468:
{
    r3 = r31;
    r4 = 3;
    r5 = MemoryInline::FlatRead8((r31 + 2396));
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl1_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl1_0x80140B70:
{
}

loc_inl1_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    r0 = MemoryInline::FlatRead8((r31 + 2472));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2476));
    MemoryInline::FlatWrite8((r31 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2477));
    MemoryInline::FlatWrite8((r31 + 2397), static_cast<uint8_t>(r0));
}

loc_8013C494:
{
    r3 = MemoryInline::FlatRead8((r31 + 2472));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 2472), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013C3D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013C3D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013C3D0 func_8013C3D0 preserves=true fpr_mask=0x00000000
