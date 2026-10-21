#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8025E2FCu);
    goto loc_8025E2FC;

loc_8025E2FC:
{
    r7 = MemoryInline::FlatRead32((r3 + 792));
}

loc_8025E304:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8025E318;
    }
}

loc_8025E308:
{
    r0 = MemoryInline::FlatRead8((r3 + 787));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025E314:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025E320;
    }
}

loc_8025E318:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8025E320:
{
    r0 = (r5 & 65535);
    r5 = (r4 & 65535);
    goto loc_8025E37C;
}

loc_8025E32C:
{
    r4 = MemoryInline::FlatRead16((r7 + 6));
    r4 = (r4 & 32768);
}

loc_8025E338:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8025E35C;
    }
}

loc_8025E33C:
{
    r4 = MemoryInline::FlatRead16((r7 + 14));
    r4 = (r4 & 16384);
}

loc_8025E348:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8025E35C;
    }
}

loc_8025E34C:
{
    r4 = MemoryInline::FlatRead8((r3 + 788));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8025E358:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_8025E378;
    }
}

loc_8025E35C:
{
}

loc_8025E360:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r5))) {
        goto loc_8025E378;
    }
}

loc_8025E364:
{
    r4 = MemoryInline::FlatRead16((r7 + 2));
}

loc_8025E36C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8025E378;
    }
}

loc_8025E370:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8025E378:
{
    r7 = (r7 + 22);
}

loc_8025E37C:
{
    r6 = MemoryInline::FlatRead8(r7);
}

loc_8025E384:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(255))) {
        goto loc_8025E32C;
    }
}

loc_8025E388:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025E2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025E2FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025E2FC func_8025E2FC preserves=true fpr_mask=0x00000000
