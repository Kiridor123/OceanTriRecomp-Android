#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273B78(CpuContext* ctx);
extern "C" uint64_t func_80273B78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027E574(CpuContext* ctx);
extern "C" uint64_t func_8027E574_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80273F3C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x80273F3Cu);
    goto loc_80273F3C;

loc_80273F3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r30 = 0;
    r0 = (r4 + -6);
}

loc_80273F6C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_80273F88;
    }
}

loc_80273F70:
{
    r0 = (r4 + -1);
}

loc_80273F78:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80273FC4;
    }
}

loc_80273F7C:
{
}

loc_80273F80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80273FA8;
    }
}

loc_80273F84:
{
    goto loc_80274078;
}

loc_80273F88:
{
    r5 = (r5 & 255);
    r6 = (r3 + 464);
    r7 = (r3 + 488);
    r8 = (r3 + 500);
    r9 = (r1 + 8);
    ctx->lr = 0x80273FA0u;
    if constexpr (KnownRegArgsCpuCall<0x80273B78u>(&func_80273B78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80273B78_884 = func_80273B78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273B78_884);
        r4 = static_cast<uint32_t>(regargs_result_80273B78_884 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x80273B78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r30 = r3;
    goto loc_8027407C;
}

loc_80273FA8:
{
    r5 = (r5 & 255);
    r6 = (r3 + 464);
    r7 = (r3 + 488);
    r8 = (r3 + 500);
    r9 = (r1 + 8);
    ctx->lr = 0x80273FC0u;
    if constexpr (KnownRegArgsCpuCall<0x80273B78u>(&func_80273B78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80273B78_D99 = func_80273B78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273B78_D99);
        r4 = static_cast<uint32_t>(regargs_result_80273B78_D99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x80273B78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r30 = r3;
}

loc_80273FC4:
{
    r29 = 0;
    r31 = (r31 + 320);
}

loc_80273FCC:
{
    r3 = r31;
    ctx->lr = 0x80273FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3A8_120D = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_120D);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_120D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80273FD8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80274008;
    }
}

loc_80273FDC:
{
}

loc_80273FE0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_80274018;
    }
}

loc_80273FE4:
{
}

loc_80273FE8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_80274028;
    }
}

loc_80273FEC:
{
}

loc_80273FF0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_80274038;
    }
}

loc_80273FF4:
{
}

loc_80273FF8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_80274048;
    }
}

loc_80273FFC:
{
}

loc_80274000:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(5))) {
        goto loc_80274058;
    }
}

loc_80274004:
{
    goto loc_80274064;
}

loc_80274008:
{
    r3 = r31;
    ctx->lr = 0x80274010u;
    if constexpr (KnownRegArgsCpuCall<0x8027E574u>(&func_8027E574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027E574_189E = func_8027E574_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E574_189E);
        r4 = static_cast<uint32_t>(regargs_result_8027E574_189E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027E574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = (r30 + r3);
    goto loc_80274064;
}

loc_80274018:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r30 = (r30 + r0);
    goto loc_80274064;
}

loc_80274028:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r30 = (r30 + r0);
    goto loc_80274064;
}

loc_80274038:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r30 = (r30 + r0);
    goto loc_80274064;
}

loc_80274048:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r30 = (r30 + r0);
    goto loc_80274064;
}

loc_80274058:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r30 = (r30 + r0);
}

loc_80274064:
{
    r31 = (r31 + 12);
    r29 = (r29 + 1);
}

loc_80274070:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(6))) {
        goto loc_80273FCC;
    }
}

loc_80274074:
{
    goto loc_8027407C;
}

loc_80274078:
{
    r30 = 0;
}

loc_8027407C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80273F3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80273F3C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80273F3C func_80273F3C preserves=true fpr_mask=0x00000000
