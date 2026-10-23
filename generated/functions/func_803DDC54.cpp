#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803F8894(CpuContext* ctx);
extern "C" uint64_t func_803F8894_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803DDC54_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803DDC54;

loc_803DDC54:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r5;
    r30 = r6;
}

loc_803DDC7C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(31))) {
        goto loc_803DDDFC;
    }
}

loc_803DDC80:
{
}

loc_803DDC84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803DDDFC;
    }
}

loc_803DDC88:
{
    r0 = (r4 * 796);
    r3 = (r3 + r0);
    r31 = (r3 + 2804);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r5 + 872));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = (r31 + 8);
    r4 = (r5 + 4);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 0;
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r28));
    r3 = (r31 + 264);
    r4 = 3;
    r5 = (r29 + 880);
    r6 = 8;
    ctx->lr = 0x803DDCD0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8894u>(&func_803F8894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803F8894_AB5 = func_803F8894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8894_AB5);
        r4 = static_cast<uint32_t>(regargs_result_803F8894_AB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803F8894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r29 + 856));
    MemoryInline::FlatWrite32((r31 + 368), r0);
    r0 = MemoryInline::FlatRead32((r29 + 864));
    MemoryInline::FlatWrite32((r31 + 372), r0);
    r0 = MemoryInline::FlatRead32((r29 + 860));
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r0 = MemoryInline::FlatRead32((r29 + 868));
    MemoryInline::FlatWrite32((r31 + 380), r0);
    MemoryInline::FlatWrite32((r31 + 300), r28);
    r0 = MemoryInline::FlatRead8((r29 + 68));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r31 + 384), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r29 + 342));
}

loc_803DDD14:
{
    r0 = 256;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(256))) {
        goto loc_803DDD20;
    }
}

loc_803DDD1C:
{
    r0 = r3;
}

loc_803DDD20:
{
    MemoryInline::FlatWrite32((r31 + 388), r0);
    r3 = (r31 + 392);
    r4 = (r29 + 86);
    r5 = MemoryInline::FlatRead32((r31 + 388));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 648);
    r4 = (r29 + 344);
    r5 = 144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 792), static_cast<uint8_t>(r0));
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 889));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803DDD5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DDD6C;
    }
}

loc_803DDD60:
{
}

loc_803DDD64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803DDD6C;
    }
}

loc_803DDD68:
{
    r3 = 1;
}

loc_803DDD6C:
{
    MemoryInline::FlatWrite8((r31 + 793), static_cast<uint8_t>(r3));
}

loc_803DDD74:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803DDDFC;
    }
}

loc_803DDD78:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803DDD80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32))) {
        goto loc_803DDD8C;
    }
}

loc_803DDD84:
{
    r0 = 32;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_803DDD8C:
{
    r6 = 0;
    r4 = 1;
    goto loc_803DDDEC;
}

loc_803DDD98:
{
    r0 = (r6 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r5 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r7 = (r3 + -1);
}

loc_803DDDB0:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(8))) {
        goto loc_803DDDE8;
    }
}

loc_803DDDB4:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_803DDDBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803DDDE8;
    }
}

loc_803DDDC0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 304), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 308), r0);
    r0 = MemoryInline::FlatRead32((r31 + 300));
}

loc_803DDDDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r7))) {
        goto loc_803DDDE8;
    }
}

loc_803DDDE0:
{
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r31 + 300), r0);
}

loc_803DDDE8:
{
    r6 = (r6 + 1);
}

loc_803DDDEC:
{
    r3 = (r6 & 255);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803DDDF8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_803DDD98;
    }
}

loc_803DDDFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803DDC54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803DDC54_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803DDC54 func_803DDC54 preserves=true fpr_mask=0x00000000
