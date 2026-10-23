#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BD2C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802BD2C4;

loc_802BD2C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = (r4 & 1);
}

loc_802BD2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD2F8;
    }
}

loc_802BD2EC:
{
    r3 = (r3 + 88);
    r4 = (r30 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802BD2F8:
{
    r0 = (r31 & 2);
}

loc_802BD300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD310;
    }
}

loc_802BD304:
{
    r3 = (r30 + 112);
    r4 = (r30 + 100);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802BD310:
{
    r0 = (r31 & 4);
}

loc_802BD318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD324;
    }
}

loc_802BD31C:
{
    r0 = MemoryInline::FlatRead32((r30 + 168));
    MemoryInline::FlatWrite32((r30 + 172), r0);
}

loc_802BD324:
{
    r0 = (r31 & 8);
}

loc_802BD32C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD338;
    }
}

loc_802BD330:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
    MemoryInline::FlatWrite32((r30 + 180), r0);
}

loc_802BD338:
{
    r0 = (r31 & 16);
}

loc_802BD340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD34C;
    }
}

loc_802BD344:
{
    r0 = MemoryInline::FlatRead16((r30 + 192));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 194), static_cast<uint16_t>(r0));
}

loc_802BD34C:
{
    r0 = (r31 & 32);
}

loc_802BD354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD360;
    }
}

loc_802BD358:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 206), static_cast<uint16_t>(r0));
}

loc_802BD360:
{
    r0 = (r31 & 64);
}

loc_802BD368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD374;
    }
}

loc_802BD36C:
{
    r0 = MemoryInline::FlatRead32((r30 + 216));
    MemoryInline::FlatWrite32((r30 + 220), r0);
}

loc_802BD374:
{
    r0 = (r31 & 128);
}

loc_802BD37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD388;
    }
}

loc_802BD380:
{
    r0 = MemoryInline::FlatRead32((r30 + 232));
    MemoryInline::FlatWrite32((r30 + 236), r0);
}

loc_802BD388:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BD2C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BD2C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BD2C4 func_802BD2C4 preserves=true fpr_mask=0x00000000
