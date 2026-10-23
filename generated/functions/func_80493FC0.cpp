#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8049794C(CpuContext* ctx);
extern "C" uint64_t func_8049794C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80493FC0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80493FC0;

loc_80493FC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r4 = r30;
    r3 = (r2 + -2512);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_4B6 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_4B6);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_4B6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80493FF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049402C;
    }
}

loc_80493FF4:
{
    r3 = r30;
    ctx->lr = 0x80493FFCu;
    if constexpr (KnownRegArgsCpuCall<0x8049794Cu>(&func_8049794C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049794C_80D = func_8049794C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049794C_80D);
        r4 = static_cast<uint32_t>(regargs_result_8049794C_80D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8049794Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80494000:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80494024;
    }
}

loc_80494004:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8049400C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80494024;
    }
}

loc_80494010:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80494018:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80494024;
    }
}

loc_8049401C:
{
    MemoryInline::FlatWrite16((r3 + 88), static_cast<uint16_t>(r31));
    goto loc_804940A4;
}

loc_80494024:
{
    r3 = 0;
    goto loc_804940A8;
}

loc_8049402C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -5120);
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8049403C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80494050;
    }
}

loc_80494040:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80494048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80494050;
    }
}

loc_8049404C:
{
    MemoryInline::FlatWriteRam16((r3 + 96), static_cast<uint16_t>(r31));
}

loc_80494050:
{
    r3 = (r3 + 100);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80494058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049406C;
    }
}

loc_8049405C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80494064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8049406C;
    }
}

loc_80494068:
{
    MemoryInline::FlatWriteRam16((r3 + 88), static_cast<uint16_t>(r31));
}

loc_8049406C:
{
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_80494074:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80494088;
    }
}

loc_80494078:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_80494080:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80494088;
    }
}

loc_80494084:
{
    MemoryInline::FlatWriteRam16((r3 + 180), static_cast<uint16_t>(r31));
}

loc_80494088:
{
    r0 = MemoryInline::FlatRead8((r3 + 184));
}

loc_80494090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804940A4;
    }
}

loc_80494094:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
}

loc_8049409C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_804940A4;
    }
}

loc_804940A0:
{
    MemoryInline::FlatWriteRam16((r3 + 272), static_cast<uint16_t>(r31));
}

loc_804940A4:
{
    r3 = 1;
}

loc_804940A8:
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

extern "C" void func_80493FC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80493FC0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80493FC0 func_80493FC0 preserves=true fpr_mask=0x00000000
