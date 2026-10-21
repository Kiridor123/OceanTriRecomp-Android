#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004F4AC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8004F4ACu);
    goto loc_8004F4AC;

loc_8004F4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8004F4D4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8004F4E0;
    }
}

loc_8004F4D8:
{
    r3 = 0;
    goto loc_8004F554;
}

loc_8004F4E0:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8004F4EC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8004F4F8;
    }
}

loc_8004F4F0:
{
    r3 = 0;
    goto loc_8004F554;
}

loc_8004F4F8:
{
    r3 = (r3 + 3);
    r4 = (r4 + 3);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_62F = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_62F);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_62F >> 32);
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

loc_8004F50C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F518;
    }
}

loc_8004F510:
{
    r3 = 0;
    goto loc_8004F554;
}

loc_8004F518:
{
    r3 = MemoryInline::FlatRead8((r30 + 14753));
    r0 = MemoryInline::FlatRead8((r31 + 35));
}

loc_8004F524:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8004F530;
    }
}

loc_8004F528:
{
    r3 = 0;
    goto loc_8004F554;
}

loc_8004F530:
{
    r3 = MemoryInline::FlatRead32((r30 + 21416));
}

loc_8004F538:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004F548;
    }
}

loc_8004F53C:
{
    r0 = MemoryInline::FlatRead32((r31 + 240));
}

loc_8004F544:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8004F550;
    }
}

loc_8004F548:
{
    r3 = 0;
    goto loc_8004F554;
}

loc_8004F550:
{
    r3 = 1;
}

loc_8004F554:
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

extern "C" void func_8004F4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004F4AC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004F4AC func_8004F4AC preserves=true fpr_mask=0x00000000
