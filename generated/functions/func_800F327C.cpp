#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4F5C(CpuContext* ctx);
extern "C" uint64_t func_800E4F5C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800F327C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800F327Cu);
    goto loc_800F327C;

loc_800F327C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F3298:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800F3338;
    }
}

loc_800F329C:
{
    ctx->lr = 0x800F32A0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800F32A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800F3338;
    }
}

loc_800F32A8:
{
    r27 = 0;
    r29 = r28;
    r30 = 0;
    r31 = 4;
}

loc_800F32B8:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r3 = r27;
    // inline leaf 0x800F0540 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + -26715));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x800F0540
}

loc_800F32CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F32E0;
    }
}

loc_800F32D0:
{
    r3 = r27;
    ctx->lr = 0x800F32D8u;
    if constexpr (KnownRegArgsCpuCall<0x800E4F5Cu>(&func_800E4F5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4F5C_9D6 = func_800E4F5C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4F5C_9D6);
        r4 = static_cast<uint32_t>(regargs_result_800E4F5C_9D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4F5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r29, r3);
    goto loc_800F32E4;
}

loc_800F32E0:
{
    MemoryInline::FlatWrite32(r29, r30);
}

loc_800F32E4:
{
    r3 = (r28 + r27);
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_800F32F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800F3300;
    }
}

loc_800F32F4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F32FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3328;
    }
}

loc_800F3300:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_800F3314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F3328;
    }
}

loc_800F3318:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_800F3320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F3328;
    }
}

loc_800F3324:
{
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r31));
}

loc_800F3328:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_800F3334:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_800F32B8;
    }
}

loc_800F3338:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F327C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F327C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F327C func_800F327C preserves=true fpr_mask=0x00000000
