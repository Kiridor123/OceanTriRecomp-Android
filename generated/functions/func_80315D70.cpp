#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027FCD4(CpuContext* ctx);
extern "C" uint64_t func_8027FCD4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80315D70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80315D70;

loc_80315D70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r5;
    r30 = r6;
    r29 = MemoryInline::FlatRead32((r4 + 12));
    r28 = MemoryInline::FlatRead32(r4);
    r31 = 0;
    r27 = 0;
    r26 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_74F = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_74F;
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

loc_80315DB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315DC8;
    }
}

loc_80315DB8:
{
    r0 = (r3 + -5);
}

loc_80315DC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80315E0C;
    }
}

loc_80315DC4:
{
    goto loc_80315E2C;
}

loc_80315DC8:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
}

loc_80315DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315DD8;
    }
}

loc_80315DD4:
{
    r27 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80315DD8:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
}

loc_80315DE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315DE8;
    }
}

loc_80315DE4:
{
    r25 = (r25 & 247);
}

loc_80315DE8:
{
    r26 = MemoryInline::FlatRead8((r28 + 1));
    r3 = r28;
    ctx->lr = 0x80315DF4u;
    if constexpr (KnownRegArgsCpuCall<0x8027FCD4u>(&func_8027FCD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027FCD4_DE0 = func_8027FCD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FCD4_DE0);
        r4 = static_cast<uint32_t>(regargs_result_8027FCD4_DE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FCD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80315DFC:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_80315E04;
    }
}

loc_80315E00:
{
    r31 = (r31 | 64);
}

loc_80315E04:
{
    r31 = (r31 | 1);
    goto loc_80315E2C;
}

loc_80315E0C:
{
    r26 = MemoryInline::FlatRead8((r28 + 1));
    r3 = r28;
    ctx->lr = 0x80315E18u;
    if constexpr (KnownRegArgsCpuCall<0x8027FCD4u>(&func_8027FCD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027FCD4_1373 = func_8027FCD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FCD4_1373);
        r4 = static_cast<uint32_t>(regargs_result_8027FCD4_1373 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FCD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80315E20:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_80315E28;
    }
}

loc_80315E24:
{
    r31 = (r31 | 64);
}

loc_80315E28:
{
    r31 = (r31 | 1);
}

loc_80315E2C:
{
    r0 = (r31 & 255);
    r0 = (r0 & 1);
}

loc_80315E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315E7C;
    }
}

loc_80315E3C:
{
    r3 = (r25 & 255);
    r0 = (r3 & 8);
}

loc_80315E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315E70;
    }
}

loc_80315E4C:
{
    r0 = (r3 & 1);
}

loc_80315E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315E70;
    }
}

loc_80315E58:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r26));
}

loc_80315E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80315E70;
    }
}

loc_80315E60:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80315E6C;
    }
}

loc_80315E68:
{
    r0 = 2;
}

loc_80315E6C:
{
    r31 = (r31 | r0);
}

loc_80315E70:
{
    r0 = (r26 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80315E7C:
{
    r3 = r31;
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80315D70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80315D70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80315D70 func_80315D70 preserves=true fpr_mask=0x00000000
