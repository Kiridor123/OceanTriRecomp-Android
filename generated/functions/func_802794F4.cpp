#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80279478(CpuContext* ctx);
extern "C" uint64_t func_80279478_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802794F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802794F4;

loc_802794F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80279520:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027952C;
    }
}

loc_80279524:
{
    r3 = 2;
    goto loc_802796B4;
}

loc_8027952C:
{
    r4 = (r29 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + -776);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = r28;
    ctx->lr = 0x80279548u;
    if constexpr (KnownRegArgsCpuCall<0x80279478u>(&func_80279478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80279478_92A = func_80279478_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80279478_92A);
        r4 = static_cast<uint32_t>(regargs_result_80279478_92A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80279478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8027954C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80279560;
    }
}

loc_80279550:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r3 + 3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_802796B4;
}

loc_80279560:
{
    r30 = 0;
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x80279570u;
    if constexpr (KnownRegArgsCpuCall<0x80279478u>(&func_80279478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80279478_DBE = func_80279478_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80279478_DBE);
        r4 = static_cast<uint32_t>(regargs_result_80279478_DBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80279478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80279574:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80279648;
    }
}

loc_80279578:
{
    r3 = (r28 + 464);
    ctx->lr = 0x80279580u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_1189 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_1189);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_1189 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = MemoryInline::FlatRead8((r3 + 7));
    r0 = MemoryInline::FlatRead8((r28 + 500));
}

loc_8027958C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_802795A0;
    }
}

loc_80279590:
{
    r3 = (r28 + 500);
    ctx->lr = 0x80279598u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_155E = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_155E);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_155E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r30 = (r30 + r0);
}

loc_802795A0:
{
    r3 = r28;
    r4 = 45;
    ctx->lr = 0x802795ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802795B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802795BC;
    }
}

loc_802795B4:
{
    r30 = (r30 + 2);
    goto loc_802795F4;
}

loc_802795BC:
{
    r3 = r28;
    r4 = 46;
    ctx->lr = 0x802795C8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802795CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802795D8;
    }
}

loc_802795D0:
{
    r30 = (r30 + 3);
    goto loc_802795F4;
}

loc_802795D8:
{
    r3 = r28;
    r4 = 47;
    ctx->lr = 0x802795E4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802795E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802795F4;
    }
}

loc_802795EC:
{
    r0 = (r30 + 4);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802795F4:
{
    r3 = r28;
    r4 = 48;
    ctx->lr = 0x80279600u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279604:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279610;
    }
}

loc_80279608:
{
    r30 = (r30 + -1);
    goto loc_80279648;
}

loc_80279610:
{
    r3 = r28;
    r4 = 49;
    ctx->lr = 0x8027961Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279620:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027962C;
    }
}

loc_80279624:
{
    r30 = (r30 + -2);
    goto loc_80279648;
}

loc_8027962C:
{
    r3 = r28;
    r4 = 50;
    ctx->lr = 0x80279638u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027963C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279648;
    }
}

loc_80279640:
{
    r0 = (r30 + -3);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80279648:
{
    r31 = (r31 - r30);
    r3 = 2;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_80279658:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80279660;
    }
}

loc_8027965C:
{
    r31 = 0;
}

loc_80279660:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_80279668:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(8))) {
        goto loc_80279674;
    }
}

loc_8027966C:
{
    r3 = 0;
    goto loc_80279680;
}

loc_80279674:
{
}

loc_80279678:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80279680;
    }
}

loc_8027967C:
{
    r3 = 1;
}

loc_80279680:
{
    r4 = (r29 & 255);
    r0 = (r4 + -39);
}

loc_8027968C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_802796B4;
    }
}

loc_80279690:
{
}

loc_80279694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802796A0;
    }
}

loc_80279698:
{
    r3 = 3;
    goto loc_802796B4;
}

loc_802796A0:
{
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = ~(r4 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 + 9);
}

loc_802796B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802794F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802794F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802794F4 func_802794F4 preserves=true fpr_mask=0x00000000
