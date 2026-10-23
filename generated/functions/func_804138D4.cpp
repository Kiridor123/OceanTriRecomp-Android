#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804138D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];

    goto loc_804138D4;

loc_804138D4:
{
    r12 = r3;
    r11 = r4;
    r10 = r5;
    r9 = r6;
    r0 = r7;
    r3 = r8;
    r4 = r12;
    r5 = r11;
    r6 = r10;
    r7 = r9;
    r8 = r0;
}

loc_80417FC4:
{
    r0 = (r4 + 0);
}

loc_80417FCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32768))) {
        goto loc_80417FFC;
    }
}

loc_80417FD0:
{
}

loc_80417FD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32775))) {
        goto loc_80417FFC;
    }
}

loc_80417FD8:
{
}

loc_80417FDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32770))) {
        goto loc_8041800C;
    }
}

loc_80417FE0:
{
}

loc_80417FE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32772))) {
        goto loc_8041801C;
    }
}

loc_80417FE8:
{
}

loc_80417FEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32773))) {
        goto loc_80418034;
    }
}

loc_80417FF0:
{
}

loc_80417FF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32774))) {
        goto loc_80418044;
    }
}

loc_80417FF8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80417FFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8041800C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8041801C:
{
}

loc_80418020:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80418024:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80418034:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80418044:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804138D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804138D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804138D4 func_804138D4 preserves=true fpr_mask=0x00000000
