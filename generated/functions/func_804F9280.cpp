#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804F9280_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x804F9280u);
    goto loc_804F9280;

loc_804F9280:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804F9298:
{
    r30 = r3;
    r31 = r4;
    r26 = r5;
    r27 = r7;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804F92C0;
    }
}

loc_804F92AC:
{
    r29 = MemoryInline::FlatRead8(r3);
    r28 = MemoryInline::FlatRead8(r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_804F92C8;
}

loc_804F92C0:
{
    r29 = MemoryInline::FlatRead16(r3);
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r28 = MemoryInline::FlatRead16(r4);
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
}

loc_804F92C8:
{
    r3 = (0 - r6);
}

loc_804F92D0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r29))) {
        goto loc_804F92E4;
    }
}

loc_804F92D4:
{
}

loc_804F92D8:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r6))) {
        goto loc_804F92E4;
    }
}

loc_804F92DC:
{
    r29 = 0;
    goto loc_804F92F8;
}

loc_804F92E4:
{
}

loc_804F92E8:
{
    r0 = (r29 + r6);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_804F92F4;
    }
}

loc_804F92F0:
{
    r0 = (r29 - r6);
}

loc_804F92F4:
{
    r29 = r0;
}

loc_804F92F8:
{
}

loc_804F92FC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r28))) {
        goto loc_804F9310;
    }
}

loc_804F9300:
{
}

loc_804F9304:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r6))) {
        goto loc_804F9310;
    }
}

loc_804F9308:
{
    r28 = 0;
    goto loc_804F9324;
}

loc_804F9310:
{
}

loc_804F9314:
{
    r0 = (r28 + r6);
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_804F9320;
    }
}

loc_804F931C:
{
    r0 = (r28 - r6);
}

loc_804F9320:
{
    r28 = r0;
}

loc_804F9324:
{
    r4 = (r29 * r29);
    r3 = (r28 * r28);
    r0 = (r5 * r5);
    r3 = (r4 + r3);
}

loc_804F9338:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804F937C;
    }
}

loc_804F933C:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1600));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80468848_104B = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_104B);
        r4 = static_cast<uint32_t>(regargs_result_80468848_104B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = (r29 * r26);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = (r28 * r26);
    r4 = fctiwzword0;
    r29 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r28 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_804F937C:
{
}

loc_804F9380:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804F9390;
    }
}

loc_804F9384:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r28));
    goto loc_804F9398;
}

loc_804F9390:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r28));
}

loc_804F9398:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F9280(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F9280_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F9280 func_804F9280 preserves=true fpr_mask=0x00000000
