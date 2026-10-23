#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8034C128_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8034C128;

loc_8034C128:
{
    r0 = (r3 & 255);
}

loc_8034C130:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_8034C214;
    }
}

loc_8034C134:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -26144);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8034C14Cu:
        goto loc_8034C14C;
        break;
    case 0x8034C160u:
        goto loc_8034C160;
        break;
    case 0x8034C174u:
        goto loc_8034C174;
        break;
    case 0x8034C188u:
        goto loc_8034C188;
        break;
    case 0x8034C19Cu:
        goto loc_8034C19C;
        break;
    case 0x8034C1B0u:
        goto loc_8034C1B0;
        break;
    case 0x8034C1C4u:
        goto loc_8034C1C4;
        break;
    case 0x8034C1D8u:
        goto loc_8034C1D8;
        break;
    case 0x8034C1ECu:
        goto loc_8034C1EC;
        break;
    case 0x8034C200u:
        goto loc_8034C200;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_8034C14C:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C160:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 18;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C174:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C188:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C19C:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 22;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C1B0:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 19;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C1C4:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C1D8:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 21;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C1EC:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 25;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C200:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

loc_8034C214:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -26184);
    r4 = 2301;
    r5 = 0x805F0000u;
    r5 = (r5 + -26168);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8034C128(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8034C128_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034C128 func_8034C128 preserves=true fpr_mask=0x00000000
