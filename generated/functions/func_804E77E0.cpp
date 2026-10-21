#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E77E0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804E77E0u);
    goto loc_804E77E0;

loc_804E77E0:
{
}

loc_804E77E4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(34))) {
        goto loc_804E78F0;
    }
}

loc_804E77E8:
{
    r4 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -16492);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804E7800u:
        goto loc_804E7800;
        break;
    case 0x804E780Cu:
        goto loc_804E780C;
        break;
    case 0x804E7878u:
        goto loc_804E7878;
        break;
    case 0x804E7888u:
        goto loc_804E7888;
        break;
    case 0x804E781Cu:
        goto loc_804E781C;
        break;
    case 0x804E782Cu:
        goto loc_804E782C;
        break;
    case 0x804E78D8u:
        goto loc_804E78D8;
        break;
    case 0x804E78F0u:
        goto loc_804E78F0;
        break;
    case 0x804E7858u:
        goto loc_804E7858;
        break;
    case 0x804E7868u:
        goto loc_804E7868;
        break;
    case 0x804E7898u:
        goto loc_804E7898;
        break;
    case 0x804E78A8u:
        goto loc_804E78A8;
        break;
    case 0x804E783Cu:
        goto loc_804E783C;
        break;
    case 0x804E7848u:
        goto loc_804E7848;
        break;
    case 0x804E78B8u:
        goto loc_804E78B8;
        break;
    case 0x804E78C8u:
        goto loc_804E78C8;
        break;
    case 0x804E78E8u:
        goto loc_804E78E8;
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

loc_804E7800:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E780C:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 38);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E781C:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 76);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E782C:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 114);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E783C:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7848:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 38);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7858:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 152);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7868:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 190);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7878:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 228);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7888:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 266);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E7898:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 76);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78A8:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 114);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78B8:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 304);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78C8:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 342);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78D8:
{
    r3 = 0x80630000u;
    r3 = (r3 + -17200);
    r3 = (r3 + 380);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78E8:
{
    r3 = MemoryInline::FlatRead32((r13 + -14324));
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E78F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E77E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E77E0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E77E0 func_804E77E0 preserves=true fpr_mask=0x00000000
