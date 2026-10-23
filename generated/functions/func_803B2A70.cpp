#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033A984(CpuContext* ctx);
extern "C" uint64_t func_8033A984_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803A8DB0(CpuContext* ctx);
extern "C" uint32_t func_803A8DB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B2A70_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B2A70;

loc_803B2A70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x803B2A88u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_4F9 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_4F9);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_4F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B2A8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2B2C;
    }
}

loc_803B2A90:
{
    ctx->lr = 0x803B2A94u;
    if constexpr (KnownRegArgsCpuCall<0x803A8DB0u>(&func_803A8DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A8DB0_873 = func_803A8DB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8DB0_873;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A8DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_803B2A9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803B2B2C;
    }
}

loc_803B2AA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 280));
}

loc_803B2AA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B2AB8;
    }
}

loc_803B2AAC:
{
}

loc_803B2AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B2AEC;
    }
}

loc_803B2AB4:
{
    goto loc_803B2B2C;
}

loc_803B2AB8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = 0;
    // inline leaf 0x803AA304 (8 guest instruction(s))
    r0 = (r4 * 96);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 148));
    r3 = (r0 & 32);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x803AA304
}

loc_803B2AC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B2B2C;
    }
}

loc_803B2ACC:
{
    r0 = MemoryInline::FlatRead8((r31 + 234));
}

loc_803B2AD4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B2B2C;
    }
}

loc_803B2AD8:
{
    r0 = 60;
    MemoryInline::FlatWrite8((r31 + 281), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 280), static_cast<uint8_t>(r0));
    goto loc_803B2B2C;
}

loc_803B2AEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 234));
}

loc_803B2AF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803B2B04;
    }
}

loc_803B2AF8:
{
    r0 = 60;
    MemoryInline::FlatWrite8((r31 + 281), static_cast<uint8_t>(r0));
    goto loc_803B2B2C;
}

loc_803B2B04:
{
    r3 = MemoryInline::FlatRead8((r31 + 281));
}

loc_803B2B0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B2B24;
    }
}

loc_803B2B10:
{
    r3 = 8;
    ctx->lr = 0x803B2B18u;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033A984_1315 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_1315);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_1315 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 280), static_cast<uint8_t>(r0));
    goto loc_803B2B2C;
}

loc_803B2B24:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 281), static_cast<uint8_t>(r0));
}

loc_803B2B2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B2A70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B2A70_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B2A70 func_803B2A70 preserves=true fpr_mask=0x00000000
