#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804C8DF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804C8DF0;

loc_804C8DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804C8E08:
{
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804C8E3C;
    }
}

loc_804C8E1C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C8E3C;
    }
}

loc_804C8E28:
{
    r4 = 47;
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_804C8EA8;
}

loc_804C8E3C:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_76A = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_76A);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_76A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = (r3 + -1);
}

loc_804C8E48:
{
    r0 = (r31 + 1);
    r3 = (r30 + r31);
    ctr = r0;
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_804C8EA8;
    }
}

loc_804C8E58:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804C8E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804C8E9C;
    }
}

loc_804C8E64:
{
}

loc_804C8E68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804C8E88;
    }
}

loc_804C8E6C:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FC94_C44 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_C44;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 0;
    r29_addr_1 = (r29 + r31);
    MemoryInline::FlatWrite8(r29_addr_1, static_cast<uint8_t>(r0));
    goto loc_804C8EA8;
}

loc_804C8E88:
{
    r3 = 47;
    r0 = 0;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    goto loc_804C8EA8;
}

loc_804C8E9C:
{
    r31 = (r31 + -1);
    r3 = (r3 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C8E58;
    }
}

loc_804C8EA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C8DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C8DF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C8DF0 func_804C8DF0 preserves=true fpr_mask=0x00000000
