#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091E60(CpuContext* ctx);
extern "C" uint64_t func_80091E60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80092034(CpuContext* ctx);
extern "C" uint64_t func_80092034_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800941C8(CpuContext* ctx);
extern "C" uint64_t func_800941C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80096100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80096100;

loc_80096100:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    ctx->lr = 0x80096128u;
    if constexpr (KnownRegArgsCpuCall<0x800941C8u>(&func_800941C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800941C8_737 = func_800941C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800941C8_737);
        r4 = static_cast<uint32_t>(regargs_result_800941C8_737 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800941C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r30 = (r3 + 10);
    r3 = r30;
    r4 = 65536;
    r4 = (r4 + -29);
    ctx->lr = 0x8009613Cu;
    if constexpr (KnownRegArgsCpuCall<0x80092034u>(&func_80092034)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092034_B46 = func_80092034_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80092034_B46);
        r4 = static_cast<uint32_t>(regargs_result_80092034_B46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80092034u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 5);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(12));
    r8 = (r8_rot_0 & -4096);
    r0 = (r31 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r7 = (r7_rot_0 & -2048);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
    r6 = (r6_rot_0 & -256);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(5));
    r5 = (r5_rot_0 & -32);
    r0 = (r31 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r0 = 0;
}

loc_80096174:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80096180;
    }
}

loc_80096178:
{
}

loc_8009617C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_80096184;
    }
}

loc_80096180:
{
    r0 = 1;
}

loc_80096184:
{
    r0 = (r4 | r0);
    r0 = (r5 | r0);
    r0 = (r6 | r0);
    r0 = (r7 | r0);
    r0 = (r8 | r0);
    r4 = (r0 | 1090519040);
    ctx->lr = 0x800961A0u;
    if constexpr (KnownRegArgsCpuCall<0x80091E60u>(&func_80091E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091E60_13D5 = func_80091E60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80091E60_13D5);
        r4 = static_cast<uint32_t>(regargs_result_80091E60_13D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096100 func_80096100 preserves=true fpr_mask=0x00000000
