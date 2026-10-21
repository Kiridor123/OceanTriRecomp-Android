#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80300DDC_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x80300DDCu);
    goto loc_80300DDC;

loc_80300DDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -17824));
    r29 = 0;
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r29));
    r3 = (r3 + 9);
    r4 = 0;
    r5 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x80300E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x802FF768u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r29));
    r4 = 0;
    goto loc_80300E48;
}

loc_80300E2C:
{
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = (r4 + 1);
}

loc_80300E48:
{
    r3 = (r4 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80300E54:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80300E2C;
    }
}

loc_80300E58:
{
    r4 = 3;
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = 4;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 18483));
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 18488));
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
}

loc_80300EA4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_80300EB0;
    }
}

loc_80300EA8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
}

loc_80300EB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80300DDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80300DDC_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80300DDC func_80300DDC preserves=true fpr_mask=0x00000000
