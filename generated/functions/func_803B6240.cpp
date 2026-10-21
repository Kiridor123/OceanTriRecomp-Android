#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B6240_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B6240u);
    goto loc_803B6240;

loc_803B6240:
{
    r7 = 0;
    r4 = 0x806C0000u;
    r5 = (r4 + 31960);
    r6 = 0;
    r0 = (r3 & 65535);
    r4 = MemoryInline::FlatRead32((r5 + 148));
    r4 = (r4 & 10);
}

loc_803B625C:
{
}

loc_803B6260:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(10))) {
        goto loc_803B6270;
    }
}

loc_803B6264:
{
    r4 = MemoryInline::FlatRead16((r5 + 152));
}

loc_803B626C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803B62B4;
    }
}

loc_803B6270:
{
    r6 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 244));
    r4 = (r4 & 10);
}

loc_803B627C:
{
}

loc_803B6280:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(10))) {
        goto loc_803B6290;
    }
}

loc_803B6284:
{
    r4 = MemoryInline::FlatRead16((r5 + 248));
}

loc_803B628C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803B62B4;
    }
}

loc_803B6290:
{
    r6 = 2;
    r4 = MemoryInline::FlatRead32((r5 + 340));
    r4 = (r4 & 10);
}

loc_803B629C:
{
}

loc_803B62A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(10))) {
        goto loc_803B62B0;
    }
}

loc_803B62A4:
{
    r4 = MemoryInline::FlatRead16((r5 + 344));
}

loc_803B62AC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803B62B4;
    }
}

loc_803B62B0:
{
    r6 = 3;
}

loc_803B62B4:
{
}

loc_803B62B8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(3))) {
        goto loc_803B62C4;
    }
}

loc_803B62BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B62C4:
{
    r4 = 0x806C0000u;
    r4 = (r4 + 31960);
    r5 = (r4 + 27242);
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 40));
    r3 = (r3 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = r0;
}

loc_803B62EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B6334;
    }
}

loc_803B62F0:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_803B62F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B6304;
    }
}

loc_803B62FC:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
}

loc_803B6304:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_803B630C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B6318;
    }
}

loc_803B6310:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
}

loc_803B6318:
{
    r0 = MemoryInline::FlatRead16((r5 + 8));
}

loc_803B6320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B632C;
    }
}

loc_803B6324:
{
    r0 = MemoryInline::FlatRead16((r5 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + r0);
}

loc_803B632C:
{
    r5 = (r5 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B62F0;
    }
}

loc_803B6334:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B6240(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B6240_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B6240 func_803B6240 preserves=true fpr_mask=0x00000000
