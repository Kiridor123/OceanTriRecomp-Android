#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);
extern "C" void func_804796A0(CpuContext* ctx);
extern "C" uint64_t func_804796A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80478CA0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x80478CA0u);
    goto loc_80478CA0;

loc_80478CA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = 0x80710000u;
}

loc_80478CBC:
{
    r27 = (r27 + -3456);
    r30 = r3;
    r31 = (r27 + 84);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(9))) {
        goto loc_80478DF0;
    }
}

loc_80478CCC:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r26 = (r26_rot_1 & 1020);
    r0 = (r31 + 196608);
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r3 + -30180));
}

loc_80478CE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80478CE8;
    }
}

loc_80478CE4:
{
    goto loc_80478DF0;
}

loc_80478CE8:
{
    ctx->lr = 0x80478CECu;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_C59 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_C59);
        r4 = static_cast<uint32_t>(regargs_result_80479610_C59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r31 + 196608);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30312));
}

loc_80478D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80478DD4;
    }
}

loc_80478D04:
{
    r28 = 0;
    MemoryInline::FlatWrite16((r3 + -30316), static_cast<uint16_t>(r28));
    r29 = (r4 + r26);
    MemoryInline::FlatWrite16((r3 + -30314), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + -30312), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + -30310), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite32((r3 + -30324), r28);
    MemoryInline::FlatWrite32((r3 + -30320), r28);
    r3 = MemoryInline::FlatRead32((r29 + -30180));
    ctx->lr = 0x80478D2Cu;
    if constexpr (KnownRegArgsCpuCall<0x804796A0u>(&func_804796A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_804796A0_12C9 = func_804796A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804796A0_12C9);
        r4 = static_cast<uint32_t>(regargs_result_804796A0_12C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804796A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r4 = (r31 + 196608);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r3 = (r4 + r26);
    MemoryInline::FlatWrite32((r29 + -30180), r28);
    r4 = (r4 + r0);
    r7 = r31;
    MemoryInline::FlatWrite32((r3 + -30144), r28);
    r3 = (r7 + 196608);
    r6 = 0;
    MemoryInline::FlatWrite16((r4 + -30108), static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead8((r3 + -30073));
    goto loc_80478D7C;
}

loc_80478D60:
{
    r3 = (r6 & 255);
    r3 = (r3 + 196608);
    r0 = (r3 + -30082);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_2);
}

loc_80478D74:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r0))) {
        goto loc_80478D88;
    }
}

loc_80478D78:
{
    r6 = (r6 + 1);
}

loc_80478D7C:
{
    r0 = (r6 & 255);
}

loc_80478D84:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80478D60;
    }
}

loc_80478D88:
{
    r4 = (r7 + 196608);
    goto loc_80478DAC;
}

loc_80478D90:
{
    r3 = (r6 & 255);
    r6 = (r6 + 1);
    r3 = (r3 + 196608);
    r3 = (r3 + -30082);
    r3 = (r7 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80478DAC:
{
    r3 = MemoryInline::FlatRead8((r4 + -30073));
    r5 = (r6 & 255);
    r0 = (r3 + -1);
}

loc_80478DBC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80478D90;
    }
}

loc_80478DC0:
{
    r4 = (r31 + 196608);
    r3 = MemoryInline::FlatRead8((r4 + -30073));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + -30073), static_cast<uint8_t>(r0));
    goto loc_80478DEC;
}

loc_80478DD4:
{
    r3 = 65536;
    r4 = 0x80610000u;
    r0 = (r3 + -8);
    r3 = (r0 & 65535);
    r4 = (r4 + 14088);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
}

loc_80478DEC:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_20EB = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_20EB);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_20EB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80478DF0:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478CA0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80478CA0 func_80478CA0 preserves=true fpr_mask=0x00000000
