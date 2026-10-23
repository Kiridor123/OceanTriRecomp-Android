#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80478470_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80478470;

loc_80478470:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x804795D0 (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x804795D0
    r0 = (r3 & 255);
    r31 = r3;
}

loc_8047849C:
{
    r30 = 0;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_804784AC;
    }
}

loc_804784A4:
{
}

loc_804784A8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(4))) {
        goto loc_804784B4;
    }
}

loc_804784AC:
{
    r3 = 0;
    goto loc_80478504;
}

loc_804784B4:
{
    ctx->lr = 0x804784B8u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_7CC = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_7CC);
        r4 = static_cast<uint32_t>(regargs_result_80479610_7CC >> 32);
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
    r3 = 0x80710000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r4 = (r4_rot_0 & 4080);
    r3 = (r3 + -3456);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r0 = (r3 + 196608);
    r3 = (r0 + r4);
    r6 = (r3 + -30496);
    r6_addr_0 = (r6 + r5);
    r4 = MemoryInline::FlatRead32(r6_addr_0);
}

loc_804784DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804784FC;
    }
}

loc_804784E0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = 0;
    r6_addr_1 = (r6 + r5);
    MemoryInline::FlatWrite32(r6_addr_1, r0);
    r0 = 1;
    r30 = (r4 + 8);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
}

loc_804784FC:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_E3F = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_E3F);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_E3F >> 32);
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
}

loc_80478504:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478470(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478470_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478470 func_80478470 preserves=true fpr_mask=0x00000000
