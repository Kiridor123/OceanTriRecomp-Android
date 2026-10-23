#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BB8A0(CpuContext* ctx);
extern "C" uint64_t func_804BB8A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804BD6F0(CpuContext* ctx);
extern "C" uint64_t func_804BD6F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BDC20(CpuContext* ctx);
extern "C" uint64_t func_804BDC20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804BBDD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804BBDD0;

loc_804BBDD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r13 + -15316));
}

loc_804BBDE8:
{
    r30 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BBE70;
    }
}

loc_804BBDF8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15316), r0);
    ctx->lr = 0x804BBE04u;
    if constexpr (KnownRegArgsCpuCall<0x804BB8A0u>(&func_804BB8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804BB8A0_771 = func_804BB8A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804BB8A0_771);
        r4 = static_cast<uint32_t>(regargs_result_804BB8A0_771 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804BB8A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    // inline leaf 0x804BB970 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15348));
    // end of inlined leaf 0x804BB970
    r29 = r3;
    r31 = (r3 + 4096);
    // inline leaf 0x804BB960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15344));
    // end of inlined leaf 0x804BB960
}

loc_804BBE18:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r3))) {
        goto loc_804BBE24;
    }
}

loc_804BBE1C:
{
    r30 = -22;
    goto loc_804BBE70;
}

loc_804BBE24:
{
    r3 = r29;
    r4 = 4096;
    ctx->lr = 0x804BBE30u;
    if constexpr (KnownRegArgsCpuCall<0x804BD6F0u>(&func_804BD6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804BD6F0_C7F = func_804BD6F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BD6F0_C7F);
        r4 = static_cast<uint32_t>(regargs_result_804BD6F0_C7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804BD6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r13 + -20332), r3);
    r3 = r31;
    // inline leaf 0x804BB980 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -15348), r3);
    // end of inlined leaf 0x804BB980
    r4 = 0x804C0000u;
    r3 = 27;
    r4 = (r4 + -17376);
    // inline leaf 0x804D1360 (5 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r13 + -15032));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_1);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r4);
    // end of inlined leaf 0x804D1360
    r3 = 16;
    ctx->lr = 0x804BBE54u;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_1277 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_1277);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_1277 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    r4 = 56;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    if constexpr (KnownRegArgsCpuCall<0x804BDC20u>(&func_804BDC20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804BDC20_1619 = func_804BDC20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804BDC20_1619);
        r4 = static_cast<uint32_t>(regargs_result_804BDC20_1619 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804BDC20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80750000u;
    r3 = (r3 + -26608);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
}

loc_804BBE70:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BBDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BBDD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BBDD0 func_804BBDD0 preserves=true fpr_mask=0x00000000
