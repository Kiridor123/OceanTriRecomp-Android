#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80483388_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_80483388;

loc_80483388:
{
    r3 = 0x80740000u;
    r0 = 4;
    r3 = (r3 + -17608);
    r6 = -1;
    r5 = (r3 + 7984);
    r7 = 0;
    r3 = r5;
    ctr = r0;
}

loc_804833A8:
{
    r4 = MemoryInline::FlatRead8((r5 + 118));
    r0 = (r4 & 128);
}

loc_804833B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804833D0;
    }
}

loc_804833B4:
{
    r0 = (r4 & 16);
}

loc_804833B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804833D0;
    }
}

loc_804833BC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_804833C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_804833D0;
    }
}

loc_804833C8:
{
    r3 = r5;
    r6 = r0;
}

loc_804833D0:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_804833DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804833FC;
    }
}

loc_804833E0:
{
    r0 = (r4 & 16);
}

loc_804833E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804833FC;
    }
}

loc_804833E8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_804833F0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_804833FC;
    }
}

loc_804833F4:
{
    r3 = r5;
    r6 = r0;
}

loc_804833FC:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_80483408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80483428;
    }
}

loc_8048340C:
{
    r0 = (r4 & 16);
}

loc_80483410:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80483428;
    }
}

loc_80483414:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8048341C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80483428;
    }
}

loc_80483420:
{
    r3 = r5;
    r6 = r0;
}

loc_80483428:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_80483434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80483454;
    }
}

loc_80483438:
{
    r0 = (r4 & 16);
}

loc_8048343C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80483454;
    }
}

loc_80483440:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80483448:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80483454;
    }
}

loc_8048344C:
{
    r3 = r5;
    r6 = r0;
}

loc_80483454:
{
    r7 = (r7 + 3);
    r5 = (r5 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804833A8;
    }
}

loc_80483460:
{
    r0 = (r6 + 65536);
}

loc_80483468:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_return;
    }
}

loc_8048346C:
{
    r4 = 0x80740000u;
    r0 = 4;
    r4 = (r4 + -17608);
    r5 = 0;
    r4 = (r4 + 7984);
    ctr = r0;
}

loc_80483484:
{
    r0 = MemoryInline::FlatRead8((r4 + 118));
    r0 = (r0 & 128);
}

loc_8048348C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804834A4;
    }
}

loc_80483490:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80483498:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_804834A4;
    }
}

loc_8048349C:
{
    r3 = r4;
    r6 = r0;
}

loc_804834A4:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_804834B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804834C8;
    }
}

loc_804834B4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_804834BC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_804834C8;
    }
}

loc_804834C0:
{
    r3 = r4;
    r6 = r0;
}

loc_804834C8:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_804834D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804834EC;
    }
}

loc_804834D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_804834E0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_804834EC;
    }
}

loc_804834E4:
{
    r3 = r4;
    r6 = r0;
}

loc_804834EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_804834F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80483510;
    }
}

loc_804834FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80483504:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80483510;
    }
}

loc_80483508:
{
    r3 = r4;
    r6 = r0;
}

loc_80483510:
{
    r5 = (r5 + 3);
    r4 = (r4 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80483484;
    }
}

loc_8048351C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80483388(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80483388_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80483388 func_80483388 preserves=true fpr_mask=0x00000000
