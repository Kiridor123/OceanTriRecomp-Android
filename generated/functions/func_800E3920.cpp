#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064150(CpuContext* ctx);
extern "C" uint32_t func_80064150_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006F368(CpuContext* ctx);
extern "C" uint32_t func_8006F368_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006F3A4(CpuContext* ctx);
extern "C" uint64_t func_8006F3A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800769A4(CpuContext* ctx);
extern "C" uint64_t func_800769A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800775F4(CpuContext* ctx);
extern "C" uint32_t func_800775F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8009549C(CpuContext* ctx);
extern "C" uint64_t func_8009549C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80095560(CpuContext* ctx);
extern "C" uint64_t func_80095560_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80095A1C(CpuContext* ctx);
extern "C" uint64_t func_80095A1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80095B40(CpuContext* ctx);
extern "C" uint64_t func_80095B40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800974D8(CpuContext* ctx);
extern "C" uint64_t func_800974D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8006F368_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E3920_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E3920;

loc_800E3920:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r4 = 0x80570000u;
    r5 = (r4 + 40);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r28 = 0;
    goto loc_800E3AAC;
}

loc_800E3968:
{
    r3 = r27;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->lr = 0x800E3984u;
    if constexpr (KnownRegArgsCpuCall<0x80064150u>(&func_80064150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80064150_F82 = func_80064150_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064150_F82;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    // inline leaf 0x8005AA94 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8005AA94
}

loc_800E3990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E3AA8;
    }
}

loc_800E3994:
{
    r3 = (r1 + 32);
    ctx->lr = 0x800E399Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F3A4u>(&func_8006F3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8006F3A4_13E6 = func_8006F3A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3A4_13E6);
        r4 = static_cast<uint32_t>(regargs_result_8006F3A4_13E6 >> 32);
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
        InvokeDirectCpu<0x8006F3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 12);
    ctx->lr = 0x800E39ACu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8006F368u) && KnownTranslatedCpuCall<0x8006F368u>::kAvailable && !KnownTranslatedCpuCall<0x8006F368u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8006F368u>()) {
        const auto state_free_result_8006F368_1883 = func_8006F368_statefree(r1, r3, r4, 0x800E39ACu);
        r0 = static_cast<uint32_t>(state_free_result_8006F368_1883[0]);
        r1 = static_cast<uint32_t>(state_free_result_8006F368_1883[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8006F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 32);
    ctx->lr = 0x800E39B4u;
    if constexpr (KnownRegArgsCpuCall<0x800974D8u>(&func_800974D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800974D8_1C56 = func_800974D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800974D8_1C56);
        r4 = static_cast<uint32_t>(regargs_result_800974D8_1C56 >> 32);
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
        InvokeDirectCpu<0x800974D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
    r3 = (r1 + 28);
    // inline leaf 0x8006E388 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8006E388
}

loc_800E39C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E3A38;
    }
}

loc_800E39C8:
{
    r29 = 0;
    goto loc_800E3A30;
}

loc_800E39D0:
{
    r3 = (r1 + 28);
    r4 = r29;
    r5 = (r1 + 36);
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x800E39E8u;
    if constexpr (KnownRegArgsCpuCall<0x80095560u>(&func_80095560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80095560_22BB = func_80095560_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095560_22BB);
        r4 = static_cast<uint32_t>(regargs_result_80095560_22BB >> 32);
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
        InvokeDirectCpu<0x80095560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r5 = MemoryInline::FlatRead32((r1 + 36));
}

loc_800E39F0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(3))) {
        goto loc_800E3A00;
    }
}

loc_800E39F4:
{
}

loc_800E39F8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(4))) {
        goto loc_800E3A18;
    }
}

loc_800E39FC:
{
    goto loc_800E3A2C;
}

loc_800E3A00:
{
    r3 = (r1 + 28);
    r4 = r29;
    r6 = -1;
    r7 = 1;
    ctx->lr = 0x800E3A14u;
    if constexpr (KnownRegArgsCpuCall<0x8009549Cu>(&func_8009549C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009549C_287E = func_8009549C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009549C_287E);
        r4 = static_cast<uint32_t>(regargs_result_8009549C_287E >> 32);
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
        InvokeDirectCpu<0x8009549Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_800E3A2C;
}

loc_800E3A18:
{
    r3 = (r1 + 28);
    r4 = r29;
    r6 = -1;
    r7 = 1;
    ctx->lr = 0x800E3A2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8009549Cu>(&func_8009549C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009549C_2CE8 = func_8009549C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009549C_2CE8);
        r4 = static_cast<uint32_t>(regargs_result_8009549C_2CE8 >> 32);
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
        InvokeDirectCpu<0x8009549Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_800E3A2C:
{
    r29 = (r29 + 1);
}

loc_800E3A30:
{
}

loc_800E3A34:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_800E39D0;
    }
}

loc_800E3A38:
{
    r3 = (r1 + 32);
    ctx->lr = 0x800E3A40u;
    if constexpr (KnownRegArgsCpuCall<0x800769A4u>(&func_800769A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800769A4_31D4 = func_800769A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769A4_31D4);
        r4 = static_cast<uint32_t>(regargs_result_800769A4_31D4 >> 32);
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
        InvokeDirectCpu<0x800769A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x800E3A50u;
    if constexpr (KnownRegArgsCpuCall<0x800775F4u>(&func_800775F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800775F4_35F4 = func_800775F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800775F4_35F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800775F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 24);
    // inline leaf 0x800769D8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x800769D8
}

loc_800E3A5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E3AA8;
    }
}

loc_800E3A60:
{
    r29 = 0;
    r31 = (r1 + 40);
}

loc_800E3A68:
{
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32(r31);
    r5 = (r1 + 20);
    r6 = 0;
    ctx->lr = 0x800E3A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80095B40u>(&func_80095B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80095B40_3AC7 = func_80095B40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095B40_3AC7);
        r4 = static_cast<uint32_t>(regargs_result_80095B40_3AC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80095B40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800E3A84:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_800E3A98;
    }
}

loc_800E3A88:
{
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32(r31);
    r6 = 1;
    ctx->lr = 0x800E3A98u;
    if constexpr (KnownRegArgsCpuCall<0x80095A1Cu>(&func_80095A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80095A1C_3F2E = func_80095A1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095A1C_3F2E);
        r4 = static_cast<uint32_t>(regargs_result_80095A1C_3F2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80095A1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800E3A98:
{
    r31 = (r31 + 4);
    r29 = (r29 + 1);
}

loc_800E3AA4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(3))) {
        goto loc_800E3A68;
    }
}

loc_800E3AA8:
{
    r28 = (r28 + 1);
}

loc_800E3AAC:
{
}

loc_800E3AB0:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r30))) {
        goto loc_800E3968;
    }
}

loc_800E3AB4:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E3920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E3920_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E3920 func_800E3920 preserves=true fpr_mask=0x00000000
