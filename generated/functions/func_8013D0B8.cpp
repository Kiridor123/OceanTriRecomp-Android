#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013BEC4(CpuContext* ctx);
extern "C" uint64_t func_8013BEC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013C2A8(CpuContext* ctx);
extern "C" uint64_t func_8013C2A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801407DC(CpuContext* ctx);
extern "C" uint64_t func_801407DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8013D0B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8013D0B8;

loc_8013D0B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r4 = MemoryInline::FlatRead8((r29 + 10));
    ctx->lr = 0x8013D0E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r29 + 1132));
    ctx->lr = 0x8013D0F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8013D0F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013D144;
    }
}

loc_8013D0FC:
{
    r3 = r29;
    r4 = 8;
    r5 = 19;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl0_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl0_0x80140B70:
{
}

loc_inl0_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    r4 = MemoryInline::FlatRead8(r30);
}

loc_8013D114:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(2))) {
        goto loc_8013D13C;
    }
}

loc_8013D118:
{
    r3 = 19;
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_1122 = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_1122;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
    r30 = (r30 + r0);
    r3 = r30;
    r4 = 19;
    r5 = 1;
    ctx->lr = 0x8013D138u;
    if constexpr (KnownRegArgsCpuCall<0x801407DCu>(&func_801407DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801407DC_13CC = func_801407DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801407DC_13CC);
        r4 = static_cast<uint32_t>(regargs_result_801407DC_13CC >> 32);
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801407DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_8013D13C:
{
    r3 = r31;
    goto loc_8013D218;
}

loc_8013D144:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8013D14C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013D208;
    }
}

loc_8013D150:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_8013D158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013D170;
    }
}

loc_8013D15C:
{
}

loc_8013D160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013D17C;
    }
}

loc_8013D164:
{
}

loc_8013D168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013D188;
    }
}

loc_8013D16C:
{
    goto loc_8013D1D8;
}

loc_8013D170:
{
    r7 = MemoryInline::FlatRead8((r29 + 1133));
    r6 = 3;
    goto loc_8013D1F0;
}

loc_8013D17C:
{
    r7 = MemoryInline::FlatRead8((r29 + 1134));
    r6 = 3;
    goto loc_8013D1F0;
}

loc_8013D188:
{
    r0 = MemoryInline::FlatRead8((r29 + 1135));
}

loc_8013D190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8013D1A8;
    }
}

loc_8013D194:
{
    r5 = MemoryInline::FlatRead8((r29 + 1134));
    r4 = MemoryInline::FlatRead8((r3 + 57));
    r0 = (r4 + -1);
}

loc_8013D1A4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_8013D1CC;
    }
}

loc_8013D1A8:
{
    r4 = MemoryInline::FlatRead8((r29 + 1134));
    r0 = MemoryInline::FlatRead8((r3 + 55));
}

loc_8013D1B4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8013D1C4;
    }
}

loc_8013D1B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1135), static_cast<uint8_t>(r0));
    goto loc_8013D1CC;
}

loc_8013D1C4:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r29 + 1135), static_cast<uint8_t>(r0));
}

loc_8013D1CC:
{
    r7 = MemoryInline::FlatRead8((r29 + 1135));
    r6 = 2;
    goto loc_8013D1F0;
}

loc_8013D1D8:
{
    r3 = r29;
    r4 = 12;
    r5 = 0;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl1_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl1_0x80140B70:
{
}

loc_inl1_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    r7 = 0;
    r6 = 3;
}

loc_8013D1F0:
{
    r3 = r29;
    r4 = r30;
    r5 = 19;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->lr = 0x8013D204u;
    if constexpr (KnownRegArgsCpuCall<0x8013BEC4u>(&func_8013BEC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8013BEC4_2274 = func_8013BEC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013BEC4_2274);
        r4 = static_cast<uint32_t>(regargs_result_8013BEC4_2274 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013BEC4u>(ctx);
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
    }
    goto loc_8013D218;
}

loc_8013D208:
{
    r3 = r29;
    r4 = r30;
    r5 = 19;
    ctx->lr = 0x8013D218u;
    if constexpr (KnownRegArgsCpuCall<0x8013C2A8u>(&func_8013C2A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8013C2A8_2877 = func_8013C2A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013C2A8_2877);
        r4 = static_cast<uint32_t>(regargs_result_8013C2A8_2877 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8013C2A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8013D218:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013D0B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013D0B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013D0B8 func_8013D0B8 preserves=true fpr_mask=0x00000000
