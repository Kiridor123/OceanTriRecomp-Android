#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013ABD8(CpuContext* ctx);
extern "C" uint64_t func_8013ABD8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8013D7B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8013D7B4u);
    goto loc_8013D7B4;

loc_8013D7B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = MemoryInline::FlatRead8(r4);
    r30 = (r4 + 1);
    r5 = MemoryInline::FlatRead8((r3 + 2396));
}

loc_8013D7E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013D7F4;
    }
}

loc_8013D7E4:
{
    r4 = 10;
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
    MemoryInline::FlatWrite32((r29 + 2392), r30);
    goto loc_8013D854;
}

loc_8013D7F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2402));
}

loc_8013D7FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10))) {
        goto loc_8013D818;
    }
}

loc_8013D800:
{
    r4 = 11;
    r5 = 0;
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
    r3 = MemoryInline::FlatRead8((r29 + 2402));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 2402), static_cast<uint8_t>(r0));
}

loc_8013D818:
{
    r4 = MemoryInline::FlatRead8((r29 + 2397));
    r0 = MemoryInline::FlatRead8((r29 + 2402));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 2403), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r29 + 2402));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 2416), r30);
    r3 = MemoryInline::FlatRead8((r29 + 2402));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 2402), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 0;
    r5 = r31;
    ctx->lr = 0x8013D854u;
    if constexpr (KnownRegArgsCpuCall<0x8013ABD8u>(&func_8013ABD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013ABD8_BA0 = func_8013ABD8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013ABD8_BA0);
        r4 = static_cast<uint32_t>(regargs_result_8013ABD8_BA0 >> 32);
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

loc_8013D854:
{
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

extern "C" void func_8013D7B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013D7B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013D7B4 func_8013D7B4 preserves=true fpr_mask=0x00000000
