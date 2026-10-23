#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80827C00;

loc_80827C00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80840000u;
    r30 = MemoryInline::FlatRead32((r3 + 12));
    r28 = (r4 + 180);
    r29 = -1;
    r31 = (r31 + 21920);
    r27 = 0;
    goto loc_80827C54;
}

loc_80827C30:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80827C40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80827C4C;
    }
}

loc_80827C44:
{
    r29 = r27;
    goto loc_80827C5C;
}

loc_80827C4C:
{
    r31 = (r31 + 4);
    r27 = (r27 + 1);
}

loc_80827C54:
{
}

loc_80827C58:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r30))) {
        goto loc_80827C30;
    }
}

loc_80827C5C:
{
    r31 = 0x80840000u;
    r27 = 0;
    r31 = (r31 + 24224);
}

loc_80827C68:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80827C78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80827C84;
    }
}

loc_80827C7C:
{
    r29 = (r27 + r30);
    goto loc_80827C94;
}

loc_80827C84:
{
    r27 = (r27 + 1);
    r31 = (r31 + 4);
}

loc_80827C90:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(10))) {
        goto loc_80827C68;
    }
}

loc_80827C94:
{
    r11 = (r1 + 32);
    r3 = r29;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827C00 func_80827C00 preserves=true fpr_mask=0x00000000
