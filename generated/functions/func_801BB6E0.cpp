#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801BB6E0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_801BB6E0;

loc_801BB6E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r5;
    r31 = (r3 + 52);
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801BB704:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801BB7A4;
    }
}

loc_801BB708:
{
    r0 = (r6 & 255);
    r0 = (r0 & 16);
}

loc_801BB714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BB744;
    }
}

loc_801BB718:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19556));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_801BB758;
}

loc_801BB744:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_801BB758:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32(r30);
}

loc_801BB768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BB77C;
    }
}

loc_801BB76C:
{
    MemoryInline::FlatWrite32(r30, r3);
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_801BB77C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_801BB784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BB79C;
    }
}

loc_801BB788:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r0 = MemoryInline::FlatRead8((r31 + 14));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 14), static_cast<uint8_t>(r0));
}

loc_801BB79C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
}

loc_801BB7A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801BB6E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801BB6E0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BB6E0 func_801BB6E0 preserves=true fpr_mask=0x00000000
