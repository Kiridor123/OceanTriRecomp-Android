#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B4CB8(CpuContext* ctx);
extern "C" uint64_t func_801B4CB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801B4D78_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x801B4D78u);
    goto loc_801B4D78;

loc_801B4D78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_801B4D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801B4DA0;
    }
}

loc_801B4D98:
{
}

loc_801B4D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801B4DDC;
    }
}

loc_801B4DA0:
{
    r3 = MemoryInline::FlatRead16((r3 + 26));
    ctx->lr = 0x801B4DA8u;
    if constexpr (KnownRegArgsCpuCall<0x801B4CB8u>(&func_801B4CB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_801B4CB8_59A = func_801B4CB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801B4CB8_59A);
        r4 = static_cast<uint32_t>(regargs_result_801B4CB8_59A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801B4CB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801B4DB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B4DC4;
    }
}

loc_801B4DB4:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r0 & 253);
}

loc_801B4DBC:
{
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    goto loc_801B4E20;
}

loc_801B4DC4:
{
}

loc_801B4DC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801B4E20;
    }
}

loc_801B4DCC:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    goto loc_801B4E20;
}

loc_801B4DDC:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_801B4DE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B4E20;
    }
}

loc_801B4DE8:
{
    r3 = MemoryInline::FlatRead16((r3 + 26));
    ctx->lr = 0x801B4DF0u;
    if constexpr (KnownRegArgsCpuCall<0x801B4CB8u>(&func_801B4CB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_801B4CB8_CAC = func_801B4CB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801B4CB8_CAC);
        r4 = static_cast<uint32_t>(regargs_result_801B4CB8_CAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801B4CB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801B4DF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B4E0C;
    }
}

loc_801B4DFC:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r0 & 253);
}

loc_801B4E04:
{
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    goto loc_801B4E20;
}

loc_801B4E0C:
{
}

loc_801B4E10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801B4E20;
    }
}

loc_801B4E14:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
}

loc_801B4E20:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_801B4E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801B4E40;
    }
}

loc_801B4E2C:
{
}

loc_801B4E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801B4E54;
    }
}

loc_801B4E34:
{
}

loc_801B4E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801B4E68;
    }
}

loc_801B4E3C:
{
    goto loc_801B4E78;
}

loc_801B4E40:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20000));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 460), f0.d);
    goto loc_801B4E78;
}

loc_801B4E54:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19996));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 460), f0.d);
    goto loc_801B4E78;
}

loc_801B4E68:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19992));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 460), f0.d);
}

loc_801B4E78:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 809), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B4D78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B4D78_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B4D78 func_801B4D78 preserves=true fpr_mask=0x00000000
