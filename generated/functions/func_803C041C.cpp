#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802146B8(CpuContext* ctx);
extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C041C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_803C041C;

loc_803C041C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = 0;
    r9 = 0;
    r7 = MemoryInline::FlatRead16((r3 + 168));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r4 = 1;
    goto loc_803C046C;
}

loc_803C043C:
{
    r6 = (r9 & 255);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 137));
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 143));
}

loc_803C0454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C0468;
    }
}

loc_803C0458:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r8 | r0);
    r8 = (r0 & 65535);
}

loc_803C0468:
{
    r9 = (r9 + 1);
}

loc_803C046C:
{
    r0 = (r9 & 255);
}

loc_803C0474:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_803C043C;
    }
}

loc_803C0478:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r3 + 104);
    r0 = (r7 + -1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 2;
    r6 = 0;
    r7 = -1;
    r9 = 5;
    r10 = 3;
    ctx->lr = 0x803C04A4u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_802146B8_915 = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_915);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_915 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C041C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C041C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C041C func_803C041C preserves=true fpr_mask=0x00000000
