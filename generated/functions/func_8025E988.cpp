#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025E2A8(CpuContext* ctx);
extern "C" uint32_t func_8025E2A8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8025E2FC(CpuContext* ctx);
extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8025E2A8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8025E2A8_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8025E988_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t xer = ctx->xer;

    goto loc_8025E988;

loc_8025E988:
{
    r30 = 1;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025E2A8u) && KnownTranslatedCpuCall<0x8025E2A8u>::kAvailable && !KnownTranslatedCpuCall<0x8025E2A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025E2A8u>()) {
        const auto state_free_result_8025E2A8_543 = func_8025E2A8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8025E2A8_543[0]);
        r3 = static_cast<uint32_t>(state_free_result_8025E2A8_543[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8025E2A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8025E998:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E9B4;
    }
}

loc_8025E99C:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8025E2FC_8D4 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_8D4);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_8D4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8025E9B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025E9B4:
{
    r31 = 1;
}

loc_8025EB80:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
}

loc_8025EB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025EBA8;
    }
}

loc_8025EB8C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EBA8:
{
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8025EC34;
    }
}

loc_8025EBB8:
{
    r0 = MemoryInline::FlatRead8((r29 + 998));
}

loc_8025EBC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EBE4;
    }
}

loc_8025EBC4:
{
    r0 = (r31 + -1);
}

loc_8025EBCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8025EBDC;
    }
}

loc_8025EBD0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EBE4;
}

loc_8025EBDC:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
}

loc_8025EBE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF0:
{
}

loc_8025EBF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF8:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC08:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EC14:
{
}

loc_8025EC18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EC34;
    }
}

loc_8025EC1C:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC2C:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
}

loc_8025EC34:
{
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025E988(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025E988_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025E988 func_8025E988 preserves=true fpr_mask=0x00000000
