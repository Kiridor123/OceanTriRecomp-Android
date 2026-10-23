#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80382100_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80382100;

loc_80382100:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r31 = (r3 + 808);
    r8 = (r4 & 255);
    r7 = (r31 + r8);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    r5 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7704));
    r4 = (r31 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r31_addr_0 = (r31 + r8);
    MemoryInline::FlatWrite8(r31_addr_0, static_cast<uint8_t>(r5));
}

loc_80382150:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80382194;
    }
}

loc_80382154:
{
    r3 = (r3 + 36);
    r4 = 0x805F0000u;
    r4 = (r4 + -4768);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x80382170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (r30 & 255);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    goto loc_803821AC;
}

loc_80382194:
{
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r7 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r7 + 40), static_cast<uint8_t>(r0));
}

loc_803821AC:
{
    r4 = 0;
    r0 = (r30 & 255);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80382100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80382100_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80382100 func_80382100 preserves=true fpr_mask=0x00000000
