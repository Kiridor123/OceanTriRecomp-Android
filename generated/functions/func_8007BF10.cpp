#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A9B4(CpuContext* ctx);
extern "C" uint64_t func_8005A9B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F1BC(CpuContext* ctx);
extern "C" uint64_t func_8006F1BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F2FC(CpuContext* ctx);
extern "C" uint64_t func_8006F2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F3D8(CpuContext* ctx);
extern "C" uint64_t func_8006F3D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F480(CpuContext* ctx);
extern "C" uint64_t func_8006F480_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F520(CpuContext* ctx);
extern "C" uint64_t func_8006F520_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076734(CpuContext* ctx);
extern "C" uint64_t func_80076734_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800767F8(CpuContext* ctx);
extern "C" uint64_t func_800767F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800768C0(CpuContext* ctx);
extern "C" uint64_t func_800768C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80076968(CpuContext* ctx);
extern "C" uint32_t func_80076968_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800769EC(CpuContext* ctx);
extern "C" uint64_t func_800769EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078414(CpuContext* ctx);
extern "C" uint32_t func_80078414_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078450(CpuContext* ctx);
extern "C" uint64_t func_80078450_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800784BC(CpuContext* ctx);
extern "C" uint32_t func_800784BC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800784F8(CpuContext* ctx);
extern "C" uint32_t func_800784F8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078534(CpuContext* ctx);
extern "C" uint32_t func_80078534_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078570(CpuContext* ctx);
extern "C" uint32_t func_80078570_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800785AC(CpuContext* ctx);
extern "C" uint32_t func_800785AC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800785E8(CpuContext* ctx);
extern "C" uint32_t func_800785E8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078624(CpuContext* ctx);
extern "C" uint64_t func_80078624_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078678(CpuContext* ctx);
extern "C" uint32_t func_80078678_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800786B4(CpuContext* ctx);
extern "C" uint32_t func_800786B4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8007BF10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8007BF10;

loc_8007BF10:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r3 + 8);
    r4 = 0;
    ctx->lr = 0x8007BF44u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F520_10C2 = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_10C2);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_10C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 12);
    r4 = 0;
    ctx->lr = 0x8007BF50u;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F480_13EE = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_13EE);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_13EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 16);
    r4 = 0;
    ctx->lr = 0x8007BF5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F3D8_171A = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_171A);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_171A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 20);
    r4 = 0;
    ctx->lr = 0x8007BF68u;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A9B4_1A46 = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_1A46);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_1A46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 24);
    r4 = 0;
    ctx->lr = 0x8007BF74u;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800768C0_1D72 = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_1D72);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_1D72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 28);
    r4 = 0;
    ctx->lr = 0x8007BF80u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769EC_209E = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_209E);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_209E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 32);
    r4 = 0;
    ctx->lr = 0x8007BF8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767F8_23CA = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_23CA);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_23CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 36);
    r4 = 0;
    ctx->lr = 0x8007BF98u;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F1BC_26F6 = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_26F6);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_26F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 40);
    r4 = 0;
    ctx->lr = 0x8007BFA4u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F2FC_2A22 = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_2A22);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_2A22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 44);
    r4 = 0;
    ctx->lr = 0x8007BFB0u;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076734_2D4E = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_2D4E);
        r4 = static_cast<uint32_t>(regargs_result_80076734_2D4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 48);
    r4 = 0;
    ctx->lr = 0x8007BFBCu;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078450_307A = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_307A);
        r4 = static_cast<uint32_t>(regargs_result_80078450_307A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = 0;
}

loc_8007BFC4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8007BFF8;
    }
}

loc_8007BFC8:
{
    r3 = r30;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 140), r3);
    r3 = (r1 + 140);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 144), r3);
    r3 = (r1 + 144);
    // inline leaf 0x8005AA94 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8005AA94
}

loc_8007BFF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007BFF8;
    }
}

loc_8007BFF4:
{
    r28 = 1;
}

loc_8007BFF8:
{
}

loc_8007BFFC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8007C2F8;
    }
}

loc_8007C000:
{
    MemoryInline::FlatWrite32(r29, r30);
    MemoryInline::FlatWrite32((r29 + 4), r31);
    r4 = MemoryInline::FlatRead32((r30 + 332));
}

loc_8007C010:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C034;
    }
}

loc_8007C014:
{
    r3 = (r1 + 136);
    r0 = (r31 * 260);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C024u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F520_39B4 = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_39B4);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_39B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 8);
    ctx->lr = 0x8007C030u;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_3CE0 = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_3CE0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C04C;
}

loc_8007C034:
{
    r3 = (r1 + 132);
    r4 = 0;
    ctx->lr = 0x8007C040u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F520_3F85 = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_3F85);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_3F85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 8);
    ctx->lr = 0x8007C04Cu;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_42B1 = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_42B1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C04C:
{
    r4 = MemoryInline::FlatRead32((r30 + 336));
}

loc_8007C054:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C078;
    }
}

loc_8007C058:
{
    r3 = (r1 + 128);
    r0 = (r31 * 100);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C068u;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F480_4621 = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_4621);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_4621 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 12);
    ctx->lr = 0x8007C074u;
    if constexpr (KnownRegArgsCpuCall<0x80078678u>(&func_80078678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078678_494E = func_80078678_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078678_494E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C090;
}

loc_8007C078:
{
    r3 = (r1 + 124);
    r4 = 0;
    ctx->lr = 0x8007C084u;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F480_4BF3 = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_4BF3);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_4BF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 12);
    ctx->lr = 0x8007C090u;
    if constexpr (KnownRegArgsCpuCall<0x80078678u>(&func_80078678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078678_4F20 = func_80078678_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078678_4F20;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C090:
{
    r4 = MemoryInline::FlatRead32((r30 + 340));
}

loc_8007C098:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C0BC;
    }
}

loc_8007C09C:
{
    r3 = (r1 + 120);
    r0 = (r31 * 584);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C0ACu;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F3D8_5290 = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_5290);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_5290 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 16);
    ctx->lr = 0x8007C0B8u;
    if constexpr (KnownRegArgsCpuCall<0x80078624u>(&func_80078624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078624_55BD = func_80078624_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80078624_55BD);
        r4 = static_cast<uint32_t>(regargs_result_80078624_55BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8007C0D4;
}

loc_8007C0BC:
{
    r3 = (r1 + 116);
    r4 = 0;
    ctx->lr = 0x8007C0C8u;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F3D8_58DE = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_58DE);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_58DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 16);
    ctx->lr = 0x8007C0D4u;
    if constexpr (KnownRegArgsCpuCall<0x80078624u>(&func_80078624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078624_5C0B = func_80078624_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80078624_5C0B);
        r4 = static_cast<uint32_t>(regargs_result_80078624_5C0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8007C0D4:
{
    r4 = MemoryInline::FlatRead32((r30 + 344));
}

loc_8007C0DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C100;
    }
}

loc_8007C0E0:
{
    r3 = (r1 + 112);
    r0 = (r31 * 40);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C0F0u;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A9B4_5FF6 = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_5FF6);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_5FF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 20);
    ctx->lr = 0x8007C0FCu;
    if constexpr (KnownRegArgsCpuCall<0x800785E8u>(&func_800785E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785E8_6323 = func_800785E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785E8_6323;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C118;
}

loc_8007C100:
{
    r3 = (r1 + 108);
    r4 = 0;
    ctx->lr = 0x8007C10Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A9B4_65C8 = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_65C8);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_65C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 20);
    ctx->lr = 0x8007C118u;
    if constexpr (KnownRegArgsCpuCall<0x800785E8u>(&func_800785E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785E8_68F5 = func_800785E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785E8_68F5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C118:
{
    r4 = MemoryInline::FlatRead32((r30 + 348));
}

loc_8007C120:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C144;
    }
}

loc_8007C124:
{
    r3 = (r1 + 104);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C134u;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800768C0_6CC0 = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_6CC0);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_6CC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 24);
    ctx->lr = 0x8007C140u;
    if constexpr (KnownRegArgsCpuCall<0x800785ACu>(&func_800785AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785AC_6FED = func_800785AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785AC_6FED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C15C;
}

loc_8007C144:
{
    r3 = (r1 + 100);
    r4 = 0;
    ctx->lr = 0x8007C150u;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800768C0_7292 = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_7292);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_7292 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 24);
    ctx->lr = 0x8007C15Cu;
    if constexpr (KnownRegArgsCpuCall<0x800785ACu>(&func_800785AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785AC_75BF = func_800785AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785AC_75BF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C15C:
{
    r4 = MemoryInline::FlatRead32((r30 + 352));
}

loc_8007C164:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C188;
    }
}

loc_8007C168:
{
    r3 = (r1 + 96);
    r0 = (r31 * 12);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C178u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769EC_792D = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_792D);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_792D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 28);
    ctx->lr = 0x8007C184u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_7C5A = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_7C5A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C1A0;
}

loc_8007C188:
{
    r3 = (r1 + 92);
    r4 = 0;
    ctx->lr = 0x8007C194u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769EC_7EFE = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_7EFE);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_7EFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 28);
    ctx->lr = 0x8007C1A0u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_822B = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_822B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C1A0:
{
    r4 = MemoryInline::FlatRead32((r30 + 356));
}

loc_8007C1A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C1CC;
    }
}

loc_8007C1AC:
{
    r3 = (r1 + 88);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C1BCu;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767F8_85F6 = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_85F6);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_85F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 32);
    ctx->lr = 0x8007C1C8u;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_8923 = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_8923;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C1E4;
}

loc_8007C1CC:
{
    r3 = (r1 + 84);
    r4 = 0;
    ctx->lr = 0x8007C1D8u;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767F8_8BC7 = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_8BC7);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_8BC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 32);
    ctx->lr = 0x8007C1E4u;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_8EF4 = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_8EF4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C1E4:
{
    r4 = MemoryInline::FlatRead32((r30 + 360));
}

loc_8007C1EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C210;
    }
}

loc_8007C1F0:
{
    r3 = (r1 + 80);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C200u;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F1BC_92C0 = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_92C0);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_92C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 36);
    ctx->lr = 0x8007C20Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078534u>(&func_80078534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078534_95ED = func_80078534_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078534_95ED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C228;
}

loc_8007C210:
{
    r3 = (r1 + 76);
    r4 = 0;
    ctx->lr = 0x8007C21Cu;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F1BC_9891 = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_9891);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_9891 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 36);
    ctx->lr = 0x8007C228u;
    if constexpr (KnownRegArgsCpuCall<0x80078534u>(&func_80078534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078534_9BBE = func_80078534_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078534_9BBE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C228:
{
    r4 = MemoryInline::FlatRead32((r30 + 364));
}

loc_8007C230:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C254;
    }
}

loc_8007C234:
{
    r3 = (r1 + 72);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C244u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F2FC_9F89 = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_9F89);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_9F89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 40);
    ctx->lr = 0x8007C250u;
    if constexpr (KnownRegArgsCpuCall<0x800784F8u>(&func_800784F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784F8_A2B6 = func_800784F8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784F8_A2B6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C26C;
}

loc_8007C254:
{
    r3 = (r1 + 68);
    r4 = 0;
    ctx->lr = 0x8007C260u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F2FC_A55A = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_A55A);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_A55A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 40);
    ctx->lr = 0x8007C26Cu;
    if constexpr (KnownRegArgsCpuCall<0x800784F8u>(&func_800784F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784F8_A887 = func_800784F8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784F8_A887;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C26C:
{
    r4 = MemoryInline::FlatRead32((r30 + 368));
}

loc_8007C274:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C298;
    }
}

loc_8007C278:
{
    r3 = (r1 + 64);
    r0 = (r31 * 160);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C288u;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076734_ABF6 = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_ABF6);
        r4 = static_cast<uint32_t>(regargs_result_80076734_ABF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 44);
    ctx->lr = 0x8007C294u;
    if constexpr (KnownRegArgsCpuCall<0x800784BCu>(&func_800784BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784BC_AF23 = func_800784BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784BC_AF23;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C2B0;
}

loc_8007C298:
{
    r3 = (r1 + 60);
    r4 = 0;
    ctx->lr = 0x8007C2A4u;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076734_B1C7 = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_B1C7);
        r4 = static_cast<uint32_t>(regargs_result_80076734_B1C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 44);
    ctx->lr = 0x8007C2B0u;
    if constexpr (KnownRegArgsCpuCall<0x800784BCu>(&func_800784BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784BC_B4F4 = func_800784BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784BC_B4F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C2B0:
{
    r4 = MemoryInline::FlatRead32((r30 + 372));
}

loc_8007C2B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007C2DC;
    }
}

loc_8007C2BC:
{
    r3 = (r1 + 56);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r4 = (r4 + r0);
    ctx->lr = 0x8007C2CCu;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078450_B8C0 = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_B8C0);
        r4 = static_cast<uint32_t>(regargs_result_80078450_B8C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 48);
    ctx->lr = 0x8007C2D8u;
    if constexpr (KnownRegArgsCpuCall<0x80078414u>(&func_80078414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078414_BBED = func_80078414_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078414_BBED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C40C;
}

loc_8007C2DC:
{
    r3 = (r1 + 52);
    r4 = 0;
    ctx->lr = 0x8007C2E8u;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078450_BE91 = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_BE91);
        r4 = static_cast<uint32_t>(regargs_result_80078450_BE91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 48);
    ctx->lr = 0x8007C2F4u;
    if constexpr (KnownRegArgsCpuCall<0x80078414u>(&func_80078414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078414_C1BE = func_80078414_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078414_C1BE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_8007C40C;
}

loc_8007C2F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
    MemoryInline::FlatWrite32((r29 + 4), r31);
    r3 = (r1 + 48);
    r4 = 0;
    ctx->lr = 0x8007C310u;
    if constexpr (KnownRegArgsCpuCall<0x8006F520u>(&func_8006F520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F520_C4C8 = func_8006F520_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F520_C4C8);
        r4 = static_cast<uint32_t>(regargs_result_8006F520_C4C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F520u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 8);
    ctx->lr = 0x8007C31Cu;
    if constexpr (KnownRegArgsCpuCall<0x800786B4u>(&func_800786B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800786B4_C7F4 = func_800786B4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800786B4_C7F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800786B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 44);
    r4 = 0;
    ctx->lr = 0x8007C328u;
    if constexpr (KnownRegArgsCpuCall<0x8006F480u>(&func_8006F480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F480_CA69 = func_8006F480_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F480_CA69);
        r4 = static_cast<uint32_t>(regargs_result_8006F480_CA69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 12);
    ctx->lr = 0x8007C334u;
    if constexpr (KnownRegArgsCpuCall<0x80078678u>(&func_80078678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078678_CD96 = func_80078678_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078678_CD96;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 40);
    r4 = 0;
    ctx->lr = 0x8007C340u;
    if constexpr (KnownRegArgsCpuCall<0x8006F3D8u>(&func_8006F3D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F3D8_D00B = func_8006F3D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F3D8_D00B);
        r4 = static_cast<uint32_t>(regargs_result_8006F3D8_D00B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F3D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 16);
    ctx->lr = 0x8007C34Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078624u>(&func_80078624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078624_D338 = func_80078624_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80078624_D338);
        r4 = static_cast<uint32_t>(regargs_result_80078624_D338 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078624u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 36);
    r4 = 0;
    ctx->lr = 0x8007C358u;
    if constexpr (KnownRegArgsCpuCall<0x8005A9B4u>(&func_8005A9B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A9B4_D629 = func_8005A9B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A9B4_D629);
        r4 = static_cast<uint32_t>(regargs_result_8005A9B4_D629 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A9B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 20);
    ctx->lr = 0x8007C364u;
    if constexpr (KnownRegArgsCpuCall<0x800785E8u>(&func_800785E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785E8_D956 = func_800785E8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785E8_D956;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8007C370u;
    if constexpr (KnownRegArgsCpuCall<0x800768C0u>(&func_800768C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800768C0_DBCB = func_800768C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800768C0_DBCB);
        r4 = static_cast<uint32_t>(regargs_result_800768C0_DBCB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800768C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 24);
    ctx->lr = 0x8007C37Cu;
    if constexpr (KnownRegArgsCpuCall<0x800785ACu>(&func_800785AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800785AC_DEF8 = func_800785AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800785AC_DEF8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800785ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 28);
    r4 = 0;
    ctx->lr = 0x8007C388u;
    if constexpr (KnownRegArgsCpuCall<0x800769ECu>(&func_800769EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800769EC_E16D = func_800769EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769EC_E16D);
        r4 = static_cast<uint32_t>(regargs_result_800769EC_E16D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800769ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 28);
    ctx->lr = 0x8007C394u;
    if constexpr (KnownRegArgsCpuCall<0x80076968u>(&func_80076968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076968_E49A = func_80076968_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80076968_E49A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x8007C3A0u;
    if constexpr (KnownRegArgsCpuCall<0x800767F8u>(&func_800767F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800767F8_E70F = func_800767F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800767F8_E70F);
        r4 = static_cast<uint32_t>(regargs_result_800767F8_E70F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800767F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 32);
    ctx->lr = 0x8007C3ACu;
    if constexpr (KnownRegArgsCpuCall<0x80078570u>(&func_80078570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078570_EA3C = func_80078570_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078570_EA3C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    r4 = 0;
    ctx->lr = 0x8007C3B8u;
    if constexpr (KnownRegArgsCpuCall<0x8006F1BCu>(&func_8006F1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F1BC_ECB1 = func_8006F1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F1BC_ECB1);
        r4 = static_cast<uint32_t>(regargs_result_8006F1BC_ECB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 36);
    ctx->lr = 0x8007C3C4u;
    if constexpr (KnownRegArgsCpuCall<0x80078534u>(&func_80078534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078534_EFDE = func_80078534_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078534_EFDE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x8007C3D0u;
    if constexpr (KnownRegArgsCpuCall<0x8006F2FCu>(&func_8006F2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F2FC_F253 = func_8006F2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006F2FC_F253);
        r4 = static_cast<uint32_t>(regargs_result_8006F2FC_F253 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 40);
    ctx->lr = 0x8007C3DCu;
    if constexpr (KnownRegArgsCpuCall<0x800784F8u>(&func_800784F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784F8_F580 = func_800784F8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784F8_F580;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x8007C3E8u;
    if constexpr (KnownRegArgsCpuCall<0x80076734u>(&func_80076734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80076734_F7F5 = func_80076734_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80076734_F7F5);
        r4 = static_cast<uint32_t>(regargs_result_80076734_F7F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80076734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 44);
    ctx->lr = 0x8007C3F4u;
    if constexpr (KnownRegArgsCpuCall<0x800784BCu>(&func_800784BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800784BC_FB22 = func_800784BC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800784BC_FB22;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800784BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8007C400u;
    if constexpr (KnownRegArgsCpuCall<0x80078450u>(&func_80078450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078450_FD96 = func_80078450_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078450_FD96);
        r4 = static_cast<uint32_t>(regargs_result_80078450_FD96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r29 + 48);
    ctx->lr = 0x8007C40Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078414u>(&func_80078414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078414_100C3 = func_80078414_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80078414_100C3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80078414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8007C40C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007BF10 func_8007BF10 preserves=true fpr_mask=0x00000000
