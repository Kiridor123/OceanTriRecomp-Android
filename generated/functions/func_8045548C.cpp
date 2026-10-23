#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804517E4(CpuContext* ctx);
extern "C" uint64_t func_804517E4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804550C8(CpuContext* ctx);
extern "C" uint64_t func_804550C8_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80455190(CpuContext* ctx);
extern "C" uint64_t func_80455190_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045548C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8045548C;

loc_8045548C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 776));
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804554B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(92))) {
        goto loc_80455508;
    }
}

loc_804554B4:
{
}

loc_804554B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(60))) {
        goto loc_80455508;
    }
}

loc_804554BC:
{
    r3 = MemoryInline::FlatRead32((r31 + 776));
    if constexpr (KnownRegArgsCpuCall<0x804517E4u>(&func_804517E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804517E4_6BE = func_804517E4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804517E4_6BE);
        r4 = static_cast<uint32_t>(regargs_result_804517E4_6BE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804517E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804554C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80455508;
    }
}

loc_804554CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 776));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804554D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(60))) {
        goto loc_80455508;
    }
}

loc_804554DC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 776), r0);
    r3 = r31;
    ctx->lr = 0x804554ECu;
    if constexpr (KnownRegArgsCpuCall<0x804550C8u>(&func_804550C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804550C8_B42 = func_804550C8_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_804550C8_B42);
        r4 = static_cast<uint32_t>(regargs_result_804550C8_B42 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804550C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    ctx->lr = 0x804554F4u;
    if constexpr (KnownRegArgsCpuCall<0x80455190u>(&func_80455190)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80455190_EA8 = func_80455190_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80455190_EA8);
        r4 = static_cast<uint32_t>(regargs_result_80455190_EA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80455190u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r31 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 392);
}

loc_80455500:
{
}

loc_80455504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804554BC;
    }
}

loc_80455508:
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

extern "C" void func_8045548C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045548C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045548C func_8045548C preserves=true fpr_mask=0x00000000
