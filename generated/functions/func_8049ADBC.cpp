#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8049ADBC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8049ADBC;

loc_8049ADBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 36));
    r5 = 0;
}

loc_8049ADC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049ADFC;
    }
}

loc_8049ADCC:
{
    r4 = MemoryInline::FlatRead32((r3 + 108));
}

loc_8049ADD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8049ADFC;
    }
}

loc_8049ADD8:
{
    r0 = MemoryInline::FlatRead8((r4 + 113));
}

loc_8049ADE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049ADFC;
    }
}

loc_8049ADE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8049ADEC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8000))) {
        goto loc_8049ADFC;
    }
}

loc_8049ADF0:
{
    r0 = MemoryInline::FlatRead16((r3 + 32));
}

loc_8049ADF8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(16))) {
        goto loc_8049AE00;
    }
}

loc_8049ADFC:
{
    r5 = 1;
}

loc_8049AE00:
{
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_8049AE08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_8049AE14;
    }
}

loc_8049AE0C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049AE14:
{
}

loc_8049AE18:
{
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r5));
    r3 = 196608;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8049AE24:
{
    r3 = 65536;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049ADBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049ADBC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8049ADBC func_8049ADBC preserves=true fpr_mask=0x00000000
