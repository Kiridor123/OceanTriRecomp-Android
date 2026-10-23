#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F12B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_800F12B4;

loc_800F12B4:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r4 = (r3 & 255);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F12C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F12E0;
    }
}

loc_800F12CC:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F12D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F12E0;
    }
}

loc_800F12D8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F12E0:
{
    r5 = (r5 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F12F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F1308;
    }
}

loc_800F12F4:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F12FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1308;
    }
}

loc_800F1300:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F1308:
{
    r5 = (r5 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F1318:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F1330;
    }
}

loc_800F131C:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F1324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1330;
    }
}

loc_800F1328:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F1330:
{
    r5 = (r5 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F1340:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F1358;
    }
}

loc_800F1344:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F134C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1358;
    }
}

loc_800F1350:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F1358:
{
    r5 = (r5 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F1368:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F1380;
    }
}

loc_800F136C:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F1374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1380;
    }
}

loc_800F1378:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F1380:
{
    r5 = (r5 + 1);
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26876));
}

loc_800F1390:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800F13A8;
    }
}

loc_800F1394:
{
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F139C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F13A8;
    }
}

loc_800F13A0:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F13A8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F12B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F12B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F12B4 func_800F12B4 preserves=true fpr_mask=0x00000000
