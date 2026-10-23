#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A73D0(CpuContext* ctx);
extern "C" uint64_t func_802A73D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802A9C1C(CpuContext* ctx);
extern "C" uint64_t func_802A9C1C_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802A6E18_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_802A6E18;

loc_802A6E18:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r3 = (r1 + 144);
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802A6E54:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_802A6E6C;
    }
}

loc_802A6E58:
{
    r3 = (r1 + 16);
    r4 = r28;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r1 + 16);
}

loc_802A6E6C:
{
    r3 = (r1 + 144);
    r4 = r28;
    ctx->lr = 0x802A6E78u;
    if constexpr (KnownRegArgsCpuCall<0x802A9C1Cu>(&func_802A9C1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802A9C1C_AB2 = func_802A9C1C_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802A9C1C_AB2);
        r4 = static_cast<uint32_t>(regargs_result_802A9C1C_AB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802A9C1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 54), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 144));
}

loc_802A6E90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6E9C;
    }
}

loc_802A6E94:
{
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r0));
    goto loc_802A6EA0;
}

loc_802A6E9C:
{
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
}

loc_802A6EA0:
{
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 148));
}

loc_802A6EB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6EC0;
    }
}

loc_802A6EB8:
{
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r0));
    goto loc_802A6EC4;
}

loc_802A6EC0:
{
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r4));
}

loc_802A6EC4:
{
    r3 = 2;
    MemoryInline::FlatWriteRam16((r1 + 102), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 97), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 152));
}

loc_802A6ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6EE4;
    }
}

loc_802A6EDC:
{
    MemoryInline::FlatWriteRam8((r1 + 98), static_cast<uint8_t>(r0));
    goto loc_802A6EE8;
}

loc_802A6EE4:
{
    MemoryInline::FlatWriteRam8((r1 + 98), static_cast<uint8_t>(r4));
}

loc_802A6EE8:
{
    r3 = 3;
    MemoryInline::FlatWriteRam16((r1 + 126), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 156));
}

loc_802A6EFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A6F08;
    }
}

loc_802A6F00:
{
    MemoryInline::FlatWriteRam8((r1 + 122), static_cast<uint8_t>(r0));
    goto loc_802A6F0C;
}

loc_802A6F08:
{
    MemoryInline::FlatWriteRam8((r1 + 122), static_cast<uint8_t>(r4));
}

loc_802A6F0C:
{
    r3 = (r30 & 65535);
    r4 = (r1 + 8);
    ctx->lr = 0x802A6F18u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_1983 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1983);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1983 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 144);
    r4 = (r1 + 48);
    r5 = 0;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r7 = 0;
    r8 = 32;
    r9 = (r31 & 255);
    ctx->lr = 0x802A6F38u;
    if constexpr (KnownRegArgsCpuCall<0x802A73D0u>(&func_802A73D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802A73D0_1E10 = func_802A73D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A73D0_1E10);
        r4 = static_cast<uint32_t>(regargs_result_802A73D0_1E10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A73D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_802A6E18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A6E18_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A6E18 func_802A6E18 preserves=true fpr_mask=0x00000000
