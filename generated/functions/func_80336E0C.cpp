#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013371C(CpuContext* ctx);
extern "C" uint64_t func_8013371C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80133830(CpuContext* ctx);
extern "C" uint64_t func_80133830_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013383C(CpuContext* ctx);
extern "C" uint64_t func_8013383C_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133848(CpuContext* ctx);
extern "C" uint64_t func_80133848_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133854(CpuContext* ctx);
extern "C" uint64_t func_80133854_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013398C(CpuContext* ctx);
extern "C" uint64_t func_8013398C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80336E0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80336E0C;

loc_80336E0C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (r0 & 1);
}

loc_80336E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336E3C;
    }
}

loc_80336E38:
{
    // inline leaf 0x80133678 (9 guest instruction(s))
}

loc_inl0_0x80133678:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_inl0_0x80133680:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80133684:
{
    r0 = 18000;
    MemoryInline::FlatWrite16((r3 + 2064), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2798));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 2798), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80133678;
}

loc_inl0_return:
{
}

loc_inl0_cont_80133678:
{
    // end of inlined leaf 0x80133678
}

loc_80336E3C:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 2);
}

loc_80336E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336E54;
    }
}

loc_80336E4C:
{
    r3 = r31;
    ctx->lr = 0x80336E54u;
    if constexpr (KnownRegArgsCpuCall<0x8013371Cu>(&func_8013371C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013371C_B06 = func_8013371C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013371C_B06);
        r4 = static_cast<uint32_t>(regargs_result_8013371C_B06 >> 32);
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
        InvokeDirectCpu<0x8013371Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336E54:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 4);
}

loc_80336E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336E6C;
    }
}

loc_80336E64:
{
    r3 = r31;
    ctx->lr = 0x80336E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80133830u>(&func_80133830)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80133830_F73 = func_80133830_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133830_F73);
        r4 = static_cast<uint32_t>(regargs_result_80133830_F73 >> 32);
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
        InvokeDirectCpu<0x80133830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336E6C:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 16);
}

loc_80336E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336E84;
    }
}

loc_80336E7C:
{
    r3 = r31;
    ctx->lr = 0x80336E84u;
    if constexpr (KnownRegArgsCpuCall<0x8013383Cu>(&func_8013383C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013383C_13DD = func_8013383C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8013383C_13DD);
        r4 = static_cast<uint32_t>(regargs_result_8013383C_13DD >> 32);
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
        InvokeDirectCpu<0x8013383Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336E84:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 32);
}

loc_80336E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336E9C;
    }
}

loc_80336E94:
{
    r3 = r31;
    ctx->lr = 0x80336E9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80133848u>(&func_80133848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80133848_184A = func_80133848_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133848_184A);
        r4 = static_cast<uint32_t>(regargs_result_80133848_184A >> 32);
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
        InvokeDirectCpu<0x80133848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336E9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 128);
}

loc_80336EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336EB4;
    }
}

loc_80336EAC:
{
    r3 = r31;
    ctx->lr = 0x80336EB4u;
    if constexpr (KnownRegArgsCpuCall<0x80133854u>(&func_80133854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80133854_1CB8 = func_80133854_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133854_1CB8);
        r4 = static_cast<uint32_t>(regargs_result_80133854_1CB8 >> 32);
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
        InvokeDirectCpu<0x80133854u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336EB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 8);
}

loc_80336EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336ECC;
    }
}

loc_80336EC4:
{
    r3 = r31;
    ctx->lr = 0x80336ECCu;
    if constexpr (KnownRegArgsCpuCall<0x8013398Cu>(&func_8013398C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013398C_2109 = func_8013398C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013398C_2109);
        r4 = static_cast<uint32_t>(regargs_result_8013398C_2109 >> 32);
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
        InvokeDirectCpu<0x8013398Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80336ECC:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 & 64);
}

loc_80336ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80336EE4;
    }
}

loc_80336EDC:
{
    r3 = r31;
    // inline leaf 0x801339EC (9 guest instruction(s))
}

loc_inl1_0x801339EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_inl1_0x801339F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801339F8:
{
    r0 = 7200;
    MemoryInline::FlatWrite16((r3 + 2380), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2798));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 2798), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_801339EC;
}

loc_inl1_return:
{
}

loc_inl1_cont_801339EC:
{
    // end of inlined leaf 0x801339EC
}

loc_80336EE4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2798), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80336E0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80336E0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80336E0C func_80336E0C preserves=true fpr_mask=0x00000000
