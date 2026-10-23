#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803B7070_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_803B7070;

loc_803B7070:
{
    r7 = MemoryInline::FlatRead32((r13 + -16856));
}

loc_803B7078:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_803B7084;
    }
}

loc_803B707C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7084:
{
}

loc_803B7088:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B7094;
    }
}

loc_803B708C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7094:
{
    r0 = MemoryInline::FlatRead16((r3 + 408));
    r0 = (r0 * 6);
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_803B70A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B70D0;
    }
}

loc_803B70AC:
{
}

loc_803B70B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803B70D0;
    }
}

loc_803B70B4:
{
}

loc_803B70B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B70D8;
    }
}

loc_803B70BC:
{
}

loc_803B70C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B7104;
    }
}

loc_803B70C4:
{
}

loc_803B70C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803B7120;
    }
}

loc_803B70CC:
{
    goto loc_803B71B0;
}

loc_803B70D0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B70D8:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r3 = (r4 & 65535);
}

loc_803B70E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_803B70FC;
    }
}

loc_803B70E8:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
}

loc_803B70F0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_803B70FC;
    }
}

loc_803B70F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B70FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7104:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
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

loc_803B7120:
{
}

loc_803B7124:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803B71A8;
    }
}

loc_803B7128:
{
    r0 = MemoryInline::FlatRead16((r6 + 322));
}

loc_803B7130:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B713C;
    }
}

loc_803B7134:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B713C:
{
    r0 = MemoryInline::FlatRead16((r6 + 334));
}

loc_803B7144:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B7150;
    }
}

loc_803B7148:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7150:
{
    r0 = MemoryInline::FlatRead16((r6 + 346));
}

loc_803B7158:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B7164;
    }
}

loc_803B715C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7164:
{
    r0 = MemoryInline::FlatRead16((r6 + 358));
}

loc_803B716C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B7178;
    }
}

loc_803B7170:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B7178:
{
    r0 = MemoryInline::FlatRead16((r6 + 370));
}

loc_803B7180:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B718C;
    }
}

loc_803B7184:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B718C:
{
    r0 = MemoryInline::FlatRead16((r6 + 382));
}

loc_803B7194:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_803B71A0;
    }
}

loc_803B7198:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B71A0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B71A8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803B71B0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_803B7070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B7070_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x00000089 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B7070 func_803B7070 preserves=true fpr_mask=0x00000000
