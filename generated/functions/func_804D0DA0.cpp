#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D0600(CpuContext* ctx);
extern "C" uint64_t func_804D0600_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804D0DA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804D0DA0;

loc_804D0DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804D0DAC:
{
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r6;
    r30 = r4;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D0DD4;
    }
}

loc_804D0DC8:
{
}

loc_804D0DCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804D0DEC;
    }
}

loc_804D0DD0:
{
    goto loc_804D0E6C;
}

loc_804D0DD4:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead32((r13 + -15052));
}

loc_804D0DE0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D0E6C;
    }
}

loc_804D0DE4:
{
    r30 = (r4 + 1);
    goto loc_804D0E6C;
}

loc_804D0DEC:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead32((r13 + -15056));
}

loc_804D0DF8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D0E6C;
    }
}

loc_804D0DFC:
{
}

loc_804D0E00:
{
    r30 = (r4 + 1);
    r0 = 0;
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(129))) {
        goto loc_804D0E14;
    }
}

loc_804D0E0C:
{
}

loc_804D0E10:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(159))) {
        goto loc_804D0E24;
    }
}

loc_804D0E14:
{
}

loc_804D0E18:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(224))) {
        goto loc_804D0E28;
    }
}

loc_804D0E1C:
{
}

loc_804D0E20:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(252))) {
        goto loc_804D0E28;
    }
}

loc_804D0E24:
{
    r0 = 1;
}

loc_804D0E28:
{
}

loc_804D0E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D0E6C;
    }
}

loc_804D0E30:
{
    r4 = MemoryInline::FlatRead8(r30);
    r0 = 0;
}

loc_804D0E3C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_804D0E54;
    }
}

loc_804D0E40:
{
}

loc_804D0E44:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(252))) {
        goto loc_804D0E54;
    }
}

loc_804D0E48:
{
}

loc_804D0E4C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(127))) {
        goto loc_804D0E54;
    }
}

loc_804D0E50:
{
    r0 = 1;
}

loc_804D0E54:
{
}

loc_804D0E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D0E6C;
    }
}

loc_804D0E5C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 16776960);
    r0_mdest_1 = (r0 & -16776961);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r30 = (r30 + 1);
    r7 = (r0 & 65535);
}

loc_804D0E6C:
{
    MemoryInline::FlatWrite32(r5, r6);
    r4 = r7;
    if constexpr (KnownRegArgsCpuCall<0x804D0600u>(&func_804D0600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D0600_FFE = func_804D0600_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804D0600_FFE);
        r4 = static_cast<uint32_t>(regargs_result_804D0600_FFE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804D0600u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r31, r3);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D0DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D0DA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000DB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D0DA0 func_804D0DA0 preserves=true fpr_mask=0x00000000
