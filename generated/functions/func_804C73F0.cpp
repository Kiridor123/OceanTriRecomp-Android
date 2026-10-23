#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804C73F0_ra38_2e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f5)
{
    uint32_t addr_lfsx_804C74C8_loc_0 = 0;
    uint32_t addr_lfsx_804C7500_loc_0 = 0;
    uint32_t addr_lfsx_804C7510_loc_0 = 0;
    uint32_t addr_lfsx_804C7514_loc_0 = 0;
    uint32_t addr_lfsx_804C754C_loc_0 = 0;
    uint32_t addr_lfsx_804C7554_loc_0 = 0;
    uint32_t addr_lfsx_804C7558_loc_0 = 0;
    uint32_t addr_lfsx_804C7560_loc_0 = 0;
    uint32_t addr_lfsx_804C7564_loc_0 = 0;
    uint32_t addr_lfsx_804C756C_loc_0 = 0;
    uint32_t addr_stfsx_804C7540_loc_0 = 0;
    uint32_t addr_stfsx_804C7578_loc_0 = 0;
    uint32_t addr_stfsx_804C7580_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_804C73F0;

loc_804C73F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r6 = 0x80570000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    r31 = r3;
    r6 = (r6 + 16840);
    r5 = MemoryInline::FlatRead32(r6);
    r25 = r4;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2012));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804C743C:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804C74A8;
    }
}

loc_804C7448:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2016));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_10A7 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_10A7);
        r4 = static_cast<uint32_t>(regargs_result_80468848_10A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -2008));
    f5.d = MemoryInline::FlatReadFloat32((r25 + 36));
    f4.d = MemoryInline::FlatReadFloat32((r25 + 24));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f7.d));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f5.d = PpcFmulsInline(f6.d, f7.d);
    f3.d = PpcFmulsInline(f8.d, f4.d);
    f1.d = PpcFmulsInline(f8.d, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f5.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    MemoryInline::FlatWriteFloat32(r31, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_804C75A4;
}

loc_804C74A8:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804C74AC:
{
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804C74B8;
    }
}

loc_804C74B4:
{
    r5 = 1;
}

loc_804C74B8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    addr_lfsx_804C74C8_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C74C8_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804C74D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804C74D8;
    }
}

loc_804C74D4:
{
    r5 = 2;
}

loc_804C74D8:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r26 = (r26_rot_1 & -4);
    r3 = (r1 + 20);
    r3_addr_1 = (r3 + r26);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r25 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2016));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3_addr_2 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r29 = (r4 + r0);
    addr_lfsx_804C7500_loc_0 = (r29 + r28);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7500_loc_0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r30 = (r30_rot_1 & -4);
    r27 = (r4 + r0);
    addr_lfsx_804C7510_loc_0 = (r25 + r26);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7510_loc_0);
    addr_lfsx_804C7514_loc_0 = (r27 + r30);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7514_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_237B = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_237B);
        r4 = static_cast<uint32_t>(regargs_result_80468848_237B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2008));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2012));
    r3 = (r1 + 8);
    f1.d = PpcFmulsInline(f2.d, f5.d);
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_804C7540:
{
    addr_stfsx_804C7540_loc_0 = (r3 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804C7540_loc_0, f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C754C;
    }
}

loc_804C7548:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
}

loc_804C754C:
{
    addr_lfsx_804C754C_loc_0 = (r25 + r28);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C754C_loc_0);
    r3 = (r1 + 8);
    addr_lfsx_804C7554_loc_0 = (r29 + r26);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7554_loc_0);
    addr_lfsx_804C7558_loc_0 = (r25 + r30);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7558_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_lfsx_804C7560_loc_0 = (r27 + r26);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7560_loc_0);
    addr_lfsx_804C7564_loc_0 = (r27 + r28);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C7564_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    addr_lfsx_804C756C_loc_0 = (r29 + r30);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804C756C_loc_0);
    f1.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    addr_stfsx_804C7578_loc_0 = (r3 + r28);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804C7578_loc_0, f1.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    addr_stfsx_804C7580_loc_0 = (r3 + r30);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804C7580_loc_0, f0.d);
    f3.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 12), f3.d);
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_804C75A4:
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
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C73F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C73F0_ra38_2e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000002E fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C73F0 func_804C73F0 preserves=true fpr_mask=0x00000000
