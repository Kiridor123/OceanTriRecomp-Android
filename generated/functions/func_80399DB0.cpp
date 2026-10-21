#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E04F4(CpuContext* ctx);
extern "C" uint32_t func_802E04F4_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_80399DB0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
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
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x80399DB0u);
    goto loc_80399DB0;

loc_80399DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r6;
    r31 = r7;
    r0 = 12;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = 368;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->lr = 0x80399DF4u;
    if constexpr (KnownRegArgsCpuCall<0x802E04F4u>(&func_802E04F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802E04F4_56A = func_802E04F4_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_802E04F4_56A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E04F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_80399E04:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80399E28;
    }
}

loc_80399E08:
{
    r0 = (r28 & 255);
}

loc_80399E10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80399E20;
    }
}

loc_80399E14:
{
    r0 = 304;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_80399E28;
}

loc_80399E20:
{
    r0 = 400;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
}

loc_80399E28:
{
}

loc_80399E2C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80399E38;
    }
}

loc_80399E30:
{
    r0 = 96;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_80399E38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80399DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80399DB0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80399DB0 func_80399DB0 preserves=true fpr_mask=0x00000000
