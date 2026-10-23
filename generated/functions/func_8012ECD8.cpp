#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135B28(CpuContext* ctx);
extern "C" uint64_t func_80135B28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8012ECD8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8012ECD8;

loc_8012ECD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8012ECF0u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80135B28_3B1 = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_3B1);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_3B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8012ECF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8012ED04;
    }
}

loc_8012ECFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28136));
    goto loc_8012ED40;
}

loc_8012ED04:
{
    r3 = r31;
    ctx->lr = 0x8012ED0Cu;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80135B28_79A = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_79A);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_79A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8012ED14:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8012ED20;
    }
}

loc_8012ED18:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28132));
    goto loc_8012ED40;
}

loc_8012ED20:
{
    r3 = r31;
    ctx->lr = 0x8012ED28u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80135B28_B83 = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_B83);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_B83 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8012ED30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8012ED3C;
    }
}

loc_8012ED34:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28128));
    goto loc_8012ED40;
}

loc_8012ED3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28124));
}

loc_8012ED40:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_8012ECD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012ECD8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012ECD8 func_8012ECD8 preserves=true fpr_mask=0x00000000
