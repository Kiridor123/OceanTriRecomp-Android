#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8033B724_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_8033B724;

loc_8033B724:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r3 = 0x806C0000u;
    r31 = (r3 + 5192);
    r3 = 0x80610000u;
    r30 = (r3 + -7360);
    r3 = r31;
    r4 = 0;
    r5 = 216;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r31 + 212), r28);
    MemoryInline::FlatWriteRam32((r31 + 208), r29);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_8033B804;
}

loc_8033B77C:
{
    ctx->lr = 0x8033B780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8033B784:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B800;
    }
}

loc_8033B788:
{
    r3 = MemoryInline::FlatRead16((r30 + 2));
}

loc_8033B790:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_8033B7A0;
    }
}

loc_8033B794:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033B79C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B800;
    }
}

loc_8033B7A0:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
}

loc_8033B7A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_8033B7B8;
    }
}

loc_8033B7AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033B7B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033B800;
    }
}

loc_8033B7B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8033B7C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8033B7D0;
    }
}

loc_8033B7C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033B7CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033B800;
    }
}

loc_8033B7D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r31 + r0);
    r3 = (r3 + 48);
    r4 = r30;
    // inline leaf 0x8033B834 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead8((r4 + 12));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8033B834
    r3 = MemoryInline::FlatRead16((r31 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 10), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8033B7FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_8033B810;
    }
}

loc_8033B800:
{
    r30 = (r30 + 16);
}

loc_8033B804:
{
    r3 = MemoryInline::FlatRead16(r30);
}

loc_8033B80C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_8033B77C;
    }
}

loc_8033B810:
{
    r3 = MemoryInline::FlatRead16((r31 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033B724(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033B724_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033B724 func_8033B724 preserves=true fpr_mask=0x00000000
