#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801F02FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F02FC;

loc_801F02FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r5;
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F0320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F0338;
    }
}

loc_801F0324:
{
}

loc_801F0328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F04A8;
    }
}

loc_801F032C:
{
}

loc_801F0330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F0570;
    }
}

loc_801F0334:
{
    goto loc_801F057C;
}

loc_801F0338:
{
    r0 = MemoryInline::FlatRead16((r3 + 236));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F0340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F0350;
    }
}

loc_801F0344:
{
}

loc_801F0348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F0444;
    }
}

loc_801F034C:
{
    goto loc_801F057C;
}

loc_801F0350:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 128);
    r0 = (r0 | 256);
    r0 = (r0 | 512);
    r0 = (r0 | 1024);
    r0 = (r0 | 16384);
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801F037C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801F039C;
    }
}

loc_801F0380:
{
    r3 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801F038C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F039C;
    }
}

loc_801F0390:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -29192);
    goto loc_801F03A4;
}

loc_801F039C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -29224);
}

loc_801F03A4:
{
    r0 = MemoryInline::FlatRead16((r30 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_801F03B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F03E4;
    }
}

loc_801F03B8:
{
}

loc_801F03BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801F03F4;
    }
}

loc_801F03C0:
{
}

loc_801F03C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F0404;
    }
}

loc_801F03C8:
{
}

loc_801F03CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F0414;
    }
}

loc_801F03D0:
{
}

loc_801F03D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F0424;
    }
}

loc_801F03D8:
{
}

loc_801F03DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F0434;
    }
}

loc_801F03E0:
{
    goto loc_801F057C;
}

loc_801F03E4:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F03F4:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F0404:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F0414:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F0424:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F0434:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F057C;
}

loc_801F0444:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 2048);
    r0 = (r0 | 4096);
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead16((r3 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F0460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F0478;
    }
}

loc_801F0464:
{
}

loc_801F0468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F0488;
    }
}

loc_801F046C:
{
}

loc_801F0470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F0498;
    }
}

loc_801F0474:
{
    goto loc_801F057C;
}

loc_801F0478:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F057C;
}

loc_801F0488:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F057C;
}

loc_801F0498:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F057C;
}

loc_801F04A8:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 32);
    r0 = (r0 | 2);
    r0 = (r0 | 4);
    r0 = (r0 | 8);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead16((r3 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F04CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F04F4;
    }
}

loc_801F04D0:
{
}

loc_801F04D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F0504;
    }
}

loc_801F04D8:
{
}

loc_801F04DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F0514;
    }
}

loc_801F04E0:
{
}

loc_801F04E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F0524;
    }
}

loc_801F04E8:
{
}

loc_801F04EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F0534;
    }
}

loc_801F04F0:
{
    goto loc_801F0540;
}

loc_801F04F4:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F0540;
}

loc_801F0504:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F0540;
}

loc_801F0514:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F0540;
}

loc_801F0524:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F0540;
}

loc_801F0534:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_801F0540:
{
    r0 = MemoryInline::FlatRead16((r3 + 236));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F0548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F0558;
    }
}

loc_801F054C:
{
}

loc_801F0550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F0564;
    }
}

loc_801F0554:
{
    goto loc_801F057C;
}

loc_801F0558:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_801F057C;
}

loc_801F0564:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_801F057C;
}

loc_801F0570:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F057C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F02FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F02FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F02FC func_801F02FC preserves=true fpr_mask=0x00000000
