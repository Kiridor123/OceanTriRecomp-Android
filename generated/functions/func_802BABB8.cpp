#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BAB70(CpuContext* ctx);
extern "C" double func_802BAB70_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802BABB8_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_802BABB8;

loc_802BABB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_802BABC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802BABC4:
{
    r4 = 15;
    r5 = MemoryInline::FlatRead32((r3 + 88));
}

loc_802BABD0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802BABD8;
    }
}

loc_802BABD4:
{
    r4 = MemoryInline::FlatRead8((r5 + 72));
}

loc_802BABD8:
{
}

loc_802BABDC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_802BABEC;
    }
}

loc_802BABE0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 66), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return r4;
}

loc_802BABEC:
{
    r0 = MemoryInline::FlatRead8((r3 + 66));
}

loc_802BABF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802BAC04;
    }
}

loc_802BABF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 67), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return r4;
}

loc_802BAC04:
{
    if constexpr (KnownRegArgsCpuCall<0x802BAB70u>(&func_802BAB70)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BAB70_761 = func_802BAB70_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_802BAB70_761;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BAB70u>(ctx);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return r4;
}

}

extern "C" void func_802BABB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802BABB8_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BABB8 func_802BABB8 preserves=true fpr_mask=0x00000000
