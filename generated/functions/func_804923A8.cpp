#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABF0(CpuContext* ctx);
extern "C" uint64_t func_8047ABF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493C8C(CpuContext* ctx);
extern "C" uint64_t func_80493C8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804923A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_804923A8;

loc_804923A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r5 = 0x80740000u;
    r31 = 0x80610000u;
    r5 = (r5 + -6152);
    r27 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 1025));
    r28 = r4;
    r31 = (r31 + 24504);
    r29 = 0;
}

loc_804923E0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_804923FC;
    }
}

loc_804923E4:
{
    r3 = 1966080;
    r6 = MemoryInline::FlatRead16(r28);
    r5 = r27;
    r4 = (r31 + 628);
    r3 = (r3 + 3);
    ctx->lr = 0x804923FCu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABF0u>(&func_8047ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABF0_C57 = func_8047ABF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABF0_C57);
        r4 = static_cast<uint32_t>(regargs_result_8047ABF0_C57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_804923FC:
{
    r3 = 0x80740000u;
    r0 = 4;
    r3 = (r3 + -6152);
    r30 = 0;
    ctr = r0;
}

loc_80492410:
{
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_80492424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049244C;
    }
}

loc_80492428:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80492430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049244C;
    }
}

loc_80492434:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_8049243C:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_80492440:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80492448:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_8049244C:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_80492464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049248C;
    }
}

loc_80492468:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80492470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049248C;
    }
}

loc_80492474:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_8049247C:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_80492480:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80492488:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_8049248C:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_804924A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804924CC;
    }
}

loc_804924A8:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_804924B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804924CC;
    }
}

loc_804924B4:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_804924BC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_804924C0:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_804924C8:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_804924CC:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_804924E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049250C;
    }
}

loc_804924E8:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_804924F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049250C;
    }
}

loc_804924F4:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_804924FC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_80492500:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80492508:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80492514;
    }
}

loc_8049250C:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80492410;
    }
}

loc_80492514:
{
    r0 = (r30 & 255);
}

loc_8049251C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80492534;
    }
}

loc_80492520:
{
    r0 = (r0 * 52);
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r29 = (r3 + r0);
    r29 = (r29 + 16);
}

loc_80492534:
{
}

loc_80492538:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80492568;
    }
}

loc_8049253C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_8049254C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8049269C;
    }
}

loc_80492550:
{
    r3 = 1966080;
    r5 = r27;
    r3 = (r3 + 1);
    r4 = (r31 + 540);
    ctx->lr = 0x80492564u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_25E6 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_25E6);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_25E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8049269C;
}

loc_80492568:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_80492570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049261C;
    }
}

loc_80492574:
{
    r3 = 0x80740000u;
    r4 = (r30 & 255);
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    r4 = (r4 * 52);
}

loc_8049258C:
{
    r27 = (r3 + r4);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_804925A4;
    }
}

loc_80492594:
{
    r3 = 1966080;
    r4 = (r31 + 68);
    r3 = (r3 + 3);
    ctx->lr = 0x804925A4u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_2FD9 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2FD9);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2FD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_804925A4:
{
    r0 = MemoryInline::FlatRead16((r27 + 20));
}

loc_804925AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804925BC;
    }
}

loc_804925B0:
{
    r0 = MemoryInline::FlatRead16((r27 + 22));
}

loc_804925B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804925E8;
    }
}

loc_804925BC:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r27 + 22));
}

loc_804925CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804925D4;
    }
}

loc_804925D0:
{
    ctx->lr = 0x804925D4u;
    if constexpr (KnownRegArgsCpuCall<0x80493C8Cu>(&func_80493C8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80493C8C_3A21 = func_80493C8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493C8C_3A21);
        r4 = static_cast<uint32_t>(regargs_result_80493C8C_3A21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80493C8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_804925D4:
{
    r3 = MemoryInline::FlatRead16((r27 + 20));
}

loc_804925DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804925F0;
    }
}

loc_804925E0:
{
    ctx->lr = 0x804925E4u;
    if constexpr (KnownRegArgsCpuCall<0x80493C8Cu>(&func_80493C8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80493C8C_4291 = func_80493C8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493C8C_4291);
        r4 = static_cast<uint32_t>(regargs_result_80493C8C_4291 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80493C8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_804925F0;
}

loc_804925E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r0));
}

loc_804925F0:
{
    r4 = 0x80740000u;
    r0 = MemoryInline::FlatRead16(r28);
    r4 = (r4 + -6152);
    r3 = (r30 & 255);
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r5 = (r0 | 1024);
    r4 = 1;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80492618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_8049269C;
}

loc_8049261C:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_80492624:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_80492638;
    }
}

loc_80492628:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    goto loc_80492644;
}

loc_80492638:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
}

loc_80492644:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 & 30);
}

loc_80492650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(30))) {
        goto loc_8049269C;
    }
}

loc_80492654:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8049265C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8049269C;
    }
}

loc_80492660:
{
    r3 = (r30 & 255);
    r4 = 4;
    r0 = (r3 * 52);
    r6 = 0x80740000u;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r4));
    r5 = 1;
    r6 = (r6 + -6152);
    r4 = (r6 + r0);
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r5));
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x8049269Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8049269C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804923A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804923A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804923A8 func_804923A8 preserves=true fpr_mask=0x00000000
