#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80526780_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80526780u);
    goto loc_80526780;

loc_80526780:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8052678C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805267A0;
    }
}

loc_80526794:
{
    r3 = 0x80790000u;
    r3 = (r3 + 9016);
    ctx->lr = 0x805267A0u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_468 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_468);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_468 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_805267A0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13520));
}

loc_805267A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_805267F0;
    }
}

loc_805267AC:
{
    r3 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_805267B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_805267C4;
    }
}

loc_805267B8:
{
    r0 = (r3 + -5);
}

loc_805267C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805267D8;
    }
}

loc_805267C4:
{
    r3 = -1;
    r0 = -2;
    MemoryInline::FlatWrite32((r13 + -13520), r3);
    MemoryInline::FlatWrite32((r13 + -13524), r0);
    goto loc_805267F0;
}

loc_805267D8:
{
    r4 = -1;
    r3 = -100;
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13520), r4);
    MemoryInline::FlatWrite32((r13 + -13524), r3);
    MemoryInline::FlatWrite32((r13 + -13544), r0);
}

loc_805267F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526780(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526780_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526780 func_80526780 preserves=true fpr_mask=0x00000000
