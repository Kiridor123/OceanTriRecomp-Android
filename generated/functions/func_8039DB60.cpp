#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);
extern "C" void func_8039D9A8(CpuContext* ctx);
extern "C" uint64_t func_8039D9A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8039DB60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8039DB60;

loc_8039DB60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
}

loc_8039DB78:
{
    r0 = (r4 & 255);
}

loc_8039DB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039DBA0;
    }
}

loc_8039DB84:
{
}

loc_8039DB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039DBD0;
    }
}

loc_8039DB8C:
{
}

loc_8039DB90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8039DBD8;
    }
}

loc_8039DB94:
{
}

loc_8039DB98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8039DBE0;
    }
}

loc_8039DB9C:
{
    goto loc_8039DBE8;
}

loc_8039DBA0:
{
    r3 = r30;
    ctx->lr = 0x8039DBA8u;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_772 = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_772;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8039DBAC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8039DBC0;
    }
}

loc_8039DBB0:
{
    r3 = r30;
    ctx->lr = 0x8039DBB8u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_A43 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_A43;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8039DBBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8039DBC8;
    }
}

loc_8039DBC0:
{
    r31 = 9;
    goto loc_8039DBF0;
}

loc_8039DBC8:
{
    r31 = 1;
    goto loc_8039DBF0;
}

loc_8039DBD0:
{
    r31 = 5;
    goto loc_8039DBF0;
}

loc_8039DBD8:
{
    r31 = 8;
    goto loc_8039DBF0;
}

loc_8039DBE0:
{
    r31 = 9;
    goto loc_8039DBF0;
}

loc_8039DBE8:
{
    r3 = 0;
    goto loc_8039DC14;
}

loc_8039DBF0:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8039DBFCu;
    if constexpr (KnownRegArgsCpuCall<0x8039D9A8u>(&func_8039D9A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039D9A8_E90 = func_8039D9A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8039D9A8_E90);
        r4 = static_cast<uint32_t>(regargs_result_8039D9A8_E90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8039D9A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039DC00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8039DC0C;
    }
}

loc_8039DC04:
{
    r4 = r31;
    goto loc_8039DB78;
}

loc_8039DC0C:
{
    MemoryInline::FlatWrite32((r30 + 12272), r31);
    r3 = 1;
}

loc_8039DC14:
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

extern "C" void func_8039DB60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039DB60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8039DB60 func_8039DB60 preserves=true fpr_mask=0x00000000
