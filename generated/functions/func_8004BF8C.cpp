#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004BF8C_ra58_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_8004BF8C;

loc_8004BF8C:
{
    r9 = 0;
    r6 = 0;
    r5 = (r4 + -1);
    goto loc_8004C05C;
}

loc_8004BF9C:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8004BFA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004C054;
    }
}

loc_8004BFA8:
{
    r7 = MemoryInline::FlatRead16((r3 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = (r7 + -1);
    r0 = (r0 & 65535);
}

loc_8004BFB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(97))) {
        goto loc_8004C054;
    }
}

loc_8004BFBC:
{
    r0 = (99 - r7);
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r12 = (r3 + 4);
    r10 = (r9 + 1);
    r0 = (r4 - r10);
    ctr = r0;
}

loc_8004BFD8:
{
    if ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r4))) {
        goto loc_8004C054;
    }
}

loc_8004BFDC:
{
    r7 = MemoryInline::FlatRead16(r12);
}

loc_8004BFE4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8004C048;
    }
}

loc_8004BFE8:
{
    r8 = MemoryInline::FlatRead16((r12 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_8004BFF0:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8004C048;
    }
}

loc_8004BFF4:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8004BFFC:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8004C048;
    }
}

loc_8004C000:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
}

loc_8004C008:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r8))) {
        goto loc_8004C02C;
    }
}

loc_8004C00C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r8);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r12 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r11 = (r11 - r0);
    MemoryInline::FlatWrite16(r12, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r12 + 2), static_cast<uint16_t>(r6));
    goto loc_8004C048;
}

loc_8004C02C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r11);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r12 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r11);
    MemoryInline::FlatWrite16((r12 + 2), static_cast<uint16_t>(r0));
    goto loc_8004C054;
}

loc_8004C048:
{
    r10 = (r10 + 1);
    r12 = (r12 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004BFDC;
    }
}

loc_8004C054:
{
    r9 = (r9 + 1);
    r3 = (r3 + 4);
}

loc_8004C05C:
{
}

loc_8004C060:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r5))) {
        goto loc_8004BF9C;
    }
}

loc_8004C064:
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
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8004BF8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004BF8C_ra58_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FD9 gpr_write=0x00001FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004BF8C func_8004BF8C preserves=true fpr_mask=0x00000000
