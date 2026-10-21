#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80359F38_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80359F38u);
    goto loc_80359F38;

loc_80359F38:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80359F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80359F4C;
    }
}

loc_80359F44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80359F4C:
{
    r8 = r4;
    r10 = MemoryInline::FlatRead16((r3 + 2));
    r6 = 99;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    ctr = r0;
}

loc_80359F64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80359FBC;
    }
}

loc_80359F68:
{
    r7 = MemoryInline::FlatRead16(r8);
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80359F74:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80359FB4;
    }
}

loc_80359F78:
{
    r7 = MemoryInline::FlatRead16((r8 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_80359F80:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(99))) {
        goto loc_80359FB4;
    }
}

loc_80359F84:
{
    r9 = (99 - r7);
    r0 = (r10 & 65535);
}

loc_80359F90:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_80359FA8;
    }
}

loc_80359F94:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r0 = (r7 + r0);
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80359FA8:
{
    r0 = (r9 & 65535);
    r10 = (r10 - r0);
    MemoryInline::FlatWrite16((r8 + 2), static_cast<uint16_t>(r6));
}

loc_80359FB4:
{
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80359F68;
    }
}

loc_80359FBC:
{
    r6 = 99;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    ctr = r0;
}

loc_80359FCC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8035A010;
    }
}

loc_80359FD0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80359FD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8035A008;
    }
}

loc_80359FDC:
{
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r10 & 65535);
}

loc_80359FEC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(99))) {
        goto loc_8035A000;
    }
}

loc_80359FF0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8035A000:
{
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r6));
    r10 = (r10 + -99);
}

loc_8035A008:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80359FD0;
    }
}

loc_8035A010:
{
    r3 = (r10 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80359F38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80359F38_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80359F38 func_80359F38 preserves=true fpr_mask=0x00000000
