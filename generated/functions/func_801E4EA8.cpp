#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8037695C(CpuContext* ctx);
extern "C" uint32_t func_8037695C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801E4EA8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_801E4EA8;

loc_801E4EA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl0_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl0_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl0_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802DE508:
{
    r3 = 1;
    goto loc_inl0_cont_802DE4E4;
}

loc_inl0_return:
{
}

loc_inl0_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_801E4EC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801E4F20;
    }
}

loc_801E4EC8:
{
    ctx->lr = 0x801E4ECCu;
    if constexpr (KnownRegArgsCpuCall<0x8037695Cu>(&func_8037695C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037695C_6DC = func_8037695C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8037695C_6DC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8037695Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_801E4ED0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801E4ED8;
    }
}

loc_801E4ED4:
{
    goto loc_801E4F20;
}

loc_801E4ED8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r4 = MemoryInline::FlatRead16((r3 + 712));
    r0 = (r4 & 3072);
}

loc_801E4EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E4F20;
    }
}

loc_801E4EF0:
{
    r0 = (r4 & 2048);
}

loc_801E4EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E4F08;
    }
}

loc_801E4EFC:
{
    r3 = MemoryInline::FlatRead16((r31 + 50));
    r0 = (r3 + -1024);
    MemoryInline::FlatWrite16((r31 + 50), static_cast<uint16_t>(r0));
}

loc_801E4F08:
{
    r0 = (r4 & 1024);
}

loc_801E4F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E4F20;
    }
}

loc_801E4F14:
{
    r3 = MemoryInline::FlatRead16((r31 + 50));
    r0 = (r3 + 1024);
    MemoryInline::FlatWrite16((r31 + 50), static_cast<uint16_t>(r0));
}

loc_801E4F20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E4EA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E4EA8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E4EA8 func_801E4EA8 preserves=true fpr_mask=0x00000000
