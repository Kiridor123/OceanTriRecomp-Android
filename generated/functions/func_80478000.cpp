#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x80478000u);
    goto loc_80478000;

loc_80478000:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80710000u;
}

loc_80478010:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -3456);
    r31 = r3;
    r30 = (r4 + 84);
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(9))) {
        goto loc_80478034;
    }
}

loc_8047802C:
{
    r3 = 0;
    goto loc_804780D0;
}

loc_80478034:
{
    ctx->lr = 0x80478038u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80479610_62D = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_62D);
        r4 = static_cast<uint32_t>(regargs_result_80479610_62D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r31 = (r31_rot_1 & 4080);
    r0 = (r30 + 196608);
    r4 = (r0 + r31);
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = MemoryInline::FlatRead16((r4 + -30314));
}

loc_80478050:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804780BC;
    }
}

loc_80478054:
{
    r31 = MemoryInline::FlatRead32((r4 + -30324));
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + -30324), r0);
}

loc_80478064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80478070;
    }
}

loc_80478068:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + -30320), r0);
}

loc_80478070:
{
    r3 = MemoryInline::FlatRead16((r4 + -30312));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -30312), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + -30310));
}

loc_80478088:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80478094;
    }
}

loc_8047808C:
{
    r0 = MemoryInline::FlatRead16((r4 + -30312));
    MemoryInline::FlatWrite16((r4 + -30310), static_cast<uint16_t>(r0));
}

loc_80478094:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804795E0_DDD = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_DDD);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_DDD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x804795D0 (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x804795D0
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    r4 = 1;
    r0 = 0;
    r3 = (r31 + 8);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_804780D0;
}

loc_804780BC:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804795E0_1221 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1221);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1221 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r30 + 196608);
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead16((r3 + -30316));
    ctx->lr = 0x804780D0u;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80477E60_1533 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_1533);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_1533 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804780D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478000_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000DB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80478000 func_80478000 preserves=true fpr_mask=0x00000000
