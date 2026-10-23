#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803F613C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803F613C;

loc_803F613C:
{
    r8 = (r6 + r5);
}

loc_803F6144:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(256))) {
        goto loc_return;
    }
}

loc_803F6148:
{
    r0 = MemoryInline::FlatRead8((r3 + 925));
}

loc_803F6150:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F6194;
    }
}

loc_803F6154:
{
    r0 = MemoryInline::FlatRead32((r3 + 1016));
}

loc_803F615C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_803F6174;
    }
}

loc_803F6160:
{
    r7 = MemoryInline::FlatRead32((r3 + 1020));
    r0 = (r0 - r6);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    MemoryInline::FlatWrite32((r3 + 1016), r6);
}

loc_803F6174:
{
    r7 = MemoryInline::FlatRead32((r3 + 1016));
    r0 = MemoryInline::FlatRead32((r3 + 1020));
    r0 = (r7 + r0);
}

loc_803F6184:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_803F61A4;
    }
}

loc_803F6188:
{
    r0 = (r8 - r7);
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    goto loc_803F61A4;
}

loc_803F6194:
{
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    MemoryInline::FlatWrite32((r3 + 1016), r6);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 925), static_cast<uint8_t>(r0));
}

loc_803F61A4:
{
    r8 = MemoryInline::FlatRead32((r3 + 1016));
    r0 = MemoryInline::FlatRead32((r3 + 1280));
}

loc_803F61B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r8))) {
        goto loc_803F61D8;
    }
}

loc_803F61B4:
{
}

loc_803F61B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(256))) {
        goto loc_803F61C4;
    }
}

loc_803F61BC:
{
    MemoryInline::FlatWrite32((r3 + 1280), r8);
    goto loc_803F61D8;
}

loc_803F61C4:
{
    r7 = MemoryInline::FlatRead32((r3 + 1284));
    r0 = (r0 - r8);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + 1284), r0);
    MemoryInline::FlatWrite32((r3 + 1280), r8);
}

loc_803F61D8:
{
    r7 = MemoryInline::FlatRead32((r3 + 1016));
    r0 = MemoryInline::FlatRead32((r3 + 1020));
    r7 = (r7 + r0);
    r8 = MemoryInline::FlatRead32((r3 + 1280));
    r0 = MemoryInline::FlatRead32((r3 + 1284));
    r0 = (r8 + r0);
}

loc_803F61F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r7))) {
        goto loc_803F6200;
    }
}

loc_803F61F8:
{
    r0 = (r7 - r8);
    MemoryInline::FlatWrite32((r3 + 1284), r0);
}

loc_803F6200:
{
    r3 = (r3 + r6);
    r3 = (r3 + 1024);
    r4 = (r4 + r6);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F613C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F613C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x00000199 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F613C func_803F613C preserves=true fpr_mask=0x00000000
