#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D84A0(CpuContext* ctx);
extern "C" uint32_t func_800D84A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DDE74(CpuContext* ctx);
extern "C" uint32_t func_800DDE74_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DDFA8(CpuContext* ctx);
extern "C" uint32_t func_800DDFA8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F99C(CpuContext* ctx);
extern "C" uint64_t func_8028F99C_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_800DE078_ra38_c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x800DE078u);
    goto loc_800DE078;

loc_800DE078:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r28 = r4;
    r29 = r5;
    r31 = r6;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead32((r13 + -17576));
}

loc_800DE0BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DE340;
    }
}

loc_800DE0C0:
{
}

loc_800DE0C4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800DE340;
    }
}

loc_800DE0C8:
{
    ctx->lr = 0x800DE0CCu;
    if constexpr (KnownRegArgsCpuCall<0x800D84A0u>(&func_800D84A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D84A0_9AF = func_800D84A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D84A0_9AF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D84A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DE0D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800DE340;
    }
}

loc_800DE0D4:
{
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r13 + -17576));
    r4 = (r4 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = (r29 & 255);
}

loc_800DE0EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_800DE104;
    }
}

loc_800DE0F0:
{
}

loc_800DE0F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_800DE1C4;
    }
}

loc_800DE0F8:
{
}

loc_800DE0FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_800DE284;
    }
}

loc_800DE100:
{
    goto loc_800DE340;
}

loc_800DE104:
{
    r31 = (r31 + r0);
    r3 = r28;
    r4 = (r28 + 12);
    r5 = (r1 + 20);
    r6 = (r1 + 8);
    ctx->lr = 0x800DE11Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8028F99C_FD8 = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_FD8);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_FD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = r31;
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DDFA8_144E = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_144E;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r29 = r3;
}

loc_800DE134:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE18C;
    }
}

loc_800DE138:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_800DE140:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DE340;
    }
}

loc_800DE144:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE154:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE164;
    }
}

loc_800DE158:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE18C;
}

loc_800DE164:
{
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DE340;
}

loc_800DE18C:
{
    r3 = r30;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_1CAC = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1CAC;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r6 = r3;
}

loc_800DE1A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE340;
    }
}

loc_800DE1A4:
{
    r3 = r30;
    r4 = (r1 + 8);
    r5 = r31;
    r7 = 32;
    r8 = 33;
    r9 = 0;
    ctx->lr = 0x800DE1C0u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_2006 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_2006;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DE340;
}

loc_800DE1C4:
{
    r31 = (r31 + r0);
    r3 = r28;
    r4 = (r28 + 12);
    r5 = (r1 + 20);
    r6 = (r1 + 8);
    ctx->lr = 0x800DE1DCu;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8028F99C_23D9 = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_23D9);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_23D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = r31;
    r5 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DDFA8_2851 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_2851;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r29 = r3;
}

loc_800DE1F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE24C;
    }
}

loc_800DE1F8:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_800DE200:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DE340;
    }
}

loc_800DE204:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE214:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE224;
    }
}

loc_800DE218:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE24C;
}

loc_800DE224:
{
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DE340;
}

loc_800DE24C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_30AE = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_30AE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r6 = r3;
}

loc_800DE260:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE340;
    }
}

loc_800DE264:
{
    r3 = r30;
    r4 = (r1 + 8);
    r5 = r31;
    r7 = 2;
    r8 = 33;
    r9 = 0;
    ctx->lr = 0x800DE280u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_3407 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_3407;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DE340;
}

loc_800DE284:
{
    r31 = (r31 + r0);
    r3 = r28;
    r4 = (r28 + 12);
    r5 = (r1 + 20);
    r6 = (r1 + 8);
    ctx->lr = 0x800DE29Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8028F99C_37DA = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_37DA);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_37DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = r31;
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DDFA8_3C53 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_3C53;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r29 = r3;
}

loc_800DE2B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE30C;
    }
}

loc_800DE2B8:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_800DE2C0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DE340;
    }
}

loc_800DE2C4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE2D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE2E4;
    }
}

loc_800DE2D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE30C;
}

loc_800DE2E4:
{
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DE340;
}

loc_800DE30C:
{
    r3 = r30;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_44B1 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_44B1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r6 = r3;
}

loc_800DE320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE340;
    }
}

loc_800DE324:
{
    r3 = r30;
    r4 = (r1 + 8);
    r5 = r31;
    r7 = 32;
    r8 = 10;
    r9 = 0;
    ctx->lr = 0x800DE340u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_480B = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_480B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
}

loc_800DE340:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DE078(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DE078_ra38_c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FF gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0xC000000D fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DE078 func_800DE078 preserves=true fpr_mask=0x00000000
