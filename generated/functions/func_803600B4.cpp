#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802146B8(CpuContext* ctx);
extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021813C(CpuContext* ctx);
extern "C" uint32_t func_8021813C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802190E4(CpuContext* ctx);
extern "C" uint64_t func_802190E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803600B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803600B4u);
    goto loc_803600B4;

loc_803600B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r3 + 300);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r31 & 255);
}

loc_803600E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80360108;
    }
}

loc_803600EC:
{
}

loc_803600F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80360118;
    }
}

loc_803600F4:
{
}

loc_803600F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80360138;
    }
}

loc_803600FC:
{
}

loc_80360100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803601BC;
    }
}

loc_80360104:
{
    goto loc_803602A0;
}

loc_80360108:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r4 = 1;
    goto loc_803602A0;
}

loc_80360118:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r4 = 3;
    goto loc_803602A0;
}

loc_80360138:
{
    r3 = MemoryInline::FlatRead8((r30 + 7));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_B11 = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_B11;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_80360148:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8036015C;
    }
}

loc_8036014C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80360154u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_DCF = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_DCF);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_DCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80360158:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80360184;
    }
}

loc_8036015C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r4 = 4;
    goto loc_803602A0;
}

loc_80360184:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 304), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 305), static_cast<uint8_t>(r0));
    r4 = 6;
    goto loc_803602A0;
}

loc_803601BC:
{
    r3 = MemoryInline::FlatRead8((r30 + 7));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_1505 = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_1505;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_803601CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803601E4;
    }
}

loc_803601D0:
{
}

loc_803601D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8036020C;
    }
}

loc_803601D8:
{
}

loc_803601DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8036027C;
    }
}

loc_803601E0:
{
    goto loc_803602A0;
}

loc_803601E4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r4 = 4;
    goto loc_803602A0;
}

loc_8036020C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80360214u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_1A77 = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_1A77);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_1A77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80360218:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80360254;
    }
}

loc_8036021C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 304), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 305), static_cast<uint8_t>(r0));
    r4 = 6;
    goto loc_803602A0;
}

loc_80360254:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r4 = 4;
    goto loc_803602A0;
}

loc_8036027C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 300), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 301), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 302), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 303), static_cast<uint8_t>(r0));
    r4 = 4;
}

loc_803602A0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 308);
    r5 = 0;
    r6 = 0;
    r7 = -1;
    r8 = 0;
    r9 = 0;
    r10 = 3;
    ctx->lr = 0x803602C8u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_802146B8_2423 = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_2423);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_2423 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r30 + 516));
    r4 = (r30 + 340);
    r0 = MemoryInline::FlatRead16((r30 + 308));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r30 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 300));
    r6 = (r31 & 255);
    ctx->lr = 0x803602E4u;
    if constexpr (KnownRegArgsCpuCall<0x802190E4u>(&func_802190E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802190E4_295F = func_802190E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802190E4_295F);
        r4 = static_cast<uint32_t>(regargs_result_802190E4_295F >> 32);
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
        InvokeDirectCpu<0x802190E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r30 + 356));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 356), static_cast<uint8_t>(r0));
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
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803600B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803600B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803600B4 func_803600B4 preserves=true fpr_mask=0x00000000
