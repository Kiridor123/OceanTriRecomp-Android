#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802716D8(CpuContext* ctx);
extern "C" uint64_t func_802716D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80274B50(CpuContext* ctx);
extern "C" uint64_t func_80274B50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802717D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802717D0;

loc_802717D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = r5;
    r31 = r6;
}

loc_802717F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80271804;
    }
}

loc_802717FC:
{
    r3 = 0;
    goto loc_80271910;
}

loc_80271804:
{
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 + -7);
}

loc_80271810:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027182C;
    }
}

loc_80271814:
{
    r0 = (r4 + -11);
}

loc_8027181C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80271840;
    }
}

loc_80271820:
{
    r0 = (r4 + -14);
}

loc_80271828:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027184C;
    }
}

loc_8027182C:
{
    r3 = r4;
    // inline leaf 0x8027E300 (3 guest instruction(s))
    r0 = (r3 + -7);
    r3 = (r0 & 255);
    // end of inlined leaf 0x8027E300
    r5 = r3;
    r4 = 0;
    goto loc_80271858;
}

loc_80271840:
{
    r5 = 6;
    r4 = 1;
    goto loc_80271858;
}

loc_8027184C:
{
    r4 = (r6 & 255);
    ctx->lr = 0x80271854u;
    if constexpr (KnownRegArgsCpuCall<0x802716D8u>(&func_802716D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802716D8_94F = func_802716D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802716D8_94F);
        r4 = static_cast<uint32_t>(regargs_result_802716D8_94F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802716D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_80271910;
}

loc_80271858:
{
    r3 = (r31 & 255);
    r0 = (r3 + -15);
}

loc_80271864:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80271874;
    }
}

loc_80271868:
{
}

loc_8027186C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(74))) {
        goto loc_80271894;
    }
}

loc_80271870:
{
    goto loc_802718C4;
}

loc_80271874:
{
    r3 = r29;
    r4 = r30;
    r5 = (r5 & 255);
    ctx->lr = 0x80271884u;
    if constexpr (KnownRegArgsCpuCall<0x80274B50u>(&func_80274B50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274B50_E03 = func_80274B50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80274B50_E03);
        r4 = static_cast<uint32_t>(regargs_result_80274B50_E03 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80274B50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_80271910;
}

loc_80271894:
{
    r3 = (r5 & 255);
    r0 = (r3 + -7);
}

loc_802718A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802718B4;
    }
}

loc_802718A4:
{
}

loc_802718A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802718B4;
    }
}

loc_802718AC:
{
}

loc_802718B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_802718BC;
    }
}

loc_802718B4:
{
    r3 = 1;
    goto loc_80271910;
}

loc_802718BC:
{
    r3 = 0;
    goto loc_80271910;
}

loc_802718C4:
{
}

loc_802718C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802718D8;
    }
}

loc_802718CC:
{
    r3 = 0x805C0000u;
    r4 = (r3 + 2392);
    goto loc_802718E0;
}

loc_802718D8:
{
    r3 = 0x805C0000u;
    r4 = (r3 + 2424);
}

loc_802718E0:
{
    r3 = (r31 & 255);
    goto loc_80271900;
}

loc_802718E8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
}

loc_802718F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80271900;
    }
}

loc_802718F8:
{
    r3 = 0;
    goto loc_80271910;
}

loc_80271900:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80271908:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802718E8;
    }
}

loc_8027190C:
{
    r3 = 1;
}

loc_80271910:
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

extern "C" void func_802717D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802717D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802717D0 func_802717D0 preserves=true fpr_mask=0x00000000
