#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033ACDC(CpuContext* ctx);
extern "C" uint64_t func_8033ACDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031C08C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8031C08Cu);
    goto loc_8031C08C;

loc_8031C08C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r5));
    r0 = (r4 & 65535);
}

loc_8031C0B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8031C0C0;
    }
}

loc_8031C0B4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8031C0D4;
}

loc_8031C0C0:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    r4 = (r5 & 65535);
    r5 = 0;
    ctx->lr = 0x8031C0D0u;
    if constexpr (KnownRegArgsCpuCall<0x8033ACDCu>(&func_8033ACDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033ACDC_59D = func_8033ACDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033ACDC_59D);
        r4 = static_cast<uint32_t>(regargs_result_8033ACDC_59D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033ACDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32(r31, r3);
}

loc_8031C0D4:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8031C0E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C104;
    }
}

loc_8031C0EC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r4));
    r3 = 0;
    goto loc_8031C108;
}

loc_8031C104:
{
    r3 = 1;
}

loc_8031C108:
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

extern "C" void func_8031C08C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031C08C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031C08C func_8031C08C preserves=true fpr_mask=0x00000000
