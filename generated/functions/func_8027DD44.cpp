#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027DD44_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8027DD44u);
    goto loc_8027DD44;

loc_8027DD44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027DD68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027DD74;
    }
}

loc_8027DD6C:
{
    r3 = 0;
    goto loc_8027DE10;
}

loc_8027DD74:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8027DD7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027DE0C;
    }
}

loc_8027DD80:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
}

loc_8027DD88:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(111))) {
        goto loc_8027DDB0;
    }
}

loc_8027DD8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_8027DD90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8027DDDC;
    }
}

loc_8027DD94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8027DDA4;
    }
}

loc_8027DD98:
{
}

loc_8027DD9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(34))) {
        goto loc_8027DDD4;
    }
}

loc_8027DDA0:
{
    goto loc_8027DE0C;
}

loc_8027DDA4:
{
}

loc_8027DDA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(38))) {
        goto loc_8027DE0C;
    }
}

loc_8027DDAC:
{
    goto loc_8027DDF4;
}

loc_8027DDB0:
{
}

loc_8027DDB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(119))) {
        goto loc_8027DDCC;
    }
}

loc_8027DDB8:
{
}

loc_8027DDBC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(117))) {
        goto loc_8027DDF4;
    }
}

loc_8027DDC0:
{
}

loc_8027DDC4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(115))) {
        goto loc_8027DDDC;
    }
}

loc_8027DDC8:
{
    goto loc_8027DDD4;
}

loc_8027DDCC:
{
}

loc_8027DDD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(121))) {
        goto loc_8027DE0C;
    }
}

loc_8027DDD4:
{
    r3 = 1;
    goto loc_8027DE10;
}

loc_8027DDDC:
{
    r4 = (r31 & 255);
    r3 = (2 - r4);
    r0 = (r4 + -2);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_8027DE10;
}

loc_8027DDF4:
{
    r4 = (r31 & 255);
    r3 = (1 - r4);
    r0 = (r4 + -1);
    r0 = (r3 | r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_8027DE10;
}

loc_8027DE0C:
{
    r3 = 0;
}

loc_8027DE10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027DD44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027DD44_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027DD44 func_8027DD44 preserves=true fpr_mask=0x00000000
