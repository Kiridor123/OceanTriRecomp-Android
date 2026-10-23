#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004C068(CpuContext* ctx);
extern "C" uint32_t func_8004C068_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004D38C(CpuContext* ctx);
extern "C" uint64_t func_8004D38C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80210924(CpuContext* ctx);
extern "C" uint32_t func_80210924_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80359338(CpuContext* ctx);
extern "C" uint64_t func_80359338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80210924_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80210924_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80210990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80210990;

loc_80210990:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r31 = MemoryInline::FlatRead32((r4 + 172));
    r30 = MemoryInline::FlatRead32((r13 + -17824));
    r29 = 0;
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80210924u) && KnownTranslatedCpuCall<0x80210924u>::kAvailable && !KnownTranslatedCpuCall<0x80210924u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80210924u>()) {
        const auto state_free_result_80210924_8DA = func_80210924_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80210924_8DA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80210924u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        xer = ctx->xer;
    }
}

loc_802109CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802109D4;
    }
}

loc_802109D0:
{
    r29 = (r29 | 128);
}

loc_802109D4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    // inline leaf 0x8021096C (9 guest instruction(s))
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = (r3 + -580);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8021096C
}

loc_802109E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80210A10;
    }
}

loc_802109E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r27 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004D38Cu>(&func_8004D38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D38C_F63 = func_8004D38C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D38C_F63);
        r4 = static_cast<uint32_t>(regargs_result_8004D38C_F63 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D38Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802109F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80210A04;
    }
}

loc_802109F8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_80210A00:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_80210A7C;
    }
}

loc_80210A04:
{
    r0 = (r29 | 128);
    r3 = (r0 & 65535);
    goto loc_80210AA8;
}

loc_80210A10:
{
    r3 = (r27 & 65535);
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r0 & 255);
    ctx->lr = 0x80210A20u;
    if constexpr (KnownRegArgsCpuCall<0x80359338u>(&func_80359338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359338_1493 = func_80359338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80359338_1493);
        r4 = static_cast<uint32_t>(regargs_result_80359338_1493 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80359338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_80210A28:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80210A7C;
    }
}

loc_80210A2C:
{
    r29 = (r29 | 128);
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80210A3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80210A60;
    }
}

loc_80210A40:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80210A48u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AED4_1A18 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_1A18;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 384);
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_1D18 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_1D18;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    goto loc_80210A6C;
}

loc_80210A60:
{
}

loc_80210A64:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80210A6C;
    }
}

loc_80210A68:
{
    r4 = 1;
}

loc_80210A6C:
{
}

loc_80210A70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80210A7C;
    }
}

loc_80210A74:
{
    r0 = (r29 | 2);
    r29 = (r0 & 65535);
}

loc_80210A7C:
{
    r3 = (r27 & 65535);
    r4 = 0;
    ctx->lr = 0x80210A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80210854u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead32((r30 + 24));
}

loc_80210A98:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80210AA4;
    }
}

loc_80210A9C:
{
    r0 = (r29 | 4);
    r29 = (r0 & 65535);
}

loc_80210AA4:
{
    r3 = r29;
}

loc_80210AA8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80210990 func_80210990 preserves=true fpr_mask=0x00000000
