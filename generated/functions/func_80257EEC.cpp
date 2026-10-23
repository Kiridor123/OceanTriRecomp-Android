#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010C5B8(CpuContext* ctx);
extern "C" uint64_t func_8010C5B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80245E04(CpuContext* ctx);
extern "C" uint32_t func_80245E04_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A288(CpuContext* ctx);
extern "C" uint64_t func_8026A288_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8026F8EC(CpuContext* ctx);
extern "C" uint32_t func_8026F8EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027629C(CpuContext* ctx);
extern "C" uint64_t func_8027629C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80277CBC(CpuContext* ctx);
extern "C" uint32_t func_80277CBC_ra18_2_10_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_80257EEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_80257EEC;

loc_80257EEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r4 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80257F10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80257F20;
    }
}

loc_80257F14:
{
}

loc_80257F18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80257FE8;
    }
}

loc_80257F1C:
{
    goto loc_802580BC;
}

loc_80257F20:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r4 = 0;
    // inline leaf 0x80277CB4 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 1114), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277CB4
}

loc_80257F3C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80257F6C;
    }
}

loc_80257F40:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x80257F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80275B68u>(ctx);
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
    r3 = r31;
    r4 = 26;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x80257F68u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026A288_F3A = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_F3A);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_F3A >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A288u>(ctx);
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
    goto loc_80257F94;
}

loc_80257F6C:
{
    r3 = r31;
    r4 = 3;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x80257F80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80275B68u>(ctx);
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
    r3 = r31;
    r4 = 262;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x80257F94u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026A288_1733 = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_1733);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_1733 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A288u>(ctx);
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

loc_80257F94:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80277CBCu>(&func_80277CBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80277CBC_1C88 = func_80277CBC_ra18_2_10_0(ctx, r3, r4, f1.d);
        r4 = regargs_result_80277CBC_1C88;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80277CBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    // inline leaf 0x8027AC70 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1467), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027AC70
    r0 = 300;
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1024), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 1020), static_cast<uint16_t>(r3));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80257FD0u;
    if constexpr (KnownRegArgsCpuCall<0x80245E04u>(&func_80245E04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80245E04_2168 = func_80245E04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80245E04_2168;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80245E04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r31 + 88));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 168), r0);
    r3 = r31;
    ctx->lr = 0x80257FE4u;
    if constexpr (KnownRegArgsCpuCall<0x8010C5B8u>(&func_8010C5B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8010C5B8_245E = func_8010C5B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010C5B8_245E);
        r4 = static_cast<uint32_t>(regargs_result_8010C5B8_245E >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8010C5B8u>(ctx);
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
    goto loc_802580BC;
}

loc_80257FE8:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_80257FF8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8025801C;
    }
}

loc_80257FFC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r0 = 300;
    MemoryInline::FlatWrite32((r3 + 40), r0);
    goto loc_8025808C;
}

loc_8025801C:
{
    ctx->lr = 0x80258020u;
    if constexpr (KnownRegArgsCpuCall<0x8026F8ECu>(&func_8026F8EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026F8EC_2C2B = func_8026F8EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026F8EC_2C2B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026F8ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80258024:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025808C;
    }
}

loc_80258028:
{
    r3 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 7));
    r3 = (r13 + -28112);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8025804Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80258050:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80258060;
    }
}

loc_80258054:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80258060:
{
    r3 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_8025806C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8025808C;
    }
}

loc_80258070:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 7));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r0 = 300;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_8025808C:
{
    r0 = MemoryInline::FlatRead8((r31 + 7));
}

loc_80258094:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802580BC;
    }
}

loc_80258098:
{
    r3 = r31;
    // inline leaf 0x80257ED4 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1020), static_cast<uint16_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite16((r3 + 1026), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80257ED4
    r0 = 20;
    MemoryInline::FlatWrite8((r31 + 789), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r5 = 6;
    r6 = 0;
    ctx->lr = 0x802580BCu;
    if constexpr (KnownRegArgsCpuCall<0x8027629Cu>(&func_8027629C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027629C_3770 = func_8027629C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8027629C_3770);
        r4 = static_cast<uint32_t>(regargs_result_8027629C_3770 >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027629Cu>(ctx);
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

loc_802580BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80257EEC func_80257EEC preserves=true fpr_mask=0x00000000
