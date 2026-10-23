#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80139AC8(CpuContext* ctx);
extern "C" uint64_t func_80139AC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AE0(CpuContext* ctx);
extern "C" uint64_t func_80139AE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80191E94_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80191E94;

loc_80191E94:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r28 = r4;
    r29 = r7;
    r30 = r8;
    r31 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_80191ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80191F3C;
    }
}

loc_80191ED4:
{
}

loc_80191ED8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(16))) {
        goto loc_80191EF0;
    }
}

loc_80191EDC:
{
}

loc_80191EE0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(18))) {
        goto loc_80191EF8;
    }
}

loc_80191EE4:
{
}

loc_80191EE8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(20))) {
        goto loc_80191F00;
    }
}

loc_80191EEC:
{
    goto loc_80191F3C;
}

loc_80191EF0:
{
    r0 = 0;
    goto loc_80191F04;
}

loc_80191EF8:
{
    r0 = 1;
    goto loc_80191F04;
}

loc_80191F00:
{
    r0 = 2;
}

loc_80191F04:
{
    r0 = (r0 * 144);
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 1427));
}

loc_80191F14:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80191F3C;
    }
}

loc_80191F18:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x80191F24u;
    if constexpr (KnownRegArgsCpuCall<0x80139AE0u>(&func_80139AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80139AE0_A4B = func_80139AE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80139AE0_A4B);
        r4 = static_cast<uint32_t>(regargs_result_80139AE0_A4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80139AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = (r1 + 8);
    r4 = (r31 + 1460);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x80191F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80139AC8_FCA = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_FCA);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_FCA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_80191F3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80191E94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80191E94_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001BF gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191E94 func_80191E94 preserves=true fpr_mask=0x00000000
