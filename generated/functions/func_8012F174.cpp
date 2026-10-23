#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8012F174_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8012F174;

loc_8012F174:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 2072));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012F190:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012F19C;
    }
}

loc_8012F194:
{
    r3 = 0;
    goto loc_8012F228;
}

loc_8012F19C:
{
    r0 = (r4 & 65535);
}

loc_8012F1A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8012F1B4;
    }
}

loc_8012F1A8:
{
}

loc_8012F1AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8012F1E8;
    }
}

loc_8012F1B0:
{
    goto loc_8012F224;
}

loc_8012F1B4:
{
    r4 = 32;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8012F1C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012F1E0;
    }
}

loc_8012F1C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_8012F1CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012F1E0;
    }
}

loc_8012F1D0:
{
    r3 = r31;
    ctx->lr = 0x8012F1D8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D090_9DB = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_9DB);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_9DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8012F1DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012F224;
    }
}

loc_8012F1E0:
{
    r3 = 0;
    goto loc_8012F228;
}

loc_8012F1E8:
{
    r4 = 64;
    // inline leaf 0x8011E6A4 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r4 & r0);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8011E6A4
}

loc_8012F1F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012F21C;
    }
}

loc_8012F1F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_8012F200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F20C;
    }
}

loc_8012F204:
{
}

loc_8012F208:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012F21C;
    }
}

loc_8012F20C:
{
    r3 = r31;
    ctx->lr = 0x8012F214u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D090_113F = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_113F);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_113F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8012F218:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012F224;
    }
}

loc_8012F21C:
{
    r3 = 0;
    goto loc_8012F228;
}

loc_8012F224:
{
    r3 = 1;
}

loc_8012F228:
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

extern "C" void func_8012F174(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012F174_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F174 func_8012F174 preserves=true fpr_mask=0x00000000
