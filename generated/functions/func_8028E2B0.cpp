#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80048FFC(CpuContext* ctx);
extern "C" uint64_t func_80048FFC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800580A8(CpuContext* ctx);
extern "C" uint64_t func_800580A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D7FB8(CpuContext* ctx);
extern "C" uint64_t func_800D7FB8_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E48F4(CpuContext* ctx);
extern "C" uint32_t func_800E48F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E4AE0(CpuContext* ctx);
extern "C" uint64_t func_800E4AE0_ra0_0_18_0(CpuContext*);
extern "C" void func_800E82F8(CpuContext* ctx);
extern "C" uint64_t func_800E82F8_ra0_0_18_0(CpuContext*);
extern "C" void func_800F2A20(CpuContext* ctx);
extern "C" uint64_t func_800F2A20_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_800F2A6C(CpuContext* ctx);
extern "C" uint64_t func_800F2A6C_ra8_2_18_0(CpuContext*, uint32_t, double);
extern "C" void func_800F2AF8(CpuContext* ctx);
extern "C" uint64_t func_800F2AF8_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800F6398(CpuContext* ctx);
extern "C" uint64_t func_800F6398_ra0_0_18_0(CpuContext*);
extern "C" void func_803BECD4(CpuContext* ctx);
extern "C" uint32_t func_803BECD4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800E48F4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_800E48F4_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8028E2B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x8028E2B0u);
    goto loc_8028E2B0;

loc_8028E2B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0;
    // inline leaf 0x800427F0 (40 guest instruction(s))
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r4 = (r0 + r4);
    r3 = 0;
    MemoryInline::FlatWrite16((r4 + 214), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r4 + 218));
    r0 = (r0 & 2);
    MemoryInline::FlatWrite16((r4 + 218), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 220), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 222), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 226), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 228), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 232), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 230), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 236), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 234), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 240), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 238), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 244), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 242), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 247), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 246), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + 252), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 256), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 258), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 260), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 264), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 266), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 270), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 268), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 274), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 272), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 278), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 276), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 282), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 280), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 285), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 284), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800427F0
    r3 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8028E2D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028E2EC;
    }
}

loc_8028E2D8:
{
}

loc_8028E2DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8028E2F4;
    }
}

loc_8028E2E0:
{
}

loc_8028E2E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8028E3B4;
    }
}

loc_8028E2E8:
{
    goto loc_8028E43C;
}

loc_8028E2EC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_8028E2F4:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8028E2FC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8028E308;
    }
}

loc_8028E300:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
}

loc_8028E308:
{
    r3 = r31;
    ctx->lr = 0x8028E310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8028CCE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8028E318:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_8028E378;
    }
}

loc_8028E31C:
{
    r3 = MemoryInline::FlatRead8((r31 + 8934));
}

loc_8028E324:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028E338;
    }
}

loc_8028E328:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 8934), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    ctx->lr = 0x8028E338u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A6Cu>(&func_800F2A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A6C_1CA7 = func_800F2A6C_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A6C_1CA7);
        r4 = static_cast<uint32_t>(regargs_result_800F2A6C_1CA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8028E338:
{
    r3 = MemoryInline::FlatRead8((r31 + 8935));
}

loc_8028E340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028E354;
    }
}

loc_8028E344:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 8935), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    ctx->lr = 0x8028E354u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A20u>(&func_800F2A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A20_20EB = func_800F2A20_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A20_20EB);
        r4 = static_cast<uint32_t>(regargs_result_800F2A20_20EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8028E354:
{
    r3 = 0;
    r4 = 1;
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
    r3 = 1;
    r4 = 0;
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
    r3 = 2;
    r4 = 0;
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
}

loc_8028E378:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8028E380:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8028E43C;
    }
}

loc_8028E384:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14280));
    // inline leaf 0x800E4904 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r13 + -17504), f1.d);
    // end of inlined leaf 0x800E4904
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14280));
    // inline leaf 0x800E490C (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r13 + -17488), f1.d);
    // end of inlined leaf 0x800E490C
    r3 = 0;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800580A8u>(&func_800580A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800580A8_29B2 = func_800580A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800580A8_29B2);
        r4 = static_cast<uint32_t>(regargs_result_800580A8_29B2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800580A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    ctx->lr = 0x8028E3A4u;
    if constexpr (KnownRegArgsCpuCall<0x800F6398u>(&func_800F6398)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800F6398_2D0D = func_800F6398_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800F6398_2D0D);
        r4 = static_cast<uint32_t>(regargs_result_800F6398_2D0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F6398u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_8028E43C;
}

loc_8028E3B4:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8028E3BC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8028E3D4;
    }
}

loc_8028E3C0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->lr = 0x8028E3D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8028CCE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    goto loc_8028E43C;
}

loc_8028E3D4:
{
    ctx->lr = 0x8028E3D8u;
    if constexpr (KnownRegArgsCpuCall<0x800E4AE0u>(&func_800E4AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E4AE0_33BB = func_800E4AE0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4AE0_33BB);
        r4 = static_cast<uint32_t>(regargs_result_800E4AE0_33BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8028E3DCu;
    if constexpr (KnownRegArgsCpuCall<0x800E82F8u>(&func_800E82F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E82F8_36D5 = func_800E82F8_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E82F8_36D5);
        r4 = static_cast<uint32_t>(regargs_result_800E82F8_36D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E82F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8028E3E0u;
    if constexpr (KnownRegArgsCpuCall<0x800D7FB8u>(&func_800D7FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        const auto regargs_result_800D7FB8_3A09 = func_800D7FB8_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_800D7FB8_3A09);
        r4 = static_cast<uint32_t>(regargs_result_800D7FB8_3A09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800D7FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
    ctx->lr = 0x8028E3E4u;
    if constexpr (KnownRegArgsCpuCall<0x800F2AF8u>(&func_800F2AF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800F2AF8_3DE2 = func_800F2AF8_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_800F2AF8_3DE2);
        r4 = static_cast<uint32_t>(regargs_result_800F2AF8_3DE2 >> 32);
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
        InvokeDirectCpu<0x800F2AF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    if constexpr (KnownRegArgsCpuCall<0x80048FFCu>(&func_80048FFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80048FFC_4138 = func_80048FFC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80048FFC_4138);
        r4 = static_cast<uint32_t>(regargs_result_80048FFC_4138 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80048FFCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 1;
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
    r3 = 1;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E48F4u) && KnownTranslatedCpuCall<0x800E48F4u>::kAvailable && !KnownTranslatedCpuCall<0x800E48F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E48F4u>()) {
        func_800E48F4_statefree_v0(r3, r4, r13);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800E48F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
    }
    r3 = 2;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E48F4u) && KnownTranslatedCpuCall<0x800E48F4u>::kAvailable && !KnownTranslatedCpuCall<0x800E48F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E48F4u>()) {
        const auto state_free_result_800E48F4_48EB = func_800E48F4_statefree(r3, r4, r13);
        r0 = static_cast<uint32_t>(state_free_result_800E48F4_48EB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800E48F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
    }
    r3 = 17;
    if constexpr (KnownRegArgsCpuCall<0x803BECD4u>(&func_803BECD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BECD4_4BF2 = func_803BECD4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BECD4_4BF2;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BECD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    ctx->lr = 0x8028E42Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F2A6Cu>(&func_800F2A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A6C_4DF5 = func_800F2A6C_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A6C_4DF5);
        r4 = static_cast<uint32_t>(regargs_result_800F2A6C_4DF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = 18;
    if constexpr (KnownRegArgsCpuCall<0x803BECD4u>(&func_803BECD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BECD4_50F1 = func_803BECD4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BECD4_50F1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BECD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    ctx->lr = 0x8028E43Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F2A20u>(&func_800F2A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A20_52F4 = func_800F2A20_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800F2A20_52F4);
        r4 = static_cast<uint32_t>(regargs_result_800F2A20_52F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8028E43C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8028E2B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028E2B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8028E2B0 func_8028E2B0 preserves=true fpr_mask=0x00000000
