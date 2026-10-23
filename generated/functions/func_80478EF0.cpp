#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80478EF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80478EF0;

loc_80478EF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r29 = r4;
    r31 = r5;
    // inline leaf 0x804795D0 (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x804795D0
}

loc_80478F18:
{
    r28 = r3;
    r30 = 0;
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_80478F28;
    }
}

loc_80478F24:
{
    r29 = 1;
}

loc_80478F28:
{
    r0 = (0 - r31);
    r0 = (r0 | r31);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r31 = (r29 & r0);
    ctx->lr = 0x80478F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_786 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_786);
        r4 = static_cast<uint32_t>(regargs_result_80479610_786 >> 32);
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
    r4 = 0x80710000u;
    r3 = 0x80000000u;
    r4 = (r4 + -3456);
    r5 = (r4 + 196608);
    r4 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r5 + -30664));
    r0 = MemoryInline::FlatRead32((r5 + -30660));
    r3 = (r0 - r3);
    r0 = (r4 - r3);
}

loc_80478F64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r29))) {
        goto loc_80478F6C;
    }
}

loc_80478F68:
{
    r4 = (r29 + r3);
}

loc_80478F6C:
{
}

loc_80478F70:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80478F80;
    }
}

loc_80478F74:
{
}

loc_80478F78:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_80478FA0;
    }
}

loc_80478F7C:
{
    goto loc_80478FC0;
}

loc_80478F80:
{
    r3 = 0x80710000u;
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r3 = (r3 + -3456);
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    MemoryInline::FlatWriteRam32((r3 + -30592), r31);
    MemoryInline::FlatWriteRam32((r3 + -30624), r4);
    goto loc_80478FC4;
}

loc_80478FA0:
{
    r3 = 0x80710000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r3 = (r3 + -3456);
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    MemoryInline::FlatWriteRam32((r3 + -30528), r31);
    MemoryInline::FlatWriteRam32((r3 + -30560), r4);
    goto loc_80478FC4;
}

loc_80478FC0:
{
    r30 = 1;
}

loc_80478FC4:
{
}

loc_80478FC8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80479020;
    }
}

loc_80478FCC:
{
}

loc_80478FD0:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80479020;
    }
}

loc_80478FD4:
{
    r3 = 0x80710000u;
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r4 = MemoryInline::FlatRead32((r3 + -30660));
}

loc_80478FE8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80479000;
    }
}

loc_80478FEC:
{
    r0 = MemoryInline::FlatRead32((r3 + -30664));
}

loc_80478FF4:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80479020;
    }
}

loc_80478FF8:
{
}

loc_80478FFC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80479020;
    }
}

loc_80479000:
{
    r3 = 0x80710000u;
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -30664));
    r0 = (r4 - r0);
    r0 = (r29 + r0);
    MemoryInline::FlatWriteRam32((r3 + -30660), r0);
    MemoryInline::FlatWriteRam32((r3 + -30664), r29);
}

loc_80479020:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1570 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1570);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1570 >> 32);
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
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478EF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80478EF0 func_80478EF0 preserves=true fpr_mask=0x00000000
