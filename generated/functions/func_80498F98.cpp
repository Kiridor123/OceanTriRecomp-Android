#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80498F98_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80498F98u);
    goto loc_80498F98;

loc_80498F98:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r6 = 1;
    r7 = 1;
    r8 = 1;
}

loc_80498FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80498FE4;
    }
}

loc_80498FB0:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80498FB8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(48))) {
        goto loc_80498FD8;
    }
}

loc_80498FBC:
{
}

loc_80498FC0:
{
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1691))) {
        goto loc_80498FE4;
    }
}

loc_80498FC8:
{
    r0 = 1691;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    goto loc_80498FE4;
}

loc_80498FD8:
{
    r0 = 48;
    r6 = 0;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
}

loc_80498FE4:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_80498FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049900C;
    }
}

loc_80498FF0:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_80498FF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049900C;
    }
}

loc_80498FFC:
{
    r5 = 65536;
    r8 = 0;
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r4 + 34), static_cast<uint16_t>(r0));
}

loc_8049900C:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_80499014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80499064;
    }
}

loc_80499018:
{
    r0 = MemoryInline::FlatRead8((r4 + 9));
}

loc_80499020:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80499058;
    }
}

loc_80499024:
{
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r3 + 80), r5);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_80499064;
}

loc_80499058:
{
    r0 = 1;
    r7 = 0;
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
}

loc_80499064:
{
}

loc_80499068:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80499088;
    }
}

loc_80499074:
{
}

loc_80499078:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80499088;
    }
}

loc_8049907C:
{
}

loc_80499080:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80499088;
    }
}

loc_80499084:
{
    r0 = 1;
}

loc_80499088:
{
}

loc_8049908C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80499094;
    }
}

loc_80499090:
{
    r3 = 1;
}

loc_80499094:
{
}

loc_80499098:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8049909C:
{
    r0 = 1;
}

loc_804990A4:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804990B4;
    }
}

loc_804990AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
}

loc_804990B4:
{
}

loc_804990B8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804990C4;
    }
}

loc_804990BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r0));
}

loc_804990C4:
{
}

loc_804990C8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804990D4;
    }
}

loc_804990CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
}

loc_804990D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_80498F98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80498F98_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80498F98 func_80498F98 preserves=true fpr_mask=0x00000000
