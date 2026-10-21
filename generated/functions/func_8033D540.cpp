#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033CF7C(CpuContext* ctx);
extern "C" uint64_t func_8033CF7C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033D540_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8033D540u);
    goto loc_8033D540;

loc_8033D540:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    ctx->lr = 0x8033D55Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033CF7Cu>(&func_8033CF7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033CF7C_5BA = func_8033CF7C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8033CF7C_5BA);
        r4 = static_cast<uint32_t>(regargs_result_8033CF7C_5BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8033CF7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 132), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 136), r0);
    r27 = 0;
    r30 = 1;
    goto loc_8033D5CC;
}

loc_8033D580:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r28 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r28 + 8));
    // inline leaf 0x802D77A0 (6 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 19224);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x802D77A0
    r29 = r3;
    r3 = MemoryInline::FlatRead8((r28 + 8));
    // inline leaf 0x8033C3D0 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = (r3 + 20864);
    // end of inlined leaf 0x8033C3D0
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8033D5AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8033D5C8;
    }
}

loc_8033D5B0:
{
    r3 = MemoryInline::FlatRead16((r31 + 114));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
}

loc_8033D5C8:
{
    r27 = (r27 + 1);
}

loc_8033D5CC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = MemoryInline::FlatRead16((r31 + 118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033D5D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8033D580;
    }
}

loc_8033D5DC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033D540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033D540_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021DB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033D540 func_8033D540 preserves=true fpr_mask=0x00000000
