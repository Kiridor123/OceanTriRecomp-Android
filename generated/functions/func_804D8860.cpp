#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D8730(CpuContext* ctx);
extern "C" void func_804D8730_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D8860_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x804D8860u);
    goto loc_804D8860;

loc_804D8860:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 180;
    r30 = 0;
    r29 = 0;
    r28 = r3;
}

loc_804D888C:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D8920;
    }
}

loc_804D8898:
{
    r3 = (r28 + 2);
    r4 = (r28 + 3);
    r5 = 72;
    r6 = 40;
    r7 = 15;
    if constexpr (KnownRegArgsCpuCall<0x804D8730u>(&func_804D8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_804D8730_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804D8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r28 + 4);
    r4 = (r28 + 5);
    r5 = 59;
    r6 = 31;
    r7 = 15;
    if constexpr (KnownRegArgsCpuCall<0x804D8730u>(&func_804D8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        func_804D8730_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804D8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_804D88D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_804D88DC;
    }
}

loc_804D88D4:
{
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r30));
    goto loc_804D88F4;
}

loc_804D88DC:
{
}

loc_804D88E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(180))) {
        goto loc_804D88E8;
    }
}

loc_804D88E4:
{
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r31));
}

loc_804D88E8:
{
    r3 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r3 + -30);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
}

loc_804D88F4:
{
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_804D88FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_804D8908;
    }
}

loc_804D8900:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r30));
    goto loc_804D8920;
}

loc_804D8908:
{
}

loc_804D890C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(180))) {
        goto loc_804D8914;
    }
}

loc_804D8910:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r31));
}

loc_804D8914:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + -30);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
}

loc_804D8920:
{
    r29 = (r29 + 1);
    r28 = (r28 + 12);
}

loc_804D892C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_804D888C;
    }
}

loc_804D8930:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D8860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D8860_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D8860 func_804D8860 preserves=true fpr_mask=0x00000000
