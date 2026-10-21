#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E30C(CpuContext* ctx);
extern "C" uint64_t func_8027E30C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027ECB4(CpuContext* ctx);
extern "C" uint64_t func_8027ECB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8021290C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8021290Cu);
    goto loc_8021290C;

loc_8021290C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8021293C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80212970;
    }
}

loc_80212940:
{
    r0 = (r3 + -6);
}

loc_80212948:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802129CC;
    }
}

loc_8021294C:
{
}

loc_80212950:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80212968;
    }
}

loc_80212954:
{
}

loc_80212958:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_80212A28;
    }
}

loc_8021295C:
{
}

loc_80212960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_80212A4C;
    }
}

loc_80212964:
{
    goto loc_80212A70;
}

loc_80212968:
{
    r3 = 1;
    goto loc_80212A74;
}

loc_80212970:
{
    r3 = (r4 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_A0D = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_A0D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80212980:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80212A70;
    }
}

loc_80212984:
{
    r3 = (r30 & 255);
}

loc_8021298C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(11))) {
        goto loc_80212A70;
    }
}

loc_80212990:
{
    r4 = (r31 & 65535);
    ctx->lr = 0x80212998u;
    if constexpr (KnownRegArgsCpuCall<0x8027ECB4u>(&func_8027ECB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ECB4_DF1 = func_8027ECB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ECB4_DF1);
        r4 = static_cast<uint32_t>(regargs_result_8027ECB4_DF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ECB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r29 & 255);
    r4 = 0x805C0000u;
    r4 = (r4 + -24652);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 14));
}

loc_802129B0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80212A70;
    }
}

loc_802129B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802129C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80212A70;
    }
}

loc_802129C4:
{
    r3 = 1;
    goto loc_80212A74;
}

loc_802129CC:
{
    r3 = (r4 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_1388 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_1388);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_802129DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80212A70;
    }
}

loc_802129E0:
{
    r3 = (r30 & 255);
}

loc_802129E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(11))) {
        goto loc_80212A70;
    }
}

loc_802129EC:
{
    r4 = (r31 & 65535);
    ctx->lr = 0x802129F4u;
    if constexpr (KnownRegArgsCpuCall<0x8027ECB4u>(&func_8027ECB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ECB4_176E = func_8027ECB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ECB4_176E);
        r4 = static_cast<uint32_t>(regargs_result_8027ECB4_176E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ECB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r29 & 255);
    r4 = 0x805C0000u;
    r4 = (r4 + -24652);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_80212A0C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80212A70;
    }
}

loc_80212A10:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80212A1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80212A70;
    }
}

loc_80212A20:
{
    r3 = 1;
    goto loc_80212A74;
}

loc_80212A28:
{
    r3 = (r4 & 255);
    r4 = (r5 & 65535);
    ctx->lr = 0x80212A34u;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_1CBE = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_1CBE);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_1CBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 4);
}

loc_80212A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212A70;
    }
}

loc_80212A44:
{
    r3 = 1;
    goto loc_80212A74;
}

loc_80212A4C:
{
    r3 = (r4 & 255);
    r4 = (r5 & 65535);
    ctx->lr = 0x80212A58u;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_20F4 = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_20F4);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_20F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 8);
}

loc_80212A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212A70;
    }
}

loc_80212A68:
{
    r3 = 1;
    goto loc_80212A74;
}

loc_80212A70:
{
    r3 = 0;
}

loc_80212A74:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021290C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021290C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021290C func_8021290C preserves=true fpr_mask=0x00000000
