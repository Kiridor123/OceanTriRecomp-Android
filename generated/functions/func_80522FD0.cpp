#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D16C0(CpuContext* ctx);
extern "C" uint64_t func_804D16C0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80522CE8(CpuContext* ctx);
extern "C" uint64_t func_80522CE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80522FD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80522FD0u);
    goto loc_80522FD0;

loc_80522FD0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 131072;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r3 = (r3 + -32768);
    ctx->lr = 0x80522FECu;
    if constexpr (KnownRegArgsCpuCall<0x804D16C0u>(&func_804D16C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D16C0_46C = func_804D16C0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D16C0_46C);
        r4 = static_cast<uint32_t>(regargs_result_804D16C0_46C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D16C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = -855638016;
}

loc_80522FF0:
{
    r0 = MemoryHw::FlatRead32((r3 + 26676));
    r0 = (r0 & 1);
}

loc_80522FFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80522FF0;
    }
}

loc_80523000:
{
    r31 = -855638016;
    r0 = 0;
    MemoryHw::FlatWrite32((r31 + 26664), r0);
    r3 = -1275068416;
    r0 = -738197504;
    r4 = 4;
    MemoryHw::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r5 = 1;
    MemoryHw::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryHw::FlatRead32((r31 + 26664));
    r0 = (r0 & 1029);
}

loc_80523030:
{
    r0 = (r0 | 192);
    MemoryHw::FlatWrite32((r31 + 26664), r0);
    ctx->lr = 0x8052303Cu;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80522CE8_A11 = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_A11);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_A11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8052303C:
{
    r0 = MemoryHw::FlatRead32((r31 + 26676));
    r0 = (r0 & 1);
}

loc_80523044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052303C;
    }
}

loc_80523048:
{
    r3 = (r1 + 8);
    r4 = 4;
    r5 = 1;
    ctx->lr = 0x80523058u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80522CE8_E26 = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_E26);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_E26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = -855638016;
}

loc_8052305C:
{
    r0 = MemoryHw::FlatRead32((r3 + 26676));
    r0 = (r0 & 1);
}

loc_80523064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052305C;
    }
}

loc_80523068:
{
    r3 = -855638016;
    r0 = MemoryHw::FlatRead32((r3 + 26664));
    r0 = (r0 & 1029);
}

loc_80523074:
{
    MemoryHw::FlatWrite32((r3 + 26664), r0);
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80522FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80522FD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80522FD0 func_80522FD0 preserves=true fpr_mask=0x00000000
