#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804694FC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804694FCu);
    goto loc_804694FC;

loc_804694FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16344));
}

loc_80469504:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_80469528;
    }
}

loc_80469508:
{
    r0 = (r4 + 16384);
}

loc_80469510:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80469528;
    }
}

loc_80469514:
{
    r4 = 0x80700000u;
    r4 = (r4 + -27328);
    r0 = MemoryInline::FlatRead32((r4 + 568));
    r0 = (r0 & 3);
}

loc_80469524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80469528:
{
    r0 = 50331648;
}

loc_80469530:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80469540;
    }
}

loc_80469534:
{
    r0 = (r3 & 1073741823);
    r3 = (r0 | -2147483648);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80469540:
{
    r0 = 268435456;
}

loc_80469548:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_8046954C:
{
    r0 = 469762048;
}

loc_80469554:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80469558:
{
    r0 = (r3 & 1073741823);
    r3 = (r0 | -1879048192);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804694FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804694FC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804694FC func_804694FC preserves=true fpr_mask=0x00000000
