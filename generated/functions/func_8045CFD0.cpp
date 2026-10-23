#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045CFD0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_8045CFD0;

loc_8045CFD0:
{
}

loc_8045CFD4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8045CFF4;
    }
}

loc_8045CFD8:
{
    r5 = 0;
    r4 = 1;
    r0 = 48;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

loc_8045CFF4:
{
    r7 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8045CFFC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_return;
    }
}

loc_8045D000:
{
    r6 = (r3 + r4);
    r5 = MemoryInline::FlatRead8((r6 + 5));
    r8 = (r6 + 5);
    r0 = (r5 + -48);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045D018:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_8045D058;
    }
}

loc_8045D01C:
{
    r5 = (r3 + r7);
    r5 = (r5 + 5);
}

loc_8045D024:
{
    r5 = (r5 + -1);
}

loc_8045D02C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r8))) {
        goto loc_8045D03C;
    }
}

loc_8045D030:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8045D038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045D024;
    }
}

loc_8045D03C:
{
}

loc_8045D040:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r8))) {
        goto loc_8045D050;
    }
}

loc_8045D044:
{
    r0 = MemoryInline::FlatRead8((r8 + -1));
    r5 = (r0 & 1);
    goto loc_8045D06C;
}

loc_8045D050:
{
    r5 = 1;
    goto loc_8045D06C;
}

loc_8045D058:
{
    r0 = (r6 ^ 5);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r5 - r0);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
}

loc_8045D06C:
{
    ctr = r4;
}

loc_8045D074:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045D0C0;
    }
}

loc_8045D078:
{
    r8 = (r8 + -1);
    r0 = MemoryInline::FlatRead8(r8);
    r5 = (r0 + r5);
    r0 = (r5 + -48);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r6 ^ 9);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r5 - r0);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & 1);
}

loc_8045D09C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045D0A8;
    }
}

loc_8045D0A0:
{
}

loc_8045D0A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045D0B0;
    }
}

loc_8045D0A8:
{
    r4 = (r4 + -1);
    goto loc_8045D0BC;
}

loc_8045D0B0:
{
    r0 = (r6 + 48);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    goto loc_8045D0C0;
}

loc_8045D0BC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045D078;
    }
}

loc_8045D0C0:
{
}

loc_8045D0C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045D0E8;
    }
}

loc_8045D0C8:
{
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 1;
    r0 = 49;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    r4 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

loc_8045D0E8:
{
}

loc_8045D0EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045CFD8;
    }
}

loc_8045D0F0:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8045CFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045CFD0_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045CFD0 func_8045CFD0 preserves=true fpr_mask=0x00000000
