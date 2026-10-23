#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126A4C(CpuContext* ctx);
extern "C" uint64_t func_80126A4C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AFF64(CpuContext* ctx);
extern "C" uint32_t func_802AFF64_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80126CB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80126CB0;

loc_80126CB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r25 = r4;
    r28 = r5;
    r29 = r6;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    ctx->lr = 0x80126CE0u;
    if constexpr (KnownRegArgsCpuCall<0x802AFF64u>(&func_802AFF64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_802AFF64_C0A = func_802AFF64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AFF64_C0A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFF64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r26 = r3;
    r31 = 100;
    r30 = 0;
    r3 = r27;
    r4 = (r25 & 255);
    r5 = (r28 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80126A4Cu>(&func_80126A4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80126A4C_F36 = func_80126A4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126A4C_F36);
        r4 = static_cast<uint32_t>(regargs_result_80126A4C_F36 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126A4Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80126D00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80126D0C;
    }
}

loc_80126D04:
{
    r3 = 255;
    goto loc_80126DF8;
}

loc_80126D0C:
{
    r0 = (r25 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r27_addr_1 = (r27 + r6);
    r3 = MemoryInline::FlatRead32(r27_addr_1);
    r0 = (r28 & 255);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80126D24:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80126D30;
    }
}

loc_80126D28:
{
    r3 = r28;
    goto loc_80126DF8;
}

loc_80126D30:
{
    r7 = 0;
    r3 = (r1 + 8);
    r0 = (r26 & 255);
    ctr = r0;
}

loc_80126D44:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_80126DC8;
    }
}

loc_80126D48:
{
    r27_addr_3 = (r27 + r6);
    r5 = MemoryInline::FlatRead32(r27_addr_3);
    r4 = (r7 & 255);
    r5_addr_2 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80126D5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80126DC0;
    }
}

loc_80126D60:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r27 + r0);
}

loc_80126D6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80126DC0;
    }
}

loc_80126D70:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r28 & 255);
    r4_addr_2 = (r4 + r0);
    r5 = MemoryInline::FlatRead8(r4_addr_2);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80126D84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_80126DC0;
    }
}

loc_80126D88:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80126D90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80126DA4;
    }
}

loc_80126D94:
{
    r31 = r5;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    r30 = 1;
    goto loc_80126DC0;
}

loc_80126DA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80126DC0;
    }
}

loc_80126DA8:
{
    r0 = (r30 & 255);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r7));
    r30 = (r30 + 1);
    r0 = (r30 & 255);
}

loc_80126DBC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(15))) {
        goto loc_80126DC8;
    }
}

loc_80126DC0:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80126D48;
    }
}

loc_80126DC8:
{
    r4 = (r30 & 255);
}

loc_80126DD0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80126DF4;
    }
}

loc_80126DD4:
{
    r3 = (r29 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r0 = (r0 & 255);
    r3 = (r1 + 8);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
    goto loc_80126DF8;
}

loc_80126DF4:
{
    r3 = 255;
}

loc_80126DF8:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80126CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80126CB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80126CB0 func_80126CB0 preserves=true fpr_mask=0x00000000
