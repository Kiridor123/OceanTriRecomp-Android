#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800DDFA8_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DDFA8u);
    goto loc_800DDFA8;

loc_800DDFA8:
{
    r8 = (r3 + 60);
    r7 = 0;
    r0 = 16;
    ctr = r0;
}

loc_800DDFB8:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_800DDFC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DE00C;
    }
}

loc_800DDFC4:
{
    r0 = MemoryInline::FlatRead8((r8 + 3));
}

loc_800DDFCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DE00C;
    }
}

loc_800DDFD0:
{
    r0 = MemoryInline::FlatRead32((r8 + 68));
}

loc_800DDFD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_800DE00C;
    }
}

loc_800DDFDC:
{
    r6 = MemoryInline::FlatRead32((r8 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_800DDFE8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_800DE00C;
    }
}

loc_800DDFEC:
{
    r0 = MemoryInline::FlatRead32((r8 + 44));
}

loc_800DDFF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_800DE00C;
    }
}

loc_800DDFF8:
{
    r0 = MemoryInline::FlatRead16((r8 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE000:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-1))) {
        goto loc_800DE00C;
    }
}

loc_800DE004:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r3;
}

loc_800DE00C:
{
    r8 = (r8 + 80);
    r0 = MemoryInline::FlatRead8(r8);
}

loc_800DE018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DE064;
    }
}

loc_800DE01C:
{
    r0 = MemoryInline::FlatRead8((r8 + 3));
}

loc_800DE024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DE064;
    }
}

loc_800DE028:
{
    r0 = MemoryInline::FlatRead32((r8 + 68));
}

loc_800DE030:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_800DE064;
    }
}

loc_800DE034:
{
    r6 = MemoryInline::FlatRead32((r8 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_800DE040:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_800DE064;
    }
}

loc_800DE044:
{
    r0 = MemoryInline::FlatRead32((r8 + 44));
}

loc_800DE04C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_800DE064;
    }
}

loc_800DE050:
{
    r0 = MemoryInline::FlatRead16((r8 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE058:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-1))) {
        goto loc_800DE064;
    }
}

loc_800DE05C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r3;
}

loc_800DE064:
{
    r7 = (r7 + 1);
    r8 = (r8 + 80);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DDFB8;
    }
}

loc_800DE070:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_800DDFA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800DDFA8_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DDFA8 func_800DDFA8 preserves=true fpr_mask=0x00000000
