#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8049FF2C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8049FF2Cu);
    goto loc_8049FF2C;

loc_8049FF2C:
{
}

loc_8049FF30:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8049FF3C;
    }
}

loc_8049FF34:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_8049FFE8;
}

loc_8049FF3C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_8049FFE8;
}

loc_8049FF44:
{
    r6 = MemoryInline::FlatRead32(r3);
    goto loc_8049FFDC;
}

loc_8049FF4C:
{
    r5 = MemoryInline::FlatRead16((r6 + 4));
}

loc_8049FF54:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_8049FFA8;
    }
}

loc_8049FF58:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_8049FF64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8049FFA8;
    }
}

loc_8049FF68:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
    goto loc_8049FF9C;
}

loc_8049FF70:
{
    r5 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (static_cast<int32_t>(r5) >> 12);
}

loc_8049FF7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8049FF98;
    }
}

loc_8049FF80:
{
    r0 = (r5 & 4095);
}

loc_8049FF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8049FF98;
    }
}

loc_8049FF8C:
{
    r0 = MemoryInline::FlatRead16((r6 + 8));
}

loc_8049FF94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_8049FF98:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_8049FF9C:
{
}

loc_8049FFA0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049FF70;
    }
}

loc_8049FFA4:
{
    goto loc_8049FFE4;
}

loc_8049FFA8:
{
}

loc_8049FFAC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_8049FFD8;
    }
}

loc_8049FFB0:
{
    r5 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (static_cast<int32_t>(r5) >> 12);
}

loc_8049FFBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8049FFD8;
    }
}

loc_8049FFC0:
{
    r0 = (r5 & 4095);
}

loc_8049FFC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8049FFD8;
    }
}

loc_8049FFCC:
{
    r0 = MemoryInline::FlatRead16((r6 + 8));
}

loc_8049FFD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_8049FFD8:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_8049FFDC:
{
}

loc_8049FFE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8049FF4C;
    }
}

loc_8049FFE4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8049FFE8:
{
}

loc_8049FFEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049FF44;
    }
}

loc_8049FFF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8049FF2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8049FF2C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049FF2C func_8049FF2C preserves=true fpr_mask=0x00000000
