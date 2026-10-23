#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B7300(CpuContext* ctx);
extern "C" uint64_t func_803B7300_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042ABE4(CpuContext* ctx);
extern "C" uint32_t func_8042ABE4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8042ADE8(CpuContext* ctx);
extern "C" uint64_t func_8042ADE8_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B3C8(CpuContext* ctx);
extern "C" uint64_t func_8042B3C8_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042BA9C(CpuContext* ctx);
extern "C" uint32_t func_8042BA9C_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_80394C38_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80394C38;

loc_80394C38:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 579));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80394C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80394C84;
    }
}

loc_80394C68:
{
}

loc_80394C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80394CD0;
    }
}

loc_80394C70:
{
}

loc_80394C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80394D40;
    }
}

loc_80394C78:
{
}

loc_80394C7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80394DA4;
    }
}

loc_80394C80:
{
    goto loc_80394DE8;
}

loc_80394C84:
{
    r0 = MemoryInline::FlatRead8((r3 + 930));
}

loc_80394C8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80394C98;
    }
}

loc_80394C90:
{
    r3 = (r3 + 619);
    ctx->lr = 0x80394C98u;
    if constexpr (KnownRegArgsCpuCall<0x8042ADE8u>(&func_8042ADE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042ADE8_CA2 = func_8042ADE8_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042ADE8_CA2);
        r4 = static_cast<uint32_t>(regargs_result_8042ADE8_CA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8042ADE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80394C98:
{
    r3 = MemoryInline::FlatRead8((r30 + 585));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->lr = 0x80394CA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8042AD0Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80394CA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80394CC4;
    }
}

loc_80394CAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 579), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 580), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r30 + 576), static_cast<uint16_t>(r0));
    goto loc_80394DE8;
}

loc_80394CC4:
{
    r31 = 3;
    // inline leaf 0x8039424C (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8039424C
    goto loc_80394DE8;
}

loc_80394CD0:
{
    ctx->lr = 0x80394CD4u;
    if constexpr (KnownRegArgsCpuCall<0x8042ABE4u>(&func_8042ABE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8042ABE4_1906 = func_8042ABE4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8042ABE4_1906;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042ABE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80394CD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80394D2C;
    }
}

loc_80394CDC:
{
    r29 = MemoryInline::FlatRead32((r30 + 596));
    ctx->lr = 0x80394CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8042BAE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 65535);
}

loc_80394CEC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(r0))) {
        goto loc_80394D08;
    }
}

loc_80394CF0:
{
    ctx->lr = 0x80394CF4u;
    if constexpr (KnownRegArgsCpuCall<0x8042B3C8u>(&func_8042B3C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B3C8_1DF8 = func_8042B3C8_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B3C8_1DF8);
        r4 = static_cast<uint32_t>(regargs_result_8042B3C8_1DF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8042B3C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 579), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 580), static_cast<uint8_t>(r0));
    goto loc_80394DE8;
}

loc_80394D08:
{
    r3 = 65536;
    r0 = (r3 + -5536);
}

loc_80394D14:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80394D20;
    }
}

loc_80394D18:
{
    r31 = 1;
    goto loc_80394DE8;
}

loc_80394D20:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 579), static_cast<uint8_t>(r0));
    goto loc_80394DE8;
}

loc_80394D2C:
{
}

loc_80394D30:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80394DE8;
    }
}

loc_80394D34:
{
    r31 = 3;
    // inline leaf 0x8039424C (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8039424C
    goto loc_80394DE8;
}

loc_80394D40:
{
    r0 = MemoryInline::FlatRead32((r3 + 596));
    r3 = (r0 & 65535);
    ctx->lr = 0x80394D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B7300u>(&func_803B7300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B7300_28A3 = func_803B7300_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B7300_28A3);
        r4 = static_cast<uint32_t>(regargs_result_803B7300_28A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803B7300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = r3;
}

loc_80394D54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80394DE8;
    }
}

loc_80394D58:
{
    ctx->lr = 0x80394D5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042BA9Cu>(&func_8042BA9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8042BA9C_2FAE = func_8042BA9C_ra0_0_8_0(ctx);
        r3 = regargs_result_8042BA9C_2FAE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042BA9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80394D60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80394D78;
    }
}

loc_80394D64:
{
    r3 = 20;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl2_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl2_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl2_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl2_cont_804538FC;
}

loc_inl2_return:
{
}

loc_inl2_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r31 = 3;
    // inline leaf 0x8039424C (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8039424C
    goto loc_80394DE8;
}

loc_80394D78:
{
}

loc_80394D7C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_80394D9C;
    }
}

loc_80394D80:
{
    ctx->lr = 0x80394D84u;
    if constexpr (KnownRegArgsCpuCall<0x8042B3C8u>(&func_8042B3C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B3C8_37C0 = func_8042B3C8_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B3C8_37C0);
        r4 = static_cast<uint32_t>(regargs_result_8042B3C8_37C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8042B3C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead8((r30 + 579));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 579), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 580), static_cast<uint8_t>(r0));
    goto loc_80394DE8;
}

loc_80394D9C:
{
    r31 = 1;
    goto loc_80394DE8;
}

loc_80394DA4:
{
    // inline leaf 0x8042B728 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r3 = (-1 - r4);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8042B728
}

loc_80394DAC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80394DE8;
    }
}

loc_80394DB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 580));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80394DBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80394DC8;
    }
}

loc_80394DC0:
{
    r3 = 20;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl5_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl5_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl5_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl5_cont_804538FC;
}

loc_inl5_return:
{
}

loc_inl5_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
}

loc_80394DC8:
{
    r0 = MemoryInline::FlatRead8((r30 + 580));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80394DD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80394DE0;
    }
}

loc_80394DD8:
{
    r3 = 16;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl6_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl6_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl6_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl6_cont_804538FC;
}

loc_inl6_return:
{
}

loc_inl6_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
}

loc_80394DE0:
{
    r31 = 3;
    // inline leaf 0x8039424C (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8039424C
}

loc_80394DE8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80394C38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80394C38_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80394C38 func_80394C38 preserves=true fpr_mask=0x00000000
