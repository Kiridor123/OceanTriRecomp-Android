#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020A258(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8020A258;

loc_8020A258:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = 4004;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8020A280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020A290;
    }
}

loc_8020A284:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A42C;
}

loc_8020A290:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8020A298:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8020A2D4;
    }
}

loc_8020A29C:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_8020A2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8020A2BC;
    }
}

loc_8020A2A8:
{
}

loc_8020A2AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8020A2BC;
    }
}

loc_8020A2B0:
{
}

loc_8020A2B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8020A2C4;
    }
}

loc_8020A2B8:
{
    goto loc_8020A2CC;
}

loc_8020A2BC:
{
    r30 = 1820;
    goto loc_8020A310;
}

loc_8020A2C4:
{
    r30 = 1456;
    goto loc_8020A310;
}

loc_8020A2CC:
{
    r30 = 4004;
    goto loc_8020A310;
}

loc_8020A2D4:
{
}

loc_8020A2D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8020A310;
    }
}

loc_8020A2DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_8020A2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8020A2FC;
    }
}

loc_8020A2E8:
{
}

loc_8020A2EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8020A2FC;
    }
}

loc_8020A2F0:
{
}

loc_8020A2F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8020A304;
    }
}

loc_8020A2F8:
{
    goto loc_8020A30C;
}

loc_8020A2FC:
{
    r30 = 1820;
    goto loc_8020A310;
}

loc_8020A304:
{
    r30 = 1456;
    goto loc_8020A310;
}

loc_8020A30C:
{
    r30 = 4004;
}

loc_8020A310:
{
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r0 = MemoryInline::FlatRead32((r31 + 168));
    r0 = (r0 - r3);
    r29 = (r0 & 65535);
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_8020A330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8020A348;
    }
}

loc_8020A334:
{
}

loc_8020A338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(53))) {
        goto loc_8020A348;
    }
}

loc_8020A33C:
{
}

loc_8020A340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8020A350;
    }
}

loc_8020A344:
{
    goto loc_8020A358;
}

loc_8020A348:
{
    r4 = 128;
    goto loc_8020A35C;
}

loc_8020A350:
{
    r4 = 160;
    goto loc_8020A35C;
}

loc_8020A358:
{
    r4 = 0;
}

loc_8020A35C:
{
    r0 = (r29 + r30);
    r3 = (r0 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
}

loc_8020A36C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8020A3B0;
    }
}

loc_8020A370:
{
    r0 = MemoryInline::FlatRead32((r31 + 168));
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r3 = MemoryInline::FlatRead16((r31 + 176));
    r0 = (r3 + 768);
}

loc_8020A384:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1536))) {
        goto loc_8020A394;
    }
}

loc_8020A388:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A3F4;
}

loc_8020A394:
{
}

loc_8020A398:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(32768))) {
        goto loc_8020A3A8;
    }
}

loc_8020A39C:
{
    r0 = (r3 + -768);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A3F4;
}

loc_8020A3A8:
{
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A3F4;
}

loc_8020A3B0:
{
}

loc_8020A3B4:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(32768))) {
        goto loc_8020A3D8;
    }
}

loc_8020A3B8:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    r0 = (r0 + r30);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r0 = MemoryInline::FlatRead16((r31 + 176));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A3F4;
}

loc_8020A3D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    r0 = (r0 - r30);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r0 = MemoryInline::FlatRead16((r31 + 176));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
}

loc_8020A3F4:
{
    r4 = MemoryInline::FlatRead16((r31 + 176));
    r3 = (r4 + 65536);
    r0 = (r3 + -2560);
    r0 = (r0 & 65535);
}

loc_8020A408:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(60416))) {
        goto loc_8020A42C;
    }
}

loc_8020A40C:
{
}

loc_8020A410:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32768))) {
        goto loc_8020A424;
    }
}

loc_8020A414:
{
    r3 = 65536;
    r0 = (r3 + -2560);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    goto loc_8020A42C;
}

loc_8020A424:
{
    r0 = 2560;
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
}

loc_8020A42C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020A258 func_8020A258 preserves=true fpr_mask=0x00000000
