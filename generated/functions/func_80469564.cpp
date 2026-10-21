#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468EE8(CpuContext* ctx);
extern "C" uint64_t func_80468EE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80469564_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80469564u);
    goto loc_80469564;

loc_80469564:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16344));
}

loc_8046957C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(68))) {
        goto loc_804695A8;
    }
}

loc_80469580:
{
    r0 = (r3 + 16384);
}

loc_80469588:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(68))) {
        goto loc_804695A8;
    }
}

loc_8046958C:
{
    r3 = 0x80700000u;
    r3 = (r3 + -27328);
    r0 = MemoryInline::FlatRead32((r3 + 568));
    r0 = (r0 & 3);
}

loc_8046959C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804695A8;
    }
}

loc_804695A0:
{
    r3 = 68;
    goto loc_804695B0;
}

loc_804695A8:
{
    r3 = 0x80000000u;
    r3 = (r3 + 68);
}

loc_804695B0:
{
    r31 = 0x80610000u;
    r24 = 0x80700000u;
    r28 = 0x80000000u;
    r29 = MemoryInline::FlatRead32(r3);
    r31 = (r31 + -408);
    r24 = (r24 + -27328);
    r28 = (r28 + 17280);
    r30 = 0;
    r25 = 50331648;
    r27 = 469762048;
    r26 = 268435456;
    r23 = 1;
}

loc_804695E0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r30));
    r0 = (r29 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80469674;
    }
}

loc_804695EC:
{
}

loc_804695F0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(4))) {
        goto loc_80469674;
    }
}

loc_804695F4:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r13 + -16344));
}

loc_80469600:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_80469624;
    }
}

loc_80469604:
{
    r0 = (r3 + 16384);
}

loc_8046960C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80469624;
    }
}

loc_80469610:
{
    r0 = MemoryInline::FlatRead32((r24 + 568));
    r0 = (r0 & 3);
}

loc_80469618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80469624;
    }
}

loc_8046961C:
{
    r22 = r4;
    goto loc_80469658;
}

loc_80469624:
{
}

loc_80469628:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r25))) {
        goto loc_80469638;
    }
}

loc_8046962C:
{
    r0 = (r4 & 1073741823);
    r22 = (r0 | -2147483648);
    goto loc_80469658;
}

loc_80469638:
{
}

loc_8046963C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r26))) {
        goto loc_80469654;
    }
}

loc_80469640:
{
}

loc_80469644:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27))) {
        goto loc_80469654;
    }
}

loc_80469648:
{
    r0 = (r4 & 1073741823);
    r22 = (r0 | -1879048192);
    goto loc_80469658;
}

loc_80469654:
{
    r22 = r4;
}

loc_80469658:
{
    r3 = r22;
    r4 = (r28 + r4);
    r5 = 256;
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80469048_10C9 = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_10C9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r22;
    r4 = 256;
    if constexpr (KnownRegArgsCpuCall<0x80468EE8u>(&func_80468EE8)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80468EE8_1344 = func_80468EE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80468EE8_1344);
        r4 = static_cast<uint32_t>(regargs_result_80468EE8_1344 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80468EE8u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80469674:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
}

loc_80469680:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(14))) {
        goto loc_804695E0;
    }
}

loc_80469684:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80469564(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80469564_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80469564 func_80469564 preserves=true fpr_mask=0x00000000
