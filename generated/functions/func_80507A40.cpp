#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80507A40_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80507A40;

loc_80507A40:
{
}

loc_80507A44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80507A50;
    }
}

loc_80507A48:
{
    r0 = MemoryInline::FlatRead32((r13 + -13932));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80507A50:
{
}

loc_80507A54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80507AE4;
    }
}

loc_80507A58:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_80507A60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(24))) {
        goto loc_80507ADC;
    }
}

loc_80507A64:
{
    r3 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 1472);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80507ADCu:
        goto loc_80507ADC;
        break;
    case 0x80507AD0u:
        goto loc_80507AD0;
        break;
    case 0x80507A7Cu:
        goto loc_80507A7C;
        break;
    case 0x80507A88u:
        goto loc_80507A88;
        break;
    case 0x80507A94u:
        goto loc_80507A94;
        break;
    case 0x80507AB8u:
        goto loc_80507AB8;
        break;
    case 0x80507AA0u:
        goto loc_80507AA0;
        break;
    case 0x80507AC4u:
        goto loc_80507AC4;
        break;
    case 0x80507AACu:
        goto loc_80507AAC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_80507A7C:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507A88:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507A94:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507AA0:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507AAC:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507AB8:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507AC4:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507AD0:
{
    r0 = 7;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_80507AE4;
}

loc_80507ADC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80507AE4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13936));
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80507A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80507A40_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80507A40 func_80507A40 preserves=true fpr_mask=0x00000000
