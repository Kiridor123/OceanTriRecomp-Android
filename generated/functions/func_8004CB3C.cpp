#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004CB3C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004CB3Cu);
    goto loc_8004CB3C;

loc_8004CB3C:
{
    r0 = (r4 & 255);
}

loc_8004CB44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8004CBC8;
    }
}

loc_8004CB48:
{
    r4 = 0x80580000u;
    r4 = (r4 + 7492);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8004CBC8u:
        goto loc_8004CBC8;
        break;
    case 0x8004CB60u:
        goto loc_8004CB60;
        break;
    case 0x8004CB70u:
        goto loc_8004CB70;
        break;
    case 0x8004CB80u:
        goto loc_8004CB80;
        break;
    case 0x8004CB90u:
        goto loc_8004CB90;
        break;
    case 0x8004CBA0u:
        goto loc_8004CBA0;
        break;
    case 0x8004CBB0u:
        goto loc_8004CBB0;
        break;
    case 0x8004CBC0u:
        goto loc_8004CBC0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8004CB60:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 146), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CB70:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 148), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CB80:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 150), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CB90:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 152), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CBA0:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CBB0:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r0));
    goto loc_8004CBD0;
}

loc_8004CBC0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004CBC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004CBD0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004CB3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004CB3C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004CB3C func_8004CB3C preserves=true fpr_mask=0x00000000
