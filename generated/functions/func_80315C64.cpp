#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E574(CpuContext* ctx);
extern "C" uint64_t func_8027E574_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80315C64_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80315C64;

loc_80315C64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r30 = 0;
    r29 = 0;
    r31 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_728 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_728;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_80315CA4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315CB8;
    }
}

loc_80315CA8:
{
    r0 = (r3 + -5);
}

loc_80315CB0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315CFC;
    }
}

loc_80315CB4:
{
    goto loc_80315D0C;
}

loc_80315CB8:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_1 & 1);
}

loc_80315CD0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80315CDC;
    }
}

loc_80315CD4:
{
    ctx->lr = 0x80315CD8u;
    if constexpr (KnownRegArgsCpuCall<0x8027E574u>(&func_8027E574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027E574_CF5 = func_8027E574_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E574_CF5);
        r4 = static_cast<uint32_t>(regargs_result_8027E574_CF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r29 = (r3 & 65535);
}

loc_80315CDC:
{
}

loc_80315CE0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80315CE8;
    }
}

loc_80315CE4:
{
    r27 = (r27 & 247);
}

loc_80315CE8:
{
    r3 = MemoryInline::FlatRead32(r26);
    ctx->lr = 0x80315CF0u;
    if constexpr (KnownRegArgsCpuCall<0x8027E574u>(&func_8027E574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027E574_1238 = func_8027E574_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E574_1238);
        r4 = static_cast<uint32_t>(regargs_result_8027E574_1238 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r31 = (r3 & 65535);
    r30 = (r30 | 1);
    goto loc_80315D0C;
}

loc_80315CFC:
{
    r3 = MemoryInline::FlatRead32(r26);
    ctx->lr = 0x80315D04u;
    if constexpr (KnownRegArgsCpuCall<0x8027E574u>(&func_8027E574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027E574_16E9 = func_8027E574_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E574_16E9);
        r4 = static_cast<uint32_t>(regargs_result_8027E574_16E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027E574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r31 = (r3 & 65535);
    r30 = (r30 | 1);
}

loc_80315D0C:
{
    r0 = (r30 & 255);
    r0 = (r0 & 1);
}

loc_80315D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315D54;
    }
}

loc_80315D1C:
{
    r3 = (r27 & 255);
    r0 = (r3 & 8);
}

loc_80315D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315D50;
    }
}

loc_80315D2C:
{
    r0 = (r3 & 1);
}

loc_80315D34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315D50;
    }
}

loc_80315D38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_80315D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80315D50;
    }
}

loc_80315D40:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80315D4C;
    }
}

loc_80315D48:
{
    r0 = 2;
}

loc_80315D4C:
{
    r30 = (r30 | r0);
}

loc_80315D50:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r31));
}

loc_80315D54:
{
    r3 = r30;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80315C64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80315C64_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80315C64 func_80315C64 preserves=true fpr_mask=0x00000000
