#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803B71B8_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803B71B8;

loc_803B71B8:
{
    r7 = MemoryInline::FlatRead32((r13 + -16856));
}

loc_803B71C0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_803B71CC;
    }
}

loc_803B71C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B71CC:
{
}

loc_803B71D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B71DC;
    }
}

loc_803B71D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B71DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 408));
    r0 = (r0 * 6);
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 1));
}

loc_803B71F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7218;
    }
}

loc_803B71F4:
{
}

loc_803B71F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803B7218;
    }
}

loc_803B71FC:
{
}

loc_803B7200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B7220;
    }
}

loc_803B7204:
{
}

loc_803B7208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B724C;
    }
}

loc_803B720C:
{
}

loc_803B7210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803B7268;
    }
}

loc_803B7214:
{
    goto loc_803B72F8;
}

loc_803B7218:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7220:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r3 = (r4 & 65535);
}

loc_803B722C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_803B7244;
    }
}

loc_803B7230:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
}

loc_803B7238:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_803B7244;
    }
}

loc_803B723C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7244:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B724C:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    r3 = (r0 & 255);
    r0 = (r5 & 255);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7268:
{
}

loc_803B726C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803B72F0;
    }
}

loc_803B7270:
{
    r0 = MemoryInline::FlatRead16((r6 + 322));
}

loc_803B7278:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B7284;
    }
}

loc_803B727C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7284:
{
    r0 = MemoryInline::FlatRead16((r6 + 334));
}

loc_803B728C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B7298;
    }
}

loc_803B7290:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7298:
{
    r0 = MemoryInline::FlatRead16((r6 + 346));
}

loc_803B72A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B72AC;
    }
}

loc_803B72A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72AC:
{
    r0 = MemoryInline::FlatRead16((r6 + 358));
}

loc_803B72B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B72C0;
    }
}

loc_803B72B8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72C0:
{
    r0 = MemoryInline::FlatRead16((r6 + 370));
}

loc_803B72C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B72D4;
    }
}

loc_803B72CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72D4:
{
    r0 = MemoryInline::FlatRead16((r6 + 382));
}

loc_803B72DC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B72E8;
    }
}

loc_803B72E0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72E8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B72F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_803B71B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B71B8_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x00000089 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B71B8 func_803B71B8 preserves=true fpr_mask=0x00000000
