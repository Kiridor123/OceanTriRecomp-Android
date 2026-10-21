#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012EDCC(CpuContext* ctx);
extern "C" uint64_t func_8012EDCC_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_8012EEE4(CpuContext* ctx);
extern "C" uint64_t func_8012EEE4_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_803A9E50(CpuContext* ctx);
extern "C" uint64_t func_803A9E50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B56BC(CpuContext* ctx);
extern "C" uint64_t func_803B56BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B5B80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    MKW_GUEST_ENTER(0x803B5B80u);
    goto loc_803B5B80;

loc_803B5B80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r28 = 0;
    r29 = (r31 + 148);
    r30 = 0;
}

loc_803B5BB0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 & 16);
}

loc_803B5BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5BF4;
    }
}

loc_803B5BC0:
{
    r0 = (r3 & 1024);
}

loc_803B5BC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B5BD8;
    }
}

loc_803B5BCC:
{
    r0 = (r3 & 16384);
}

loc_803B5BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5BF4;
    }
}

loc_803B5BD8:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r0 & 255);
}

loc_803B5BE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803B5BF4;
    }
}

loc_803B5BE8:
{
    r28 = 1;
    r3 = r31;
    ctx->lr = 0x803B5BF4u;
    if constexpr (KnownRegArgsCpuCall<0x803B56BCu>(&func_803B56BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B56BC_B3C = func_803B56BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B56BC_B3C);
        r4 = static_cast<uint32_t>(regargs_result_803B56BC_B3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B56BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803B5BF4:
{
    r30 = (r30 + 1);
    r29 = (r29 + 96);
}

loc_803B5C00:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_803B5BB0;
    }
}

loc_803B5C04:
{
}

loc_803B5C08:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803B5C18;
    }
}

loc_803B5C0C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 27195), static_cast<uint8_t>(r0));
    goto loc_803B5C20;
}

loc_803B5C18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 27195), static_cast<uint8_t>(r0));
}

loc_803B5C20:
{
    r30 = (r31 + 148);
    r29 = 0;
}

loc_803B5C28:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 16);
}

loc_803B5C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5CCC;
    }
}

loc_803B5C38:
{
    r0 = (r3 & 16384);
}

loc_803B5C40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16384))) {
        goto loc_803B5C80;
    }
}

loc_803B5C44:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r4 = (r0 & 255);
    ctx->lr = 0x803B5C58u;
    if constexpr (KnownRegArgsCpuCall<0x8012EEE4u>(&func_8012EEE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012EEE4_129E = func_8012EEE4_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012EEE4_129E);
        r4 = static_cast<uint32_t>(regargs_result_8012EEE4_129E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012EEE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_803B5C5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5C80;
    }
}

loc_803B5C60:
{
    r3 = r31;
    r4 = (r29 & 65535);
    r5 = 1024;
    ctx->lr = 0x803B5C70u;
    if constexpr (KnownRegArgsCpuCall<0x803A9E50u>(&func_803A9E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A9E50_16C0 = func_803A9E50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A9E50_16C0);
        r4 = static_cast<uint32_t>(regargs_result_803A9E50_16C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803A9E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 27194), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803B5CE8;
}

loc_803B5C80:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 1028);
}

loc_803B5C88:
{
}

loc_803B5C8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5CCC;
    }
}

loc_803B5C90:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r4 = (r0 & 255);
    ctx->lr = 0x803B5CA4u;
    if constexpr (KnownRegArgsCpuCall<0x8012EDCCu>(&func_8012EDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012EDCC_1E5C = func_8012EDCC_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012EDCC_1E5C);
        r4 = static_cast<uint32_t>(regargs_result_8012EDCC_1E5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012EDCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_803B5CA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5CCC;
    }
}

loc_803B5CAC:
{
    r3 = r31;
    r4 = (r29 & 65535);
    r5 = 1024;
    ctx->lr = 0x803B5CBCu;
    if constexpr (KnownRegArgsCpuCall<0x803A9E50u>(&func_803A9E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A9E50_227E = func_803A9E50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A9E50_227E);
        r4 = static_cast<uint32_t>(regargs_result_803A9E50_227E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803A9E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 27194), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803B5CE8;
}

loc_803B5CCC:
{
    r29 = (r29 + 1);
    r30 = (r30 + 96);
}

loc_803B5CD8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_803B5C28;
    }
}

loc_803B5CDC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 27195), static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_803B5CE8:
{
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

extern "C" void func_803B5B80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B5B80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B5B80 func_803B5B80 preserves=true fpr_mask=0x00000000
