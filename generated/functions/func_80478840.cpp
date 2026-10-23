#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804787A0(CpuContext* ctx);
extern "C" uint32_t func_804787A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80478840_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80478840;

loc_80478840:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    ctx->lr = 0x80478860u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_4D1 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_4D1);
        r4 = static_cast<uint32_t>(regargs_result_80479610_4D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32(r30);
}

loc_80478868:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r3))) {
        goto loc_8047887C;
    }
}

loc_8047886C:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_8A4 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_8A4);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_8A4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    ctx->lr = 0x80478878u;
    if constexpr (KnownRegArgsCpuCall<0x804787A0u>(&func_804787A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804787A0_BC7 = func_804787A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804787A0_BC7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804787A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_804788EC;
}

loc_8047887C:
{
    r5 = (r31 + -8);
    r3 = (r3 + -8);
    goto loc_804788DC;
}

loc_80478888:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80478890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_804788D8;
    }
}

loc_80478894:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_804788A4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_804788B0;
    }
}

loc_804788A8:
{
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_804788B0:
{
    r4 = MemoryInline::FlatRead16((r30 + 8));
    r3 = 0;
    r0 = 1;
    r4 = (r4 + -1);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_125F = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_125F);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_125F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    goto loc_804788EC;
}

loc_804788D8:
{
    r3 = r0;
}

loc_804788DC:
{
}

loc_804788E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80478888;
    }
}

loc_804788E4:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1635 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1635);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1635 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
}

loc_804788EC:
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

extern "C" void func_80478840(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478840_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478840 func_80478840 preserves=true fpr_mask=0x00000000
