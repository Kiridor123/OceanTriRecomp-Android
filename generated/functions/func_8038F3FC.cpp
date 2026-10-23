#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8038F3A8(CpuContext* ctx);
extern "C" uint64_t func_8038F3A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8038F3FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8038F3FC;

loc_8038F3FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r3 & 65535);
    r4 = (r4 & 65535);
    ctx->lr = 0x8038F418u;
    if constexpr (KnownRegArgsCpuCall<0x8038F3A8u>(&func_8038F3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8038F3A8_494 = func_8038F3A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8038F3A8_494);
        r4 = static_cast<uint32_t>(regargs_result_8038F3A8_494 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8038F3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8038F424:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8038F458;
    }
}

loc_8038F428:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r6 = (r31 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & 536870911);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 20844));
    r3 = 1;
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r5 + 20844), static_cast<uint8_t>(r0));
    goto loc_8038F484;
}

loc_8038F458:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r6 = (r31 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 21084));
    r3 = 1;
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r5 + 21084), static_cast<uint8_t>(r0));
}

loc_8038F484:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038F3FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038F3FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8038F3FC func_8038F3FC preserves=true fpr_mask=0x00000000
