#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056C668_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8056C668u);
    goto loc_8056C668;

loc_8056C668:
{
    r5 = MemoryInline::FlatRead8(r4);
}

loc_8056C670:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_8056C674:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r6 & 2);
}

loc_8056C67C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056C680:
{
    r0 = (r5 * 108);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r6 & 1);
    r3 = (r3 + r0);
    r3 = (r3 + 20);
}

loc_8056CF6C:
{
}

loc_8056CF70:
{
    r9 = -1;
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8056D078;
    }
}

loc_8056CF78:
{
    r0 = 2;
    r8 = 0;
    r6 = 1;
    ctr = r0;
}

loc_8056CF88:
{
    r7 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056CFB0;
    }
}

loc_8056CF98:
{
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056CFA4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056CFB8;
    }
}

loc_8056CFA8:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056CFB0:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056CFB8:
{
    r8 = (r8 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056CFE0;
    }
}

loc_8056CFC8:
{
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056CFD4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056CFE8;
    }
}

loc_8056CFD8:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056CFE0:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056CFE8:
{
    r8 = (r8 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D010;
    }
}

loc_8056CFF8:
{
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D004:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D018;
    }
}

loc_8056D008:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056D010:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056D018:
{
    r8 = (r8 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D040;
    }
}

loc_8056D028:
{
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D034:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D048;
    }
}

loc_8056D038:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056D040:
{
    r9 = r8;
    goto loc_8056D050;
}

loc_8056D048:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056CF88;
    }
}

loc_8056D050:
{
}

loc_8056D054:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056D058:
{
    r4 = (r3 + r9);
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 65), static_cast<uint8_t>(r5));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D078:
{
    r0 = 2;
    r7 = 0;
    r6 = 1;
    ctr = r0;
}

loc_8056D088:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D0B0;
    }
}

loc_8056D098:
{
    r4 = (r3 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D0A4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D0B0;
    }
}

loc_8056D0A8:
{
    r9 = r7;
    goto loc_8056D13C;
}

loc_8056D0B0:
{
    r7 = (r7 + 1);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D0DC;
    }
}

loc_8056D0C4:
{
    r4 = (r3 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D0D0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D0DC;
    }
}

loc_8056D0D4:
{
    r9 = r7;
    goto loc_8056D13C;
}

loc_8056D0DC:
{
    r7 = (r7 + 1);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D108;
    }
}

loc_8056D0F0:
{
    r4 = (r3 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D0FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D108;
    }
}

loc_8056D100:
{
    r9 = r7;
    goto loc_8056D13C;
}

loc_8056D108:
{
    r7 = (r7 + 1);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D134;
    }
}

loc_8056D11C:
{
    r4 = (r3 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 65));
}

loc_8056D128:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D134;
    }
}

loc_8056D12C:
{
    r9 = r7;
    goto loc_8056D13C;
}

loc_8056D134:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D088;
    }
}

loc_8056D13C:
{
}

loc_8056D140:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056D144:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056C668(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056C668_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C668 func_8056C668 preserves=true fpr_mask=0x00000000
