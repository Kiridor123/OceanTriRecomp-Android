#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8010A238_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8010A238;

loc_8010A238:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8010A270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8010A284;
    }
}

loc_8010A274:
{
}

loc_8010A278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8010A284;
    }
}

loc_8010A27C:
{
}

loc_8010A280:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(21))) {
        goto loc_8010A350;
    }
}

loc_8010A284:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead8((r31 + 6));
}

loc_8010A298:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8010A2A8;
    }
}

loc_8010A29C:
{
}

loc_8010A2A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8010A2D8;
    }
}

loc_8010A2A4:
{
    goto loc_8010A35C;
}

loc_8010A2A8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r29 = 0;
    r30 = r28;
    goto loc_8010A2CC;
}

loc_8010A2BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    ctx->lr = 0x8010A2C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800A4A90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_8010A2CC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8010A2D4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8010A2BC;
    }
}

loc_8010A2D8:
{
    r29 = 0;
    r30 = r28;
    goto loc_8010A304;
}

loc_8010A2E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r31 + 24);
    ctx->lr = 0x8010A2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 0;
    ctx->lr = 0x8010A2FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F99D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_8010A304:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8010A30C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8010A2E4;
    }
}

loc_8010A310:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r3 = MH3_TickLoad(r3, 2148573968);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8010A320:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010A334;
    }
}

loc_8010A324:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_8010A35C;
}

loc_8010A334:
{
    r3 = r31;
    r4 = (r28 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r28);
    r7 = 0;
    ctx->lr = 0x8010A34Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    goto loc_8010A35C;
}

loc_8010A350:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
}

loc_8010A35C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010A238(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010A238_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010A238 func_8010A238 preserves=true fpr_mask=0x00000000
