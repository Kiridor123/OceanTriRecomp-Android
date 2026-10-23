#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051178(CpuContext* ctx);
extern "C" uint64_t func_80051178_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8010D030_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lfsx_8010D0A0_loc_0 = 0;
    uint32_t addr_lfsx_8010D0E0_loc_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r31_rot_0 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_8010D030;

loc_8010D030:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    r4 = (r30 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29328));
    f2.d = f1.d;
    r4 = 0x805A0000u;
    r4 = (r4 + -808);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 68));
    addr_lfsx_8010D0A0_loc_0 = (r4 + r31);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8010D0A0_loc_0);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r26 + 40));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = (r0 * 13107);
    r4 = (r4 + r0);
    ctx->lr = 0x8010D0D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 32);
    r4 = 0x805A0000u;
    r4 = (r4 + -716);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29300));
    addr_lfsx_8010D0E0_loc_0 = (r4 + r31);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8010D0E0_loc_0);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29304));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword0;
    r4 = (r0 & 65535);
    ctx->lr = 0x8010D10Cu;
    if constexpr (KnownRegArgsCpuCall<0x80051178u>(&func_80051178)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80051178_1336 = func_80051178_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051178_1336);
        r4 = static_cast<uint32_t>(regargs_result_80051178_1336 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80051178u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29292));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r3 = (r1 + 32);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 44), f0.d);
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010D030(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010D030_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF0 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010D030 func_8010D030 preserves=true fpr_mask=0x00000000
