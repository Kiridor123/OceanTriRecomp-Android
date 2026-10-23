#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114E98(CpuContext* ctx);
extern "C" uint64_t func_80114E98_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80114D8C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80114D8C;

loc_80114D8C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = (r4 & 255);
}

loc_80114DBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80114DD4;
    }
}

loc_80114DC0:
{
}

loc_80114DC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80114DDC;
    }
}

loc_80114DC8:
{
}

loc_80114DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80114DF0;
    }
}

loc_80114DD0:
{
    goto loc_80114DF4;
}

loc_80114DD4:
{
    r31 = MemoryInline::FlatRead8((r3 + 22));
    goto loc_80114DF4;
}

loc_80114DDC:
{
    r31 = MemoryInline::FlatRead8((r3 + 481));
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126098_77E = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_77E);
        r4 = static_cast<uint32_t>(regargs_result_80126098_77E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r3 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    goto loc_80114DF4;
}

loc_80114DF0:
{
    r31 = MemoryInline::FlatRead8((r3 + 420));
}

loc_80114DF4:
{
    r3 = (r30 & 255);
    r4 = r31;
    ctx->lr = 0x80114E00u;
    if constexpr (KnownRegArgsCpuCall<0x80114E98u>(&func_80114E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114E98_B62 = func_80114E98_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80114E98_B62);
        r4 = static_cast<uint32_t>(regargs_result_80114E98_B62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80114E04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80114E78;
    }
}

loc_80114E08:
{
    MemoryInline::FlatWrite32((r3 + 48), r28);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r29 & 255);
}

loc_80114E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80114E30;
    }
}

loc_80114E1C:
{
}

loc_80114E20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80114E3C;
    }
}

loc_80114E24:
{
}

loc_80114E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80114E68;
    }
}

loc_80114E2C:
{
    goto loc_80114E78;
}

loc_80114E30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80114E78;
}

loc_80114E3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 516));
    r0 = (r3 + 65536);
}

loc_80114E50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80114E5C;
    }
}

loc_80114E54:
{
    MemoryInline::FlatWrite32((r4 + 24), r3);
    goto loc_80114E78;
}

loc_80114E5C:
{
    r0 = MemoryInline::FlatRead32((r28 + 272));
    MemoryInline::FlatWrite32((r4 + 24), r0);
    goto loc_80114E78;
}

loc_80114E68:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite32((r4 + 24), r0);
}

loc_80114E78:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80114D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80114D8C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80114D8C func_80114D8C preserves=true fpr_mask=0x00000000
