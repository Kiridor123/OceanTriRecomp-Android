#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80415610_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80415610;

loc_80415610:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
}

loc_80415630:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80415648;
    }
}

loc_80415634:
{
}

loc_80415638:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8041565C;
    }
}

loc_8041563C:
{
}

loc_80415640:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80415670;
    }
}

loc_80415644:
{
    goto loc_80415740;
}

loc_80415648:
{
    r28 = MemoryInline::FlatRead32((r3 + 2960));
    r31 = (r3 + 2980);
    r30 = 1024;
    r29 = MemoryInline::FlatRead32((r3 + 2968));
    goto loc_80415680;
}

loc_8041565C:
{
    r28 = (r3 + 2978);
    r31 = (r3 + 11172);
    r30 = 1;
    r29 = 1;
    goto loc_80415680;
}

loc_80415670:
{
    r28 = MemoryInline::FlatRead32((r3 + 2964));
    r31 = (r3 + 7076);
    r30 = 1024;
    r29 = MemoryInline::FlatRead32((r3 + 2972));
}

loc_80415680:
{
    r3 = r31;
    r4 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0;
    r3 = (r28 + r29);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
    goto loc_804156A8;
}

loc_804156A0:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r4));
    r28 = (r28 + 1);
}

loc_804156A8:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804156B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_804156A0;
    }
}

loc_804156B8:
{
}

loc_804156BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_804156A0;
    }
}

loc_804156C0:
{
}

loc_804156C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80415740;
    }
}

loc_804156C8:
{
    r3 = 0;
    ctr = r30;
}

loc_804156D4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80415740;
    }
}

loc_804156D8:
{
    r0 = r28;
    r28 = (r28 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804156EC;
}

loc_804156E8:
{
    r28 = (r28 + 1);
}

loc_804156EC:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804156F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80415718;
    }
}

loc_804156FC:
{
}

loc_80415700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80415718;
    }
}

loc_80415704:
{
}

loc_80415708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804156E8;
    }
}

loc_8041570C:
{
    goto loc_80415718;
}

loc_80415710:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r3));
    r28 = (r28 + 1);
}

loc_80415718:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80415724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80415710;
    }
}

loc_80415728:
{
}

loc_8041572C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80415710;
    }
}

loc_80415730:
{
}

loc_80415734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80415740;
    }
}

loc_80415738:
{
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804156D8;
    }
}

loc_80415740:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80415610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80415610_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80415610 func_80415610 preserves=true fpr_mask=0x00000000
