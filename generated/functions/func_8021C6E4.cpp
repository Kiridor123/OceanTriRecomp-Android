#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021C39C(CpuContext* ctx);
extern "C" uint64_t func_8021C39C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021C42C(CpuContext* ctx);
extern "C" uint64_t func_8021C42C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021C4BC(CpuContext* ctx);
extern "C" uint64_t func_8021C4BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021C6E4_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8021C6E4;

loc_8021C6E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 551));
    r0 = (r0 & 1);
}

loc_8021C704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C71C;
    }
}

loc_8021C708:
{
    r3 = (r3 + 36);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = (r1 + 8);
    ctx->lr = 0x8021C718u;
    if constexpr (KnownRegArgsCpuCall<0x8021C4BCu>(&func_8021C4BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021C4BC_704 = func_8021C4BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021C4BC_704);
        r4 = static_cast<uint32_t>(regargs_result_8021C4BC_704 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021C4BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8021C784;
}

loc_8021C71C:
{
    r6 = MemoryInline::FlatRead8((r31 + 550));
    r5 = (r31 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 546));
}

loc_8021C72C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8021C75C;
    }
}

loc_8021C730:
{
    r3 = (r3 + 36);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = (r31 + r0);
    r5 = MemoryInline::FlatRead16((r5 + 540));
    ctx->lr = 0x8021C748u;
    if constexpr (KnownRegArgsCpuCall<0x8021C39Cu>(&func_8021C39C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021C39C_CC4 = func_8021C39C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021C39C_CC4);
        r4 = static_cast<uint32_t>(regargs_result_8021C39C_CC4 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021C39Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r31 + 550));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 540));
    goto loc_8021C784;
}

loc_8021C75C:
{
    r3 = (r3 + 36);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r5 = (r31 + r0);
    r5 = MemoryInline::FlatRead16((r5 + 540));
    ctx->lr = 0x8021C774u;
    if constexpr (KnownRegArgsCpuCall<0x8021C42Cu>(&func_8021C42C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021C42C_1261 = func_8021C42C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021C42C_1261);
        r4 = static_cast<uint32_t>(regargs_result_8021C42C_1261 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8021C42Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r31 + 550));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 540));
}

loc_8021C784:
{
    r3 = (r3 & 65535);
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

extern "C" void func_8021C6E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021C6E4_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021C6E4 func_8021C6E4 preserves=true fpr_mask=0x00000000
