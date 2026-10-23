#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804173B4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804173B4;

loc_804173B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r5;
    r31 = r6;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_804173DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804173E8;
    }
}

loc_804173E0:
{
}

loc_804173E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_804173F0;
    }
}

loc_804173E8:
{
    r3 = 0;
    goto loc_804174FC;
}

loc_804173F0:
{
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 28076));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80417400:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80417430;
    }
}

loc_80417404:
{
    r0 = MemoryInline::FlatRead8((r6 + 28072));
    r0 = (r0 & 240);
}

loc_80417410:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(176))) {
        goto loc_80417420;
    }
}

loc_80417414:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r6 + 28072), static_cast<uint8_t>(r0));
    goto loc_80417428;
}

loc_80417420:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r6 + 28072), static_cast<uint8_t>(r0));
}

loc_80417428:
{
    r0 = 15;
    MemoryInline::FlatWrite8((r6 + 28076), static_cast<uint8_t>(r0));
}

loc_80417430:
{
    r5 = MemoryInline::FlatRead8((r6 + 28076));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite8((r6 + 28076), static_cast<uint8_t>(r0));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r28 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r28 + 28056));
}

loc_80417450:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80417464;
    }
}

loc_80417454:
{
    r5 = (r3 + r5);
    r3 = MemoryInline::FlatRead8((r5 + 28072));
    r0 = (r3 + 16);
    MemoryInline::FlatWrite8((r5 + 28072), static_cast<uint8_t>(r0));
}

loc_80417464:
{
    r0 = MemoryInline::FlatRead32((r28 + 28056));
}

loc_8041746C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(2))) {
        goto loc_80417480;
    }
}

loc_80417470:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 28056), r0);
    r3 = 0;
    goto loc_804174FC;
}

loc_80417480:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r27 = (r27_rot_1 & -4096);
    r3 = (r1 + 8);
    r4 = (r29 + r27);
    r4 = (r4 + 11670);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead16((r1 + 8));
}

loc_804174A4:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r5))) {
        goto loc_804174B8;
    }
}

loc_804174A8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 28056), r0);
    r3 = 0;
    goto loc_804174FC;
}

loc_804174B8:
{
    r3 = r30;
    r4 = (r29 + r27);
    r4 = (r4 + 11672);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r4 = (r3 + 2);
    r0 = MemoryInline::FlatRead32((r28 + 28056));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r28 + 28056), r0);
    r5 = MemoryInline::FlatRead32((r28 + 28056));
}

loc_804174E4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_804174F8;
    }
}

loc_804174E8:
{
    r3 = (r29 + r27);
    r3 = (r3 + 11670);
    r4 = (r3 + r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804174F8:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_804174FC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804173B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804173B4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804173B4 func_804173B4 preserves=true fpr_mask=0x00000000
