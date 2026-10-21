#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005CF74(CpuContext* ctx);
extern "C" uint64_t func_8005CF74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80062EB4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80062EB4u);
    goto loc_80062EB4;

loc_80062EB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80062F04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F1C;
    }
}

loc_80062F08:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80062F14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F1C;
    }
}

loc_80062F18:
{
    r10 = 0;
}

loc_80062F1C:
{
}

loc_80062F20:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80062F38;
    }
}

loc_80062F24:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80062F30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F38;
    }
}

loc_80062F34:
{
    r9 = 0;
}

loc_80062F38:
{
}

loc_80062F3C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80062F50;
    }
}

loc_80062F40:
{
    r0 = (r11 + 1073741824);
}

loc_80062F48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F50;
    }
}

loc_80062F4C:
{
    r8 = 0;
}

loc_80062F50:
{
}

loc_80062F54:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80062F6C;
    }
}

loc_80062F58:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80062F64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F6C;
    }
}

loc_80062F68:
{
    r7 = 0;
}

loc_80062F6C:
{
}

loc_80062F70:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80062F88;
    }
}

loc_80062F74:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80062F80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062F88;
    }
}

loc_80062F84:
{
    r6 = 0;
}

loc_80062F88:
{
}

loc_80062F8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80062FA4;
    }
}

loc_80062F90:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80062F9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80062FA4;
    }
}

loc_80062FA0:
{
    r5 = 0;
}

loc_80062FA4:
{
}

loc_80062FA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80062FCC;
    }
}

loc_80062FAC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1229;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80062FCCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80062FCC:
{
    r3 = r29;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005D360
}

loc_80062FD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80062FF8;
    }
}

loc_80062FDC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1230;
    r5 = 0x80590000u;
    r5 = (r5 + -17440);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80062FF8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80062FF8:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_80063008:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_80063028;
    }
}

loc_8006300C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1231;
    r5 = 0x80590000u;
    r5 = (r5 + -15656);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063028u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80063028:
{
}

loc_8006302C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8006303C;
    }
}

loc_80063030:
{
}

loc_80063034:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80063154;
    }
}

loc_80063038:
{
    goto loc_80063194;
}

loc_8006303C:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = r30;
    ctx->lr = 0x80063050u;
    if constexpr (KnownRegArgsCpuCall<0x8005CF74u>(&func_8005CF74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8005CF74_1DE0 = func_8005CF74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005CF74_1DE0);
        r4 = static_cast<uint32_t>(regargs_result_8005CF74_1DE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005CF74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_8006305C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8006307C;
    }
}

loc_80063060:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1241;
    r5 = 0x80590000u;
    r5 = (r5 + -15584);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006307Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8006307C:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r30), static_cast<uint32_t>(r31));
}

loc_80063080:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_800631B4;
    }
}

loc_80063084:
{
    r5 = (r31 + -8);
    r0 = (r31 - r30);
}

loc_80063090:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80063124;
    }
}

loc_80063094:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80063124;
    }
}

loc_80063098:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r3 = 65536;
    r4 = (r3 + -32768);
    r0 = (r5 + 7);
    r0 = (r0 - r30);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_800630B8:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r5))) {
        goto loc_80063124;
    }
}

loc_800630BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 20), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 20));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r4));
    r6 = (r6 + 16);
    r30 = (r30 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800630BC;
    }
}

loc_80063124:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = 65536;
    r4 = (r3 + -32768);
    r0 = (r31 - r30);
    ctr = r0;
}

loc_8006313C:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r31))) {
        goto loc_800631B4;
    }
}

loc_80063140:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r3_addr_6 = (r3 + r5);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r4));
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80063140;
    }
}

loc_80063150:
{
    goto loc_800631B4;
}

loc_80063154:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_8006315C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_8006317C;
    }
}

loc_80063160:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1256;
    r5 = 0x80590000u;
    r5 = (r5 + -15424);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006317Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8006317C:
{
    r3 = 65536;
    r4 = (r3 + -32768);
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_1, static_cast<uint16_t>(r4));
    goto loc_800631B4;
}

loc_80063194:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1267;
    r5 = 0x80590000u;
    r5 = (r5 + -15468);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800631B4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800631B4:
{
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80062EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80062EB4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80062EB4 func_80062EB4 preserves=true fpr_mask=0x00000000
