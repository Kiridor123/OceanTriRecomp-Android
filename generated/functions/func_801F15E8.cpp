#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C820(CpuContext* ctx);
extern "C" uint64_t func_8004C820_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004CA04(CpuContext* ctx);
extern "C" uint64_t func_8004CA04_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004DAC0(CpuContext* ctx);
extern "C" uint64_t func_8004DAC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004DD54(CpuContext* ctx);
extern "C" uint64_t func_8004DD54_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801F15E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F15E8;

loc_801F15E8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r27 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004C820u>(&func_8004C820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C820_86A = func_8004C820_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004C820_86A);
        r4 = static_cast<uint32_t>(regargs_result_8004C820_86A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004C820u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r30 = (r0 & 255);
    r3 = r31;
    r4 = (r28 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004C820u>(&func_8004C820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C820_BE8 = func_8004C820_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004C820_BE8);
        r4 = static_cast<uint32_t>(regargs_result_8004C820_BE8 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004C820u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r24 = (r0 & 255);
    r0 = (r27 & 65535);
    r26 = (r0 * 12);
    r3 = (r1 + 12);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r26);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = (r28 & 65535);
    r25 = (r0 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 + 3584);
    r3 = (r0 + r26);
    r4 = (r0 + r25);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r25);
    r3 = (r3 + 3584);
    r4 = (r1 + 12);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
}

loc_801F169C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_801F16B0;
    }
}

loc_801F16A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r28 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x801F16B0u;
    if constexpr (KnownRegArgsCpuCall<0x8004CA04u>(&func_8004CA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CA04_1AE5 = func_8004CA04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CA04_1AE5);
        r4 = static_cast<uint32_t>(regargs_result_8004CA04_1AE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F16B0:
{
}

loc_801F16B4:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(1))) {
        goto loc_801F16C8;
    }
}

loc_801F16B8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r27 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x801F16C8u;
    if constexpr (KnownRegArgsCpuCall<0x8004CA04u>(&func_8004CA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CA04_1EE1 = func_8004CA04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004CA04_1EE1);
        r4 = static_cast<uint32_t>(regargs_result_8004CA04_1EE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004CA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F16C8:
{
    r3 = r31;
    r4 = (r27 & 65535);
    r5 = (r28 & 65535);
    ctx->lr = 0x801F16D8u;
    if constexpr (KnownRegArgsCpuCall<0x8004DAC0u>(&func_8004DAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004DAC0_2244 = func_8004DAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DAC0_2244);
        r4 = static_cast<uint32_t>(regargs_result_8004DAC0_2244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004DAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = r31;
    r4 = (r27 & 65535);
    r5 = (r28 & 65535);
    ctx->lr = 0x801F16E8u;
    if constexpr (KnownRegArgsCpuCall<0x8004DD54u>(&func_8004DD54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004DD54_261D = func_8004DD54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DD54_261D);
        r4 = static_cast<uint32_t>(regargs_result_8004DD54_261D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004DD54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_801F16EC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801F175C;
    }
}

loc_801F16F0:
{
    r3 = (r27 & 65535);
    r0 = (r28 & 65535);
    r5 = MemoryInline::FlatRead16((r29 + 4));
}

loc_801F1700:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_801F170C;
    }
}

loc_801F1704:
{
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r28));
    goto loc_801F1718;
}

loc_801F170C:
{
}

loc_801F1710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F1718;
    }
}

loc_801F1714:
{
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r27));
}

loc_801F1718:
{
    r5 = MemoryInline::FlatRead16((r29 + 6));
}

loc_801F1720:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_801F172C;
    }
}

loc_801F1724:
{
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r28));
    goto loc_801F1738;
}

loc_801F172C:
{
}

loc_801F1730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F1738;
    }
}

loc_801F1734:
{
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r27));
}

loc_801F1738:
{
    r4 = (r29 + 4);
    r5 = MemoryInline::FlatRead16((r4 + 4));
}

loc_801F1744:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_801F1750;
    }
}

loc_801F1748:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r28));
    goto loc_801F175C;
}

loc_801F1750:
{
}

loc_801F1754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F175C;
    }
}

loc_801F1758:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r27));
}

loc_801F175C:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F15E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F15E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F15E8 func_801F15E8 preserves=true fpr_mask=0x00000000
