#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EDCB0(CpuContext* ctx);
extern "C" uint64_t func_804EDCB0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804EFF30(CpuContext* ctx);
extern "C" uint64_t func_804EFF30_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_8081CD70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081CD70;

loc_8081CD70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = r27;
    // inline leaf 0x8081DD30 (7 guest instruction(s))
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8081DD30
}

loc_8081CD9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081CE14;
    }
}

loc_8081CDA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 66));
}

loc_8081CDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081CF90;
    }
}

loc_8081CDAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_8081CDB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081CDD0;
    }
}

loc_8081CDB8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 60), r4);
    MemoryInline::FlatWrite32((r31 + 56), r3);
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r0));
    goto loc_8081CF90;
}

loc_8081CDD0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = 0x80000000u;
    r3 = 274857984;
    r0 = MemoryInline::FlatRead32((r5 + 248));
    r3 = (r3 + 19923);
    r5 = MemoryInline::FlatRead32((r31 + 60));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r3 = (r4 - r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8081CE00:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_8081CF90;
    }
}

loc_8081CE04:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r0));
    goto loc_8081CF90;
}

loc_8081CE14:
{
    r0 = MemoryInline::FlatRead8((r31 + 66));
}

loc_8081CE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081CEEC;
    }
}

loc_8081CE20:
{
    r28 = 0;
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = 0x80000000u;
    r30 = 274857984;
    r0 = MemoryInline::FlatRead32((r29 + 248));
    r3 = 458752;
    r7 = MemoryInline::FlatRead32((r31 + 52));
    r6 = (r30 + 19923);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    r0 = (r3 + 21248);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r5)) >> 32));
    r4 = (r4 - r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r3 = (r3_rot_1 & 67108863);
    r3 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_8081CE60:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8081CEEC;
    }
}

loc_8081CE64:
{
    r27 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r28));
    r3 = r27;
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r28));
    ctx->lr = 0x8081CE78u;
    if constexpr (KnownRegArgsCpuCall<0x804EFF30u>(&func_804EFF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EFF30_17F8 = func_804EFF30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EFF30_17F8);
        r4 = static_cast<uint32_t>(regargs_result_804EFF30_17F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFF30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081CE7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081CF90;
    }
}

loc_8081CE80:
{
    r3 = r27;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x8081CE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804EFF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r0 = (r27 * 48);
    r3 = 0x80870000u;
    r4 = r27;
    r3 = (r3 + -32544);
    r27 = (r3 + r0);
    r3 = r27;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r3 = r27;
    ctx->lr = 0x8081CEB4u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_1EBD = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_1EBD);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_1EBD >> 32);
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
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r29 + 248));
    r7 = 0x80820000u;
    r4 = (r30 + 19923);
    r3 = r27;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    r7 = (r7 + -14496);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_4 & 67108863);
    r6 = (r0 * 1000);
    ctx->lr = 0x8081CEE0u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_804CBD80_24BC = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_24BC);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_24BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 65), static_cast<uint8_t>(r0));
    goto loc_8081CF90;
}

loc_8081CEEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 65));
}

loc_8081CEF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081CF90;
    }
}

loc_8081CEF8:
{
    r3 = r27;
    ctx->lr = 0x8081CF00u;
    if constexpr (KnownRegArgsCpuCall<0x804EDCB0u>(&func_804EDCB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EDCB0_2A46 = func_804EDCB0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EDCB0_2A46);
        r4 = static_cast<uint32_t>(regargs_result_804EDCB0_2A46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EDCB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8081CF08:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(85))) {
        goto loc_8081CF90;
    }
}

loc_8081CF0C:
{
    r27 = MemoryInline::FlatRead32(r31);
    r3 = r27;
    ctx->lr = 0x8081CF18u;
    if constexpr (KnownRegArgsCpuCall<0x804EFF30u>(&func_804EFF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EFF30_2E60 = func_804EFF30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EFF30_2E60);
        r4 = static_cast<uint32_t>(regargs_result_804EFF30_2E60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFF30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081CF1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081CF90;
    }
}

loc_8081CF20:
{
    r3 = r27;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x8081CF30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804EFF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r0 = (r27 * 48);
    r3 = 0x80870000u;
    r4 = r27;
    r3 = (r3 + -32544);
    r27 = (r3 + r0);
    r3 = r27;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r3 = r27;
    ctx->lr = 0x8081CF54u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_3525 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_3525);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_3525 >> 32);
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
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = 0x80000000u;
    r7 = 0x80820000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -14496);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
    r3 = r27;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_6 & 67108863);
    r6 = (r0 * 1000);
    ctx->lr = 0x8081CF88u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_804CBD80_3B4E = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_3B4E);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_3B4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 65), static_cast<uint8_t>(r0));
}

loc_8081CF90:
{
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
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081CD70 func_8081CD70 preserves=true fpr_mask=0x00000000
