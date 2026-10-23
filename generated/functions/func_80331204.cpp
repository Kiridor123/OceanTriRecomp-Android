#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80331190(CpuContext* ctx);
extern "C" uint32_t func_80331190_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80331204_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80331204;

loc_80331204:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 4;
    r0 = MemoryInline::FlatRead16((r3 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80331220:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(44))) {
        goto loc_8033122C;
    }
}

loc_80331224:
{
    r31 = 0;
    goto loc_8033125C;
}

loc_8033122C:
{
}

loc_80331230:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(42))) {
        goto loc_8033123C;
    }
}

loc_80331234:
{
    r31 = 1;
    goto loc_8033125C;
}

loc_8033123C:
{
}

loc_80331240:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8033124C;
    }
}

loc_80331244:
{
    r31 = 2;
    goto loc_8033125C;
}

loc_8033124C:
{
    ctx->lr = 0x80331250u;
    if constexpr (KnownRegArgsCpuCall<0x80331190u>(&func_80331190)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331190_631 = func_80331190_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331190_631;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80331190u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80331254:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8033125C;
    }
}

loc_80331258:
{
    r31 = 3;
}

loc_8033125C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80331204(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80331204_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80331204 func_80331204 preserves=true fpr_mask=0x00000000
