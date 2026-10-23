#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FE60(CpuContext* ctx);
extern "C" uint64_t func_8045FE60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80461D34(CpuContext* ctx);
extern "C" uint64_t func_80461D34_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C140(CpuContext* ctx);
extern "C" uint32_t func_8050C140_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C2C0(CpuContext* ctx);
extern "C" uint64_t func_8050C2C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80512980_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
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
    const uint32_t r26_entry = r26;

    goto loc_80512980;

loc_80512980:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_80512998:
{
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805129B8;
    }
}

loc_805129AC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805129C4;
    }
}

loc_805129B8:
{
    r31 = 0;
    r27 = 0;
    goto loc_80512ADC;
}

loc_805129C4:
{
    r4 = 58;
    if constexpr (KnownRegArgsCpuCall<0x8045FE60u>(&func_8045FE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FE60_DEA = func_8045FE60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8045FE60_DEA);
        r4 = static_cast<uint32_t>(regargs_result_8045FE60_DEA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8045FE60u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_805129D0:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805129E0;
    }
}

loc_805129D8:
{
    r27 = 0;
    goto loc_80512A98;
}

loc_805129E0:
{
}

loc_805129E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805129F4;
    }
}

loc_805129E8:
{
    r28 = 0;
    r31 = 0;
    goto loc_80512A14;
}

loc_805129F4:
{
    r26 = (r3 - r28);
    r4 = r28;
    r5 = r26;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r1 + 8);
    r0 = 0;
    r28_addr_1 = (r28 + r26);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
}

loc_80512A14:
{
    r3 = 0x80610000u;
    r5 = (r27 + 1);
    r3 = (r3 + -2448);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_80512A70;
}

loc_80512A28:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = 1;
}

loc_80512A34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_80512A3C;
    }
}

loc_80512A38:
{
    r3 = 0;
}

loc_80512A3C:
{
}

loc_80512A40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80512A4C;
    }
}

loc_80512A44:
{
    r0 = 0;
    goto loc_80512A5C;
}

loc_80512A4C:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_80512A5C:
{
}

loc_80512A60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80512A6C;
    }
}

loc_80512A64:
{
    r3 = 0;
    goto loc_80512AF8;
}

loc_80512A6C:
{
    r5 = (r5 + 1);
}

loc_80512A70:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80512A28;
    }
}

loc_80512A7C:
{
    r3 = (r27 + 1);
    ctx->lr = 0x80512A84u;
    if constexpr (KnownRegArgsCpuCall<0x80461D34u>(&func_80461D34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80461D34_1954 = func_80461D34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80461D34_1954);
        r4 = static_cast<uint32_t>(regargs_result_80461D34_1954 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80461D34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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

loc_80512A88:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(65535))) {
        goto loc_80512A94;
    }
}

loc_80512A8C:
{
    r3 = 0;
    goto loc_80512AF8;
}

loc_80512A94:
{
    r27 = (r3 & 65535);
}

loc_80512A98:
{
}

loc_80512A9C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80512ADC;
    }
}

loc_80512AA0:
{
    r3 = r28;
    ctx->lr = 0x80512AA8u;
    if constexpr (KnownRegArgsCpuCall<0x8050C140u>(&func_8050C140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        const auto regargs_result_8050C140_21BC = func_8050C140_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_8050C140_21BC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
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
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050C140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r26 = ctx->gpr[26];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 + 65536);
    r31 = r3;
}

loc_80512AB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80512ADC;
    }
}

loc_80512AB8:
{
    r3 = r28;
    ctx->lr = 0x80512AC0u;
    if constexpr (KnownRegArgsCpuCall<0x8050C2C0u>(&func_8050C2C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050C2C0_2924 = func_8050C2C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C2C0_2924);
        r4 = static_cast<uint32_t>(regargs_result_8050C2C0_2924 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050C2C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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

loc_80512AC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80512AD0;
    }
}

loc_80512AC8:
{
    r3 = 0;
    goto loc_80512AF8;
}

loc_80512AD0:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32(r3);
}

loc_80512ADC:
{
}

loc_80512AE0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80512AE8;
    }
}

loc_80512AE4:
{
    MemoryInline::FlatWrite32(r29, r31);
}

loc_80512AE8:
{
}

loc_80512AEC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80512AF4;
    }
}

loc_80512AF0:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r27));
}

loc_80512AF4:
{
    r3 = 1;
}

loc_80512AF8:
{
    r11 = (r1 + 304);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[26] = r26_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80512980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80512980_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80512980 func_80512980 preserves=true fpr_mask=0x00000000
